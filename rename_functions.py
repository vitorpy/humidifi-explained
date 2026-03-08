#!/usr/bin/env python3
"""
rename_functions.py — Map Ghidra FUN_ram_XXXXXXXX names to fn_XXXX labels
from humidifi_annotated.asm.

Address formula: ghidra_addr = fn_offset + 0x120  (ELF .text base offset)

Produces: humidifi_decompiled_renamed.c
"""

import re
import sys
from pathlib import Path

BASE_DIR = Path(__file__).parent
ANNOTATED_ASM = BASE_DIR / "humidifi_annotated.asm"
DECOMPILED_C = BASE_DIR / "humidifi_decompiled.c"
OUTPUT_C = BASE_DIR / "humidifi_decompiled_renamed.c"

# ELF .text base offset (bytes before first instruction in the ELF file)
TEXT_BASE = 0x120


def parse_fn_labels(asm_path: Path) -> dict[str, str]:
    """
    Returns mapping: ghidra_name → preferred_name
    e.g. "FUN_ram_00000148" → "fn_0028"
    Also captures named annotations like "fn_15e8  →  sol_log_"
    """
    mapping: dict[str, str] = {}
    annotation_re = re.compile(
        r"^(fn_[0-9a-f]+):.*?;\s*→+\s*(.+)$"
    )
    label_re = re.compile(r"^(fn_[0-9a-f]+):")

    with open(asm_path) as f:
        for line in f:
            line = line.rstrip()

            # Check for annotated name (syscall wrapper, etc.)
            m = annotation_re.match(line)
            if m:
                fn_label = m.group(1)        # e.g. fn_15e8
                # Strip arrow depth indicators (→ → → →) to get just the name
                raw = m.group(2).strip()
                annotation_tmp = re.sub(r"^[\u2192\s]+", "", raw).strip().rstrip("_")
                annotation = annotation_tmp.replace(" ", "_")  # e.g. sol_log
                # Convert fn_XXXX → numeric offset
                offset = int(fn_label[3:], 16)
                ghidra_addr = offset + TEXT_BASE
                ghidra_name = f"FUN_ram_{ghidra_addr:08x}"
                preferred = f"{fn_label}__{annotation}"
                mapping[ghidra_name] = preferred
                continue

            m = label_re.match(line)
            if m:
                fn_label = m.group(1)
                offset = int(fn_label[3:], 16)
                ghidra_addr = offset + TEXT_BASE
                ghidra_name = f"FUN_ram_{ghidra_addr:08x}"
                if ghidra_name not in mapping:
                    mapping[ghidra_name] = fn_label

    return mapping


def build_full_mapping(asm_mapping: dict[str, str], c_text: str) -> dict[str, str]:
    """
    Find all FUN_ram_XXXXXXXX names in the C text that don't appear in the
    asm mapping (Ghidra may have found additional functions) and keep them
    as-is (or map to fn_XXXX by address arithmetic).
    """
    full = dict(asm_mapping)
    # Find any FUN_ram_ names in C not covered by asm
    found = set(re.findall(r"FUN_ram_[0-9a-f]+", c_text))
    for name in found:
        if name not in full:
            # Derive fn_XXXX from address
            addr = int(name[8:], 16)  # strip "FUN_ram_"
            offset = addr - TEXT_BASE
            full[name] = f"fn_{offset:04x}"
    return full


def apply_mapping(c_text: str, mapping: dict[str, str]) -> str:
    """Replace all FUN_ram_XXXXXXXX occurrences with their mapped names."""
    # Sort longest first to avoid partial matches
    for ghidra_name, preferred in sorted(mapping.items(), key=lambda x: -len(x[0])):
        c_text = c_text.replace(ghidra_name, preferred)
    return c_text


def main():
    print(f"Parsing annotated asm: {ANNOTATED_ASM}")
    asm_mapping = parse_fn_labels(ANNOTATED_ASM)
    print(f"  Found {len(asm_mapping)} fn_ labels in asm")

    print(f"Reading decompiled C: {DECOMPILED_C}")
    c_text = DECOMPILED_C.read_text()

    print("Building full mapping (including Ghidra-only functions)...")
    full_mapping = build_full_mapping(asm_mapping, c_text)
    print(f"  Total functions to rename: {len(full_mapping)}")

    # Report what we're renaming
    annotated = [(k, v) for k, v in full_mapping.items() if "__" in v]
    plain = [(k, v) for k, v in full_mapping.items() if "__" not in v]
    print(f"  With syscall annotations: {len(annotated)}")
    print(f"  Plain fn_XXXX renames:    {len(plain)}")

    print("Applying renames...")
    renamed = apply_mapping(c_text, full_mapping)

    OUTPUT_C.write_text(renamed)
    print(f"Written: {OUTPUT_C}")

    # Verify entrypoint preserved
    if "entrypoint" in renamed:
        print("  [OK] entrypoint function preserved")

    # Spot-check a few
    for ghidra_name, preferred in list(full_mapping.items())[:3]:
        if preferred in renamed:
            print(f"  [OK] {ghidra_name} → {preferred}")
        else:
            print(f"  [MISS] {ghidra_name} → {preferred}")

    # Print mapping summary
    print("\nMapping summary (first 20):")
    for k, v in sorted(full_mapping.items())[:20]:
        print(f"  {k}  →  {v}")


if __name__ == "__main__":
    main()
