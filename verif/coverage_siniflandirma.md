# SoC Line Coverage - Uncovered-Line Classification

Date: September 1, 2026 · Measurement: `make coverage` (Verilator 5.049 devel,
`--coverage-line`, 11 system C tests, single build, fixed denominator)
Input: `logs/coverage/annotate/` (a line prefixed with '%' is uncovered)
Result summary: line 72.2% (275/381 points), branch 84.2% (717/852)

> **Update (September 6, 2026):** the measurement was repeated on the **delivered
> configuration** (`soc_files.f` with `JTAG_DEBUG`, `FC1_FIX`, `I2C_SDA_SYNC`; the
> JTAG bridge `rtl/debug/axi_dm_slave.sv` joins the measured set): line **90.7 %**
> (359/396), branch **88.6 %** (819/924), functional coverage 21/22 (22/22 since 12 September, see the addendum at the end). What changed
> against the September 1 run, and why, is in section 10; sections 0-9 are the
> September 1 record and are unchanged.

> **Purpose:** "Knowing what is uncovered is worth as much as covering it." This
> document assigns EVERY uncovered line in the SoC measurement to one of three
> classes:
>
> - **A - structural / unreachable:** cannot be triggered in normal operation
>   (defensive defaults, arms that are dead by construction because of
>   concurrency). Closing them is not expected; waiver candidate.
> - **B - fault path:** exercised only by fault injection (NACK, overflow and
>   the like); needs a negative test at SoC level.
> - **C - test missing:** reachable through a legitimate scenario, but no such
>   test exists in the SoC run; listed together with a concrete test proposal.

## 0. Overall table

| File | Uncovered lines | A | B | C |
|---|---|---|---|---|
| i2c_master_axil.sv | 122 | 1 | 4 | 117 |
| qspi_master_axil.sv | 55 | 4 | 0 | 51 |
| obi_to_axi.sv | 23 | 23 | 0 | 0 |
| ai_accelerator.sv | 11 | 7 | 0 | 4 |
| boot_rom.sv | 4 | 4 | 0 | 0 |
| uart_stream_axil.sv | 2 | 1 | 0 | 1 |
| gpio_axil.sv | 2 | 0 | 0 | 2 |
| uart_axil.sv | 1 | 0 | 0 | 1 |
| timer_axil.sv | 1 | 0 | 0 | 1 |
| **Total** | **221** | **40** | **4** | **177** |

**How to read it:** 80% of the uncovered lines (177/221) come down to a single
cause: the relevant scenario was never added to the SoC regression. And 66% of
those (117 lines) come from a single decision: `i2c_system_test` is not in the
coverage list. The 40 structural lines are documented below with their evidence
and are not expected to be closed.

## 1. i2c_master_axil.sv - 122 lines (A=1, B=4, C=117)

**Root cause:** NONE of the 11 tests touches I2C (`i2c_system_test` is not in
the coverage list). At block level the same module is 97.8% covered (180/184)
by the `i2c-sys` TB (`coverage_tb_summary.txt`); the UVM `i2c_directed_test`
separately covers the NACK paths at block level.

| Lines | Code | Class | Note |
|---|---|---|---|
| 92-95, 124-128, 143, 148-155, 159 | AXI write/read handshake + register mux | C | Any I2C register access triggers them (covered in the block TB) |
| 103-116 | NBY clamp, ADR/TDR/CFG writes | C | NBY=0/5/2 + CFG clear sequence (covered in the block TB + UVM) |
| 119, 156 | write/read case default | C | Negative test: write to the RO RDR + read of the unmapped 0x14 |
| 196-201 | tdr_byte (LSB-first byte selection) | C | An NBY=4 TX transfer covers every idx |
| 237-259, 264-280, 284-302, 304-308, 311-323, 328-332, 335-338, 344-345 | I2C engine: START/BITS/ACK/STOP phases, multi-byte, RDR write | C | i2c_system_test with an echo slave + NBY=4 TX/RX; covered in the block TB |
| 303, 309-310, 334 | NACK sampling, NACK->STOP, nack_err set | B | Requires an address with no slave; the UVM i2c_directed_test covers it at block level |
| 342 | engine FSM case default | A | All 4 states of the 3-bit enum are listed; no transition into an unnamed encoding (SEU protection) |

**Closure path:** adding `i2c_system_test` to the coverage run closes all 117 C
lines on its own. Caution: the test runs with `i2c_system_tb.sv` (a separate top
with an echo slave); before adding it to the "single build, fixed denominator"
methodology, the .dat merge behaviour (a different top hierarchy) must be
verified - see Section 8, item 1.

## 2. qspi_master_axil.sv - 55 lines (A=4, B=0, C=51)

**Root cause:** the SoC tests exercise only x1 READ (the boot path) plus the
FIFO error paths; the x2/x4 data modes, dummy cycles, 4-byte addressing,
address-less commands (RDSR/RDID) and multi-byte read packing were never used at
SoC level (the `qspi_modes_tb` block TB covers most of them).

| Lines | Code | Class | Note |
|---|---|---|---|
| 127-129, 158-161 | x2 (dual) TX/RX io steering | C | DOR (0x3B) / dual-PP test |
| 166, 375-376 | x4 RX turnaround + x2/x4 bit sampling | C | QOR (0x6B) quad-read test |
| 292-295, 303-307 | address-less commands (RES, RDSR/RDID) | C | **The RDSR path is a precondition of the page-write flow** |
| 318-323 | addressed/data-less (SE) + FAST_READ dummy | C | Erase + read-with-dummy tests |
| 341 | 4th byte of the 4-byte address | C | FCR[2]=1 + READ4 (0x13) test |
| 350-365 | the whole SPI_DUMMY state | C | Any command with dummy cycles opens it |
| 384-389, 400-401, 409-412 | multi-byte read packing (full/partial word push) | C | len>=7 read + len%4==2/3 tail tests |
| 537, 584 | AXI write/read case default | C | Negative access to the reserved offset (0x14) |
| 231 | RX underflow flag | A | The DR-read path only issues a pop when !rx_empty; the flag is unreachable from software (defensive code) |
| 342, 404, 457 | addr_byte / partial-word / FSM defaults | A | Outer guards exclude these arms (consistent with the RTL comments) |

**Closure path (the most valuable test):** a SoC page-write test running the
sequence `WREN(0x06) -> PP(0x02, multi-byte) -> RDSR(0x05) WIP poll -> READ
read-back`; it closes the "page write never verified" finding in the project
notebook while opening lines 292-295, 303-307 and 384-412 in a single test.

## 3. obi_to_axi.sv - 23 lines (A=23; 24 on Verilator 5.052, section 11)

**All of them are structurally unreachable.** The bridge carries code for the
AW-only / W-only accept arms and for the WAIT_AW / WAIT_W states; but EVERY
write target in the SoC drives `aw_ready` and `w_ready` together from the SAME
expression (`axi_sram_wrapper.sv:80-81`, the arbiter, and all AXI-Lite
peripherals with `awready<=1; wready<=1` in the same branch). Measured evidence:
over 411k+ writes there were 49,740 stalls, and in none of them did the readies
diverge. These arms can only come alive if a slave producing split readies is
added -> **waiver candidate** (lines: 146-153, 179-186, 191-194, 199-202, 225).

Verilator 5.052 (10 September 2026; the toolchain of `main` since 13 September) reports **24** lines here: 146-149, 151-153, 179-186, 191-194, 199-202 and 225. All of them lie inside the ranges above and belong to the same arms, so the class stays A. The number of covered branch points drops from 819 to 818 of an unchanged 924; no RTL changed between the two runs, so the difference comes from the simulator version.

## 4. ai_accelerator.sv - 11 lines (A=7, C=4)

| Lines | Code | Class | Note |
|---|---|---|---|
| 315-316 | requant upper/lower saturation (`>127`, `<act_min`) | C | Test: write extreme values of +/-2^30 into the bias field and START -> the saturation arms |
| 929, 963 | CSR write/read case default | C | Negative write/read test at AI_BASE+0x10 (unmapped offset) |
| 317, 512-515 | requant normal path, get_byte case arms | A | **Annotation artefact:** the functions were called 8k / 1.27M times; Verilator gives no credit to arms that return from inside a function |
| 501, 885 | AXI master + main FSM defaults | A | All enum states are listed; no transition into an unnamed encoding |

Block-TB coverage of 96.7% (404/418) additionally exists.

## 5. boot_rom.sv - 4 lines (A=4)

Write-accept path (49-53): the interconnect permanently ties off the boot ROM's
write channel (`soc_axi_interconnect.sv:104/109`: `aw_valid=0, w_valid=0`) -> no
master can deliver a write to the ROM; the arms are unreachable in the SoC.
Note: because the boot test is not in the list for this run, the ROM content
paths are outside the measurement as well (the content is verified by the
`make boot` / `boot-real` tests).

## 6. Small files (uart_stream 2, gpio 2, uart 1, timer 1)

All the same pattern: **decode case defaults** (access to an unmapped/RO offset
-> reads 0 / the write is swallowed). Closed by single-line CSR accesses (C):
write to GPIO 0x00 + read of 0x08, read of UART0 0x14, read of UART1 0x1C/0x24,
and an unaligned `lb` (address+1) read on the Timer. The one exception is the
AXI-master FSM default at `uart_stream_axil.sv:366` - structural (A).

## 7. "Files absent from the annotation" - root-cause analysis

The outcome of the investigation into the files that do not appear in the
summary list (the question being: does "absent" mean covered, or not measured?):

| File | Why it is absent from the annotation |
|---|---|
| `soc_top.sv` | Purely structural (0 always, 0 ternary) -> `--coverage-line` produces no points at all |
| `axi4_to_axilite_bridge.sv` | Pure `assign` pass-through -> no points |
| `uart.v` | Structural + **never instantiated** (uart_axil uses uart_tx/rx directly) |
| `axi_slave_tieoff.sv` | Deliberate waiver (`verif/coverage_waivers.vlt:52`) |
| `ai_sram_arbiter.sv` | 88 branch points are instrumented and **100% covered** by the union of the 11 tests (the ONLY file with zero=0); it was not written out because `--annotate-all` had not been passed |

Additional finding: the line-based count ('%') does not show branch-half losses
on a line that is itself covered - according to the merged .dat,
`periph_decoder.sv` carries 12, `axi_sram_wrapper.sv` 18,
`soc_axi_interconnect.sv` 5 and `uart_tx.v` 1 uncovered POINT.
For that reason `run_coverage.sh` was updated as of September 1:
`--annotate-all` was added, the summary list was completed (i2c/boot_rom/
axi_sram_wrapper/uart_rx/uart_tx), and the silent skip was turned into an
explicit message.

## 8. Action plan (in priority order)

1. **Bring I2C into the SoC coverage** (+117 C lines): `i2c_system_test` must be
   added to the coverage run. Precondition: the test uses the echo-slave
   `i2c_system_tb.sv` top; the behaviour of a different top hierarchy in the .dat
   merge (point keys) must first be verified with a small experiment.
   Alternative: add "I2C SoC coverage (i2c-sys run)" as a separate line in the
   summary file.
2. **QSPI page-write SoC test** (WREN->PP->RDSR->READ): closes ~20+ C lines
   plus the "page write not verified" finding in the notebook.
3. **Negative CSR access mini-test**: write/read to the unmapped/RO offsets of
   every block (~10 C lines; the gpio/uart/uart1/timer/i2c/qspi/ai defaults can
   be collected into a single C test).
4. **AI saturation test**: write extreme values into the bias field and START
   (+2 lines).
5. **The 40 class-A lines**: let this document serve as the waiver rationale;
   if desired, line-based excludes can be added to `coverage_waivers.vlt`
   (even without them, this document is a sufficient answer to a jury question).

Estimated impact: if items 1-4 are implemented, ~177 of the 221 uncovered lines
close; the remaining 40 A + 4 B lines stay as a justified declaration.
Point-based line coverage is expected to move from 72.2% into the 90%+ range.

## 9. RESULT - the 15-test run (September 1, 2026, implemented the same day)

Items 2-4 of the action plan were implemented as four new C tests and added to
the coverage run (in place of item 1's i2c_system_tb route, the generic
harness's sda=0 "always-ACK" determinism was used - i2c_soc_test):

| New test | What it closed | Note |
|---|---|---|
| `i2c_soc_test` | I2C 122 -> **3** | full engine path (TX/RX multi-byte), the sda=0 contract is documented at the head of the test |
| `qspi_rdpath_test` | QSPI 55 -> **9** | multi-byte read packing, dummy, address-less (RDSR/RES), 4-byte address, SE, x2/x4 |
| `csr_negatif_test` | small files 6 -> **1** + AI CSR defaults | unmapped/RO offsets in every block |
| `ai_sat_test` | requant saturation proven FUNCTIONALLY | conv_out 2x1000 words bit-exact at 0x7F / 0x80 |

**New measurement:** line **91.1%** (347/381), branch **91.3%** (778/852),
annotation 92.0% (previously: 72.2% / 84.2% / 82.0%). Remaining marked lines
(49 in team RTL):

| File | Remaining | Class |
|---|---|---|
| obi_to_axi.sv | 23 | A (evidence in Section 3) |
| ai_accelerator.sv | 9 | A - all of them artefact/default: the rq_round_sat `return`s at 315-317 (saturation FUNCTIONALLY proven by ai_sat_test; Verilator gives no credit to a return from inside a function - same class as 512-515), 501/885 FSM default |
| qspi_master_axil.sv | 9 | A=4 (232 underflow, 343/405/458 default) + C-remaining=5 (355-359: the dummy+TX combination - legal but very rare, deliberately left open) |
| boot_rom.sv | 4 | A (Section 5) |
| i2c_master_axil.sv | 3 | B=2 (309-310, the NACK branch - covered by the UVM block test) + A=1 (342 default) |
| uart_stream_axil.sv | 1 | A (366 FSM default) |
| uart_rx.v | 5 | vendor (outside the coverage declaration; uart_tx.v dropped to 0) |

Corrected classification: 315-316, counted as C in Section 4, turned out to be
an A artefact (the test proves the saturation, but no annotation credit is
awarded); all but one of the small-file defaults in Section 6 are now closed.
In summary: every remaining line is either proven-structural (A), a fault path
covered at block level (B), or the single rationalized exception
(QSPI dummy+TX). The "we know what is uncovered" objective is closed.

## 10. Re-measurement on the delivered configuration (September 6, 2026)

`make coverage` was re-run after the JTAG debug subsystem was taken into the
delivery configuration (`verif/coverage_summary.txt`, dated 2026-09-06; same 15
C tests, same Verilator, single build, fixed denominator). Nothing in sections
0-9 was re-derived; this section records only the delta.

| Metric | September 1 (14 files) | September 6 (15 files, delivered configuration) |
|---|---|---|
| Line | 91.1 % (347/381) | **90.7 % (359/396)** |
| Branch | 91.3 % (778/852) | **88.6 % (819/924)** |
| Lines with all attached points covered | 92.0 % (1636/1764) | 90.0 % (1685/1856) |
| Functional bins (union) | 20/22 (UART 5/7) | **21/22 (UART 6/7)** |

**Why the denominators grew.** The measured set now contains
`rtl/debug/axi_dm_slave.sv` (team RTL, the AXI-to-debug-module bridge) and the
JTAG glue in `soc_top.sv` (`sys_rst_n = rst_ni & ~ndmreset`, the `I2C_SDA_SYNC`
synchroniser, the wiring of the TAP/DM instances). `soc_top.sv` therefore produces
coverage points for the first time (it was "absent from the annotation" in
section 7) and reports **0** uncovered point-lines. The riscv-dbg, common_cells
v1.38.0 and tech_cells_generic vendor files are excluded by the same rule as
CV32E40P (`verif/coverage_waivers.vlt`: upstream-verified vendor IP, not design
RTL); their own line coverage is reported separately by `make jtag-cov`
(`rtl/debug/sim/jtag_cov_summary.txt`: `dm_mem` 96.3 %, `dmi_jtag_tap` 99.1 %,
`dmi_jtag` 90.3 %, `dm_csrs` 81.3 %).

**Per-file uncovered point-lines (script count, as in `coverage_summary.txt`):**

| File | September 1 | September 6 | Class |
|---|---|---|---|
| ai_accelerator.sv | 9 | 9 | unchanged (section 4) |
| obi_to_axi.sv | 23 | 23 | unchanged, A (section 3) |
| qspi_master_axil.sv | 9 | 9 | unchanged (section 9) |
| i2c_master_axil.sv | 3 | 3 | unchanged (section 9) |
| boot_rom.sv | 4 | 4 | unchanged, A (section 5) |
| uart_rx.v | 5 | 5 | unchanged (section 9) |
| uart_stream_axil.sv | 1 | 1 | unchanged (section 9) |
| soc_top.sv | (no points) | 0 | new points, all covered |
| **axi_dm_slave.sv** | (not in set) | **22** | **covered by a dedicated testbench, see below** |
| all other files | 0 | 0 | - |

**`axi_dm_slave.sv` - 22 point-lines, not a class A/B/C gap.** The 15 C tests
never drive the JTAG TAP, so in the SoC run the bridge only ever sits in its idle
state: every request, arbitration, response-hold and byte-enable line is
unreached *by construction of this measurement*, not because a scenario is
missing. The same lines are exercised **49/49 = 100 %** by the JTAG testbench
(`make jtag-cov`, `jtag_smoke_tb`, 17 stages) and the response-hold /
back-pressure paths additionally by the unit testbench `make jtag-bridge-sim`
(6 scenarios, request/response timing-contract SVA). The two measurements are
deliberately **not merged**: `jtag_smoke_tb` and the C-test model are different
Verilator models with different hierarchy keys, and merging their `.dat` files
double-counted the shared lines and dragged the summary down to 64 % (measured on
September 6; note at the head of `scripts/run_coverage.sh`). They are therefore
reported side by side, and the JTAG block is appended at the end of
`coverage_summary.txt`.

**Branch coverage (91.3 % -> 88.6 %).** 72 branch points were added (852 -> 924)
and 31 more are untaken (74 -> 105). The additions are the newly measured code
(the bridge's arbitration and channel logic, the JTAG glue in `soc_top.sv`), and
the per-file line counts of every previously measured file are unchanged, which
is consistent with the untaken branches lying in the bridge's debug-session
paths discussed above. A per-file branch split was not extracted for this run;
the branch figure is reported as measured.

**Functional coverage 20/22 -> 21/22.** Not new hardware behaviour: until
September 6 the UART figure was the best single test (5/7); the union is now
computed per bin across all tests (CPB 434/50/5208 and STP 00/01/10/11 counters
from the test logs) and is 6/7. The remaining bin is STP=11, which no test
programs (documented in `scripts/run_coverage.sh`).

Verdict: the delivered configuration keeps every classification of sections
0-9; the only new uncovered lines belong to the debug bridge and are covered in
full by its own testbenches.

## Addendum (12 September 2026): functional coverage 21/22 -> 22/22

The remaining UART bin, stop-bit code 11, was a test gap and not unreachable code. EK-2 defines `1X` as two stop bits and `uart_axil.sv` looks only at `STP[1]`, so 11 is a valid code that behaves like 10; the block testbench `uart_stp_tb` already measured the STP=11 start-to-start interval equal to STP=10. `sw/tests/uart_stp_reg_test.c` gained a phase that transmits with `STP=3` and reads the register back, and the union is now UART 7/7, 22/22. Line 90.7 % (359/396) and branch 88.6 % (819/924) are unchanged on Verilator 5.049; for the Verilator 5.052 figures see section 11.

<!-- English translation of coverage_siniflandirma.md, 2026-09-01; numeric values converted from Turkish to English number format. -->

## 11. Re-measurement on Verilator 5.052 (10 September 2026; `main` toolchain since 13 September)

Same 15 tests and the same RTL, with Verilator 5.052 instead of 5.049. Line coverage 90.7 % (359/396) and the annotation figure 90.0 % (1685/1856) are unchanged, and functional coverage matches the 5.049 run (21/22 on 10 September; 22/22 in the 13 September rerun with the `STP=3` phase of the addendum above). Branch coverage is 88.5 % (818/924) instead of 88.6 % (819/924). The only file whose count changed is `obi_to_axi.sv`: 24 lines instead of 23, all class A (section 3).
