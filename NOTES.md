# HumidiFi Onchain Explainer - Notes

## Program Info

- **Program Name:** HumidiFi
- **Program ID:** `9H6tua7jkLhdm3w8BvgpTn5LZNU7g4ZynDmCiNN3q6Rp`
- **Network:** Solana Mainnet
- **Binary:** `humidifi.so` (210K, ELF 64-bit sBPF shared object, stripped)
- **Downloaded:** 2026-03-07 using `solana program dump`

## What is HumidiFi?

HumidiFi is Solana's largest proprietary AMM (Prop AMM / "dark pool" DEX). Key characteristics:

- Uses **proprietary capital** (no user deposits) for liquidity
- Pricing intelligence is **off-chain**, settlement is **on-chain**
- Achieves CEX-like spreads via on-chain programs
- Routes through aggregators like Jupiter
- ~$8M TVL processing $500M–$1B+ daily volume (~35% of Solana DEX activity)
- Launched June 2024; became #1 prop AMM by August 2024

## Token

- **WET** (`WETcX1wAahwVbuJ9HihE8Uwf3dwmJBojGphAZPSVpJP`)
- Fixed supply: 1 billion; 10% sold publicly via Jupiter DTF

## Transactions Used for Analysis

| Transaction | Description | Source |
|---|---|---|
| `4ETAPnvRJt6PTRbkZuvAxDVE567YZzZsLPDiGozeE5PjTRk7Xj6gKozu1JSaYxUNYKh4xop5tV8K4e9mjmPyZUNx` | Oracle price update — demonstrates HumidiFi's optimized compute usage (143 CUs). Cost ~$0.001784 (9,998 lamports). | [Helius blog](https://www.helius.dev/blog/solanas-proprietary-amm-revolution) |

## Disassembly & Tooling

- **Disassembler:** `sbpf` v0.1.8 from `https://github.com/blueshift-gg/sbpf`
  - Install: `cargo install --git https://github.com/blueshift-gg/sbpf.git`
  - Run: `sbpf disassemble humidifi.so > humidifi.asm`
  - Output: `humidifi.asm` (28,670 lines, 121 functions)

- **Annotator:** `annotate_syscalls.py`
  - Parses syscall names from `~/code/agave/syscalls/src/lib.rs`
  - Computes murmur3_32 hashes for each (used by v3/static-hash programs)
  - Parses `.rel.dyn` (R_BPF_64_32 entries) from the ELF to map text offsets → syscall names
  - Propagates names transitively through wrapper call chains
  - Output: `humidifi_annotated.asm` (242 call sites annotated, 56 fn labels)
  - Run: `python3 annotate_syscalls.py`

### Syscalls used by HumidiFi (from .rel.dyn)

| Syscall | Count | Notes |
|---|---|---|
| `sol_invoke_signed_c` | 10 | CPI — core trading logic |
| `sol_log_` | 4 | Logging |
| `sol_try_find_program_address` | 2 | PDA derivation |
| `sol_sha256` | 2 | Hashing |
| `sol_memcmp_` | 2 | Memory compare |
| `sol_get_last_restart_slot` | 2 | Slot check |
| `sol_log_data` | 1 | Event emission |
| `sol_memcpy_` | 1 | Memory copy |
| `sol_memmove_` | 1 | Memory move |
| `sol_memset_` | 1 | Memory set |
| `custom_panic` | 1 | Panic handler |
| `abort` | 1 | Abort |

### ELF Structure

- Format: sBPF v1 (e_flags=0x0, e_machine=0x107), ELF relocations (not v3 static hashes)
- Sections: `.text` (0x317d0 bytes), `.rodata`, `.data.rel.ro`, `.rel.dyn` (325 entries, 27 syscall calls)
- All sh_addr == sh_offset (flat layout)

## Ghidra Decompilation

### Setup
- **Ghidra:** v12.0.4 DEV at `/opt/ghidra`
- **Plugin:** blastrock/Solana-eBPF-for-Ghidra — patched and built for Ghidra 12 (`eBPF_ElfRelocationConstants` → integer literals to match renamed `eBPF_ElfRelocationType` enum)
  - Installed to `~/.config/ghidra/ghidra_12.0.4_DEV/Extensions/Solana-eBPF-for-Ghidra/`
  - Language ID used: `eBPFSol:LE:64:default`
  - Adds `Solana syscall ID` analyzer pass (annotates syscall call sites automatically)
- **Headless script:** `ExportDecompiled.java`
- **Run command:**
  ```bash
  mkdir -p /tmp/ghidra_humidifi_proj
  /opt/ghidra/support/analyzeHeadless /tmp/ghidra_humidifi_proj GhidraHumidifi \
      -import humidifi.so \
      -processor "eBPFSol:LE:64:default" -cspec default \
      -postScript ExportDecompiled.java \
      -scriptPath /home/vitorpy/src/humidfi-explained \
      -log /tmp/ghidra_humidifi.log -overwrite
  ```

### Output files
| File | Description |
|------|-------------|
| `humidifi_decompiled.c` | Raw Ghidra C pseudocode (18,469 lines, 148 functions + 1 EXTERNAL stub error) |
| `humidifi_decompiled_renamed.c` | Names mapped: `FUN_ram_XXXXXXXX` → `fn_XXXX` (+ syscall annotations) |
| `humidifi.exploded/` | Per-function `.c` files (148 files) from Phase A of restoration |
| `rename_functions.py` | Address mapping script (`ghidra_addr − 0x120 = fn_offset`) |
| `analysis/explode.py` | Phase A split script |

### Address Mapping Formula
```
ghidra_addr − 0x120 = fn_offset
e.g. FUN_ram_00000148 − 0x120 = 0x0028 → fn_0028
```

### Observations
- Ghidra recognized `entrypoint` by name (Solana plugin)
- Plugin automatically added entrypoint Solana documentation comment
- `Solana syscall ID` analyzer annotated syscall call sites
- No `halt_baddata`, `unaff_gp`, or CONCAT44 artifacts (sBPF, not MIPS)
- Main artifacts: `undefined8`/`ulonglong`/`longlong` types, `LAB_ram_` goto labels, `DAT_ram_` data refs
- 1 decompile error: EXTERNAL block stub (`ram:00035040`) — expected, it's an ELF EXTERNAL section entry

## Reverse Engineering Findings

Key discoveries from decompilation and rodata analysis. See `docs/archaeology.md` for full details.

### Source Structure
```
contract/src/{lib,arith,instructions,ops,stateupdate,pubkey}.rs
contract/src/routers/{dflow,jupiter}.rs
```

### Build Info
- **Git hash**: `29937fbbc34fdb29c508e7d736dbbbc637e7979f` (embedded in rodata at 0x3200d0)

### Instruction Routing
Custom discriminator (not Anchor): `(last_byte XOR (len-1)>>3 XOR 0x3a) & 0xff`, clamped to 24 values.
Account program address constants verified inline before routing.

### Notable Features
- **"poolv1"** — pool version prefix in error strings
- **"disabled ixn"** kill switch in `contract/src/lib.rs`
- **Emoji logging** (`fn_25ee0`): sea-creature "humidi-meter" scales 🦐→🐋→🐉 with trade size
- **bytemuck** for zero-copy deserialization; **arrayvec** for fixed-capacity buffers
- Routers: **DFlow** and **Jupiter** aggregator integrations

## Resources

- [Helius: Solana's Proprietary AMM Revolution](https://www.helius.dev/blog/solanas-proprietary-amm-revolution)
- [DefiLlama: HumidiFi](https://defillama.com/protocol/humidifi)
- [Solscan AMM page](https://solscan.io/amm/humidifi)
- [HumidiFi official site](https://www.humidifi.xyz)
- [BingX explainer](https://bingx.com/en/learn/article/what-is-humidifi-wet-solana-prop-amm-how-does-it-work)
- [Solana Compass deep-dive](https://solanacompass.com/learn/Lightspeed/how-humidifi-became-solanas-largest-prop-amm)

## Instruction Dispatcher — Complete Mapping

See `docs/archaeology.md` for full details. Summary of the 25 discriminator slots (0x00–0x18):

| Disc | Handler | Function |
|------|---------|----------|
| 0x00 | `fn_9700` | Oracle price update / main trade (program ID verified) |
| 0x02 | `fn_7ab8` | Swap/quote variant |
| 0x03 | `fn_8068` | Account validation / fill |
| 0x04 | `fn_db48` | Requires >8 accounts, 24-byte data |
| 0x05 | `fn_11c18` | — |
| 0x06 | inline | Oracle registration / program ID check → state[0x56] |
| 0x07 | `fn_124a8` | — |
| 0x09 | `fn_12a18` | — |
| 0x0a | inline | Oracle price commit → state[0x53..0x58,0x64,0x6f] |
| 0x0b | inline | Pool init: set initial value, stage → 4 |
| 0x0c | panic | **Kill-switched** ("disabled ixn") |
| 0x0d | inline | Oracle price update (alternate path) |
| 0x0e | `fn_a740` | DFlow router CPI (program ID verified) |
| 0x0f | `fn_f8d0` | Requires ≥12 accounts |
| 0x10 | `fn_db48` | Requires >9 accounts |
| 0x12 | inline | Pool init 4→5: reveal authority pubkey |
| 0x13 | inline | Pool init 5→6: fee/config values |
| 0x14 | `fn_113b8` | — |
| 0x15 | inline | Pool init 6→7: 10-element price tick array |
| 0x16 | inline | Pool init 7→8: spread/fee params |
| 0x17 | inline | Pool init: set trading mode byte |

**XOR decrypt key**: `0xc3ebbae2ff2fff3a` (most instructions except 0x00, 0x06, 0x0d, 0x0e)

**Pool init state machine**: `state[0xe2]` tracks stages 0→4→5→6→7→8+ via discs 0x0b,0x12,0x13,0x15,0x16,0x17
