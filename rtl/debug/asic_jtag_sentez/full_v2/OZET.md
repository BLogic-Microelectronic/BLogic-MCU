# JTAG full flow v2 (registered axi_dm_slave) - VM1, September 3, 2026

Run: `scripts/vm_jtag_asic.sh STEPS="full fullozet"`, LibreLane 3.0.6 Classic, sky130A,
the delivery `asic/config.yaml` settings verbatim + `JTAG_DEBUG` + `design_jtag.sdc`.
Runtime 216 min (v1: 215 min), 80/80 stages, exit code 2 = the SAME deferred
error as the delivery run (hold violations). The evidence files are in this
directory; v1 (combinational bridge) is one directory up (`../full/`), on the VM
at `build/asic_jtag/full/run_v1_kombinasyonel/`.

## Manufacturability signoff

| | delivery | v1 | v2 |
|---|---|---|---|
| Route DRC | 0 | 0 | 0 |
| KLayout DRC | 0 | 0 | 0 |
| Magic DRC (macro false positive, README 9.9) | 9201 | 9201 | 9201 |
| LVS error / device / net difference | 0 | 0 | 0 |
| XOR difference | 0 | 0 | 0 |
| Antenna-violating nets | 0 | 1 | **0** |

## Timing (post-PnR STA, 3 corners)

| | delivery | v1 | v2 |
|---|---|---|---|
| TT setup WNS | +2.210 | +2.303 | +1.060 |
| SS setup WNS | -9.083 | -11.983 | **-10.262** |
| FF setup WNS | +4.375 | +4.390 | +3.628 |
| SS setup TNS | -10,640 | -14,320 | -12,190 |
| TT / SS / FF hold WNS | -0.323 / +0.227 / -0.382 | -0.611 / -0.381 / -0.539 | -0.749 / -0.822 / -0.602 |
| DM/JTAG share among SS setup-violating paths | - | 140 / 1000 | **0 / 1000** |
| DM/JTAG share among hold-violating endpoints | - | 0 | **0** |

Comment: the request register achieved its purpose - the DM/DTM endpoints left
the setup and hold critical set ENTIRELY, and the antenna violation closed as
well. In SS the worst path is now the core's own ALU/divider path
(`id_stage -> ex_stage.alu_i.alu_div_i -> id_stage`); the same path is -8.26 ns
in the delivery run.

## Where the margin went (September 3 measurement - THE DIAGNOSIS IN THE FIRST VERSION OF THIS FILE WAS WRONG)

The first explanation claimed "with +1,213 FFs CTS is built deeper". The run
data REFUTES this:
  * TritonCTS's own report (CTS-0102 Path depth) shows NO depth INCREASE:
    clk_i_regs is 7-8 in the delivery run, 6-7 in v2 (i.e. one level SHALLOWER).
  * v1, although it ADDED 1,176 sinks over the delivery run, produced a
    shallower launch branch and a TT margin a touch BETTER than the delivery
    run (+2.303 vs +2.210).
  * The "SS skew -2.58 -> +3.58" comparison was APPLES-TO-ORANGES: the two
    numbers come from different register pairs. Global SS skew is
    4.028 -> 4.401 ns.

The two findings that do hold (and the goal of the next task):

1) ON THE CRITICAL PATH the launch clock got longer, but not from depth - from
   the PLACEMENT lottery. Of the 1.150 ns TT loss, 0.836 ns (72.7%) is
   launch-side clock delay; the remainder is 0.266 ns of post-SRAM logic +
   0.067 ns of macro CLK->Q. When the netlist changed, the CPU clock-gate
   buffer moved, fell onto a different parent branch, and the 8-deep clkbuf_16
   delay-balancing chain (delaybuf_26..33) migrated from the CPU branch to the
   INSTRUCTION-SRAM branch - 1.091 ns on its own. The launch/capture common
   path also dropped from 3 stages to 1 stage.
2) THE LOSS OCCURS IN THE RESIZER, NOT IN CTS. At the CTS output v2 is BETTER
   than the delivery run (TT +0.694 vs +0.252; global skew equal). Then the
   post-CTS resizer gains +2.483 ns for the delivery run but only +1.231 ns for
   v2. The likely cause is corner budgeting: RSZ_CORNERS covers all three
   corners as well, and while v2's SS is 1.72 ns BETTER than v1's (-10.262 vs
   -11.983) its TT is 1.24 ns worse - the resizer spends effort on the SS
   corner, which cannot close at a 20 ns period anyway.

So the margin looks recoverable from the CTS/resizer settings rather than from
the RTL; the variant sweep proved it (`../full_v3/`).

NOTE (6 September 2026, Option B): the JTAG debug subsystem became part of the
delivered chip; the four CTS settings of v3 and the JTAG SDC block were written
into `asic/config.yaml` + `asic/constraints/design.sdc`, and the official run is
`RUN_final_2026-09-06`. The "delivery" column in this file is the 14 August signed
run (JTAG-less RTL, 73d8dcd) and is now a HISTORICAL REFERENCE; v1/v2 are
exploration runs, not delivery figures.

## Area / power

| | delivery | v1 | v2 |
|---|---|---|---|
| std-cell count | 296,010 | 309,985 | 310,754 |
| std-cell area | 1.249 mm2 | 1.337 mm2 | 1.347 mm2 |
| FF cells | 8,920 | 10,094 | 10,133 |
| Utilization (incl. macros) | 49.87% | 50.36% | 50.42% |
| Power (metrics.json power__total, FF corner) | 118.3 mW | 123.2 mW | 123.9 mW |
| IR-drop worst | 1.54 mV | 2.35 mV | 2.92 mV (0.16% of 1.8 V) |

The register stage added only +769 std-cells (+39 FFs) over v1; the total cost
of the JTAG revision relative to the delivery run is +5.0% std-cells / +7.9%
std-cell area, ~0.5% of an 18.77 mm2 die.
