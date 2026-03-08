# HumidiFi Binary Archaeology Notes

## Source Code Structure (from panic strings in .rodata)

The binary was compiled from a Rust workspace with these source files:
```
contract/
├── src/
│   ├── lib.rs           — root module, "disabled ixn" and overflow checks
│   ├── arith.rs         — fixed-point arithmetic
│   ├── instructions.rs  — instruction parsing/dispatch
│   ├── ops.rs           — trading operations
│   ├── stateupdate.rs   — state account updates
│   ├── pubkey.rs        — PDA derivation
│   └── routers/
│       ├── dflow.rs     — DFlow aggregator integration
│       └── jupiter.rs   — Jupiter aggregator integration (most assertion sites)
```
Plus library code in `src/{arith,internal,pubkey,lib}.rs`.

## Build Info

- **Git hash**: `29937fbbc34fdb29c508e7d736dbbbc637e7979f`
  - Found at .rodata:0x3200d0: `GIT_HASH:29937fbbc34fdb29c508e7d736dbbbc637e7979f`
  - This is the exact commit used to compile this binary.
- **Toolchain**: Solana platform-tools (from path `/home/runner/work/platform-tools/platform-tools/out/rust/library/core/...`)

## Instruction Discriminator Scheme

HumidiFi uses a **custom non-Anchor discriminator**. In `entrypoint`:
```c
uVar11 = ((ulonglong)*(byte *)((longlong)puVar18 + uVar16) ^ uVar16 >> 3 ^ 0x3a) & 0xff;
if (0x17 < uVar11) uVar11 = 0x18;  // clamp to 24
```
Where `uVar16 = instruction_data_len - 1` and the byte read is the **last byte** of instruction data.

### Instruction Data XOR Decryption

Most instructions (discriminators 2–5, 7, 9–10, 0xf–0x17) XOR-decrypt the payload before dispatching:
```c
// Decrypt in-place, 8 bytes at a time with running counter
uVar11 = 0;
for each 8-byte chunk i:
    *chunk = uVar11 ^ *chunk ^ 0xc3ebbae2ff2fff3a;
    uVar11 += 0x0001000100010001;  // increment per-byte-lane counter
// Remaining 1–7 bytes handled via memcpy with same XOR
```
Discriminator 0 has a 32-byte program ID verification instead of decrypt.
Discriminator 0xe also skips decrypt (verifies raw program ID at instruction tail).

### Complete Instruction Dispatcher Table

| Disc | Handler | Accounts | Data Len | Notes |
|------|---------|----------|----------|-------|
| 0x00 | `fn_9700` | any | any | Verifies 32-byte program ID at instruction tail (not XOR-decrypted). Likely: **oracle price update / main trade** |
| 0x01 | panic | — | — | "unreachable code" — unused/reserved |
| 0x02 | `fn_7ab8` | any | any | XOR decrypt; likely **swap/quote** variant |
| 0x03 | `fn_8068` | any | any | XOR decrypt; wraps sol_memcmp — likely **account validation** or **fill** |
| 0x04 | `fn_db48` | >8 | 0x18 | XOR decrypt; requires >8 accounts, 24-byte payload |
| 0x05 | `fn_11c18` | any | any | XOR decrypt |
| 0x06 | inline state | 2 | any | XOR decrypt; verifies account[1] PubKey == HumidiFi program ID (DAT_ram_00031900) via `fn_52a8`; 32-bit byte-swap comparison of account[0] pubkey bytes; sets state[0x56]. **Oracle registration / pool init step** |
| 0x07 | `fn_124a8` | any | any | XOR decrypt (Ghidra `__custom_panic` suffix is a mis-annotation) |
| 0x08 | panic | — | — | "unreachable code" — unused/reserved |
| 0x09 | `fn_12a18` | any | any | XOR decrypt |
| 0x0a | inline state | 3 | 0x40 | XOR decrypt; reads puVar5[1..8] from oracle account; XOR-masks stored prices at state[0x53..0x58, 0x64, 0x6f]. **Oracle price commit** |
| 0x0b | inline state | 2 | 8 | XOR decrypt; reads input[0] → state[0x6f] (XOR `0x504156a22548f8dd`); if state[0xe2]==2 → set to 4. **Pool init: set initial value** |
| 0x0c | panic ("disabled ixn") | — | — | Kill-switched instruction |
| 0x0d | inline state | 3 | 0x40 | No XOR decrypt; same oracle price commit logic as 0x0a with unmasked `puVar5[6]`. **Oracle price update (alternate path)** |
| 0x0e | `fn_a740` | any | any | Verifies raw 32-byte program ID at instruction tail. Likely **DFlow router** CPI |
| 0x0f | `fn_f8d0` | ≥12 | 0x18 | XOR decrypt; requires ≥12 accounts |
| 0x10 | `fn_db48` | >9 | 0x18 | XOR decrypt; requires >9 accounts, 24-byte payload |
| 0x11 | panic | — | — | "unreachable code" — unused/reserved |
| 0x12 | inline state | 2 | any | XOR decrypt; if state[0xe2]==4 → XOR-unmask state[0x4b..0x4e] (4×u64), set state[0xe2]=5. **Pool init 4→5: reveal stored authority pubkey** |
| 0x13 | inline state | 2 | 0x10 | XOR decrypt; writes puVar5[1]^key → state[0x70], puVar5[2]^key → state[0x71]; if state[0xe2]==5 → set to 6. **Pool init 5→6: set fee/config values** |
| 0x14 | `fn_113b8` | any | any | XOR decrypt |
| 0x15 | inline state | 2 | 0x50 | XOR decrypt; validates 10 monotonically decreasing price ticks (max ~499,489); copies to state[0x72..0x7b] with XOR-masks; if state[0xe2]==6 → set to 7. **Pool init 6→7: set price tick array** |
| 0x16 | inline state | 2 | 0x30 | XOR decrypt; writes puVar5[1..5]^keys → state[0x7c..0x80]; if state[0xe2]==7 → set to 8. **Pool init 7→8: set spread/fee parameters** |
| 0x17 | inline state | 2 | 8 | XOR decrypt; reads byte input[0]; sets state[0x51]=bVar1; clears state[0x289..0x28c]; requires state[0xe2]≥8. **Pool init: set trading mode (direction byte)** |
| 0x18 | error | — | — | Catch-all for invalid discriminator → returns error code |

### Pool Initialization State Machine

The inline state instructions (0x06, 0x0b, 0x12–0x17) implement a **sequential pool initialization state machine** using `state[0xe2]` as a stage counter:

```
stage 0/1/2: uninitialized
      ↓ disc 0x06  → register oracle, verify program ID
      ↓ disc 0x0b  → store initial value → state[0x6f], state[0xe2] = 4
stage 4:
      ↓ disc 0x12  → XOR-unmask stored authority pubkey (state[0x4b..0x4e]), state[0xe2] = 5
stage 5:
      ↓ disc 0x13  → write 2 fee/config u64s → state[0x70,0x71], state[0xe2] = 6
stage 6:
      ↓ disc 0x15  → write 10 price tick u64s → state[0x72..0x7b], state[0xe2] = 7
stage 7:
      ↓ disc 0x16  → write 5 spread/fee u64s → state[0x7c..0x80], state[0xe2] = 8
stage 8+:
      ↓ disc 0x17  → set trading mode byte → state[0x51]
```

**Authority pubkey storage obfuscation:** The 32-byte authority pubkey is stored XOR-masked in state[0x4b..0x4e] (4 × u64):
- `state[0x4b]` XOR `0xfb5ce87aae443c38`
- `state[0x4c]` XOR `0x04a2178451bac3c7`
- `state[0x4d]` XOR `0x04a1178751b9c3c6`
- `state[0x4e]` XOR `0x04a0178651b8c3c5`

These same constants appear in every inline-state discriminator to read/verify the authority.

## "poolv1" Prefix

Error string `"poolv1Invalid Exp value"` suggests pool version is "v1", corresponding to the `poolv1` state account prefix.

## "disabled ixn" Kill Switch

At .rodata:0x32010b: `"disabled ixn"` followed by `"contract/src/lib.rs"`. There is a runtime check that can panic with "disabled ixn" — a feature flag to disable specific instructions (disc 0x0c is permanently kill-switched in this binary version).

## Emoji Logging System ("Humidi-Meter")

Function `fn_25ee0` implements a **liquidity/volume indicator** using sea creature emojis scaled by trade size (in `fn_281a8`):

| Value threshold    | Emoji | Unicode  |
|--------------------|-------|----------|
| < 25,000,000       | 🦀     | U+1F980  |
| < 100,000,000      | 🦈     | U+1F988  |
| < 1,000,000,000    | 🦐     | U+1F990  |
| < 10,000,000,000   | 🐲     | U+1F432  |
| < 25,000,000,000   | 🐬     | U+1F42C  |
| < 100,000,000,000  | 🐳     | U+1F433  |
| < 250,000,000,000  | 🐋     | U+1F40B  |
| ≥ 250,000,000,000  | 🦐     | U+1F990  |
| Very large         | 🐉 ×N  | U+1F409 ×750 |

The large 🐉 block (~750 dragons, 3KB) in .rodata at 0x319e0–0x31f96 is the "max tier" log output.

## Dependencies Identified (from error strings)

- **bytemuck** — `TargetAlignmentGreaterAndInputNotAligned`, `OutputSliceWouldHaveSlop`, `SizeMismatch`, `AlignmentMismatch`
- **arrayvec** — `insufficient capacity`, `CapacityError: from_bytes`, `from_bytes_mut`

## Known Syscall Wrappers (from annotated asm)

| Address    | Ghidra Name                           | Syscall              |
|------------|---------------------------------------|----------------------|
| fn_15e8    | fn_15e8__sol_log                      | sol_log_             |
| fn_1cd8    | fn_1cd8__sol_memcpy                   | sol_memcpy_          |
| fn_2930    | fn_2930__sol_memcmp                   | sol_memcmp_          |
| fn_8068    | fn_8068__sol_memcmp                   | sol_memcmp_          |
| fn_84c0    | fn_84c0__sol_try_find_program_address | sol_try_find_pda     |
| fn_8828    | fn_8828__sol_invoke_signed_c          | sol_invoke_signed_c  |
| fn_8d70    | fn_8d70__sol_invoke_signed_c          | sol_invoke_signed_c  |
| fn_c100    | fn_c100__sol_invoke_signed_c          | sol_invoke_signed_c  |
| fn_12770   | fn_12770__sol_sha256                  | sol_sha256           |

## Key Constants in .rodata / .data.rel.ro

### Program IDs verified inline

| Address      | Decoded Public Key                             | Program           |
|--------------|------------------------------------------------|-------------------|
| DAT_ram_00031900 | `9H6tua7jkLhdm3w8BvgpTn5LZNU7g4ZynDmCiNN3q6Rp` | HumidiFi (self)   |
| DAT_ram_00031980 | `TokenkegQfeZyiNwAJbNbGKPFXCWuBvf9Ss623VQ5DA`  | SPL Token         |
| DAT_ram_00031a00 | `TokenzQdBNbEquvqME7m4oVWZHs9qj3LM6MtMTbW3Hi`  | Token-2022        |

The 32-byte big-endian block at 0x31940 is also compared in the discriminator chain — likely Jupiter or DFlow program ID.

### State Account XOR-mask constants (price fields)

Values stored at state offsets 0x53–0x58, 0x64, 0x6f appear to be XOR-masked with:
- `0x46a912eb23798bd9` (state[0x54])
- `0xb957ed15dc877426` (state[0x53])
- `0x6e9de2b30b19f9ea` (state[0x55,0x56])
- `0x6e9de2b30b19f1ea` (state[0x57,0x58])
- `0xd3198133b7c1776c` (state[0x64])
- `0x504156a22548f8dd` (state[0x6f])

These are the "oracle price commit" fields — raw price/tick values XOR-masked when written.
