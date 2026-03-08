# HumidiFi — Swap & Quote Instructions

Analysis of the swap/quote/trade instruction handlers decoded from `humidifi.so`.
Cross-references: `humidifi.exploded/`, `docs/archaeology.md`, `docs/dat_map.txt`.

---

## Shared Conventions

### Function call signature (all handlers)
```
handler(result_ptr, accounts[], num_accounts, ix_data_ptr, ix_data_len)
```
Return values are written into `result_ptr[0]` (status) and `result_ptr[1]` (error code).
`0x1a` (26) means success.

### Account layout (pool instructions)
| Index | Account | Notes |
|-------|---------|-------|
| 0 | Authority / signer | Checked for writable flag, specific magic bytes |
| 1 | Pool state account | 1728 bytes; all encrypted fields live here |
| 2+ | Instruction-specific | See per-instruction tables below |

### Pool state field encoding
All pubkeys and prices stored in the pool state account are **XOR-obfuscated**:

| State offset | XOR mask | Field |
|---|---|---|
| +0x258 / +0x600 | `0xfb5ce87aae443c38` | Authority pubkey word 0 |
| +0x260 | `0x4a2178451bac3c7` | Authority pubkey word 1 |
| +0x268 | `0x4a1178751b9c3c6` | Authority pubkey word 2 |
| +0x270 | `0x4a0178651b8c3c5` | Authority pubkey word 3 |
| +0x1d8..+0x1f8 | per-field keys | Token mint A pubkey (4×u64) |
| +0x1f8..+0x218 | per-field keys | Token mint B pubkey (4×u64) |
| +0x218..+0x238 | per-field keys | Token ATA A pubkey (4×u64) |
| +0x238..+0x258 | per-field keys | Token ATA B pubkey (4×u64) |
| +0x2b0..+0x2c0 | `0x6e9de2b30b19f1ea` | Price/amount limits |
| +0x710 | — (unmasked) | Init stage counter (u64) |

**Comparing stored pubkeys:** all comparisons are done in **byte-swapped (big-endian) order** — both sides are byte-swapped before comparing, which means the comparison is endian-invariant.

### Instruction data XOR decryption
Most instructions decrypt their payload in-place before use:
```
keystream = 0, key = 0xc3ebbae2ff2fff3a
for each 8-byte chunk i:
    chunk[i] ^= keystream ^ key
    keystream += 0x0001000100010001
tail bytes handled similarly via memcpy
```
Exceptions: disc 0x00, 0x06, 0x0d, 0x0e (no decrypt; raw bytes used directly).

---

## disc 0x00 — `fn_9700` — CommitOraclePrice / ExecuteTrade

**Address:** `fn_9700` @ 0x9820
**Instruction data:** 512 bytes (0x200), 8-byte aligned, **not XOR-decrypted**
**Required accounts:** exactly 8

### Program-ID verification at instruction tail
Before dispatching, `entrypoint` verifies that the **last 32 bytes** of instruction data equal the HumidiFi program ID (`9H6tua7jkLhdm3w8BvgpTn5LZNU7g4ZynDmCiNN3q6Rp`):
```
pbVar9 = ix_data + ix_len;
assert pbVar9[0..8]  == 0xe959f7272b74fd7a
assert pbVar9[8..16] == 0x7a819dd33c7070c6
assert pbVar9[16..24]== 0x6dd2523bce0a93a0
assert pbVar9[24..32]== 0xd3bb8723dd54a054
```
This prevents instruction replay across programs.

### Step-by-step

1. **Authority account check** (`accounts[0]`)
   - `accounts[0][1] != 0` — account must be writable/signer
   - Magic bytes at `accounts[0]+8..+0x20` must match 4 hardcoded u64 constants
     (these are stored as `-0x32b20de6c4775e40`, `-0x15200f0917dbfd5f`, `-0x47ebde6f8ba50bd0`, `0x4164f987ea077494`)

2. **Instruction data alignment**
   - Length must be exactly 0x200 (512 bytes)
   - Pointer must be 8-byte aligned

3. **Pool PDA derivation**
   - Derives PDA from seed `DAT_ram_00031fb2` using program `DAT_ram_00031900` (HumidiFi itself)
   - `fn_2dd00__sol_try_find_program_address(&pda, seeds, 4, &program_id)`

4. **PDA validation against accounts[1]**
   - Derived PDA (4×u64) must match `accounts[1]+8..+0x28`
   - On mismatch → return `0xbadface`

5. **Token account setup**
   - Reads token account offsets from instruction data at `ix_data+0x180`, `+0x1a0`, `+0x1c0`
   - Sets up account references for ATAs at these derived addresses

6. **Accounts[0] type-specific branch** (checks `*accounts[0] == 0xFF`)
   - **"FF-type" signer path** (normal trade path):
     a. Reads flags from `accounts[0][1..3]` to determine trade direction/type
     b. Reads token ATA pointers from `accounts[0]+0x50`, `+0x28`, `+0x58`, `+0x48`
     c. If `*accounts[1] == 0xFF`:
        - Copies execution context from `ix_data` to stack
        - Derives token PDAs for ATA A (`sol_try_find_program_address` with SPL Token seeds)
        - Derives token PDAs for ATA B (same, different mint)
        - Validates `accounts[4]` matches derived PDA A
        - Validates `accounts[5]` matches derived PDA B
        - Validates `accounts[2]` pubkey matches `ix_data+0x1a0` region
        - Validates `accounts[3]` pubkey matches `ix_data+0x180` region

7. **Two CPI invocations** (`fn_8828__sol_invoke_signed_c`)
   - **CPI 1**: `fn_8828(accounts, accounts+2, accounts+1)` — must return 0x1a
   - **CPI 2**: `fn_8828(accounts, accounts+3, accounts+1)` — must return 0x1a
   - These are signed CPIs to external programs (likely SPL Token and/or Jupiter routing)

8. **Pool state write-back** (on both CPIs succeeding):
   - `accounts[1]+0xe8 ← ix_data[0..0xf0]` (240 bytes: trade parameters)
   - `accounts[1]+0x1d8 ← ix_data[0x1d8..0x218]` (token mint A pubkey)
   - `accounts[1]+0x1d8..+0x210` ← derived PDA A bytes
   - `accounts[1]+0x218..+0x250` ← derived PDA B bytes
   - `accounts[1]+0x250..+0x270` ← additional trade amounts
   - `accounts[1]+0x270..+0x290` ← accounts[1] token state
   - `accounts[1]+0x290` ← PDA bump seed (1 byte)
   - `accounts[1]+0x288` ← instruction counter byte (from `ix_data+0x1f0`)
   - `accounts[1]+0x278..+0x280` ← final price/amount fields
   - **Zeroes out** `accounts[1]+0x328..+0x387` (96 bytes; clears pending order slots)

9. **Calls** `fn_2a6a8__sol_memcmp` for state consistency check

**Summary:** The primary trade/price-commitment instruction. Receives 512 bytes of oracle-signed trade data, verifies pool PDA, executes two CPIs (likely token transfers for both sides of the swap), then writes the committed trade state into the pool account.

---

## disc 0x02 — `fn_7ab8` — UpdatePriceBands

**Address:** `fn_7ab8` @ 0x7bd8
**Instruction data:** 144 bytes (0x90), 8-byte aligned, XOR-decrypted
**Required accounts:** 2

### Step-by-step

1. **Account count check**: `num_accounts == 2`, else → error

2. **Authority pubkey verification**
   Read encrypted authority from `accounts[1]` state:
   ```
   word0 = state[+0x600] ^ 0xfb5ce87aae443c38   (if state[0x710] < 5)
   word1 = state[+0x260] ^ 0x4a2178451bac3c7
   word2 = state[+0x268] ^ 0x4a1178751b9c3c6
   word3 = state[+0x270] ^ 0x4a0178651b8c3c5
   ```
   Compare (byte-swapped) against `accounts[0]+8..+0x20`. Must match.

3. **Signer writable check**: `accounts[0][1] != 0` (writable flag)

4. **Instruction data validation**
   - Length must be exactly 0x90 (144 bytes)
   - Pointer must be 8-byte aligned

5. **Price band ordering check** (6 price levels at offsets in ix_data):
   All 6 values must be **monotonically non-decreasing**:
   ```
   ix_data[+0x10] ≤ ix_data[+0x18] ≤ ix_data[+0x40] ≤
   ix_data[+0x48] ≤ ix_data[+0x70] ≤ ix_data[+0x78]
   ```
   On violation → return `0xbad1` (no-op, no state update)

6. **State write-back** (all 18 u64 fields XOR-masked with separate per-field keys):
   ```
   state[+0x58] ← ix_data[0]    ^ 0x69d190c683eda5d3
   state[+0x60] ← ix_data[+0x8] ^ 0x962f6f387c135a2c
   state[+0x68] ← ix_data[+0x10]^ 0x962c6f3b7c105a2d
   ... (18 total u64 fields from ix_data[0..0x90])
   state[+0xe0] ← ix_data[+0x88]^ 0x963f6f287c035a3c
   ```
   The full 144 bytes of instruction data are copied to `state[+0x58..+0xe8]`.

7. **Return `0x1a`** (success)

**Summary:** Updates the pool's bid/ask price band array. Takes 6 price tier boundaries (3 bid levels, 3 ask levels) as 6 of the 18 u64 values in the 144-byte payload. All values stored XOR-masked. Validates monotonic ordering before committing.

---

## disc 0x03 — `fn_8068` — UpdateOrderBook

**Address:** `fn_8068__sol_memcmp` @ 0x8188
**Instruction data:** 240 bytes (0xf0), 8-byte aligned, XOR-decrypted
**Required accounts:** 2

### Step-by-step

1. **Account count check**: `num_accounts == 2`

2. **Authority verification** (same pattern as fn_7ab8): decrypts stored authority from `state[+0x600,+0x260,+0x268,+0x270]`, byte-swaps, compares against `accounts[0]+8..+0x20`

3. **Signer writable check**

4. **Instruction data length = 0xf0, 8-byte aligned**

5. **128-bit overflow guards** on two fields:
   ```
   hi = ix_data[+0x18]
   if hi > 0xffffffffffff: panic (overflow)
   combined_hi_lo = (ix_data[+0x10] >> 48) | (hi << 16)
   assert ix_data[+0x30] >= combined_hi_lo   // bid ceiling check
   assert ix_data[+0x38] >= ix_data[+0x30]   // bid-ask spread check
   ```

6. **Second pair of overflow guards** at ix_data[+0x60,+0x68]:
   ```
   hi2 = ix_data[+0x68]
   if hi2 > 0xffffffffffff: panic
   ask_lo = (ix_data[+0x60] >> 48) | (hi2 << 16)
   ```

7. **Amount bounds validation**:
   ```
   price = ix_data[+0x80]
   assert price >= ix_data[+0x38]
   assert price >= ask_lo
   assert ix_data[+0x88] >= price
   ```

8. **Second price range** (fee tier or size bracket at ix_data[+0xb0,+0xb8,+0xd0,+0xd8]):
   ```
   hi3 = ix_data[+0xb8]
   if hi3 > 0xffffffffffff: panic
   lo3 = (ix_data[+0xb0] >> 48) | (hi3 << 16)
   price2 = ix_data[+0xd0]
   assert price2 >= ix_data[+0x88]
   assert price2 >= lo3
   assert ix_data[+0xd8] >= price2
   ```

9. **State write-back**:
   ```
   memcpy(state[+0xe8], ix_data, 0xf0)   // 240 bytes
   ```
   Then `fn_2930__sol_memcmp(state[+0xe8])` — re-validates written data

10. **Return `0x1a`**

**Summary:** Updates the order book snapshot in the pool state. Takes 240 bytes of bid/ask price and size data with built-in 128-bit overflow guards and bounds checks. Validates that bid ≤ mid ≤ ask ordering holds across all tiers before writing.

---

## disc 0x04 / 0x10 — `fn_db48` — ExecuteSwap

**Address:** `fn_db48` @ 0xdc68
**Instruction data:** 24 bytes (0x18), 8-byte aligned, XOR-decrypted
**Required accounts:** >8 (disc 0x04) or >9 (disc 0x10)

### Step-by-step

1. **Instruction data validity**: length == 0x18, 8-byte aligned

2. **Authority verification**: decrypts stored authority from state, byte-swaps, validates against signer

3. **Token account verification**: decrypts stored ATA pubkeys from state offsets `+0x218..+0x258`, validates against `accounts[3]` and `accounts[4]`

4. **Amount/slippage validation**:
   ```
   min_output = state[+0x2c0] ^ 0x6e9de2b30b19f1ea
   max_input  = state[+0x2b8] ^ 0x6e9de2b30b19f1ea
   available  = max_input - min_output
   assert available < max_allowed_slippage
   ```

5. **SHA-256 integrity check** (`fn_12770__sol_sha256`):
   - Hashes pool state buffer
   - Compares against `ix_data` hash reference
   - Ensures state has not been tampered since price was committed

6. **CPI 1 — Token transfer** (`fn_cf18__sol_invoke_signed_c`):
   - From ATA A → destination
   - Signed by pool authority PDA
   - Amount from `state[+0x298]`
   - Must return 0x1a

7. **CPI 2 — Fee transfer** (conditional, if fee amount != 0):
   - Second token transfer for protocol fee
   - Amount from `state[+0x2a0]`

8. **Auxiliary pool routing** (optional, if additional accounts present):
   - Derives additional PDA via `fn_28a20__sol_try_find_program_address`
   - Validates against stored state
   - Invokes additional CPI for routing to external pool

9. **State serialization**:
   - Writes trade execution record to state offsets `+0x2c8..+0x310`
   - Calls `fn_1e20` to serialize assembled record
   - Calls `fn_2de38__sol_log_data` to emit trade event log

**Summary:** The primary swap execution instruction. Validates token accounts, checks price integrity via SHA-256, executes SPL Token transfers for both the trade and the fee, then logs the execution event. The 24-byte payload contains the swap amount and direction.

---

## disc 0x05 — `fn_11c18` — FillOrder

**Address:** `fn_11c18` @ 0x11d38
**Instruction data:** 24 bytes (0x18), 8-byte aligned, XOR-decrypted
**Required accounts:** exactly 7

### Step-by-step

1. **Account count check**: `num_accounts == 7`

2. **Program ID check** (`fn_11cb0`):
   Verifies `accounts[1]+0x28..+0x48` equals HumidiFi program ID (`DAT_ram_00031900`). Returns `iVar2` = comparison result.

3. **Authority verification** (same pattern): reads stored authority from `state[+0x600, +0x260, +0x268, +0x270]`, XOR-unmasks, byte-swaps, compares against `accounts[0]`. Stores 4-way comparison in `iVar7`.

4. **Proceed only if**: `accounts[0][1] != 0 && iVar7 == 0 && iVar2 == 0`
   (signer is writable, authority matches, program ID matches)

5. **Token ATA verification**:
   - Reads stored ATA A pubkey from `state[+0x238..+0x258]` (XOR-unmasked, byte-swapped)
   - Reads stored ATA B pubkey from `state[+0x218..+0x238]`
   - Compares ATA A against `accounts[2]`, ATA B against `accounts[4]`
   - Both must match

6. **CPI 1 — Token transfer** (conditional): if `ix_data[0] != 0`:
   `fn_cf18__sol_invoke_signed_c(accounts+2, accounts+3, accounts+1)` — must return 0x1a

7. **CPI 2 — Token transfer** (conditional): if `ix_data[1] != 0`:
   `fn_cf18__sol_invoke_signed_c(accounts+4, accounts+5, accounts+1)` — must return 0x1a

8. **State update**:
   ```
   state[+0x2a8] = ix_data[2] ^ 0x6e9de2b30b19f9ea
   ```
   Stores the fill amount/price (XOR-obfuscated).

9. **Return `0x1a`**

**Summary:** Fills a queued order. Conditionally executes 1 or 2 SPL Token transfers based on flags in the 24-byte payload, then records the fill price in state. The two transfer flags allow the filler to transfer only the leg(s) that haven't settled yet.

---

## disc 0x07 — `fn_124a8` — SetFeeRate

**Address:** `fn_124a8__custom_panic` @ 0x125c8
*(Ghidra's `__custom_panic` suffix is a mis-annotation — this is not a panic handler)*
**Instruction data:** 8 bytes, 2-byte aligned, XOR-decrypted
**Required accounts:** 2

### Step-by-step

1. **Account count check**: `num_accounts == 2`

2. **Authority verification** (same standard pattern)

3. **Length / alignment**: `param_5 == 8`, `(param_4 & 1) == 0`

4. **Write fee rate to state**:
   ```
   state[+0x318] = *(u16*)ix_data       // two bytes
   state[+0x31a..+0x31e] = 0            // clear padding
   state[+0x318] ^= 0xed5f563e78eee80b  // XOR-obfuscate
   ```

5. **Init stage progression** (once only):
   If `state[+0x710] == 0`: set `state[+0x710] = 1`

6. **Return `0x1a`**

**Summary:** Sets the pool fee rate (a 16-bit value) and advances the init stage from 0 to 1 on first call. Part of pool initialization sequence.

---

## disc 0x09 — `fn_12a18` — SetReferenceData

**Address:** `fn_12a18` @ 0x12b38
**Instruction data:** 80 bytes (0x50), 4-byte aligned, XOR-decrypted
**Required accounts:** 2

### Step-by-step

1. **Account count check**: `num_accounts == 2`

2. **Authority verification** (standard pattern)

3. **Init stage check** (`state[+0x710]`):
   - If `== 0`: return `0xbad4` (not ready)
   - If `== 1`: advance `state[+0x710] = 2`
   - If `>= 2`: proceed

4. **Length = 0x50, 4-byte aligned**

5. **Signature validation** (`fn_16518`): internal check on ix_data, must return 0x1a

6. **State write-back** (10 u64 fields, each XOR-masked with per-field keys):
   ```
   state[+0x328] ← ix_data[0]    ^ 0xb82c93d08854ebff
   state[+0x330] ← ix_data[+0x8] ^ 0x47d26c2e77aa1400
   state[+0x338] ← ix_data[+0x10]^ 0x47d16c2d77a91401
   ... (10 total, covering state[+0x328..+0x370])
   ```

7. **Return `0x1a`**

**Summary:** Stores 80 bytes of reference/configuration data (XOR-masked) in state. Requires init stage ≥ 1. Advances stage 1 → 2 on first call. Likely stores protocol fee recipient addresses or reference prices.

---

## disc 0x0e — `fn_a740` — DFlowSwap

**Address:** `fn_a740` @ 0xa860
**Instruction data:** 672 bytes (0x2a0), 8-byte aligned, **not XOR-decrypted**
**Required accounts:** ≥ 10

### Step-by-step

1. **Account count**: `num_accounts >= 10`

2. **Signer check**: `accounts[0][1] != 0` (writable)

3. **Instruction data**: 672 bytes, 8-byte aligned

4. **External program ID validation** — `accounts[7]` must be one of two known programs:
   - Variant A: constants `-0x6c5e9a281e0922fa`, etc. (likely DFlow program)
   - Variant B: constants `-0x21708a111e0922fa`, etc. (fallback)
   - Same dual-check for `accounts[8]`

5. **Account pubkey extraction from payload**:
   - 4 × 32-byte pubkeys extracted from `ix_data` at specific offsets
   - Validated against `accounts[2..5]` (token mints + ATAs)

6. **PDA derivation**: `fn_84c0__sol_try_find_program_address` — derives pool authority PDA

7. **PDA validation**: Derived PDA must match `accounts[1]+8`

8. **CPI orchestration** (2 calls):
   - Calls `fn_0158` with structured routing data → must return 0x1a
   - Calls `fn_b260` with additional routing params

9. **Additional PDA derivation and validation**:
   - Derives ATAs from token mints
   - Validates against `accounts[4]` and `accounts[5]`

10. **Primary CPI** (conditional on program type):
    - **DFlow variant**: `fn_8d70__sol_invoke_signed_c`
    - **Fallback variant**: `fn_8828__sol_invoke_signed_c`
    Both must return 0x1a.

11. **State write-back** (large, post-swap):
    - Encodes trade data via `fn_167c8` and `fn_16518` (both must succeed)
    - Writes to `state[+0x1d8..+0x2c0]` (mints, ATAs, amounts: ~232 bytes)
    - **Zeroes** `state[+0x2c0..+0x710]` (clears execution scratchpad)
    - Sets `state[+0x710] = 4` (marks pool as post-init active)

**Summary:** Executes a swap routed via DFlow aggregator. Takes 672 bytes of DFlow-formatted routing data, validates all token accounts, dispatches either a DFlow or fallback CPI, then commits the trade state back into the pool account and marks the pool as fully initialized (stage 4).

---

## disc 0x0f — `fn_f8d0` — AggregatorSwap

**Address:** `fn_f8d0` @ 0xf9f0
**Instruction data:** 24 bytes (0x18), XOR-decrypted
**Required accounts:** ≥ 12

### Step-by-step

1. **Account count**: `num_accounts >= 12`

2. **Reference account validations**:
   - `accounts[9]` must have magic bytes (system/reference program)
   - `accounts[6]` authority magic check
   - `accounts[1]` pool state magic check
   - `accounts[1]+0x50 == 0x6c0` (confirms 1728-byte pool state size)

3. **Instruction counter check**:
   ```
   counter = (state[+0x288] ^ 0xffffffffffffffa1) & 0xff
   assert counter <= 2
   ```

4. **Signer type check** (`accounts[0]`):
   - Magic bytes at `+8..+0x20` validated
   - If mismatch and counter == 1: return special error `0x1ced`

5. **Authority + ATA verification** (same encrypted comparison pattern as other handlers)

6. **Amount overflow guards** (similar to fn_8068):
   ```
   reserve = accounts[6]+0x58
   limit   = state[+0x2c0] ^ 0x6e9de2b30b19f1ea
   assert reserve - limit > 0 && doesn't overflow
   ```

7. **SHA-256 hash verification** (`fn_12770__sol_sha256`, `fn_128c0__sol_sha256`):
   - Hashes pool state
   - Validates against ix_data reference hash

8. **External program detection**: reads `state[+0xff8]` to choose routing target:
   - `== 0`: DFlow variant (validate accounts[7,8] against DFlow IDs)
   - `== 1`: Raydium/alternative variant

9. **CPI 1** (`fn_d740__sol_invoke_signed_c`): token transfer leg 1 — must return 0x1a

10. **CPI 2** (`fn_ccc0__sol_invoke_signed_c`): token transfer leg 2 — must return 0x1a

11. **State update** (same serialization pattern as fn_db48):
    - Writes signer address, amounts to `state[+0x2c8..+0x310]`
    - Calls `fn_1e20` + `fn_2de38__sol_log_data`

**Summary:** Executes a swap via DFlow or Raydium aggregator with SHA-256 state integrity check. Requires 12+ accounts (pool state, token mints, ATAs, routing programs, authority). Routes to two different CPI implementations depending on `state[+0xff8]` flag.

---

## Instruction Summary Table

| Disc | Function | Data (bytes) | Accounts | What it does |
|------|----------|-------------|----------|--------------|
| 0x00 | `fn_9700` | 512 | 8 | Commit oracle price; execute both swap legs via 2 CPIs; write trade state |
| 0x02 | `fn_7ab8` | 144 | 2 | Update 6-level price band array (bid/ask tiers); validates monotonic ordering |
| 0x03 | `fn_8068` | 240 | 2 | Update order book snapshot (bid/ask/size structure) with overflow guards |
| 0x04 | `fn_db48` | 24 | >8 | Execute swap: validate ATAs, SHA-256 check, 2 SPL Token CPIs, log event |
| 0x05 | `fn_11c18` | 24 | 7 | Fill order: conditional 1–2 token transfers, store fill price in state |
| 0x07 | `fn_124a8` | 8 | 2 | Set fee rate (u16); advance init stage 0→1 |
| 0x09 | `fn_12a18` | 80 | 2 | Set reference data (10 u64s); advance init stage 1→2 |
| 0x0e | `fn_a740` | 672 | ≥10 | DFlow-routed swap; 2 CPIs; commits full trade state; marks pool active (stage 4) |
| 0x0f | `fn_f8d0` | 24 | ≥12 | Aggregator swap (DFlow or Raydium), SHA-256 check, 2 CPIs |
| 0x10 | `fn_db48` | 24 | >9 | Same as disc 0x04 but requires 10+ accounts |

---

## Data Flow: Price Update → Trade Execution

```
1. [disc 0x07] SetFeeRate (8 bytes)
        ↓  stage 0 → 1
2. [disc 0x09] SetReferenceData (80 bytes)
        ↓  stage 1 → 2
3. [disc 0x0b] Set initial value (8 bytes)         [init state machine]
        ↓  stage 2 → 4
4. [disc 0x12..0x17] Set authority, fees, ticks... [init state machine]
        ↓  stage 4..8 (pool fully initialized)

-- TRADING LOOP --
5. [disc 0x02] UpdatePriceBands (144 bytes)         ← off-chain pricing engine
        ↓  state[+0x58..+0xe8] = new bid/ask tiers
6. [disc 0x03] UpdateOrderBook (240 bytes)          ← off-chain pricing engine
        ↓  state[+0xe8..+0x1d8] = new order book
7. [disc 0x0a/0x0d] Oracle price commit (inline)    ← oracle CPI
        ↓  state[+0x53..+0x6f] = committed prices
8. [disc 0x00] CommitOraclePrice (512 bytes)        ← aggregator (Jupiter/DFlow)
        ↓  two CPIs (token transfers) + state write
   OR
   [disc 0x04/0x10] ExecuteSwap (24 bytes)          ← direct swap
        ↓  two SPL Token CPIs + event log
   OR
   [disc 0x0e] DFlowSwap (672 bytes)               ← DFlow aggregator
        ↓  DFlow CPI + full state write
   OR
   [disc 0x0f] AggregatorSwap (24 bytes)           ← Raydium/DFlow routing
        ↓  two CPIs + event log
```
