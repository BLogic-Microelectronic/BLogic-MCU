#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ============================================
# Ostim BLogic Mikroelektronik
# gen_memory_map.py  -  adres haritasi gorseli uretir
# ============================================
import os
from PIL import Image, ImageDraw, ImageFont

# font
def find_font(bold=False):
    cands = [
        "/usr/share/fonts/truetype/dejavu/DejaVuSans%s.ttf" % ("-Bold" if bold else ""),
        "/usr/share/fonts/truetype/liberation/LiberationSans%s.ttf" % ("-Bold" if bold else "-Regular"),
    ]
    for c in cands:
        if os.path.exists(c):
            return c
    return None

REG = find_font(False)
BLD = find_font(True) or REG
def F(sz, bold=False):
    p = BLD if bold else REG
    return ImageFont.truetype(p, sz) if p else ImageFont.load_default()

SCALE = 2
W, H = 1500*SCALE, 1000*SCALE
img = Image.new("RGB", (W, H), "white")
d = ImageDraw.Draw(img)

def s(v):
    return int(v*SCALE)

def box(x0, y0, x1, y1, fill, outline="#3a3a3a", w=2, radius=10):
    d.rounded_rectangle([s(x0), s(y0), s(x1), s(y1)], radius=s(radius),
                        fill=fill, outline=outline, width=s(w))

def text(x, y, txt, font, fill="#111111", anchor="la"):
    d.text((s(x), s(y)), txt, font=font, fill=fill, anchor=anchor)

# baslik
text(W/SCALE/2, 36, "BLogic MCU – Sistem Adres Haritası", F(38, True),
     fill="#1a2a4a", anchor="ma")
text(W/SCALE/2, 80, "(ölçekli değildir / not to scale)", F(22), fill="#666", anchor="ma")

fname = F(30, True)
fsize = F(22)
faddr = F(22, True)

# sol kolon: ana bolgeler
LX0, LX1 = 250, 700
regions = [
    ("Çevre Birimleri", "7 × 256 B", "0x4000_0000", "0x4000_06FF", "#D9C2E9"),
    ("AI SRAM", "30 KB", "0x0003_0000", "0x0003_77FF", "#FFE699"),
    ("DATA SRAM", "8 KB", "0x0002_0000", "0x0002_1FFF", "#C6E0B4"),
    ("INSTRUCTION SRAM", "8 KB", "0x0001_0000", "0x0001_1FFF", "#BDD7EE"),
    ("BOOT ROM", "1 KB", "0x0000_0000", "0x0000_03FF", "#F8CBAD"),
]
top = 130
bh = 110
periph_box = None
ys = []
y = top
for i, (name, size, a0, a1, col) in enumerate(regions):
    y0 = y
    y1 = y + bh
    box(LX0, y0, LX1, y1, col)
    cx = (LX0+LX1)/2
    text(cx, (y0+y1)/2 - 16, name, fname, anchor="mm")
    text(cx, (y0+y1)/2 + 20, size, fsize, fill="#444", anchor="mm")
    # adres etiketleri solda
    text(LX0-18, y0+8, a0, faddr, fill="#333", anchor="ra")
    text(LX0-18, y1-8, a1, faddr, fill="#888", anchor="rd")
    if name.startswith("Çevre"):
        periph_box = (LX0, y0, LX1, y1)
    ys.append((y0, y1))
    # cevre ile AI arasindaki bosluk icin zigzag
    if i == 0:
        gy = y1 + 16
        zz_y = gy + 14
        pts = []
        steps = 14
        for k in range(steps+1):
            xx = LX0 + (LX1-LX0)*k/steps
            yy = zz_y + (10 if k % 2 else -10)
            pts.append((s(xx), s(yy)))
        d.line(pts, fill="#999", width=s(2))
        text(LX1+18, zz_y-6, "(kullanılmayan adres boşluğu)", F(18), fill="#999", anchor="lm")
        y = y1 + 56
    else:
        y = y1 + 12

# sag panel: cevre birimleri zoom
RX0, RX1 = 980, 1440
peris = [
    ("UART_0", "0x4000_0000"),
    ("GPIO  (16 giriş + 16 çıkış)", "0x4000_0100"),
    ("Timer", "0x4000_0200"),
    ("UART_1  (akış / DMA)", "0x4000_0300"),
    ("I2C Master", "0x4000_0400"),
    ("QSPI Master", "0x4000_0500"),
    ("YZ Hızlandırıcı  (CSR)", "0x4000_0600"),
]
rtop = 150
rbh = 78
rgap = 8
fper = F(24, True)
faddr2 = F(20, True)
# panel basligi
text((RX0+RX1)/2, rtop-40, "Çevre Birimleri  (taban 0x4000_0000, +0x100)", F(24, True),
     fill="#5b3a7a", anchor="mm")
ry = rtop
zoom_top = ry
for name, addr in peris:
    box(RX0, ry, RX1, ry+rbh, "#EDE3F6", outline="#7a5a9a", w=2, radius=8)
    text(RX0+24, ry+rbh/2, name, fper, anchor="lm")
    text(RX1-18, ry+rbh/2, addr, faddr2, fill="#5b3a7a", anchor="rm")
    ry += rbh + rgap
zoom_bot = ry - rgap

# zoom baglanti cizgileri
px0, py0, px1, py1 = periph_box
d.line([(s(px1), s(py0)), (s(RX0), s(zoom_top))], fill="#9a7ab8", width=s(2))
d.line([(s(px1), s(py1)), (s(RX0), s(zoom_bot))], fill="#9a7ab8", width=s(2))

# alt not
text(60, 940, "Bellek: Boot ROM + Instruction SRAM + Data SRAM + AI SRAM = 47 KB yonga-üzeri   |   "
              "AI SRAM'e erişim AI SRAM Arbiter üzerinden (öncelik: YZ > UART_1 akış > CPU)",
     F(19), fill="#555", anchor="lm")

# kucult ve kaydet
out = img.resize((W//SCALE, H//SCALE), Image.LANCZOS)
png = "images/memory_map.png"
out.save(png, dpi=(200, 200))
print("YAZILDI:", png, out.size)
