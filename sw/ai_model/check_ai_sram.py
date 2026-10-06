#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# Gonderilen cerceve ile AI SRAM'e ulasan veriyi karsilastir.
# "Kac bayt yerine ulasti, nerede bozuldu" sorusunun cevabi.
# DUZELTME (13 Agu): [8:-4] dilim varsayimi 8 baytlik 0xFF preamble'la
# kiriliyordu (make_uart_frame.py:105) ve kisa dump'ta IndexError ile
# cokuyordu; Makefile'daki '|| true' cokusu yutuyordu -> karsilastirma
# hic yapilmadan yesil. Artik cerceve ALANLARDAN ayristirilir (magic ara,
# len oku, cercevenin kendi saglamasi dogrulanir); uzunluk uyusmazligi
# acik FAIL'dir; cikis kodu kapidir.
import struct, sys

MAGIC = b"BLG1"
cerceve = open(sys.argv[1], "rb").read()
m = cerceve.find(MAGIC)
print("=== AI SRAM input region comparison ===")
if m < 0:
    print(">>> ERROR: no BLG1 header in the frame"); sys.exit(2)
(ln,) = struct.unpack_from("<I", cerceve, m + 4)
beklenen = cerceve[m + 8 : m + 8 + ln]
(chk,) = struct.unpack_from("<I", cerceve, m + 8 + ln)
print("frame    : preamble=%d, data=%d bytes, checksum=0x%08X" % (m, ln, chk))
if len(beklenen) != ln or (sum(beklenen) & 0xFFFFFFFF) != chk:
    print(">>> ERROR: frame is internally inconsistent (length/checksum)"); sys.exit(2)

gercek = bytearray()
for satir in open(sys.argv[2]):
    s = satir.strip()
    if s:
        gercek += struct.pack("<I", int(s, 16))
gercek = bytes(gercek)

if len(gercek) < len(beklenen):
    print("dump     : %d bytes (expected %d), SHORT" % (len(gercek), len(beklenen)))
n = min(len(beklenen), len(gercek))
ilk = next((i for i in range(n) if gercek[i] != beklenen[i]), None)
esit = sum(1 for i in range(n) if gercek[i] == beklenen[i])
if ilk is None and n == len(beklenen):
    print(">>> FULL MATCH: %d/%d bytes arrived" % (n, len(beklenen)))
    sys.exit(0)
print("matching : %d / %d bytes" % (esit, len(beklenen)))
print("1st diff : %s" % ("byte %d" % ilk if ilk is not None else "none (dump is short)"))
if ilk is not None:
    a = max(0, ilk - 4)
    print("  expected[%d:%d] = %s" % (a, ilk + 8, list(beklenen[a:ilk + 8])))
    print("  actual  [%d:%d] = %s" % (a, ilk + 8, list(gercek[a:ilk + 8])))
if ilk == 0 and esit < 50:
    print(">>> Nothing arrived: header sync failed")
else:
    print(">>> Stream broke at byte %s" % (ilk if ilk is not None else n))
sys.exit(1)
