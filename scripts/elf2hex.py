#!/usr/bin/env python3
"""
elf2hex.py - ELF binary'den Verilog $readmemh uyumlu hex dosyası oluşturur.

Kullanım:
    python3 elf2hex.py build/test.bin build/instr_mem.hex 0x00010000 8192
    python3 elf2hex.py build/test.bin build/data_mem.hex  0x00020000 8192

Argümanlar:
    input.bin    : riscv32-unknown-elf-objcopy -O binary ile üretilen dosya
    output.hex   : $readmemh ile okunacak hex dosyası
    base_addr    : SRAM'in başlangıç adresi (hex veya decimal)
    mem_size     : SRAM boyutu byte cinsinden
"""
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
        # Basit mod: tüm dosyayı dönüştür
        num_words = (len(data) + 3) // 4
        with open(out_file, 'w') as f:
            for i in range(num_words):
                chunk = data[i*4 : i*4+4]
                # 4 byte'tan küçükse sıfırla doldur
                chunk = chunk.ljust(4, b'\x00')
                word = struct.unpack('<I', chunk)[0]  # Little-endian
                f.write(f'{word:08X}\n')
        print(f"Çıktı: {out_file} ({num_words} words)")
    else:
        # Gelişmiş mod: bellek boyutu kadar sıfırlarla doldur
        num_words = mem_size // 4
        with open(out_file, 'w') as f:
            for i in range(num_words):
                addr = base_addr + i * 4
                # Bu adres binary dosyasının kapsamında mı?
                bin_offset = addr  # Basit mapping (ELF base'e göre ayarla)
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
