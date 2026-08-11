#!/usr/bin/env python3
# build/flash.hex (satir basina 1 bayt, metin hex) -> ham binary.
# Kart akisi koprusu: gen_flash_image.py'nin urettigi TAM imaji (fw@0x0 +
# veri@0x8000 + YZ@0x10000) flash_firmware.tcl'in bekledigi .bin'e cevirir.
# Eski objcopy tarifi yalnizca .text yazardi; veri bolgesi flash'a girmezdi.
import sys

if len(sys.argv) != 3:
    sys.exit(f"kullanim: {sys.argv[0]} <girdi.hex> <cikti.bin>")

veri = bytearray()
with open(sys.argv[1]) as fh:
    for num, satir in enumerate(fh, 1):
        s = satir.strip()
        if not s:
            continue
        try:
            veri += bytes.fromhex(s)
        except ValueError:
            sys.exit(f"HATA: {sys.argv[1]}:{num}: hex degil: {s!r}")

with open(sys.argv[2], "wb") as fh:
    fh.write(veri)
print(f"[flash_hex2bin] {sys.argv[2]}: {len(veri)} bayt")
