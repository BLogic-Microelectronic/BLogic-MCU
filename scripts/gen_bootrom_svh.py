#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# gen_bootrom_svh.py - bootrom.hex -> sentezlenebilir case icerigi
# ============================================
# Boot ROM icerigi sabittir; SRAM makrosu yerine mantiga sentezlenir.
# Tek kaynak: bootrom.hex. Bootloader degisince `make bootrom` ile yenilenir.
import pathlib, sys

src = pathlib.Path("bootrom.hex")
dst = pathlib.Path("rtl/asic/bootrom_content.svh")
words = [l.strip() for l in src.read_text().split() if l.strip()]
if not words:
    sys.exit("bootrom.hex bos")

lines = ["// OTOMATIK URETILDI - elle duzenlemeyin",
         f"// Kaynak: bootrom.hex ({len(words)} word)",
         "// Uretici: scripts/gen_bootrom_svh.py", ""]
for i, w in enumerate(words):
    lines.append(f"    {i}: rom_word = 32'h{w.lower()};")
dst.parent.mkdir(parents=True, exist_ok=True)
dst.write_text("\n".join(lines) + "\n")
print(f"[+] {dst} ({len(words)} word)")
