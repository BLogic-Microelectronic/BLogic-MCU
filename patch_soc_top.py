#!/usr/bin/env python3
"""
soc_top.sv'de Data SRAM'in INIT_FILE parametresini gunceller.
Kullanim: python3 patch_soc_top.py
"""
import sys

path = "rtl/core/cv32e40p/rtl/soc_top.sv"
try:
    t = open(path).read()
except FileNotFoundError:
    print(f"HATA: {path} bulunamadi. blogic-mcu dizininden calistir.")
    sys.exit(1)

old = '.INIT_FILE      ( "" )                  // Başlangıçta sıfır'
new = '.INIT_FILE      ( "data_mem.hex" )      // .rodata + .data'

if old in t:
    t = t.replace(old, new, 1)  # sadece ilk eslesen (data_sram)
    open(path, 'w').write(t)
    print(f"OK: Data SRAM INIT_FILE -> data_mem.hex")
else:
    # Belki zaten degistirilmis veya bosluk farki var
    if 'data_mem.hex' in t:
        print("Zaten guncel, degisiklik gerekmiyor.")
    else:
        print(f"UYARI: Beklenen satir bulunamadi. {path} dosyasini elle duzenle:")
        print(f'  Data SRAM instance\'indaki .INIT_FILE("") satirini .INIT_FILE("data_mem.hex") yap')
        sys.exit(1)
