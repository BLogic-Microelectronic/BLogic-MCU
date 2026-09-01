#!/usr/bin/env python3
"""IR-drop heatmap from the DDK 5.7 node-level voltage dumps.

Reads reports/power/net-VPWR.csv[.gz] and net-VGND.csv[.gz]
(format: Instance,Terminal,Layer,X location,Y location,Voltage; microns/volts,
produced by OpenROAD analyze_power_grid, RUN_teslim_2026-08-14) and renders
the WORST-CASE voltage deviation per 20 um bin across the die:

  VPWR: drop  = VDD_NOM - V   (nominal 1.80 V)
  VGND: rise  = V - 0

Output: results/images/irdrop_heatmap.png
Reproduce: python3 scripts/irdrop_heatmap.py   (run from asic/)

The script only READS delivered reports; it does not touch the flow.
Cross-check: printed worst values must match reports/power/irdrop.rpt
(1.54 mV VPWR / 1.57 mV VGND, 0.09% of supply).
"""
import csv
import gzip
import os
import sys

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np

ASIC = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DIE_X, DIE_Y = 4180.0, 4490.0  # um (config.yaml DIE_AREA)
BIN = 20.0                     # um
VDD = 1.80


def oku(ad, deviation):
    """Stream one dump; return worst-deviation grid (mV) + stats."""
    yol = os.path.join(ASIC, "reports", "power", ad)
    ac = gzip.open if yol.endswith(".gz") else open
    nx = int(np.ceil(DIE_X / BIN))
    ny = int(np.ceil(DIE_Y / BIN))
    grid = np.full((ny, nx), np.nan)
    worst = (0.0, 0.0, 0.0)  # dev_mV, x, y
    n = 0
    with ac(yol, "rt", newline="") as f:
        r = csv.reader(f)
        next(r)  # header
        for row in r:
            try:
                x = float(row[3]); y = float(row[4]); v = float(row[5])
            except (ValueError, IndexError):
                continue
            d = deviation(v) * 1000.0  # mV
            i = min(int(y / BIN), ny - 1)
            j = min(int(x / BIN), nx - 1)
            if np.isnan(grid[i, j]) or d > grid[i, j]:
                grid[i, j] = d
            if d > worst[0]:
                worst = (d, x, y)
            n += 1
    return grid, worst, n


def panel(ax, grid, worst, baslik, cmap):
    im = ax.imshow(grid, origin="lower", cmap=cmap, vmin=0.0,
                   extent=[0, DIE_X, 0, DIE_Y], interpolation="nearest")
    ax.plot(worst[1], worst[2], marker="o", ms=8, mfc="none", mec="#111111",
            mew=1.4)
    ax.annotate("worst %.2f mV" % worst[0], (worst[1], worst[2]),
                xytext=(8, 8), textcoords="offset points", fontsize=8.5)
    ax.set_title(baslik, fontsize=11)
    ax.set_xlabel("x (um)", fontsize=9)
    ax.set_ylabel("y (um)", fontsize=9)
    ax.tick_params(labelsize=8)
    return im


def main():
    fvp, wvp, nvp = oku("net-VPWR.csv.gz", lambda v: VDD - v)
    fgn, wgn, ngn = oku("net-VGND.csv.gz", lambda v: v)
    print("VPWR: %d nodes, worst drop %.3f mV at (%.1f, %.1f)" %
          (nvp, wvp[0], wvp[1], wvp[2]))
    print("VGND: %d nodes, worst rise %.3f mV at (%.1f, %.1f)" %
          (ngn, wgn[0], wgn[1], wgn[2]))

    fig, axes = plt.subplots(1, 2, figsize=(11.6, 5.4), dpi=200)
    im0 = panel(axes[0], fvp, wvp,
                "VPWR IR-drop — worst %.2f mV (%.2f%% of 1.80 V)"
                % (wvp[0], 100.0 * wvp[0] / 1000.0 / VDD), "Reds")
    im1 = panel(axes[1], fgn, wgn,
                "VGND rise — worst %.2f mV" % wgn[0], "Blues")
    for im, ax in ((im0, axes[0]), (im1, axes[1])):
        cb = fig.colorbar(im, ax=ax, fraction=0.046, pad=0.03)
        cb.set_label("worst-case deviation per %.0f um bin (mV)" % BIN,
                     fontsize=8.5)
        cb.ax.tick_params(labelsize=8)
    fig.suptitle("Node-level IR-drop map — tt corner, RUN_teslim_2026-08-14 "
                 "(source: reports/power/net-*.csv.gz)", fontsize=10.5)
    fig.tight_layout(rect=[0, 0, 1, 0.95])
    cikti = os.path.join(ASIC, "results", "images", "irdrop_heatmap.png")
    fig.savefig(cikti, bbox_inches="tight")
    print("written:", cikti)


if __name__ == "__main__":
    sys.exit(main())
