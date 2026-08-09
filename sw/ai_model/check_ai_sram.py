#!/usr/bin/env python3
# Gonderilen cerceve ile AI SRAM'e ulasan veriyi karsilastir.
# "Kac bayt yerine ulasti, nerede bozuldu" sorusunun cevabi.
import struct, sys

cerceve = open(sys.argv[1], "rb").read()
beklenen = cerceve[8:-4]                      # BLG1 + uzunluk[4] ... saglama[4]

gercek = bytearray()
for satir in open(sys.argv[2]):
    s = satir.strip()
    if s:
        gercek += struct.pack("<I", int(s, 16))
gercek = bytes(gercek[:len(beklenen)])

print("=== AI SRAM giris bolgesi karsilastirmasi ===")
print("beklenen : %d bayt" % len(beklenen))
if gercek == beklenen:
    print(">>> TAM ESLESME - 1960/1960 bayt yerine ulasti")
    sys.exit(0)

ilk = next((i for i in range(len(beklenen)) if gercek[i] != beklenen[i]), None)
esit = sum(1 for i in range(len(beklenen)) if gercek[i] == beklenen[i])
print("eslesen  : %d / %d bayt" % (esit, len(beklenen)))
print("ilk fark : bayt %s" % (ilk if ilk is not None else "-"))
if ilk is not None:
    a = max(0, ilk - 4)
    print("  beklenen[%d:%d] = %s" % (a, ilk + 8, list(beklenen[a:ilk + 8])))
    print("  gercek  [%d:%d] = %s" % (a, ilk + 8, list(gercek[a:ilk + 8])))
if ilk == 0 and esit < 50:
    print(">>> Hicbir sey ulasmadi: baslik senkronu tutmadi")
else:
    print(">>> Akis %d. baytta koptu" % (ilk if ilk is not None else -1))
sys.exit(1)
