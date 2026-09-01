#!/usr/bin/env python3
"""Power breakdown chart from the delivered tt power report.

Parses reports/power/nom_tt_025C_1v80/power.rpt (report_power group table)
and renders a horizontal bar chart of the total-power split.
Output: results/images/power_breakdown.png
Reproduce: python3 scripts/power_breakdown.py   (run from asic/)
"""
import os
import re

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt

ASIC = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RPT = os.path.join(ASIC, "reports", "power", "nom_tt_025C_1v80", "power.rpt")

gruplar = []
toplam_w = None
for line in open(RPT, encoding="utf-8", errors="replace"):
    m = re.match(r"^(Sequential|Combinational|Clock|Macro|Pad)\s+\S+\s+\S+\s+\S+\s+(\S+)\s+([\d.]+)%", line)
    if m:
        gruplar.append((m.group(1), float(m.group(2)), float(m.group(3))))
    t = re.match(r"^Total\s+\S+\s+\S+\s+\S+\s+(\S+)\s+100", line)
    if t:
        toplam_w = float(t.group(1))

gruplar = [g for g in gruplar if g[2] > 0.0]
gruplar.sort(key=lambda g: g[2])
adlar = {"Macro": "SRAM macros", "Clock": "Clock network",
         "Sequential": "Sequential", "Combinational": "Combinational"}

fig, ax = plt.subplots(figsize=(8.6, 3.2), dpi=200)
y = range(len(gruplar))
ax.barh(list(y), [g[2] for g in gruplar], height=0.55, color="#17324a")
for i, (ad, w, pct) in enumerate(gruplar):
    ax.text(pct + 1.2, i, "%.1f mW  ·  %.1f%%" % (w * 1000.0, pct),
            va="center", fontsize=10, color="#20262f")
ax.set_yticks(list(y))
ax.set_yticklabels([adlar.get(g[0], g[0]) for g in gruplar], fontsize=10.5)
ax.set_xlim(0, 100)
ax.set_xlabel("share of total power (%)", fontsize=10)
ax.set_title("Total power split — tt corner, %.1f mW (estimated; "
             "reports/power/nom_tt_025C_1v80/power.rpt)" % (toplam_w * 1000.0),
             fontsize=10.5)
for k in ("top", "right"):
    ax.spines[k].set_visible(False)
ax.tick_params(labelsize=9)
fig.tight_layout()
out = os.path.join(ASIC, "results", "images", "power_breakdown.png")
fig.savefig(out, bbox_inches="tight")
print("written:", out)
for ad, w, pct in reversed(gruplar):
    print("  %-14s %7.1f mW  %5.1f%%" % (ad, w * 1000, pct))
print("  total          %7.1f mW" % (toplam_w * 1000))
