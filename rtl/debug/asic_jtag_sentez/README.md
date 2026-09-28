<!--
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
Licensed under the GNU General Public License version 3 only.
See the LICENSE file in the repository root for the full license text.
-->

# sky130 exploration runs of the JTAG debug subsystem (v1 / v2 / v3)

> **What these are.** Three full LibreLane runs made on the flow VM on 3-4
> September 2026, while the JTAG debug subsystem was still a prototype on the
> `deneme/jtag` branch. They are **exploration evidence, not the delivered
> package.** The delivered chip is the run **`RUN_hold035_2026-09-09`**
> ([`asic/README.md`](../../../asic/README.md); reports under `asic/reports/`,
> outputs under `asic/results/`). These three exploration runs fed the
> **`RUN_final_2026-09-06`** run of 6 September, which was the v3 configuration
> run from the committed `asic/` tree - the same RTL, the same four CTS settings
> (now in `asic/config.yaml`) and the same JTAG SDC block (now at the end of
> `asic/constraints/design.sdc`). That 6 September run was **superseded on
> 9 September** by `RUN_hold035_2026-09-09`, which keeps those four CTS settings
> and adds only the resizer hold-repair settings and the separate signoff SDC of
> `asic/README.md` 9.7; it is the first run to close setup **and** hold in all
> three corners, so it carries the declared verified frequency of 27.0 MHz.
> Everything below therefore compares exploration runs against the 6 September
> figures, which are themselves now historical (delta table: `asic/README.md`
> 9.11.1). The "14 Aug" column in the tables below is
> the **14 August 2026 signed run** of the JTAG-less RTL (commit `73d8dcd`),
> kept as the historical reference; it is no longer the delivered chip. The
> development log of the prototype phase is
> [`../JTAG_DENEME_PLANI.md`](../JTAG_DENEME_PLANI.md), the narrative with the
> full per-corner tables is root README section 10.10.

## Why three runs are kept

They are one experiment, not three attempts at the same thing. Each run answered
a question raised by the previous one, and the sequence - including a diagnosis
that later proved wrong and was retracted - is the point:

| Run | Design under test | What it answered | Outcome |
|---|---|---|---|
| **v1** - [`full/`](full/) | combinational `axi_dm_slave` | Does the JTAG variant survive the full Classic flow at all? | Signoff clean (route DRC / KLayout DRC / LVS / XOR all 0), **1 antenna net** (`net8879`, CPU multiplier, not JTAG logic). TT +2.303 ns, but **SS -11.983 ns**: the debug module put a combinational path from CPU instruction fetch through the crossbar into `dm_mem`. |
| **v2** - [`full_v2/`](full_v2/) | `axi_dm_slave` with a registered request layer (T+2) | Does registering the bridge remove the DM endpoints from the SS critical set? | Yes: SS improves to -10.262 ns, antenna back to **0**, signoff still clean. But TT setup drops to +1.060 ns and TT hold worsens to -0.749 ns. The first explanation for that loss was wrong - see below. |
| **v3** - [`full_v3/`](full_v3/) | same RTL as v2, 12-variant CTS/resizer setting sweep | Is the TT loss in the RTL or in the flow settings? | In the settings. With the best variant TT recovers to **+1.684 ns** (54 % of the loss), hold improves at all three corners (TT -0.309 ns, back to the 14 August level), worst IR drop falls to 0.95 mV, signoff still clean. Cost: SS gives up a further 0.275 ns. **This configuration became the delivered one**: the official run `RUN_final_2026-09-06` reproduces the v3 column exactly (`full_v3/metrics.json` is byte-identical to the official `metrics.json`). |

The v2 summary contains a diagnosis ("CTS deepens under FF") that was **disproven
by the run data** the next day; the correction is recorded in `full_v2/OZET.md`
and in root README section 10.10. Both are kept on purpose: deleting the wrong
diagnosis would delete the record of how it was found and corrected.

## Headline numbers

Read from each run's `metrics.json`. The 14 August column comes from the reports
of the signed run of that date (commit `73d8dcd`); the v3 column is the same as
the official run's `asic/results/metrics/metrics.json`.

| | 14 Aug (historical) | v1 | v2 | v3 = `RUN_final_2026-09-06` |
|---|---|---|---|---|
| Setup WS TT (ns) | +2.210 | +2.303 | +1.060 | **+1.684** |
| Setup WS SS (ns) | -9.083 | -11.983 | -10.262 | -10.537 |
| Setup WS FF (ns) | +4.375 | +4.390 | +3.628 | **+4.010** |
| Hold WS TT (ns) | -0.323 | -0.611 | -0.749 | **-0.309** |
| Hold WS SS / FF (ns) | +0.227 / -0.382 | -0.381 / -0.539 | -0.822 / -0.602 | **-0.122 / -0.290** |
| Route DRC / KLayout DRC / LVS / XOR | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 |
| Antenna-violating nets | 0 | 1 | 0 | 0 |
| Magic DRC (macro false positives, asic/README 9.9) | 9,201 | 9,201 | 9,201 | 9,201 |
| Standard cells | 296,010 | 309,985 | 310,754 | 310,510 |
| Worst IR drop (mV) | 1.54 | 2.35 | 2.92 | **0.95** |

6 September run facts (`RUN_final_2026-09-06`, since superseded): VM1, fresh clone
of commit `248069b`, LibreLane 3.0.6 Classic, sky130A, 78/78 steps in 3 h 28 min,
12,715,215 transistors, power TT 117.2 mW / FF 124.2 mW. The delivered run
`RUN_hold035_2026-09-09` is the same clone plus five configuration lines: 3 h 44 min,
12,750,459 transistors, power TT 64.0 mW at its verified 27.0 MHz (117.5 mW at the
50 MHz target), 321,880 standard cells, hold closed in all three corners
(`asic/README.md` 9.11).

SS does not close in **any** version, including the 14 August one (-9.083 ns);
the limit there is the logic depth of the CPU's ALU cone, not the debug module.
In v3 / the 6 September run, 41 SS setup-violating paths *start* in the DM (all from
the `ndmreset` register) and none *end* in JTAG/DM logic - declared in
asic/README 9.9/9. Full per-corner tables, worst paths and the reasoning are in
root README section 10.10 and in each run's own summary.

## Contents

| Path | What it is |
|---|---|
| `full/` | v1: `metrics.json`, post-PnR STA summary (`sta_postpnr_summary.rpt`), worst paths (`sta_en_kotu_yollar.txt`), antenna summary, the derived flow config `config_full.yaml` and `design_jtag.sdc` of the prototype phase (superseded by `asic/config.yaml` and `asic/constraints/design.sdc`), and the comparison table `karsilastirma_teslim_vs_jtag.txt` against the 14 August run |
| `full_v2/` | v2: `OZET.md` (run summary, with the retracted diagnosis and its correction), `metrics.json`, STA summary, comparison table |
| `full_v3/` | v3: `OZET.md` (summary, including the official-run cross-check), `metrics.json`, STA summary, `varyant_taramasi.txt` (the 12-variant sweep), `kosu.txt` (run command) |
| `base_soc_top_stat.rpt` | Yosys `stat` for `soc_top` **without** `JTAG_DEBUG` - the baseline that matches the 14 August synthesis |
| `jtag_soc_top_stat.rpt` | the same with `JTAG_DEBUG`, so the cell-count delta of the debug logic can be read directly |

Only text reports are committed (about 150 KB in total). The run directories
themselves - databases, DEF, GDS, step logs, roughly 17 GB per run - are not in
the repository; the exploration runs are reproducible with `scripts/vm_jtag_asic.sh`
on a LibreLane VM, and the delivered run with `make asic_run` from the committed
`asic/` tree (asic/README 9.3).
