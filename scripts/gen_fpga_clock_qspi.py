#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# gen_fpga_clock_qspi.py  -  FPGA saat/reset ve QSPI gorseli
# ============================================
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
W, H = 1500*SCALE, 1140*SCALE
img = Image.new("RGB", (W, H), "white")
d = ImageDraw.Draw(img)
def s(v): return int(v*SCALE)

def box(x0, y0, x1, y1, fill, outline="#3a3a3a", w=2, radius=10):
    d.rounded_rectangle([s(x0), s(y0), s(x1), s(y1)], radius=s(radius), fill=fill, outline=outline, width=s(w))
def text(x, y, txt, font, fill="#111", anchor="la"):
    d.text((s(x), s(y)), txt, font=font, fill=fill, anchor=anchor)

def cell(x0, y0, x1, y1, fill, items, outline="#3a3a3a", w=2):
    """items: list of (txt, size, bold, color). Dikey ortalanmis."""
    box(x0, y0, x1, y1, fill, outline, w)
    cx = (x0+x1)/2
    hs = [sz+9 for (_, sz, _, _) in items]
    total = sum(hs)
    cy = (y0+y1)/2 - total/2
    for (txt, sz, bold, col), h in zip(items, hs):
        text(cx, cy + h/2, txt, F(sz, bold), fill=col, anchor="mm")
        cy += h

def arrow(x0, y0, x1, y1, color="#222", w=3, head=11, two=False):
    d.line([(s(x0), s(y0)), (s(x1), s(y1))], fill=color, width=s(w))
    def ah(px, py, ang):
        for a in (ang+math.radians(152), ang-math.radians(152)):
            d.line([(s(px), s(py)), (s(px+head*math.cos(a)), s(py+head*math.sin(a)))], fill=color, width=s(w))
    ah(x1, y1, math.atan2(y1-y0, x1-x0))
    if two:
        ah(x0, y0, math.atan2(y0-y1, x0-x1))

C_CLK="#BDD7EE"; C_MMCM="#9DC3E6"; C_RST="#C6E0B4"; C_SOC="#E6E0F0"
C_SU="#D9C2E9"; C_IO="#E7D8F2"; C_FL="#F8CBAD"; C_NOTE="#FFF2CC"

# baslik
text(W/SCALE/2, 30, "BLogic MCU – FPGA Saat/Reset ve QSPI (STARTUPE2) Mimarisi", F(34, True), fill="#1a2a4a", anchor="ma")

# saat ve reset bolumu
text(60, 92, "1)  Saat Üretimi ve Reset  (fpga_top)", F(26, True), fill="#2b4a6b", anchor="la")

# saat hatti
cy = 200
cell(55, cy-38, 285, cy+38, C_CLK, [("sysclk_p / sysclk_n", 21, True, "#111"),
                                    ("200 MHz LVDS", 18, False, "#444"),
                                    ("(AD12 / AD11)", 16, False, "#777")])
arrow(285, cy, 330, cy)
cell(330, cy-32, 460, cy+32, C_CLK, [("IBUFDS", 22, True, "#111")])
arrow(460, cy, 505, cy)
cell(505, cy-58, 795, cy+58, C_MMCM, [("MMCME2_BASE", 23, True, "#111"),
                                      ("×5  →  VCO 1000 MHz", 18, False, "#333"),
                                      ("÷20  →  50 MHz  (DIVCLK ÷1)", 18, False, "#333")])
arrow(795, cy, 840, cy)
cell(840, cy-32, 970, cy+32, C_CLK, [("BUFG", 22, True, "#111")])
text(1015, cy-14, "clk_50", F(19, True), fill="#1a5a1a", anchor="ma")
text(1015, cy+8, "(50 MHz)", F(16, False), fill="#1a5a1a", anchor="ma")
arrow(970, cy, 1065, cy)

# soc_top (sag, yuksek kutu)
cell(1065, 150, 1330, 420, C_SOC, [("soc_top", 27, True, "#111"),
                                   ("(kart-bağımsız RTL)", 18, False, "#555"),
                                   ("", 6, False, "#555"),
                                   (".clk_i  = 50 MHz", 19, True, "#1a5a1a"),
                                   (".rst_ni", 19, True, "#7a3a1a")], outline="#555", w=3)

# reset satiri
ry = 350
cell(55, ry-36, 285, ry+36, C_RST, [("cpu_resetn", 21, True, "#111"),
                                    ("buton (R19), active-low", 16, False, "#555")])
# AND
cell(330, ry-32, 440, ry+32, "#FCE4A6", [("AND", 22, True, "#111")])
arrow(285, ry, 330, ry)
# mmcm_locked -> AND (MMCM altindan)
arrow(650, 258, 650, 310); arrow(650, 310, 385, 310); arrow(385, 310, 385, ry-32)
text(660, 300, "mmcm_locked", F(16, True), fill="#2b4a6b", anchor="lm")
# sync
cell(490, ry-44, 835, ry+44, C_RST, [("Reset Senkronizatörü", 21, True, "#111"),
                                     ("2-FF @ clk_50", 17, False, "#333"),
                                     ("async-assert / sync-release", 16, False, "#555")])
arrow(440, ry, 490, ry)
text(940, ry-14, "rst_sync_n", F(18, True), fill="#7a3a1a", anchor="ma")
arrow(835, ry, 1065, ry)

# ayirici cizgi
d.line([(s(40), s(470)), (s(1460), s(470))], fill="#cccccc", width=s(2))

# qspi bolumu
text(60, 488, "2)  QSPI Flash Arayüzü – STARTUPE2  (fpga_top)", F(26, True), fill="#2b4a6b", anchor="la")

# soc_top QSPI cikislari
sx0, sy0, sx1, sy1 = 55, 560, 360, 845
box(sx0, sy0, sx1, sy1, C_SOC, outline="#555", w=3)
text((sx0+sx1)/2, sy0+30, "soc_top", F(24, True), fill="#111", anchor="mm")
text((sx0+sx1)/2, sy0+58, "(QSPI Master çıkışları)", F(16, False), fill="#555", anchor="mm")
qsig = ["• qspi_sclk_o", "• qspi_csn_o", "• qspi_io_o[3:0] / oe[3:0]", "• qspi_io_i[3:0]"]
for i, t in enumerate(qsig):
    text(sx0+22, sy0+100 + i*42, t, F(19, True), fill="#222", anchor="lm")

# STARTUPE2
cell(470, 575, 770, 665, C_SU, [("STARTUPE2", 22, True, "#111"),
                                (".USRCCLKO(qspi_sclk)", 16, False, "#444"),
                                (".USRCCLKTS(1'b0)", 15, False, "#777")])
# IOBUF x4
cell(470, 720, 770, 815, C_IO, [("Tristate IOBUF × 4", 21, True, "#111"),
                                ("QSPI_D[i] = oe ? o : Z", 16, False, "#444")])

# Flash
fx0, fy0, fx1, fy1 = 880, 575, 1330, 845
box(fx0, fy0, fx1, fy1, C_FL, outline="#7a4a1a", w=3)
text((fx0+fx1)/2, fy0+34, "S25FL256S", F(25, True), fill="#111", anchor="mm")
text((fx0+fx1)/2, fy0+64, "256 Mbit  QSPI Flash (kart üzeri)", F(16, False), fill="#555", anchor="mm")
fpins = ["SCLK  ◄─ CCLK", "CS#    ◄─ U19", "IO0..IO3 ◄─► D[3:0]", "          (P24/R25/R20/R21)"]
for i, t in enumerate(fpins):
    text(fx0+28, fy0+108 + i*40, t, F(18, True), fill="#222", anchor="lm")

# oklar: sclk -> STARTUPE2 -> flash
arrow(sx1, 600, 470, 615)
text((sx1+470)/2, 588, "qspi_sclk_o", F(15, True), fill="#5b3a7a", anchor="mm")
arrow(770, 620, 880, 640)
text((770+880)/2, 606, "CCLK", F(16, True), fill="#5b3a7a", anchor="mm")
# csn -> flash (direkt, alt yol)
arrow(sx1, 660, 880, 690)
text(((sx1+880)/2), 648, "qspi_csn_o → CS# (U19)", F(15, True), fill="#7a3a1a", anchor="mm")
# io <-> IOBUF <-> flash
arrow(sx1, 770, 470, 760, two=True)
text((sx1+470)/2, 745, "io_o/oe/i", F(15, True), fill="#5b3a7a", anchor="mm")
arrow(770, 765, 880, 760, two=True)
text((770+880)/2, 746, "QSPI_D[3:0]", F(15, True), fill="#5b3a7a", anchor="mm")

# not kutusu
nx0, ny0, nx1, ny1 = 55, 900, 1330, 1035
box(nx0, ny0, nx1, ny1, C_NOTE, outline="#bfa23a", w=2)
text(nx0+20, ny0+18, "Not:", F(20, True), fill="#7a5a00", anchor="la")
notes = [
 "• CCLK ayrılmış konfigürasyon pinidir; normal kullanıcı IO'suna bağlanamaz → SCLK yalnızca STARTUPE2/USRCCLKO ile sürülür.",
 "• Konfigürasyon sonrası ilk 3 USRCCLKO kenarı CCLK'ye yansımaz; bu yüzden bootloader ilk gerçek flash okumasından önce",
 "   bir 'warm-up' (dummy) okuması yapar.",
 "• ASIC akışında bu gerekmez: SCLK normal bir pad olur, STARTUPE2 kullanılmaz (FPGA'ya özgü fark).",
]
for i, t in enumerate(notes):
    text(nx0+90 if i == 0 else nx0+24, ny0+18 + i*28, t, F(17, False), fill="#5a4400", anchor="la")

out = img.resize((W//SCALE, H//SCALE), Image.LANCZOS)
out.save("images/fpga_clock_qspi.png", dpi=(200, 200))
print("YAZILDI: images/fpga_clock_qspi.png", out.size)
