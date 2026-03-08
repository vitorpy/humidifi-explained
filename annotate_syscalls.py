#!/usr/bin/env python3
"""
annotate_syscalls.py — Annotate a blueshift sbpf disassembly with syscall names.

Strategy:
  1. Parse agave syscalls/src/lib.rs to extract all registered syscall names
     and compute their murmur3_32 hashes (useful for v3/static-hash programs).
  2. Parse the ELF binary's .rel.dyn section to map byte offsets in .text
     (R_BPF_64_32 relocations) to syscall symbol names.
  3. Convert those offsets to fn_XXXX labels (the format used by sbpf disassemble).
  4. Read the disassembly and:
       a. Add a "; syscall: <name>" comment after any `call fn_XXXX` where
          fn_XXXX is a syscall stub.
       b. Add a "; <name>" comment after any fn_XXXX: label that is a syscall stub.
       c. Output the annotated disassembly.

Usage:
    python3 annotate_syscalls.py [--elf <binary>] [--asm <disassembly>] [--agave <path>]
                                 [--out <output>]
"""

import re
import struct
import sys
import argparse
from pathlib import Path


# ---------------------------------------------------------------------------
# Murmur3 32-bit hash (matches agave/sbpf implementation exactly)
# ---------------------------------------------------------------------------

def murmur3_32(s: str) -> int:
    buf = s.encode()
    h = 0
    c1 = 0xcc9e2d51
    c2 = 0x1b873593

    def pre_mix(b4: bytes) -> int:
        x = struct.unpack_from('<I', b4)[0]
        x = (x * c1) & 0xFFFFFFFF
        x = ((x << 15) | (x >> 17)) & 0xFFFFFFFF
        x = (x * c2) & 0xFFFFFFFF
        return x

    i = 0
    while i < len(buf) // 4:
        chunk = buf[i*4 : i*4 + 4]
        h ^= pre_mix(chunk)
        h = ((h << 13) | (h >> 19)) & 0xFFFFFFFF
        h = (h * 5 + 0xe6546b64) & 0xFFFFFFFF
        i += 1

    remainder = len(buf) % 4
    if remainder == 1:
        h ^= pre_mix(bytes([buf[i*4], 0, 0, 0]))
    elif remainder == 2:
        h ^= pre_mix(bytes([buf[i*4], buf[i*4+1], 0, 0]))
    elif remainder == 3:
        h ^= pre_mix(bytes([buf[i*4], buf[i*4+1], buf[i*4+2], 0]))

    h ^= len(buf)
    h ^= (h >> 16)
    h = (h * 0x85ebca6b) & 0xFFFFFFFF
    h ^= (h >> 13)
    h = (h * 0xc2b2ae35) & 0xFFFFFFFF
    h ^= (h >> 16)
    return h


# ---------------------------------------------------------------------------
# Parse syscall names from agave syscalls/src/lib.rs
# ---------------------------------------------------------------------------

def parse_agave_syscalls(agave_path: Path) -> list[str]:
    lib_rs = agave_path / "syscalls" / "src" / "lib.rs"
    if not lib_rs.exists():
        print(f"[warn] agave lib.rs not found at {lib_rs}", file=sys.stderr)
        return []

    text = lib_rs.read_text()
    # Match: result.register_function("sol_log_", ...)
    #    and the macro variant: "sol_blake3",
    names = re.findall(r'register_function\(\s*"([^"]+)"', text)
    return list(dict.fromkeys(names))  # preserve order, deduplicate


# ---------------------------------------------------------------------------
# Parse ELF binary: extract R_BPF_64_32 relocations → {offset_in_text: sym_name}
# ---------------------------------------------------------------------------

def parse_elf_syscalls(elf_path: Path) -> dict[int, str]:
    """
    Returns a dict mapping byte offset within .text → syscall symbol name.
    Only R_BPF_64_32 (0x0a) relocation entries are considered.
    """
    data = elf_path.read_bytes()

    def u64(off): return struct.unpack_from('<Q', data, off)[0]
    def u32(off): return struct.unpack_from('<I', data, off)[0]
    def u16(off): return struct.unpack_from('<H', data, off)[0]

    e_shoff     = u64(0x28)
    e_shentsize = u16(0x3A)
    e_shnum     = u16(0x3C)
    e_shstrndx  = u16(0x3E)

    # Read section name string table
    shstr_entry = e_shoff + e_shstrndx * e_shentsize
    shstr_off  = u64(shstr_entry + 24)
    shstr_size = u64(shstr_entry + 32)
    shstrtab   = data[shstr_off : shstr_off + shstr_size]

    sections = {}
    for i in range(e_shnum):
        sh = e_shoff + i * e_shentsize
        name_idx  = u32(sh)
        name      = shstrtab[name_idx:].split(b'\x00')[0].decode('utf-8', errors='replace')
        sh_addr   = u64(sh + 16)
        sh_offset = u64(sh + 24)
        sh_size   = u64(sh + 32)
        sections[name] = {'addr': sh_addr, 'offset': sh_offset, 'size': sh_size}

    if '.text' not in sections or '.rel.dyn' not in sections:
        print("[warn] Missing .text or .rel.dyn section", file=sys.stderr)
        return {}

    text_addr    = sections['.text']['addr']
    reldyn_off   = sections['.rel.dyn']['offset']
    reldyn_size  = sections['.rel.dyn']['size']

    # Read .dynsym and .dynstr for symbol resolution
    dynsym_off  = sections.get('.dynsym', {}).get('offset', 0)
    dynstr_off  = sections.get('.dynstr', {}).get('offset', 0)
    dynstr_size = sections.get('.dynstr', {}).get('size', 0)
    dynstr      = data[dynstr_off : dynstr_off + dynstr_size]

    DYNSYM_ENTRY_SIZE = 24

    def resolve_sym(sym_idx: int) -> str | None:
        entry_off = dynsym_off + sym_idx * DYNSYM_ENTRY_SIZE
        if entry_off + 4 > len(data):
            return None
        name_idx = u32(entry_off)
        if name_idx >= len(dynstr):
            return None
        return dynstr[name_idx:].split(b'\x00')[0].decode('utf-8', errors='replace') or None

    R_BPF_64_32 = 0x0a
    result = {}

    for i in range(reldyn_size // 16):
        chunk_off = reldyn_off + i * 16
        rel_addr  = u64(chunk_off)
        rel_type  = u32(chunk_off + 8)
        sym_idx   = u32(chunk_off + 12)

        if rel_type != R_BPF_64_32:
            continue

        sym_name = resolve_sym(sym_idx)
        if not sym_name:
            continue

        # Offset within .text
        offset_in_text = rel_addr - text_addr
        result[offset_in_text] = sym_name

    return result


# ---------------------------------------------------------------------------
# Build fn_XXXX label → syscall name mapping
# ---------------------------------------------------------------------------

def build_label_map(syscall_offsets: dict[int, str]) -> dict[str, str]:
    """Maps 'fn_XXXX' label string → syscall name."""
    return {f"fn_{off:04x}": name for off, name in syscall_offsets.items()}


# ---------------------------------------------------------------------------
# Build call graph from disassembly: fn_XXXX → set of targets called
# ---------------------------------------------------------------------------

def build_call_graph(asm_text: str) -> dict[str, set[str]]:
    """
    Returns {fn_label: {target_label, ...}} for every internal call
    (call fn_XXXX) found inside each function block.
    Also captures direct syscall names (call sol_xxx_).
    """
    call_re  = re.compile(r'^\s+call\s+(fn_[0-9a-f]+)\s*$')
    syscall_re = re.compile(r'^\s+call\s+([a-z][a-z0-9_]+)\s*$')  # non-fn_ calls
    fn_re    = re.compile(r'^(fn_[0-9a-f]+):')

    graph: dict[str, set[str]] = {}
    current_fn: str | None = None

    for line in asm_text.splitlines():
        m_fn = fn_re.match(line)
        if m_fn:
            current_fn = m_fn.group(1)
            graph.setdefault(current_fn, set())
            continue

        if current_fn is None:
            continue

        m_call = call_re.match(line)
        if m_call:
            graph[current_fn].add(m_call.group(1))
            continue

        m_sys = syscall_re.match(line)
        if m_sys:
            name = m_sys.group(1)
            if name not in ('exit', 'ja', 'jmp'):
                graph[current_fn].add(name)  # direct syscall name as a "node"

    return graph


def propagate_syscall_names(
    label_map: dict[str, str],
    call_graph: dict[str, set[str]],
    max_depth: int = 6,
) -> dict[str, str]:
    """
    Extend label_map by transitively following the call graph.
    A fn_XXXX that calls only one unique syscall (directly or indirectly)
    inherits that syscall name as a wrapper annotation.
    Returns an extended copy of label_map.
    """
    extended = dict(label_map)
    changed = True
    depth = 0

    while changed and depth < max_depth:
        changed = False
        depth += 1
        for fn, targets in call_graph.items():
            if fn in extended:
                continue
            # Resolve targets to their syscall names if known
            resolved: set[str] = set()
            for t in targets:
                if t in extended:
                    resolved.add(extended[t])
                elif t in label_map:
                    resolved.add(label_map[t])
                elif not t.startswith('fn_'):
                    # Already-resolved direct syscall name (e.g. sol_memcpy_)
                    resolved.add(t)
            # If all targets resolve to the same single syscall, annotate this fn
            if len(resolved) == 1:
                extended[fn] = f"→ {next(iter(resolved))}"
                changed = True

    return extended


# ---------------------------------------------------------------------------
# Annotate the disassembly
# ---------------------------------------------------------------------------

def annotate(asm_text: str, label_map: dict[str, str]) -> str:
    lines = asm_text.splitlines()
    out = []

    # Pattern: "  call fn_XXXX"
    call_re = re.compile(r'^(\s+call\s+(fn_[0-9a-f]+))\s*$')
    # Pattern: "fn_XXXX:" (possibly with jmp_XXXX: on same or adjacent line)
    label_re = re.compile(r'^(fn_([0-9a-f]+)):')

    for line in lines:
        m_call = call_re.match(line)
        m_label = label_re.match(line)

        if m_call:
            target = m_call.group(2)
            if target in label_map:
                line = f"{m_call.group(1)}  ; {label_map[target]}"
        elif m_label:
            fn_label = m_label.group(1)
            if fn_label in label_map:
                line = f"{line}  ; {label_map[fn_label]}"

        out.append(line)

    return "\n".join(out) + "\n"


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description="Annotate sbpf disassembly with syscall names")
    parser.add_argument("--elf",   default="humidifi.so",   help="Path to .so binary")
    parser.add_argument("--asm",   default="humidifi.asm",  help="Path to disassembly")
    parser.add_argument("--agave", default=str(Path.home() / "code" / "agave"),
                        help="Path to agave source tree")
    parser.add_argument("--out",   default="humidifi_annotated.asm",
                        help="Output annotated disassembly path")
    parser.add_argument("--show-syscall-table", action="store_true",
                        help="Print the syscall name→hash table and exit")
    args = parser.parse_args()

    agave_path = Path(args.agave)

    # 1. Parse syscall names from agave
    agave_syscalls = parse_agave_syscalls(agave_path)
    if agave_syscalls:
        print(f"[+] Found {len(agave_syscalls)} syscalls in agave:")
    else:
        print("[!] No syscalls found in agave (using empty list)")

    # 2. Compute murmur3 hashes
    hash_table: dict[str, int] = {}
    for name in agave_syscalls:
        h = murmur3_32(name)
        hash_table[name] = h
        print(f"    0x{h:08x}  {name}")

    if args.show_syscall_table:
        return

    # 3. Parse ELF for syscall positions (R_BPF_64_32 relocations)
    elf_path = Path(args.elf)
    syscall_offsets = parse_elf_syscalls(elf_path)
    print(f"\n[+] Found {len(syscall_offsets)} syscall call sites in {elf_path.name} (.rel.dyn):")
    for off, name in sorted(syscall_offsets.items()):
        print(f"    text+0x{off:06x}  fn_{off:04x}  →  {name}")

    # 4. Build fn_XXXX → name map (direct syscall stubs)
    label_map = build_label_map(syscall_offsets)

    # 5. Read disassembly and build call graph, then propagate names to wrappers
    asm_path = Path(args.asm)
    asm_text = asm_path.read_text()

    call_graph = build_call_graph(asm_text)
    label_map = propagate_syscall_names(label_map, call_graph)

    wrapper_count = sum(1 for v in label_map.values() if v.startswith("→"))
    print(f"[+] Propagated syscall names to {wrapper_count} wrapper functions")

    # 6. Annotate disassembly
    annotated = annotate(asm_text, label_map)

    out_path = Path(args.out)
    out_path.write_text(annotated)

    # Count annotations made
    n_call  = sum(1 for line in annotated.splitlines()
                  if re.match(r'^\s+call fn_.*; ', line))
    n_label = sum(1 for line in annotated.splitlines()
                  if re.match(r'^fn_[0-9a-f]+:.*; ', line))
    print(f"\n[+] Wrote {out_path} ({n_call} call sites annotated, {n_label} fn labels annotated)")


if __name__ == "__main__":
    main()
