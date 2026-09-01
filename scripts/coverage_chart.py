#!/usr/bin/env python3
"""Coverage summary chart from verif/coverage_summary.txt (make coverage).

Left: overall percentages (line / branch / annotation / functional).
Right: uncovered point-lines per team RTL module.
Output: images/coverage_summary.png
Reproduce: python3 scripts/coverage_chart.py   (run from repo root)
"""
import os
import re

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt

KOK = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TXT = open(os.path.join(KOK, "verif", "coverage_summary.txt"),
           encoding="utf-8", errors="replace").read()


def yuzde(etiket):
    m = re.search(etiket + r"\s*:\s*([\d.]+)%\s*\(\s*(\d+)/\s*(\d+)\)", TXT)
    return (float(m.group(1)), m.group(2), m.group(3)) if m else None


line = yuzde("line")
branch = yuzde("branch")
ann = re.search(r"covered\s*:\s*([\d.]+)%\s*\(\s*(\d+)/(\d+)\)", TXT)
fonk = re.search(r"TOPLAM\s*:\s*(\d+)/(\d+)\s*\((\d+)%\)", TXT)

genel = [
    ("Line", line[0], "%s/%s" % (line[1], line[2])),
    ("Branch", branch[0], "%s/%s" % (branch[1], branch[2])),
    ("Annotation", float(ann.group(1)), "%s/%s" % (ann.group(2), ann.group(3))),
    ("Functional", float(fonk.group(3)), "%s/%s" % (fonk.group(1), fonk.group(2))),
]
moduller = re.findall(r"^\s{2}(\S+\.sv)\s*:\s*(\d+)\s*$", TXT, re.M)

fig, (a1, a2) = plt.subplots(1, 2, figsize=(11.8, 3.8), dpi=200,
                             gridspec_kw={"width_ratios": [1, 1.25]})
y1 = range(len(genel))
a1.barh(list(y1), [g[1] for g in genel], height=0.55, color="#17324a")
for i, (ad, pct, oran) in enumerate(genel):
    a1.text(pct - 1.5, i, "%.1f%%  (%s)" % (pct, oran), va="center",
            ha="right", fontsize=9.5, color="white")
a1.set_yticks(list(y1)); a1.set_yticklabels([g[0] for g in genel], fontsize=10)
a1.set_xlim(0, 100); a1.axvline(90, color="#b45309", ls="--", lw=1)
a1.text(90, len(genel) - 0.25, " 90%", color="#b45309", fontsize=8.5)
a1.set_title("SoC-level coverage (15 C tests, single build)", fontsize=10)

mod = sorted(moduller, key=lambda m: m[1] != "0" and -int(m[1]) or 0)
mod = sorted(moduller, key=lambda m: -int(m[1]))
y2 = range(len(mod))
a2.barh(list(y2), [int(m[1]) for m in mod], height=0.6,
        color=["#b45309" if int(m[1]) else "#9aa1ab" for m in mod])
for i, (ad, n) in enumerate(mod):
    a2.text(int(n) + 0.3, i, n, va="center", fontsize=9, color="#20262f")
a2.set_yticks(list(y2))
a2.set_yticklabels([m[0].replace(".sv", "") for m in mod], fontsize=8.5)
a2.invert_yaxis()
a2.set_title("Uncovered point-lines per team-RTL module", fontsize=10)
a2.set_xlabel("uncovered lines (classified A/B in README 10.8)", fontsize=9)
for ax in (a1, a2):
    for k in ("top", "right"):
        ax.spines[k].set_visible(False)
    ax.tick_params(labelsize=8.5)
fig.suptitle("Coverage summary - 2026-09-01 clean run (verif/coverage_summary.txt)",
             fontsize=10.5)
fig.tight_layout(rect=[0, 0, 1, 0.9])
out = os.path.join(KOK, "images", "coverage_summary.png")
fig.savefig(out, bbox_inches="tight")
print("written:", out)
print("genel:", genel)
print("modul:", mod)
