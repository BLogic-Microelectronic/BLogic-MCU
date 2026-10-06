#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# gen_boot_flow.py  -  boot akis semasi PNG uretir
# ============================================
"""BLogic MCU boot akis semasi - PNG."""
import os, math
from PIL import Image, ImageDraw, ImageFont

def find_font(bold=False):
    for c in ["/usr/share/fonts/truetype/dejavu/DejaVuSans%s.ttf" % ("-Bold" if bold else ""),
              "/usr/share/fonts/truetype/liberation/LiberationSans%s.ttf" % ("-Bold" if bold else "-Regular")]:
        if os.path.exists(c):
            return c
    return None
REG = find_font(False); BLD = find_font(True) or REG
def F(sz, bold=False):
    p = BLD if bold else REG
    return ImageFont.truetype(p, sz) if p else ImageFont.load_default()

SCALE = 2
W, H = 1160*SCALE, 1340*SCALE
img = Image.new("RGB", (W, H), "white")
d = ImageDraw.Draw(img)
def s(v): return int(v*SCALE)
def text(x, y, txt, font, fill="#111", anchor="la"):
    d.text((s(x), s(y)), txt, font=font, fill=fill, anchor=anchor)

def rrect(x0, y0, x1, y1, fill, outline="#3a3a3a", w=2, radius=12):
    d.rounded_rectangle([s(x0), s(y0), s(x1), s(y1)], radius=s(radius), fill=fill, outline=outline, width=s(w))

def cell(x0, y0, x1, y1, fill, items, outline="#3a3a3a", w=2, radius=12):
    rrect(x0, y0, x1, y1, fill, outline, w, radius)
    cx = (x0+x1)/2
    hs = [sz+9 for (_, sz, _, _) in items]
    cy = (y0+y1)/2 - sum(hs)/2
    for (txt, sz, bold, col), h in zip(items, hs):
        text(cx, cy + h/2, txt, F(sz, bold), fill=col, anchor="mm")
        cy += h

def diamond(cx, cy, hw, hh, fill, outline="#7a6a1a", w=2):
    d.polygon([(s(cx), s(cy-hh)), (s(cx+hw), s(cy)), (s(cx), s(cy+hh)), (s(cx-hw), s(cy))],
              fill=fill, outline=outline)
    # kalin kenar
    pts = [(s(cx), s(cy-hh)), (s(cx+hw), s(cy)), (s(cx), s(cy+hh)), (s(cx-hw), s(cy)), (s(cx), s(cy-hh))]
    d.line(pts, fill=outline, width=s(w))

def arrow(x0, y0, x1, y1, color="#222", w=3, head=12):
    d.line([(s(x0), s(y0)), (s(x1), s(y1))], fill=color, width=s(w))
    ang = math.atan2(y1-y0, x1-x0)
    for a in (ang+math.radians(152), ang-math.radians(152)):
        d.line([(s(x1), s(y1)), (s(x1+head*math.cos(a)), s(y1+head*math.sin(a)))], fill=color, width=s(w))

def polyline_arrow(pts, color="#3a7", w=3, head=12):
    sp = [(s(x), s(y)) for x, y in pts]
    d.line(sp, fill=color, width=s(w))
    (x0, y0), (x1, y1) = pts[-2], pts[-1]
    ang = math.atan2(y1-y0, x1-x0)
    for a in (ang+math.radians(152), ang-math.radians(152)):
        d.line([(s(x1), s(y1)), (s(x1+head*math.cos(a)), s(y1+head*math.sin(a)))], fill=color, width=s(w))

C_TERM="#C6E0B4"; C_PROC="#BDD7EE"; C_DEC="#FFE699"; C_LOOP="#E7D8F2"
LX0, LX1 = 190, 560
cx = (LX0+LX1)/2

text(W/SCALE/2, 28, "BLogic MCU – Boot (Açılış) Akış Şeması", F(34, True), fill="#1a2a4a", anchor="ma")
text(W/SCALE/2, 70, "Boot ROM bootloader → QSPI flash'tan Instruction SRAM'e kopyalama → uygulamaya atlama",
     F(18), fill="#666", anchor="ma")

# baslangic
rrect(LX0+60, 110, LX1-60, 168, C_TERM, radius=29)
text(cx, 139, "BAŞLA  /  Reset", F(23, True), anchor="mm")
arrow(cx, 168, cx, 200)
# boot rom getir
cell(LX0, 200, LX1, 272, C_PROC, [("Reset → CPU 0x0000_0000'dan getirir", 19, True, "#111"),
                                  ("(Boot ROM içindeki bootloader)", 16, False, "#555")])
arrow(cx, 272, cx, 304)
# qspi ayar
cell(LX0, 304, LX1, 400, C_PROC, [("QSPI yapılandır  (base 0x4000_0500)", 19, True, "#111"),
                                  ("hedef = Instr SRAM 0x0001_0000 ; kaynak = flash 0", 15, False, "#444"),
                                  ("sayaç = 2048 sözcük  (8 KB)", 16, False, "#444")])
arrow(cx, 400, cx, 432)
# warm-up
cell(LX0, 432, LX1, 504, C_PROC, [("Warm-up: 1 adet dummy QSPI okuması", 18, True, "#111"),
                                  ("(STARTUPE2/CCLK ilk kenarlarını soğurur)", 15, False, "#555")])
arrow(cx, 504, cx, 552)

# karar baklavasi
dcy = 620
diamond(cx, dcy, 150, 68, C_DEC)
text(cx, dcy-12, "Kalan sözcük", F(19, True), anchor="mm")
text(cx, dcy+14, "t3 > 0 ?", F(20, True), fill="#7a5a00", anchor="mm")

# Evet: dongu govdesine
arrow(cx+150, dcy, 690, dcy)
text((cx+150+690)/2, dcy-16, "Evet", F(19, True), fill="#1a6a1a", anchor="mm")

# dongu govdesi
RX0, RX1 = 690, 1120
rrect(RX0, 528, RX1, 712, C_LOOP, outline="#7a5a9a", w=2)
text((RX0+RX1)/2, 552, "Bir sözcüğü kopyala:", F(20, True), fill="#4a2a6a", anchor="mm")
loop_lines = [
    "• QSPI_ADR  ← flash adresi (t2)",
    "• QSPI_CCR  ← 0x08030103  (READ 0x03, x1, 4 bayt)",
    "• QSPI_STA.done bekle  (poll)",
    "• QSPI_DR oku (4 bayt) → Instr SRAM'e yaz (t1)",
    "• t1 += 4 ;   t2 += 4 ;   t3 −−",
]
for i, t in enumerate(loop_lines):
    text(RX0+22, 588 + i*25, t, F(16, True), fill="#222", anchor="lm")

# geri donus oku
polyline_arrow([(902, 528), (902, 510), (cx, 510), (cx, 553)], color="#1a8a3a", w=3)
text(645, 500, "↺ sonraki sözcük", F(16, True), fill="#1a8a3a", anchor="rm")

# Hayir: asagi devam
arrow(cx, dcy+68, cx, 728)
text(cx+16, (dcy+68+728)/2, "Hayır", F(19, True), fill="#a33", anchor="lm")

# fence ve atlama
cell(LX0, 728, LX1, 802, C_PROC, [("fence.i", 19, True, "#111"),
                                  ("jr 0x0001_0000   (Instruction SRAM'e atla)", 17, True, "#1a3a6a")])
arrow(cx, 802, cx, 834)
# crt0
cell(LX0, 834, LX1, 930, C_PROC, [("crt0.S başlangıç kodu:", 19, True, "#111"),
                                  ("sp = 0x0002_2000 (Data SRAM tepesi)", 16, False, "#444"),
                                  (".bss temizle  →  main() çağır", 16, False, "#444")])
arrow(cx, 930, cx, 962)
# uygulama
rrect(LX0+40, 962, LX1-40, 1024, C_TERM, radius=30)
text(cx, 993, "UYGULAMA ÇALIŞIR", F(22, True), fill="#1a4a1a", anchor="mm")

# lejant
ly = 1080
text(LX0, ly, "CCR = 0x08030103  →  instr=0x03 (flash READ) · data_mode=x1 · 3-bayt adres · 4 veri baytı · prescaler=4",
     F(17), fill="#555", anchor="lm")
text(LX0, ly+30, "Toplam 8 KB = 2048 sözcük flash ofset 0'dan 0x0001_0000'a kopyalanır.  Kaynak: sw/bootloader/bootloader.S",
     F(17), fill="#555", anchor="lm")
# lejant kutulari
lx = LX0; lyy = ly+70
for col, lab in [(C_PROC, "İşlem"), (C_DEC, "Karar"), (C_LOOP, "Döngü gövdesi"), (C_TERM, "Başlangıç/Bitiş")]:
    rrect(lx, lyy, lx+34, lyy+24, col); text(lx+44, lyy+12, lab, F(16), fill="#444", anchor="lm")
    lx += 260

out = img.resize((W//SCALE, H//SCALE), Image.LANCZOS)
out.save("images/boot_flow.png", dpi=(200, 200))
print("WRITTEN: images/boot_flow.png", out.size)
