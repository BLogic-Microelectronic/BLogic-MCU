#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

"""Setup-slack histograms from the delivered three-corner STA reports.

Parses every reported setup path (2,310 per corner in RUN_final_2026-09-06) in reports/timing/nom_<corner>/max.rpt
(lines ending 'slack (MET|VIOLATED)') and renders one histogram per corner.
Output: results/images/setup_slack_histogram.png
Reproduce: python3 scripts/timing_histogram.py   (run from asic/)
"""
import os
import re

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt

ASIC = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
KOSELER = [
    ("nom_tt_025C_1v80", "tt 25C 1.80V", "#17324a"),
    ("nom_ss_100C_1v60", "ss 100C 1.60V", "#b45309"),
    ("nom_ff_n40C_1v95", "ff -40C 1.95V", "#1b9cd8"),
]

fig, axes = plt.subplots(1, 3, figsize=(12.6, 3.6), dpi=200, sharey=True)
for ax, (dizin, ad, renk) in zip(axes, KOSELER):
    yol = os.path.join(ASIC, "reports", "timing", dizin, "max.rpt")
    slacks = [float(m.group(1)) for m in
              re.finditer(r"(-?[\d.]+)\s+slack \((?:MET|VIOLATED)\)",
                          open(yol, encoding="utf-8", errors="replace").read())]
    ax.hist(slacks, bins=40, color=renk, edgecolor="white", linewidth=0.3)
    ax.axvline(0.0, color="#20262f", linewidth=1.0, linestyle="--")
    en_kotu = min(slacks)
    ax.set_title("%s\nworst %+.3f ns, %d paths" % (ad, en_kotu, len(slacks)),
                 fontsize=10)
    ax.set_xlabel("setup slack (ns)", fontsize=9)
    ax.tick_params(labelsize=8)
    for k in ("top", "right"):
        ax.spines[k].set_visible(False)
    print("%-18s: %4d yol, en kotu %+0.3f ns" % (dizin, len(slacks), en_kotu))
axes[0].set_ylabel("path count", fontsize=9)
fig.suptitle("Setup slack distribution - all reported setup paths per corner "
             "(reports/timing/nom_*/max.rpt, RUN_final_2026-09-06)",
             fontsize=10.5)
fig.tight_layout(rect=[0, 0, 1, 0.92])
out = os.path.join(ASIC, "results", "images", "setup_slack_histogram.png")
fig.savefig(out, bbox_inches="tight")
print("written:", out)
