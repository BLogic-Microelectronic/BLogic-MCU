# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# render_die.py - full-chip render of the delivered GDS with the PDN hidden
# ============================================
# Runs inside KLayout's batch interpreter (no GUI, no PDK install needed):
#
#   klayout -zz -r asic/scripts/render_die.py            (defaults below)
#   klayout -zz -r asic/scripts/render_die.py -rd gds=asic/results/gds/asic_top_klayout.gds.gz \
#           -rd out=asic/results/images/asic_top_render_hd.png -rd w=4100 -rd h=4400
#
# What is hidden and why: the met4/met5 power straps (and via3/via4) cover the
# whole core with a regular grid and hide everything underneath; the
# fill / decap / tap cells paint every empty row with their own metal, so the
# logic clusters cannot be told apart from empty space. Both are removed here,
# the rest of the GDS is drawn as is: diff green, poly red, li1 grey,
# met1 blue, met2 orange, met3 green, die boundary black. The image therefore
# shows the 27 SRAM macros, the standard-cell logic clusters (met2/met3
# routing) and the routing channels between the macros.
import os, re, sys, time
import pya

t0 = time.time()
gds = globals().get("gds", "asic/results/gds/asic_top_klayout.gds.gz")
out = globals().get("out", "asic/results/images/asic_top_render_hd.png")
w = int(globals().get("w", 4100))
h = int(globals().get("h", 4400))

# sky130A GDS layer map -> (fill colour, visible)
PAL = {
    (65, 20): ("#3cb371", True),    # diff
    (65, 44): ("#3cb371", True),    # tap
    (66, 20): ("#d62728", True),    # poly
    (67, 20): ("#8c8c8c", True),    # li1
    (68, 20): ("#1f5fd6", True),    # met1
    (69, 20): ("#ff7f0e", True),    # met2
    (70, 20): ("#2ca02c", True),    # met3
    (70, 44): ("#7b1fa2", False),   # via3  - PDN, hidden
    (71, 20): ("#7b1fa2", False),   # met4  - PDN vertical straps, hidden
    (71, 44): ("#4a148c", False),   # via4  - PDN, hidden
    (72, 20): ("#4a148c", False),   # met5  - PDN horizontal straps, hidden
    (235, 4): ("#000000", True),    # prBoundary (frame only)
}
FILL = re.compile(r"^sky130_(fd|ef)_sc_hd__(fill|decap|tapvpwrvgnd|tap)")

lay = pya.Layout()
lay.read(gds)
top = lay.top_cell()
names = [c.name for c in lay.each_cell() if FILL.match(c.name)]
lay.delete_cells([lay.cell_by_name(n) for n in names])
print("loaded %s: top %s, %s um, %d fill/decap/tap cell definitions removed"
      % (gds, top.name, top.dbbox(), len(names)))

lv = pya.LayoutView()
lv.set_config("background-color", "#ffffff")
lv.set_config("grid-visible", "false")
lv.set_config("text-visible", "false")
lv.set_config("cell-box-visible", "false")
lv.show_layout(lay, True)
lv.add_missing_layers()
for lp in lv.each_layer():
    key = (lp.source_layer, lp.source_datatype)
    if key in PAL:
        col, vis = PAL[key]
        lp.visible = vis
        lp.fill_color = lp.frame_color = int(col[1:], 16)
        lp.dither_pattern = 1 if key == (235, 4) else 0
        lp.width = 2 if key == (235, 4) else 0
    else:
        lp.visible = False              # wells, contacts, areaid, labels ...
lv.max_hier()
lv.zoom_fit()
os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
lv.save_image(out, w, h)
print("wrote %s (%dx%d) in %.0f s" % (out, w, h, time.time() - t0))
