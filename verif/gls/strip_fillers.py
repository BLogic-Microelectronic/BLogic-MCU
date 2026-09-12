#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# strip_fillers.py  -  kapi seviyesi benzetim icin netlist hazirligi
# ============================================
# Teslim edilen guc pinli netlistten (asic/results/netlist/asic_top_powered.v.gz)
# yalniz guc pinine bagli, mantigi olmayan fiziksel hucreleri cikarir:
# decap / fill / tapvpwrvgnd. Bunlar 2.56 M ornegin ~2.37 M'sini olusturur ve
# benzetimde hicbir sinyal surmez. Anten diyotlari (diode_2) BIRAKILIR: SDF'teki
# INTERCONNECT girdileri diyot pinlerini adlandirir, cikarilirsa annotasyon
# "ornek bulunamadi" uyarisi uretir. Baska hicbir satir degismez.
#
#   python3 verif/gls/strip_fillers.py asic/results/netlist/asic_top_powered.v.gz out.v
import gzip
import re
import sys

DROP = re.compile(r"^\s*sky130_fd_sc_hd__(decap|fill|tapvpwrvgnd)_\d+\s")


def main(src, dst):
    opener = gzip.open if src.endswith(".gz") else open
    dropped = kept_cells = 0
    skipping = False
    with opener(src, "rt") as f, open(dst, "w", newline="\n") as o:
        for line in f:
            if skipping:
                if line.rstrip().endswith(");"):
                    skipping = False
                continue
            if DROP.match(line):
                dropped += 1
                skipping = not line.rstrip().endswith(");")
                continue
            if re.match(r"^\s*sky130_", line):
                kept_cells += 1
            o.write(line)
    print("cikarilan decap/fill/tap: %d, kalan hucre/makro ornegi: %d" % (dropped, kept_cells))


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
