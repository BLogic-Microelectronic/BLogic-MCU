# Gate-level simulation of the delivered netlist (SDF, TT)

This directory simulates the **post-layout netlist** of the delivered run
`RUN_hold035_2026-09-09` — not the RTL — with the extracted TT delays
back-annotated from the delivered SDF, at the **verified operating period of
37.000 ns (27.0 MHz)**. It complements the two existing kinds of evidence:
RTL simulation (functional, `make test-all`, `make asic-top-sim`) and static
timing analysis (all paths, three corners, `asic/reports/timing/`).

> **Result in one line.** The delivered netlist boots and runs one AI inference
> bit-exactly at 37.000 ns with TT delays back-annotated, with **0 timing-check
> violations** over 3,898,641 cycles (12 September 2026, log in
> `verif/results/2026-09-12/gls/`). Details, milestones and limits below.

## What is simulated

| Item | Source |
|---|---|
| DUT | `asic/results/netlist/asic_top_powered.v.gz` (power-pin netlist). `strip_fillers.py` removes only the 2,375,107 decap / fill / tap cells, which drive no signal; 185,950 cell and macro instances remain, antenna diodes included (the SDF names their pins) |
| Cell models | `sky130_fd_sc_hd` `primitives.v` + `sky130_fd_sc_hd.v`, compiled with `USE_POWER_PINS` and **without** `FUNCTIONAL` — the timing views with `specify` blocks, so cells carry SDF delays and live `$setuphold` / `$recrem` / `$width` checks |
| Delays | `asic/results/sdf/nom_tt_025C_1v80/asic_top__nom_tt_025C_1v80.sdf` (OpenSTA 2.7.0), annotated on the DUT with `-sdftyp` |
| SRAM macros | the delivered OpenRAM Verilog models (`asic/macros/*/verilog/`), unchanged |
| Testbench | `asic_top_gls_tb.sv` — the protocol of `verif/tb/asic_top_boot_tb.sv` (`'R'` then `'A'` then the 12-character greeting) at a 37 ns clock; UART bit time 432 x 37 ns (firmware `CPB = 434`, bit time 8 * floor(CPB/8) clocks); reset and UART RX change on the falling clock edge so the testbench itself does not inject asynchronous events into setup/hold windows |
| Firmware | `sw/tests/ai_boot_macro_test.c -DCHECK_ARGMAX` in `build/flash.hex`: the boot ROM inside the netlist loads it from the flash model over QSPI, then the accelerator runs one inference; the greeting is printed only if the 1000-word `conv_out` FNV-1a checksum and the FC argmax (= 2, "yes") match the golden model |
| Simulator | Questa Sim-64 10.7c on the team laptop; about 680 simulated cycles per wall-clock second without checkpointing (1 ms of simulated time = 40 s) and about 575 with it (47 s/ms), `vsimk` about 400 MB |

## How to run

```powershell
# prerequisite (WSL): make flash-image FW_SRC=sw/tests/ai_boot_macro_test.c EXTRA_CFLAGS=-DCHECK_ARGMAX
powershell -ExecutionPolicy Bypass -File verif\gls\run_gls.ps1 -CellLibDir <dir with primitives.v and sky130_fd_sc_hd.v>
powershell -ExecutionPolicy Bypass -File verif\gls\run_gls.ps1 -CellLibDir <dir> -Tclk 5.0 -RunTime 200us   # negative control
```

`run_gls.ps1` copies every input into an ASCII work directory (default
`C:\gls_work`), compiles (`gls_compile.do`), runs (`gls_run.do`), counts
timing-check violations and classifies the SDF annotation messages by cell
type (`sdf_msg_census.py`); with the default `-RunTime -all` it then prints
`GLS PASS` or exits with code 1 (finite negative-control runs get no
verdict). `run_gls.ps1` always runs `gls_run.do`, without checkpoints. The
archived long run used `gls_full_ckpt.do` instead, which checkpoints every
15 ms of simulated time so an interrupted run can be restored instead of
repeated; `run_gls.ps1` neither copies nor calls it (copy it into the work
directory after `run_gls.ps1` has compiled there and start it with
`vsim -c -do gls_full_ckpt.do -l <log>`). With `run -all` the testbench's
`$finish` ends `vsim` before the `GLS_BITTI` wall-clock line of the `.do`
files, so that line appears only in finite-`RUNTIME` runs. **Each archived log is committed next to the
`.do` file that produced it** (`verif/results/2026-09-10/gls/run_*.do` and
`verif/results/2026-09-12/gls/run_37ns_full.do`, plus the compile log and
`gls_compile.do`), so the evidence and the script that made it cannot drift
apart. The archived logs are the raw Questa transcripts, gzipped and otherwise
unedited. The run scripts were renamed when archived; the name each log prints
on its first line maps as `neg5.do` -> `run_5ns.do`, `neg.do` ->
`run_14ns_1ms.do`, `gls_speed_sdf.do` -> `run_37ns_1ms.do` and
`gls_full_ckpt.do` -> `run_37ns_full.do`; the vsim command echoed on each
log's second line carries the same arguments as the committed file.
`verif/gls/gls_full_ckpt.do` itself now loops 21 x 15 ms instead of the
archived 12 x 15 ms, so a hang reaches the testbench's 300 ms
`FAIL: TIMEOUT` instead of ending silently at 180 ms.

## Annotation coverage (measured)

The netlist's 185,950 instances are 88,779 standard cells, 27 SRAM macros,
852 tie cells (`conb_1`) and 96,292 antenna diodes. The SDF contains 88,807
`CELL` blocks: the top level, the 27 macros and **all 88,779 standard cells**,
that is, every cell that has a timing arc at all. Tie cells and diodes have no
arcs and therefore no SDF entry. Every SDF entry that could not be applied
belongs to an SRAM macro, whose OpenRAM model has no `specify` block:

| Questa message | Cause | Messages |
|---|---|---|
| `vsim-SDF-12088` no specify path for IOPATH | SRAM `clk -> dout` arcs (26 x 64 + 1 x 64) | 1,728 |
| `vsim-SDF-12090` no specify timing constraint for SETUP/HOLD | SRAM setup / hold checks | 3,074 |
| `vsim-SDF-3262` no specify timing constraint | SRAM checks without a direction | 162 |
| `vopt-2685` + `-2718` missing port connection | unused outputs of 852 tie cells (777 `HI`, 75 `LO`) and 1,002 CTS dummy loads (692 `X`, 310 `Y`): 1,854 instances x 2 messages — the same drivers listed as unannotated in `asic/README.md` 9.11.1 | 3,708 |
| `vsim-SDF-3438` cell driver of an INTERCONNECT source port | 31 INTERCONNECT entries whose destination is a top-level output port; Questa annotates the driving cell instead of the port — not an annotation gap | 31 |

1,728 + 3,074 + 162 + 3,708 + 31 = 8,703, the run's total warning count, so
the table accounts for every message.

## Negative controls (measured)

| Clock | Requested / simulated | Timing-check violations | Behaviour |
|---|---|---|---|
| 5 ns (200 MHz) | 200 us / **20.585 us** (testbench `$finish` on its `'R'` check) | **553**: 551 `$removal` on the reset network and 2 `$setup`, all between 56.1 ns and 86.2 ns | X on `uart_txd_o`, `qspi_cs_no`, `qspi_sclk_o` from 153 ns onwards; the boot ROM never reaches the flash; verdict FAIL |
| 14 ns | 1 ms / 1 ms (71,428 cycles) | 0 | boot ROM reaches the flash at 420 ns and the QSPI copy loop runs |
| 37 ns (delivered) | 1 ms / 1 ms (27,027 cycles) | 0 | boot ROM reaches the flash at 1.099 us. **Speed measurement only, no timing conclusion**: the 14 ns row covers strictly more of the same bootloader code, so 0 violations here is implied by it |

**What the 14 ns row does and does not mean.** It is *not* a claim that the
design closes at 14 ns — it does not. The delivered TT report at the 20 ns
target (`asic/reports/timing_target_20ns/nom_tt_025C_1v80/max.rpt.gz`) contains
1,000 `clk`-group paths, and **every one of them has less than 6 ns of slack**
(worst 1.218 ns). Of those, 779 are full-cycle paths (3.921–5.963 ns) which
lose the full 6 ns when the period drops from 20 ns to 14 ns, and 221 are
half-cycle paths launched by a falling SRAM edge, which lose only T/2 = 3 ns —
80 of them are below 3 ns. So at least **859 TT paths would be negative at
14 ns**. "At least", because that report is truncated to the 1,000 worst paths
per group: the same 1,000 / 1,000 / 310 (`clk` / `asynchronous` / `jtag_tck`)
split appears in all three corners, and at SS the same file shows 1,000
violating paths where `violator_list.rpt` counts 3,304 violating endpoints. The
other 1,310 entries of the file are the `asynchronous` (11.562–14.177 ns) and
`jtag_tck` (24.319–98.472 ns) groups, i.e. other clock domains. What the 0 in
the 14 ns row means is therefore only this: the code in that window — boot ROM
plus the QSPI copy loop, which stores to SRAM and polls the QSPI status
register — does not *sensitise* those paths. That is the nature of a
dynamic check: it tests the paths the program actually toggles, while STA
tests all of them. The 5 ns row is the control that matters: there the checks
do fire, 553 times, and the chip stops working.

## Result

**PASS, 12 September 2026.** Log:
`verif/results/2026-09-12/gls/full_37ns_boot_ai.log.gz`, produced by
`run_37ns_full.do` committed next to it.

| Milestone | Simulated time |
|---|---|
| reset released | 0.370 us |
| boot ROM's first flash access (`qspi_cs_no` low) | 1.099 us |
| bootloader done, firmware running from the instruction SRAM (`'R'` sent) | 124.823 ms |
| `"Hello World!"` printed, i.e. the 1000-word `conv_out` checksum **and** the FC argmax match the golden model | 144.250 ms |

- **0 timing-check violations** (`$setuphold` / `$recrem` / `$width`) over the
  whole run of 3,898,641 clock cycles.
- **No X or Z** sampled on `uart_txd_o`, `qspi_cs_no` or `qspi_sclk_o` after
  reset, although 4,940 flip-flops start as X.
- Questa summary line: `Errors: 0, Warnings: 8703, Suppressed Errors: 2959`.
  `Errors` is the counter that timing-check violations land in — the 5 ns
  control below ends with `Errors: 553` — so `Errors: 0` here *is* the
  no-violation statement. The 8,703 warnings are the annotation table above.
  The 2,959 suppressed errors are SDF annotation failures that `-sdfnoerror`
  downgrades; the census shows every unannotated SDF entry belongs to one of
  the 27 SRAM macros, and the count is identical in all four runs of this
  package, including the three that never leave the boot ROM (5 ns,
  14 ns / 1 ms and 37 ns / 1 ms).
- Cost: about 1 h 55 min of compute (47 s per simulated ms with a checkpoint
  every 15 ms; the wall-clock figure in the log is larger because the laptop
  slept during the run).

**What this adds.** From 124.8 ms the CPU fetches out of the instruction SRAM
through the half-cycle read path of `asic/README.md` 9.1 — the path that sets
the 27.0 MHz declaration — and the inference then runs about 459,000 cycles
against the accelerator's own macros. The sequence that STA signs off
statically is therefore also executed dynamically, on the same netlist, with
the same extracted delays, at the same period.

## Scope limits

- **TT corner only.** The delivery contains the TT SDF only; SS setup and FF
  hold are covered by STA (`asic/README.md` 9.11), not by this simulation.
- **SRAM macros are behavioural.** Their read data appear `DELAY = 3 ns` after
  the falling clock edge and go X `T_HOLD = 1 ns` after the rising edge
  (values the model itself calls arbitrary); none of their SDF arcs or checks
  can be annotated. The macro's own timing evidence remains the STA with its
  Liberty file — which matters here, because the path that sets 27.0 MHz
  (`asic/README.md` 9.1) starts in that arc: of its 25.938 ns SS arrival,
  4.257 ns is the un-annotated macro arc and the rest is in cells this
  simulation does annotate.
- **Uninitialised flip-flops start as X** (4,940 `dfxtp` have no reset), as on
  silicon before the first write; no `+initreg` or forced values are used. The
  pass criterion is not weakened by this: the firmware prints the greeting only
  after a bit-exact checksum and argmax comparison.
- **Dynamic, not exhaustive.** Only the paths this program sensitises are
  exercised. The pass proves that this boot + inference sequence works on the
  delivered netlist with TT delays at 37 ns; it does not prove every path, does
  not replace STA, and no single simulation can.
