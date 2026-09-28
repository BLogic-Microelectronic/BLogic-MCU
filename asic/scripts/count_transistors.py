#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

"""Real transistor (MOS gate) count, measured on the delivered GDS.

A MOS transistor exists wherever poly crosses active diffusion, so the
flat count of (poly AND diff) polygons in the final layout IS the drawn
transistor count - one polygon per gate finger, SRAM bitcells and
filler/decap devices included. This is a geometric measurement on
results/gds/asic_top.gds.gz, not an estimate.

sky130A GDS layers: diff = 65/20, poly = 66/20.
Requires: pip install klayout
Reproduce: python3 scripts/count_transistors.py   (run from asic/)
"""
import os
import time

import klayout.db as db

ASIC = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GDS = os.path.join(ASIC, "results", "gds", "asic_top.gds.gz")

t0 = time.time()
ly = db.Layout()
ly.read(GDS)
top = ly.top_cell()
print("top cell:", top.name, "| cells:", ly.cells(), "| read %.1f s" % (time.time() - t0))

dss = db.DeepShapeStore()
diff = db.Region(top.begin_shapes_rec(ly.layer(65, 20)), dss)
poly = db.Region(top.begin_shapes_rec(ly.layer(66, 20)), dss)
gates = poly & diff
n = gates.count()
print("MOS gates (poly&diff, flat): %d" % n)
print("total %.1f s" % (time.time() - t0))
