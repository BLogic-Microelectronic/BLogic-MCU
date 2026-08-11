#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# gen_flash_image.py - QSPI flash imaji uretir
# ============================================
# Bootloader iki bolge okur:
#   0x0000_0000  firmware        -> Instr SRAM
#   0x0001_0000  YZ agirliklari  -> AI SRAM
# Flash modeli ve gercek cihaz BAYT/satir hex bekler; firmware ve
# ai_sram_init.hex WORD/satir formatindadir. Donusum burada yapilir.
import argparse, pathlib, sys

AI_FLASH_OFF   = 0x10000   # bootloader.S icindeki AI_SRC ile ayni olmali
DATA_FLASH_OFF = 0x08000   # bootloader.S icindeki DATA_SRC ile ayni olmali
DATA_MAX       = 0x02000   # DSRAM 8 KB (bootloader DATA_WORDS ile ayni)

def read_hex(path):
    toks = [l.strip() for l in pathlib.Path(path).read_text().split() if l.strip()]
    if not toks:
        return bytearray()
    width = max(len(t) for t in toks)
    out = bytearray()
    for t in toks:
        v = int(t, 16)
        if width <= 2:
            out.append(v & 0xFF)
        else:
            out += v.to_bytes(4, "little")
    return out

ap = argparse.ArgumentParser()
ap.add_argument("--fw", required=True)
ap.add_argument("--data", default=None)
ap.add_argument("--ai", default="sw/ai_model/golden_vectors/ai_sram_init.hex")
ap.add_argument("--out", required=True)
a = ap.parse_args()

fw = read_hex(a.fw)
if len(fw) > DATA_FLASH_OFF:
    sys.exit(f"firmware {len(fw)} bayt, veri bolgesine ({DATA_FLASH_OFF:#x}) tasiyor")
img = bytearray(fw) + bytearray(DATA_FLASH_OFF - len(fw))

data = read_hex(a.data) if a.data else bytearray()
if len(data) > DATA_MAX:
    sys.exit(f"veri bolgesi {len(data)} bayt, DSRAM sinirini ({DATA_MAX:#x}) asiyor")
img += bytearray(data) + bytearray(AI_FLASH_OFF - DATA_FLASH_OFF - len(data))
print(f"[+] veri {len(data)} bayt @{DATA_FLASH_OFF:#x} -> DSRAM (bootloader kopyalar)")

ai_path = pathlib.Path(a.ai)
if ai_path.exists():
    ai = read_hex(ai_path)
    img += ai
    print(f"[+] firmware {len(fw)} bayt @0x0 · YZ agirligi {len(ai)} bayt @{AI_FLASH_OFF:#x}")
else:
    print(f"[!] {ai_path} yok - YZ bolgesi bos; hizlandirici CALISMAZ")
    print( "[!] once: python3 sw/ai_model/generate_ai_sram_init.py")

pathlib.Path(a.out).write_text("\n".join(f"{b:02x}" for b in img) + "\n")
print(f"[+] {a.out}: {len(img)} bayt")
