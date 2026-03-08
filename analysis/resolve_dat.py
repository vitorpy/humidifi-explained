#!/usr/bin/env python3
"""
analysis/resolve_dat.py — Phase B (sBPF): Resolve DAT_ram_XXXXXXXX references
in humidifi_decompiled_renamed.c to their actual rodata/data content.

Produces:
  - docs/dat_map.txt     — address → content table
  - humidifi_decompiled_dat_resolved.c  — C file with DAT_ comments inline

Usage:
    python3 analysis/resolve_dat.py [--annotate]
"""

import re
import struct
import argparse
from pathlib import Path

BASE_DIR = Path(__file__).parent.parent
BINARY = BASE_DIR / "humidifi.so"
INPUT_C = BASE_DIR / "humidifi_decompiled_renamed.c"
OUTPUT_C = BASE_DIR / "humidifi_decompiled_dat_resolved.c"
DAT_MAP_TXT = BASE_DIR / "docs" / "dat_map.txt"

# ELF sections (from readelf -S)
SECTIONS = [
    # name, file_offset, vaddr, size
    (".text",         0x120,    0x120,    0x317d0),
    (".rodata",       0x318f0,  0x318f0,  0xbc7),
    (".data.rel.ro",  0x324b8,  0x324b8,  0x730),
    (".dynamic",      0x32be8,  0x32be8,  0xb0),
    (".dynsym",       0x32c98,  0x32c98,  0x168),
    (".dynstr",       0x32e00,  0x32e00,  0xc5),
]


def vaddr_to_file_offset(vaddr: int) -> int | None:
    for _, foff, va, size in SECTIONS:
        if va <= vaddr < va + size:
            return foff + (vaddr - va)
    return None


def read_bytes_at(data: bytes, vaddr: int, n: int = 64) -> bytes | None:
    foff = vaddr_to_file_offset(vaddr)
    if foff is None:
        return None
    return data[foff:foff + n]


def section_name(vaddr: int) -> str:
    for name, _, va, size in SECTIONS:
        if va <= vaddr < va + size:
            return name
    return "?"


def read_rust_str(data: bytes, ptr: int, length: int) -> str | None:
    """Read a Rust &str from .rodata given ptr and length."""
    if length == 0 or length > 4096:
        return None
    foff = vaddr_to_file_offset(ptr)
    if foff is None:
        return None
    raw = data[foff:foff + length]
    try:
        return raw.decode("utf-8")
    except UnicodeDecodeError:
        return None


def decode_content(data_file: bytes, raw: bytes, vaddr: int) -> str:
    """Try to interpret raw bytes: Rust &str fat ptr, null-terminated string, pointer, or hex."""
    sec = section_name(vaddr)

    # .data.rel.ro: try Rust &str fat pointer (ptr: u64, len: u64)
    # sBPF split-pointer format: the pointer address lives in bytes 4-7 (high u32 of first u64)
    if sec == ".data.rel.ro" and len(raw) >= 16:
        ptr = struct.unpack_from("<I", raw, 4)[0]   # bytes 4-7: rodata address
        length = struct.unpack_from("<Q", raw, 8)[0]  # bytes 8-15: string length
        if 0x318f0 <= ptr < 0x324b8 and 0 < length <= 512:
            s = read_rust_str(data_file, ptr, length)
            if s is not None:
                printable = s.replace("\n", "\\n").replace("\r", "\\r")
                return f'&str "{printable}" (len={length})'

    # Try null-terminated UTF-8 string (in .rodata)
    try:
        null = raw.index(0)
        text = raw[:null].decode("utf-8")
        if len(text) >= 2 and all(c.isprintable() or c in "\t\n\r" for c in text):
            return f'"{text}"'
    except (ValueError, UnicodeDecodeError):
        pass

    # Try 8-byte little-endian pointer into binary
    if len(raw) >= 8:
        ptr = struct.unpack_from("<Q", raw)[0]
        if 0x120 <= ptr < 0x34360:
            ptr_sec = section_name(ptr)
            return f"ptr→0x{ptr:x} ({ptr_sec})"

    # Hex dump (first 16 bytes)
    hex_part = " ".join(f"{b:02x}" for b in raw[:16])
    return f"hex: {hex_part}"


def extract_dat_refs(c_text: str) -> list[int]:
    """Return sorted list of unique DAT_ram_ addresses found in C text."""
    found = set(re.findall(r"DAT_ram_([0-9a-f]+)", c_text))
    return sorted(int(h, 16) for h in found)


def build_dat_map(data: bytes, addrs: list[int]) -> dict[int, str]:
    result = {}
    for addr in addrs:
        raw = read_bytes_at(data, addr, 64)
        if raw is None:
            result[addr] = "<out of section>"
        else:
            result[addr] = decode_content(data, raw, addr)
    return result


def annotate_c(c_text: str, dat_map: dict[int, str]) -> str:
    """Add inline /* = ... */ comments after each DAT_ram_ reference."""
    def replacer(m):
        addr = int(m.group(1), 16)
        content = dat_map.get(addr, "?")
        sec = section_name(addr)
        short = content[:80] + "..." if len(content) > 80 else content
        return f"DAT_ram_{m.group(1)} /* {sec}: {short} */"

    return re.sub(r"DAT_ram_([0-9a-f]+)", replacer, c_text)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--annotate", action="store_true",
                        help="Write annotated C file (adds inline comments)")
    args = parser.parse_args()

    data = BINARY.read_bytes()
    c_text = INPUT_C.read_text()

    addrs = extract_dat_refs(c_text)
    print(f"Found {len(addrs)} unique DAT_ram_ addresses")

    dat_map = build_dat_map(data, addrs)

    # Write docs/dat_map.txt
    DAT_MAP_TXT.parent.mkdir(exist_ok=True)
    with open(DAT_MAP_TXT, "w") as f:
        f.write(f"# DAT_ram_ address map for humidifi.so\n")
        f.write(f"# {len(addrs)} unique addresses\n\n")
        for addr, content in sorted(dat_map.items()):
            sec = section_name(addr)
            f.write(f"0x{addr:08x}  [{sec:15s}]  {content}\n")
    print(f"Written: {DAT_MAP_TXT}")

    if args.annotate:
        annotated = annotate_c(c_text, dat_map)
        OUTPUT_C.write_text(annotated)
        print(f"Written: {OUTPUT_C}")

    # Print summary
    print("\nDAT address map:")
    for addr, content in sorted(dat_map.items()):
        sec = section_name(addr)
        short = content[:70] + "..." if len(content) > 70 else content
        print(f"  0x{addr:08x}  [{sec:15s}]  {short}")


if __name__ == "__main__":
    main()
