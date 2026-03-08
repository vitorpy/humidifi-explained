# HumidiFi — Fill Price: Every Factor

This document traces every variable that influences the price at which a swap executes,
from raw instruction data through CPI to the emitted trade event log.

---

## 0. Executive Summary

HumidiFi's fill price is **not a single on-chain formula**. It is an **off-chain price
oracle commitment** that is validated, bounded, and fee-adjusted on-chain. No AMM curve
(constant product, CLMM, etc.) runs on-chain; the pricing intelligence runs off-chain
and signs a commitment that the Solana program verifies. The chain enforces:

1. The price is within the pre-committed price bands
2. A SHA-256 hash ties the fill price to the oracle's signed state snapshot
3. The fee is deducted at the correct rate for the trade tier
4. All token account authority checks pass before funds move

---

## 1. Where the Fill Price Lives

### In the state account

After every executed trade the fill price is stored at:

```
state[+0x2a8]  ← fill_price ^ 0x6e9de2b30b19f9ea    (fn_e3b0 / fn_10320)
state[+0x300]  ← amount_out (in/out leg, direction-adjusted)
state[+0x2f8]  ← amount_in
state[+0x308]  ← direction byte (0=sell, 1=buy)
```

The `state[+0x2c8..+0x310]` block (80 bytes) is additionally XOR-encrypted with `fn_2600`
constants before being emitted as an on-chain event via `fn_2de38__sol_log_data`.

### In the event log (after fn_1e20 XOR-encryption)

`fn_1e20` XOR-encrypts a 256-byte (0x100) trade record with 32 per-field keys before
emitting it. Fields at positions `[5]`, `[7]`, and `[4]` of the 8-byte-word output
contain the fill price, rate/tick, and fee amount respectively.

---

## 2. Oracle-Committed Price Baseline (Primary Factor)

**What it is:** The off-chain pricing engine (runs on HumidiFi's servers) signs a
512-byte (disc 0x00) or 24-byte (disc 0x04/0x10/0x0f) price commitment. The fill price
is derived from this payload.

**How it's verified:**

### Disc 0x00 (fn_9700): 512-byte commitment
- The last 32 bytes of instruction data **must equal the HumidiFi program ID**:
  ```
  ix_data[len-32..len] == 0xe959f7272b74fd7a 0x7a819dd33c7070c6
                          0x6dd2523bce0a93a0 0xd3bb8723dd54a054
  ```
  This is an anti-replay tag: the oracle embeds the program ID to prevent the signed
  payload from being reused against a different program.

### Disc 0x04/0x10 (fn_db48) and disc 0x0f (fn_f8d0): SHA-256 hash check
Both functions call `fn_e3b0` / `fn_10320` which do:

```c
lVar7 = fn_12770__sol_sha256(account_data_ptr, ix_data+8);  // SHA-256 over oracle snapshot
uVar20 = 1;
if (lVar7 != lStack_1a8) {
    lVar7 = fn_128c0__sol_sha256(account_data_ptr, ix_data+8);  // try secondary hash
    uVar20 = 1;
    if (lVar7 != lStack_1a8) { uVar20 = 0; }  // price is invalid
}
```

`lStack_1a8` is the oracle-signed hash from the instruction data (at `ix_data+0`).
The SHA-256 is computed over the **pool state account data** (`account_data_ptr`) plus
the oracle's instruction payload. This means the fill price in the payload is bound to
the current pool state — a tampered or replayed payload will have a wrong hash.

Both `fn_12770__sol_sha256` and `fn_128c0__sol_sha256` are tried — this accommodates
two valid oracle signing paths (e.g., primary vs. backup oracle).

**`uVar20` (validity flag)** propagates through all subsequent price logic in fn_25ee0.
If it is 0, price computation is still attempted but the event flag marks the trade as
unverified.

---

## 3. Price Bands (Disc 0x02 — fn_7ab8)

**State location:** `state[+0x58..+0xe8]` — 18 × u64, XOR-masked with per-field keys.

**XOR-unmask keys (fn_2328 / fn_25ee0):**

| Index (u64 field) | State offset | XOR mask |
|---|---|---|
| 0 | +0x58 | `0x69d190c683eda5d3` |
| 1 | +0x60 | `0x962f6f387c135a2c` |
| 2 | +0x68 | `0x962c6f3b7c105a2d` |
| 3 | +0x70 | `0x962d6f3a7c115a2e` |
| ... | ... | incrementing key series |
| 17 | +0xe0 | `0x963f6f287c035a3c` |

**What they are:** The 18 values define 6 price tier **boundaries** (3 bid levels, 3 ask
levels). UpdatePriceBands (disc 0x02) enforces **monotonic non-decreasing** ordering:

```
ix[+0x10] ≤ ix[+0x18] ≤ ix[+0x40] ≤ ix[+0x48] ≤ ix[+0x70] ≤ ix[+0x78]
```

These are the 6 key price levels; the other 12 u64s in the 144-byte payload encode the
**size or weight** at each tier. Together they define a 3-band stepped spread curve.

**How they affect fill price:**

In `fn_16a50` (called from `fn_25ee0`), the trade size is looked up against these 3 bands:

```c
longlong fn_16a50(ulonglong trade_size, longlong price_table) {
    // price_table points to state[+0x90] (offset 0x12 * 8)
    if (in_range(trade_size, price_table[+0x30], price_table[+0x38])) return price_table;
    if (in_range(trade_size, price_table[+0x80], price_table[+0x88])) return price_table+0x50;
    if (in_range(trade_size, price_table[+0xd0], price_table[+0xd8])) return price_table+0xa0;
    return 0;  // trade size out of all bands → no valid price
}
```

Each of the 3 returned band pointers (`price_table`, `+0x50`, `+0xa0`) corresponds to one
of the 3 bid or ask tiers. The selected band then feeds into `fn_17a30` for price
interpolation.

---

## 4. Order Book Snapshot (Disc 0x03 — fn_8068)

**State location:** `state[+0xe8..+0x1d8]` — 240 bytes (30 × u64).

These 240 bytes encode the **bid/ask depth snapshot** with size brackets and price ranges.
fn_8068 validates 4 rules before storing:

1. **Bid ceiling overflow guard:**
   ```
   hi = ix[+0x18]
   assert hi ≤ 0xffffffffffff  (no 128-bit overflow)
   bid_combined = (ix[+0x10] >> 48) | (hi << 16)
   assert ix[+0x30] ≥ bid_combined
   ```

2. **Bid-ask spread guard:**
   ```
   assert ix[+0x38] ≥ ix[+0x30]
   ```

3. **Ask range bounds:**
   ```
   ask_price = ix[+0x80]
   assert ask_price ≥ ix[+0x38]   // ask above bid
   assert ix[+0x88] ≥ ask_price   // ask below ceiling
   ```

4. **Fee-tier size bracket:**
   ```
   assert ix[+0xd0] ≥ ix[+0x88]   // large-size price above mid
   assert ix[+0xd0] ≥ lo3           // above minimum size price
   assert ix[+0xd8] ≥ ix[+0xd0]   // within bracket ceiling
   ```

These constraints guarantee a valid non-crossing book with monotonic size-price structure.
The stored snapshot is passed to `fn_25ee0` via the context stack (`param_5 - 0xfb8` etc.)
and used as the **base price grid** for interpolation.

---

## 5. Oracle Price Commit Fields (Disc 0x0a / 0x0d — inline state machine)

**State offsets (XOR-masked price fields):**

| State offset | XOR mask | Role |
|---|---|---|
| +0x2a8 (0x53*8) | `0xb957ed15dc877426` | Oracle price A (bid reference) |
| +0x2b0 (0x54*8) | `0x46a912eb23798bd9` | Oracle price B (ask reference) |
| +0x2b8 (0x55*8) | `0x6e9de2b30b19f9ea` | Max tick / upper bound |
| +0x2c0 (0x56*8) | `0x6e9de2b30b19f9ea` | Min tick / lower bound |
| +0x2c8 (0x57*8) | `0x6e9de2b30b19f1ea` | Price tick 3 |
| +0x2d0 (0x58*8) | `0x6e9de2b30b19f1ea` | Price tick 4 |
| +0x2e8 (0x5d*8) | `0xd3198133b7c1776c` | Mid price |
| +0x2f8 (0x5f*8) | `0x504156a22548f8dd` | Oracle price baseline |

These are committed by the oracle in disc 0x0a/0x0d and are the **current oracle price
snapshot** against which the trade is settled.

In `fn_25ee0`, `puVar28[0x4a]` (= `state[+0x250]`) is the **price floor** used for:
```c
quote_net = param_4 - state[+0x250]   // oracle_price_quote - stored_floor
```
The XOR mask applied to `state[+0x250]` depends on the init stage:
- If `state[+0x710] < 4`: mask = `0x6e9de2b30b19f1ea` (legacy)
- If `state[+0x710] ≥ 4`: mask = `0x6e9de2b30b19f9ea` (current)

---

## 6. Price Tick Array (Disc 0x15 — pool init stage 6→7)

**State location:** `state[+0x390..+0x3d8]` — 10 × u64 (= `puVar28[0x72..0x7b]`).

These 10 monotonically **decreasing** tick values (validated by fn_25ee0 via fn_16518)
bound the valid price range. They cap the computed fill price in fn_25ee0:

```c
// In fn_25ee0 when stage >= 3 (poolv1 active mode):
fn_0488(&iStack_20,
        (state[+0x2c8] ^ 0xd3198133b7c1776c) << 0x30,   // tick_3 shifted to Q48
        (state[+0x2c8] ^ 0xd3198133b7c1776c) >> 0x10,
        0x4189374bc7, 0,                                  // ≈ 1/1000 in Q48
        puVar14, puVar34, uStack_150);
```

This computes `tick_3 × (0x4189374bc7 / 2^48)` — scaling the tick value to the fill
price space. The result bounds the maximum spread adjustment.

For the alternate path (stage < 3):
```c
fn_0488(&iStack_20,
        (state[+0x320] ^ 0x504156a22548f8dd) << 0x30,   // baseline tick
        ...
```

The fill price cannot exceed the tick constraints regardless of trade size.

---

## 7. Fee Tier Lookup (fn_16518 + fn_7858)

### Fee bracket table (state[+0x328..+0x370], disc 0x09)

`fn_16518` validates 10 fee bracket pairs `(bps, size_threshold)` from the 80-byte
reference data payload. Requirements:

- Each `bps` value ≤ 50,000 (= 500%, in basis points)
- `bps` values must be **strictly increasing** across brackets
- `size_threshold` values must be **non-decreasing**
- The final (10th) level must reach exactly `bps = 50000`

The last pair is special: `param_2[0x12] < 0xc351 (50001)` and
`param_2[0x11] ≤ param_2[0x13]` — ensuring the final bracket is closed.

These brackets are stored XOR-masked at `state[+0x328..+0x370]`
(`puVar28[0x5a..0x63]`, XOR key series starting with `0xb82c93d08854ebff`).

### Fee rate computation (fn_e3b0)

```c
uStack_210 = (ulonglong)(fee_rate * amount) / 10000;
```

Where `fee_rate` is looked up from the bracket table based on trade size:

```
if size in bracket[0]: fee_rate = state[+0x328+0] bps
if size in bracket[1]: fee_rate = state[+0x328+8] bps
...
if size ≥ bracket[9]:  fee_rate = 50000 bps (cap)
```

When `uStack_210 == 0` (no fee), the CPI path goes directly to `fn_2bcf8__sol_invoke_signed_c`
(single token transfer). When `uStack_210 != 0`, an additional fee transfer CPI is issued.

### Market maker fee discount (fn_7858)

`fn_7858` checks if the calling account's key matches a hardcoded verifier key stored at
`state[+0x388..+0x3a0]`:

```c
// The 32-byte verifier key (stored XOR-masked):
if (state[+0x388] ^ 0xfb5ce87aae443c38 == accounts[n]+0x8 &&
    state[+0x390] ^ 0x4a2178451bac3c7  == accounts[n]+0x10 &&
    state[+0x398] ^ 0x4a1178751b9c3c6  == accounts[n]+0x18 &&
    state[+0x3a0] ^ 0x4a0178651b8c3c5  == accounts[n]+0x20) {
    // Key matches — return discounted fee
    fee_override = state[+0x3a8] ^ 0xcf44133cb352d91c;
}
```

If the account's pubkey matches the stored verifier key and the account's byte at `+2`
is `'\0'` (a "not closed" flag), the fee is overridden with the value at
`state[+0x3a8]` (XOR-masked). This is a **preferred/whitelist fee rate** for known
market makers or HumidiFi's own routing infrastructure.

If the account byte at `+2 != 0`:
- Returns `0x1ced` error (indicator = "closed account / blacklisted")

---

## 8. Price Interpolation in fn_17a30 (839 lines)

`fn_17a30` is the detailed **price interpolation engine** called when `fn_16a50` returns
a valid band pointer. It takes `(result, qty_lo, qty_hi, oracle_price_lo, state_context)`.

**Core operations (summarized):**

1. Converts `oracle_price` to Q48 fixed-point (via `<< 0x30` and `>> 0x10` pattern)
2. Looks up the band start/end prices from the selected tier pointer
3. Interpolates linearly within the band:
   - `price = band_start + (qty / band_size) × (band_end - band_start)`
4. Returns interpolated price in Q48 format: `CONCAT44(result_hi, result_lo)`

The `fn_15e8__sol_log` call at the start of `fn_17a30` logs the incoming oracle price
and quantity — this is the **log entry before fee deduction**.

---

## 9. Fee Step Application in fn_1aed0 (316 lines)

`fn_1aed0` applies the fee bracket to the interpolated price. Takes:
`(result, qty, band_price_lo, band_price_hi, fee_step_ptr)`.

The `fee_step_ptr` (from fn_169b0 / the state bracket data) contains the per-unit fee
for the trade size. The computation applies:

```
gross_price = interpolated_band_price
net_price   = gross_price × (1 - fee_rate / 10000)
```

In Q48 fixed-point using `fn_0488` for the multiplication:
```c
fn_0488(&result, gross_price_lo, gross_price_hi,
        (10000 - fee_bps) << 0x30, (10000 - fee_bps) >> 0x10,
        price_lo_ptr, price_hi_ptr, current_tick);
```

---

## 10. Fixed-Point Arithmetic Helpers

### fn_0488 — 128-bit signed multiply with overflow check

Takes two 128-bit signed inputs `(a_hi, a_lo)` × `(b_hi, b_lo)` and computes the
128-bit product. Returns `1` (success) or `0` (overflow) in `result[0]`, and the
result in `result[1,2]`.

The output format uses **Q48 fixed-point** (48 fractional bits):
```c
result[1] = lo_product * 0x10000 | midpoint >> 0x30;
result[2] = hi_product * 0x10000 | lo_product >> 0x30;
```

### fn_19d8 — Divide by 0x2710000000000000 (= 10000 × 2^48)

Called at the end of price computation in fn_25ee0:
```c
fn_19d8(&iStack_20, &uStack_50, 0x2710000000000000, 0);
```

`0x2710 = 10000`, so this divides by `10000 × 2^48`, normalizing the Q48 result to
4 decimal places. The final result is the fill price in the pool's native unit
(lamports per token or similar).

### The constant 0x4189374bc7

Used in fn_25ee0 as divisor for tick scaling:
`0x4189374bc7 ≈ 1/1000 × 2^48`

This scales tick values (which are in basis-points × 2^48) to the fill price space.

---

## 11. Trade Direction Gate

In `fn_e3b0` / `fn_10320`, the direction flag `cStack_1b0` / `cStack_1d8`:
- `'\0'` = buy (lVar7 = 0): `amount_a` and `amount_b` remain as-is
- `'\x01'` = sell (lVar7 = 1): amounts are swapped:

```c
if (lVar7 == 0) {
    lStack_1d8 = lStack_c8;   // amount_out ← amount_b
    lStack_c8  = lVar3;       // amount_in  ← original
}
```

The direction also selects which token ATA is the source vs. destination for the CPI:
- Buy: CPI transfers from pool ATA A → user ATA B
- Sell: CPI transfers from pool ATA B → user ATA A

This direction is set from the instruction data after XOR decryption.

---

## 12. Slippage Guard (fn_db48 pre-check)

Before calling fn_e3b0, fn_db48 checks:

```c
min_output = state[+0x2c0] ^ 0x6e9de2b30b19f1ea
max_input  = state[+0x2b8] ^ 0x6e9de2b30b19f1ea
available  = max_input - min_output
assert available < max_allowed_slippage
```

These limits were written by the oracle price commit (disc 0x0a/0x0d). If the computed
fill price would require more input than `max_input` or produce less output than
`min_output`, the trade fails with error `0xbad2`.

---

## 13. Token Account Balance Guards (fn_e3b0 / fn_10320)

After SHA-256 verification but before price interpolation, both fn_e3b0 and fn_10320
check the reserve balance:

```c
// From fn_f8d0 / fn_10320:
reserve = accounts[6]+0x58                        // token reserve balance
limit   = state[+0x2c0] ^ 0x6e9de2b30b19f1ea     // oracle min-output
assert reserve - limit > 0 && no underflow        // pool has sufficient reserves
```

This prevents the fill price from executing if the pool would go below the committed
minimum reserve.

---

## 14. Init Stage Guard (state[+0x710])

The init stage counter at `state[+0x710]` controls two things:

**Price XOR key selection:**
```c
if (state[+0x710] < 5) {
    // use legacy XOR masks for state[+0x260,+0x268,+0x270,+0x600]
} else {
    // use stored values directly (XOR-masks already stripped at stage transition)
}
```

**Tick range key:**
```c
if (state[+0x710] < 4) {
    price_xor = 0x6e9de2b30b19f1ea;
} else {
    price_xor = 0x6e9de2b30b19f9ea;
}
```

This means a pool in early initialization uses different price floor/ceiling masks,
producing different decoded price values for the same stored bits.

---

## 15. Complete Fill Price Data Flow

```
OFF-CHAIN (HumidiFi Oracle Server)
  ├── Observe CEX price
  ├── Compute bid/ask bands
  ├── Sign: SHA-256(pool_state || price_payload)
  └── Submit instruction payload (24 or 512 bytes)

ON-CHAIN VALIDATION CHAIN
  │
  ├─ [1] Instruction XOR-decrypt (key 0xc3ebbae2ff2fff3a)
  │         └─ raw payload bytes → decrypted fields
  │
  ├─ [2] SHA-256 hash check (fn_12770 / fn_128c0)
  │         └─ sha256(pool_state + oracle_payload) == payload[0..8]
  │         └─ if invalid: price marked unverified (uVar20=0)
  │
  ├─ [3] Account authority checks
  │         └─ accounts[signer] == decrypt(state[+0x258..+0x278])
  │
  ├─ [4] Token ATA checks
  │         └─ accounts[ata_a] == decrypt(state[+0x218..+0x258])
  │
  ├─ [5] Reserve balance check
  │         └─ pool_balance ≥ state[+0x2c0] (oracle min-output)
  │
  ├─ [6] Slippage guard
  │         └─ max_input - min_output < max_allowed_slippage
  │
  ├─ [7] fn_25ee0 — Price Computation
  │   │
  │   ├─ [7a] Unmask state price bands (fn_2328): state[+0x58..+0xe8]
  │   ├─ [7b] Unmask reference data (fn_2798): state[+0x328..+0x370]
  │   ├─ [7c] Compute oracle price in Q48 fixed-point
  │   │         param_2 = (oracle_qty >> 48) | (oracle_qty << 16)
  │   ├─ [7d] quote_net = oracle_price - state[+0x250] (price floor, XOR-unmasked)
  │   ├─ [7e] fn_16a50: select price band tier for trade size
  │   │         └─ 3 tiers: small / medium / large
  │   ├─ [7f] fn_17a30: interpolate price within band (Q48)
  │   ├─ [7g] fn_1aed0: apply fee step to interpolated price
  │   │         └─ net = gross × (10000 - fee_bps) / 10000
  │   ├─ [7h] fn_0488: tick constraint cap
  │   │         └─ capped by state[+0x2c8] tick (scaled by ~1/1000)
  │   ├─ [7i] fn_07e8: rate check vs 0x3e8000000000000 (≈ 1.0 in Q48)
  │   ├─ [7j] fn_0488 × state[+0x3a8]: market-maker discount (fn_7858)
  │   ├─ [7k] fn_0028: normalize to Q48 precision
  │   ├─ [7l] Add: base + adjustment + fee_component
  │   ├─ [7m] fn_19d8: divide by 0x2710000000000000 (÷ 10000 × 2^48)
  │   │         └─ FINAL FILL PRICE in native units
  │   └─ [7n] fn_281a8: emit emoji tier log (🦐→🐋→🐉 by trade size)
  │
  ├─ [8] Market-maker whitelist check (fn_7858)
  │         └─ signer matches state[+0x388..+0x3a0] → use discount rate
  │
  ├─ [9] CPI 1: token transfer (fn_cf18 / fn_d740)
  │         └─ transfer amount_in from source ATA
  │
  ├─ [10] CPI 2: fee transfer (fn_2bcf8) if fee > 0
  │          └─ transfer fee to protocol fee account
  │
  └─ [11] Write trade record to state + emit event
             state[+0x2a8] = fill_price ^ 0x6e9de2b30b19f9ea
             state[+0x2c8..+0x310] = XOR-encrypted trade record (fn_2600)
             fn_2de38: emit 256-byte event log (fn_1e20 XOR-encrypted)
```

---

## 16. Summary: All Fill Price Factors

| Factor | Location | Effect |
|--------|----------|--------|
| Oracle-signed price payload | Instruction data (bytes 0..N) | Primary price input; verified by SHA-256 |
| SHA-256 hash commitment | `state[+0..+8]` bound to instruction | Gates all price computation; invalid hash → price not executed |
| Price bands (6 tiers) | `state[+0x58..+0xe8]` (disc 0x02) | Defines 3 bid/ask tiers; selects interpolation band |
| Order book snapshot | `state[+0xe8..+0x1d8]` (disc 0x03) | Base bid/ask grid for interpolation; enforces spread constraints |
| Oracle price floor (`state[+0x250]`) | Disc 0x0a/0x0d | Lower bound for `quote_net` computation |
| Price tick array (10 values) | `state[+0x390..+0x3d8]` (disc 0x15) | Hard cap on max spread adjustment |
| Mid price (`state[+0x2e8]`) | Disc 0x0a/0x0d | Baseline for tick scaling via `× 1/1000` |
| Fee bracket table (10 tiers) | `state[+0x328..+0x370]` (disc 0x09) | Determines fee deduction percentage by size |
| Market-maker discount key | `state[+0x388..+0x3a8]` | If signer matches stored key: custom fee rate |
| Trade direction | `cStack_1b0` / `ix_data` flag | Swaps in/out amounts; selects source/dest ATA |
| Slippage guard | `state[+0x2b8,+0x2c0]` (oracle limits) | Fails trade if price outside oracle-committed range |
| Reserve balance | `accounts[6]+0x58` | Fails trade if pool below minimum reserve |
| Init stage (`state[+0x710]`) | Pool initialization sequence | Selects XOR key variant for price decoding |
| Fixed-point precision (Q48) | All arithmetic in fn_25ee0 | Scale factor: `÷ 10000 × 2^48` at final step |
| Session counter (`state[+0x288]`) | Set at oracle commit | Selects instruction execution path (0,1,2) |
