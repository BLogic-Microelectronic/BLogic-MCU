#!/usr/bin/env python3
import argparse
import subprocess
import sys
import tempfile
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description="Convert ELF to Verilog MEM")
    parser.add_argument("--elf", required=True)
    parser.add_argument("--out", required=True)
    parser.add_argument("--objcopy", required=True)
    parser.add_argument("--word-bytes", type=int, default=4)
    parser.add_argument("--endianness", choices=["little", "big"], default="little")
    args = parser.parse_args()

    elf_path = Path(args.elf)
    out_path = Path(args.out)

    if not elf_path.exists():
        raise FileNotFoundError(f"ELF file not found: {elf_path}")

    with tempfile.TemporaryDirectory() as tmpdir:
        bin_path = Path(tmpdir) / "image.bin"

        subprocess.check_call([
            args.objcopy,
            "-O", "binary",
            str(elf_path),
            str(bin_path),
        ])

        data = bin_path.read_bytes()

    rem = len(data) % args.word_bytes
    if rem != 0:
        data += bytes(args.word_bytes - rem)

    with out_path.open("w", encoding="ascii") as f:
        for i in range(0, len(data), args.word_bytes):
            chunk = data[i:i + args.word_bytes]
            value = int.from_bytes(chunk, byteorder=args.endianness, signed=False)
            f.write(f"{value:0{args.word_bytes * 2}x}\n")


if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        sys.exit(1)