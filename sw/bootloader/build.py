#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# build.py  -  bootloader derleyip hex uretir
# ============================================
import os, subprocess, sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
TC = "/opt/riscv-toolchain/bin/riscv32-unknown-elf-"

def run(c):
    print(">>", " ".join(c))
    subprocess.check_call(c)

def main():
    elf = HERE / "bootloader.elf"
    binf = HERE / "bootloader.bin"
    hexf = HERE / "bootrom.hex"

    run([TC+"gcc", "-march=rv32i", "-mabi=ilp32",
         "-nostdlib", "-nostartfiles", "-static",
         "-T", str(HERE/"bootloader.ld"),
         "-o", str(elf), str(HERE/"bootloader.S")])

    run([TC+"objcopy", "-O", "binary", str(elf), str(binf)])

    data = binf.read_bytes()
    if len(data) > 4096:
        sys.exit(f"HATA: bootloader cok buyuk ({len(data)} byte)")
    while len(data) % 4:
        data += b'\x00'

    with open(hexf, "w") as f:
        for i in range(0, len(data), 4):
            w = data[i] | (data[i+1]<<8) | (data[i+2]<<16) | (data[i+3]<<24)
            f.write(f"{w:08x}\n")
    print(f"OK: bootloader {len(data)} byte -> {hexf}")

if __name__ == "__main__":
    main()
