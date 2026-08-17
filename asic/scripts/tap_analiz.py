#!/usr/bin/env python3
"""nwell.4 ihlallerinin gercek tap eksikliginden mi geldigini olcer.

Yontem:
  1. DEF'ten tap hucrelerinin (tapvpwrvgnd / tap*) konumlari cikarilir.
  2. Magic DRC raporundan nwell.4 isaret dikdortgenleri okunur.
  3. Her isaretin merkezine EN YAKIN tap hucresinin mesafesi hesaplanir.
  4. sky130'da latch-up/tap kurali icin tipik ust sinir ~15 um'dir; isaretlerin
     yaninda tap VARSA sorun geometri degil Magic'in baglanti cozumlemesidir.
Kullanim: python3 tap_analiz.py <asic_top.def> <drc.magic.rpt>
"""
import re
import sys
from bisect import bisect_left

DEF = sys.argv[1]
RPT = sys.argv[2]

# ---------- 1) DEF: tap hucreleri ----------
# DEF COMPONENTS satiri: - <inst> <maka> + PLACED ( x y ) N ;
KOMP = re.compile(r"^\s*-\s+(\S+)\s+(\S+)")
YER = re.compile(r"\(\s*(-?\d+)\s+(-?\d+)\s*\)")
taplar = []
tum_hucre = 0
icinde = False
birikim = ""
with open(DEF, errors="ignore") as fh:
    for ln in fh:
        s = ln.strip()
        if s.startswith("COMPONENTS"):
            icinde = True
            continue
        if s.startswith("END COMPONENTS"):
            break
        if not icinde:
            continue
        birikim += " " + s
        if ";" not in s:
            continue
        kayit, birikim = birikim, ""
        m = KOMP.match(kayit.strip())
        if not m:
            continue
        tum_hucre += 1
        maka = m.group(2)
        if "tap" not in maka.lower():
            continue
        p = YER.search(kayit)
        if p:
            taplar.append((int(p.group(1)), int(p.group(2))))

print("DEF hucre kaydi        : %d" % tum_hucre)
print("tap hucresi            : %d" % len(taplar))
if not taplar:
    sys.exit("tap hucresi bulunamadi - makro adi deseni farkli olabilir")

# DEF birimi: genelde 1000 dbu/um
BIRIM = 1000.0
# hizli arama icin y'ye gore grupla (satir yuksekligi ~2.72 um)
from collections import defaultdict
satir = defaultdict(list)
for x, y in taplar:
    satir[round(y / BIRIM / 2.72)].append(x / BIRIM)
for k in satir:
    satir[k].sort()
print("tap iceren satir sayisi: %d" % len(satir))

# ---------- 2) ihlal isaretleri ----------
KOORD = re.compile(r"^\s*(-?[\d.]+)um\s+(-?[\d.]+)um\s+(-?[\d.]+)um\s+(-?[\d.]+)um\s*$")
isaret = []
for ln in open(RPT):
    m = KOORD.match(ln)
    if m:
        x1, y1, x2, y2 = (float(v) for v in m.groups())
        isaret.append(((x1 + x2) / 2, (y1 + y2) / 2, x1, x2))
print("nwell.4 isareti        : %d" % len(isaret))

# ---------- 3) en yakin tap mesafesi ----------
def en_yakin(cx, cy):
    k = round(cy / 2.72)
    en = None
    for dk in (0, -1, 1, -2, 2):
        xs = satir.get(k + dk)
        if not xs:
            continue
        i = bisect_left(xs, cx)
        for j in (i - 1, i):
            if 0 <= j < len(xs):
                d = abs(xs[j] - cx)
                if en is None or d < en:
                    en = d
    return en

mesafeler = []
tapsiz_satir = 0
for cx, cy, x1, x2 in isaret:
    d = en_yakin(cx, cy)
    if d is None:
        tapsiz_satir += 1
    else:
        mesafeler.append(d)

mesafeler.sort()
print()
print("=== ISARET BASINA EN YAKIN TAP MESAFESI (um) ===")
if mesafeler:
    n = len(mesafeler)
    print("  olculen isaret : %d" % n)
    print("  min / medyan / maks : %.2f / %.2f / %.2f"
          % (mesafeler[0], mesafeler[n // 2], mesafeler[-1]))
    for esik in (5, 10, 15, 20, 30):
        alt = sum(1 for d in mesafeler if d <= esik)
        print("  <= %2d um icinde tap var : %d  (%.1f%%)" % (esik, alt, 100.0 * alt / n))
print("  ayni/komsu satirda HIC tap olmayan isaret : %d" % tapsiz_satir)
print()
if mesafeler and mesafeler[n // 2] <= 15:
    print("YORUM: isaretlerin cogunun yakininda tap VAR -> geometri eksikligi degil,")
    print("       Magic'in tap BAGLANTISINI cozememesi one cikan aciklamadir.")
else:
    print("YORUM: isaretlerin yakininda tap YOK -> gercek tap/latch-up eksikligi")
    print("       olasiligi yuksek; tapcell yapilandirmasi gozden gecirilmeli.")
