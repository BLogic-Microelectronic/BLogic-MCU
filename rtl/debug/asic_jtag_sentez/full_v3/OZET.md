<!--
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
Licensed under the GNU General Public License version 3 only.
See the LICENSE file in the repository root for the full license text.
-->

# JTAG v3 full flow - margin recovery through CTS settings (VM1, 3-4 September 2026)

The SAME RTL as v2 (registered `axi_dm_slave`); the only difference is four
LibreLane settings. Run: `librelane build/asic_jtag/full/config.yaml --flow Classic`
plus

    -c CTS_MACRO_CLUSTERING_MAX_DIAMETER=600
    -c CTS_MACRO_CLUSTERING_SIZE=2
    -c CTS_OBSTRUCTION_AWARE=true
    -c CTS_CLK_MAX_WIRE_LENGTH=900

Duration 3 h 28 min, 78/78 stages, exit code 2 = the SAME deferred error as the
delivered run and v2 (hold violations). The delivered run and the v2 reference
were NOT TOUCHED.

## Where these settings came from

The root cause of v2's TT margin loss (72.7% of which is launch-side clock delay)
had been measured as "the delay-balancing chain moving onto the instruction-SRAM
branch". A 12-variant sweep was run (see `varyant_taramasi.txt`), each variant in
its own run directory with the same config plus `-c KEY=VALUE`, up to step 45
(`--to OpenROAD.STAMidPNR-3`), six at a time in parallel.

The sweep produced a SURPRISING result: the arm that targets the mechanism
directly DID NOT WORK. `CTS_DELAY_BUFFER_DERATE_PCT` reproduced v2 EXACTLY at
both 50.0 and 0.0 (confirmed with `openroad-cts.log`, where the flag does reach
the OpenROAD command line: `-delay_buffer_derate 0.5` / `0.0`). `CTS_MAX_CAP` +
`CTS_SINK_BUFFER_MAX_CAP_DERATE_PCT` was equally ineffective. Raising the resizer
setup margin to 0.15 was HARMFUL (it fell below the baseline).
`PL_TIMING_DRIVEN=true` crashes OpenROAD at step 28 (CRITICAL RSZ-2007).

What did the work was clustering the macro clock sub-tree; adding obstruction-aware
CTS and a clock wire-length cap on top produced the winner. D and B DO NOT ADD UP
(separately +0.431 and +0.274, together +0.469) - the two largely repair the same
defect.

An interesting detail: AT THE CTS OUTPUT (step 36) v2 and v3 give the SAME value
(0.6936). The gap opens at the next step (v2 1.925 / v3 2.523). So these settings
do not change the tree CTS produces, but HOW WELL that tree can be REPAIRED by the
resizer.

## Result

| metric | delivered | v2 | v3 |
|---|---|---|---|
| TT setup WS | +2.210 | +1.060 | **+1.684** |
| SS setup WS | -9.083 | -10.262 | -10.537 |
| FF setup WS | +4.375 | +3.628 | **+4.010** |
| TT hold WS | -0.323 | -0.749 | **-0.309** |
| SS hold WS | +0.227 | -0.822 | **-0.122** |
| FF hold WS | -0.382 | -0.602 | **-0.290** |
| TT hold TNS | -6.996 | -27.9 | **-8.36** |
| Route DRC / KLayout DRC | 0 / 0 | 0 / 0 | **0 / 0** |
| LVS / XOR / antenna | 0 / 0 / 0 | 0 / 0 / 0 | **0 / 0 / 0** |
| Magic DRC (macro false positive) | 9201 | 9201 | 9201 |
| std-cell count / area | 296,010 / 1.249 mm2 | 310,754 / 1.347 | 310,510 / 1.343 |
| clock buffers | 1,771 | 2,051 | 2,104 |
| Power (metrics.json power__total, FF corner) | 118.3 mW | 123.9 mW | 124.2 mW |
| Worst IR drop | 1.54 mV | 2.92 mV | **0.95 mV** |

GAINS: 54% of the TT setup loss came back (+0.623 ns). Hold improved AT ALL THREE
CORNERS and returned to the delivered level at TT (-0.309 vs -0.323); at FF it even
beat the delivered run. TT hold TNS dropped from -27.9 to -8.36. IR drop fell below
even the delivered value. Area and power are practically unchanged (+53 clock
buffers, -244 std cells).

THE COST (stated honestly): SS setup got 0.275 ns worse (-10.262 -> -10.537) and
paths STARTING in the DM re-entered the SS setup violator list (the step-45 sweep
report counted 48; the final STA has 41, all from the ndmreset register; 0 in v2,
140 in v1). SS is the corner that does not close in any version anyway (delivered -9.083; ~34.4 MHz), and
the limit there is the logic depth of the ALU cone, not the clock tree - so this
trade looks acceptable, but it must not be hidden.

## Caveats

* STATUS (6 September 2026, Option B; updated 9 September 2026): the JTAG debug
  subsystem is PART OF THE DELIVERED CHIP. This run is the REHEARSAL of the
  6 September run (`make asic_run TAG=RUN_final_2026-09-06`, VM1, commit 248069b),
  which was itself superseded on 9 September by the delivered
  `RUN_hold035_2026-09-09` (same clone plus the hold-repair settings and the 37 ns
  signoff SDC of `asic/README.md` 9.7; verified 27.0 MHz, hold closed in all three
  corners - delta table 9.11.1). The figures below are therefore the exploration
  record against the 6 September run, not the delivered numbers: the same RTL
  (v2 = registered
  `axi_dm_slave`, JTAG_DEBUG + FC1_FIX + I2C_SDA_SYNC), the same settings. The only
  difference is that the four CTS settings came from the command line (`-c`) here
  and from `asic/config.yaml` in the official run, and that the JTAG SDC block sits
  at the end of `asic/constraints/design.sdc` instead of in `design_jtag.sdc`
  (semantically identical). The official figures are taken from the official run's
  reports (asic/README, root README 13.7); the v3 numbers in this file are the
  exploration record.
* 6 SEPTEMBER RUN RESULT (`RUN_final_2026-09-06`, since superseded; VM1, 248069b, 78/78 stages,
  3 h 28 min, exit code 2 = the same deferred hold error; reports in
  `asic/reports`, `asic/results`): the v3 column is reproduced exactly - TT +1.684 /
  SS -10.537 / FF +4.010; hold -0.309 / -0.122 / -0.290; TT hold TNS -8.36;
  IR drop 0.95 mV; power 124.2 mW (FF, power__total); 310,510 std cells
  (full_v3/metrics.json is byte-identical to the official metrics.json), 2,104
  clock buffers. SS setup violators STARTING in the DM: 41 paths
  (`i_dm_csrs._3330_` = ndmreset -> `i_qspi`), paths ENDING in JTAG/DM: 0; hold
  violations TT 87 / SS 5 / FF 142 (FF: 50 macro pins, 78 dm_mem -> CPU, 14 other)
  - asic/README 9.9/2 and 9.9/9.
* The "delivered" column in the table is the 14 August signed run (JTAG-less RTL,
  73d8dcd): now a HISTORICAL REFERENCE. The "41 SS setup violator paths starting in
  the DM" finding is declared in asic/README 9.9/9; SS is the corner that does not
  close anyway.
* The settings WERE WRITTEN into `asic/config.yaml` on 6 September 2026
  (CTS_MACRO_CLUSTERING_MAX_DIAMETER=600, CTS_MACRO_CLUSTERING_SIZE=2,
  CTS_OBSTRUCTION_AWARE=true, CTS_CLK_MAX_WIRE_LENGTH=900; rationale in the config
  comment and asic/README 9.7). The switches measured as ineffective
  (CTS_DELAY_BUFFER_DERATE_PCT, CTS_MAX_CAP) and the harmful one (resizer setup
  margin 0.15) are deliberately absent.
* Step 45 gets the ranking right but under-reports the magnitude by ~45%; it was
  used as the decision metric, and the final figures were taken from step 57.
