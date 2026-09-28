#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# elf2hex.py  -  ELF binary'den readmemh hex
# ============================================
import sys
import struct

def main():
    if len(sys.argv) < 3:
        print("Kullanım: python3 elf2hex.py <input.bin> <output.hex> [base_addr] [mem_size]")
        print("")
        print("Basit mod (tüm dosyayı word'lere böl):")
        print("  python3 elf2hex.py build/test.bin build/test_mem.hex")
        print("")
        print("Gelişmiş mod (belirli adres aralığını çıkar):")
        print("  python3 elf2hex.py build/test.bin build/instr.hex 0x10000 8192")
        sys.exit(1)

    in_file  = sys.argv[1]
    out_file = sys.argv[2]
    base_addr = int(sys.argv[3], 0) if len(sys.argv) > 3 else 0
    mem_size  = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0

    with open(in_file, 'rb') as f:
        data = f.read()

    print(f"Girdi: {in_file} ({len(data)} bytes)")

    if mem_size == 0:
        # basit mod: tüm dosyayı çevir
        num_words = (len(data) + 3) // 4
        with open(out_file, 'w') as f:
            for i in range(num_words):
                chunk = data[i*4 : i*4+4]
                chunk = chunk.ljust(4, b'\x00')
                word = struct.unpack('<I', chunk)[0]
                f.write(f'{word:08X}\n')
        print(f"Çıktı: {out_file} ({num_words} words)")
    else:
        # gelişmiş mod: bellek boyutu kadar sıfır doldur
        num_words = mem_size // 4
        with open(out_file, 'w') as f:
            for i in range(num_words):
                addr = base_addr + i * 4
                bin_offset = addr
                if 0 <= bin_offset < len(data) and bin_offset + 4 <= len(data):
                    chunk = data[bin_offset : bin_offset+4]
                    word = struct.unpack('<I', chunk)[0]
                else:
                    word = 0
                f.write(f'{word:08X}\n')
        print(f"Çıktı: {out_file} ({num_words} words, base=0x{base_addr:08X})")

    print("Tamamlandı!")

if __name__ == '__main__':
    main()
