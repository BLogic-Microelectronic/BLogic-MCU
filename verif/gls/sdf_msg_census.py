#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# sdf_msg_census.py  -  Questa SDF annotasyon mesajlarinin hucre tipine gore sayimi
# ============================================
# Questa "vsim-SDF-NNNNN) <sdf>(<satir>)" bicimindeki her uyariyi, SDF'te o
# satirin ait oldugu (CELLTYPE "...") blogu ile eslestirir. Amac: annote
# edilemeyen her girdinin nereden geldigini kanitla gostermek (ornegin yalniz
# zamanlama modeli olmayan SRAM makrolari mi).
#
#   python3 verif/gls/sdf_msg_census.py <vsim.log> <tasarim.sdf>
import collections
import re
import sys

log, sdf = sys.argv[1], sys.argv[2]
msg_re = re.compile(r"\((vsim-SDF-\d+)\) [^(]*\((\d+)\): (.*)$")
wanted = collections.defaultdict(list)          # sdf satiri -> [(kimlik, metin)]
texts = {}
for line in open(log, errors="replace"):
    m = msg_re.search(line)
    if m:
        wanted[int(m.group(2))].append(m.group(1))
        texts.setdefault(m.group(1), m.group(3).strip())

count = collections.Counter()
celltype = "?"
with open(sdf, errors="replace") as f:
    for n, line in enumerate(f, 1):
        if "(CELLTYPE" in line:
            celltype = line.split('"')[1]
        if n in wanted:
            for mid in wanted[n]:
                count[(mid, celltype)] += 1

for mid in sorted(texts):
    print("%s: %s" % (mid, texts[mid]))
print()
for (mid, ct), c in sorted(count.items()):
    print("%-16s %-40s %6d" % (mid, ct, c))
