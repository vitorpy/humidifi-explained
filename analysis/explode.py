#!/usr/bin/env python3
"""
analysis/explode.py — Phase A: Split humidifi_decompiled_renamed.c into
per-function files under humidifi.exploded/

Each file is named <fn_name>.c and contains the single function with its
Ghidra comment header preserved.

Usage:
    python3 analysis/explode.py [--input <c_file>] [--output <dir>]
"""

import argparse
import re
from pathlib import Path

BASE_DIR = Path(__file__).parent.parent
DEFAULT_INPUT = BASE_DIR / "humidifi_decompiled_renamed.c"
DEFAULT_OUTPUT = BASE_DIR / "humidifi.exploded"

HEADER_RE = re.compile(r"^/\* ---- (.+?) @ (0x[0-9a-f]+) ---- \*/")


def split_functions(c_text: str) -> list[tuple[str, str, str]]:
    """
    Returns list of (name, address_hex, full_c_text_for_function).
    """
    lines = c_text.split("\n")
    functions: list[tuple[str, str, str]] = []
    current_name = None
    current_addr = None
    current_lines: list[str] = []

    # Collect file header (before first function)
    file_header_lines: list[str] = []
    in_header = True

    for line in lines:
        m = HEADER_RE.match(line)
        if m:
            if in_header:
                in_header = False
            elif current_name is not None:
                functions.append((current_name, current_addr, "\n".join(current_lines).rstrip()))
            current_name = m.group(1)
            current_addr = m.group(2)
            current_lines = [line]
        elif in_header:
            file_header_lines.append(line)
        else:
            current_lines.append(line)

    if current_name is not None:
        functions.append((current_name, current_addr, "\n".join(current_lines).rstrip()))

    return "\n".join(file_header_lines), functions


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", default=str(DEFAULT_INPUT))
    parser.add_argument("--output", default=str(DEFAULT_OUTPUT))
    args = parser.parse_args()

    input_path = Path(args.input)
    output_dir = Path(args.output)

    print(f"Input:  {input_path}")
    print(f"Output: {output_dir}")

    if not input_path.exists():
        print(f"ERROR: input file not found: {input_path}")
        return 1

    output_dir.mkdir(exist_ok=True)

    c_text = input_path.read_text()
    file_header, functions = split_functions(c_text)

    print(f"Found {len(functions)} functions")

    # Write index
    index_lines = [f"/* index of {len(functions)} functions from {input_path.name} */\n"]
    for name, addr, _ in functions:
        index_lines.append(f"/* {addr}  {name} */")
    (output_dir / "_index.txt").write_text("\n".join(index_lines))

    # Write per-function files
    written = 0
    for name, addr, text in functions:
        # Safe filename (replace / and spaces)
        safe_name = re.sub(r"[^\w_]", "_", name)
        out_file = output_dir / f"{safe_name}.c"
        header = (
            f"/* Function: {name}\n"
            f" * Address:  {addr}\n"
            f" * Source:   {input_path.name}\n"
            f" */\n"
        )
        out_file.write_text(header + "\n" + text + "\n")
        written += 1

    print(f"Written {written} files to {output_dir}/")
    print(f"Index:  {output_dir}/_index.txt")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
