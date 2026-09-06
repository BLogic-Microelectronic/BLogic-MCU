# BLogic MCU - Verification and Test Plan

Team: Ostim BLogic Mikroelektronik - Ostim Teknik Universitesi
Category: TEKNOFEST 2026 Chip Design Competition - Microcontroller (MCU)
Baseline: delivered RTL of 2026-09-06 (commit `248069b` - riscv-dbg JTAG
debug subsystem, `FC1_FIX` and `I2C_SDA_SYNC` enabled at every entry point) -
official ASIC run `RUN_final_2026-09-06`; historical reference: RTL freeze
2026-08-14 / `RUN_teslim_2026-08-14` (JTAG-less RTL, commit `73d8dcd`)
Basis: Competition specification p.16 (verification/test plan, methods,
completion reporting), scoring breakdown Table 3-1 ("Design &
Verification" items), Annex-3 (EK-3) Verification Methods, Annex-2 (EK-2)
peripheral register definitions.

This document answers three questions: **what** is verified (scope),
**how** it is verified (methods), and **how complete** the effort is
(exit criteria and status). Every result in this document is reproducible
from a clean clone with the commands in Section 17; nothing requires
manual inspection to decide pass/fail.

---

## 1. Purpose and References

The specification (p.16) states that preparing verification and test
plans that define the scope of verification, selecting the methods used
to meet verification requirements (test scenarios, coverage, assertions,
etc.), and reporting verification completion/progress will raise the
verification score, and that the breadth of the defined plan is itself an
evaluated metric. This document is that plan, kept in-repo so the jury
evaluates the same artifact the team works from.

Companion documents:

- `asic/README.md` sections 9.1-9.13 - ASIC physical flow, STA corners,
  signoff (out of scope here, referenced where relevant)
- `docs/oznitelik_vektoru_formati.md` - exact input feature-vector frame
  format and host handshake protocol (K13)
- `asic/THIRD_PARTY.md` - third-party IP inventory and version evidence,
  including the riscv-arch-test suite fingerprint

## 2. Scope

**Devices under test (in scope):**

- CV32E40P core (RV32IMC, 4-stage) - ISA compliance and trace-level
  correctness
- Two OBI-to-AXI4 bridges (instruction port read-only ID 0, data port
  R/W ID 1)
- `soc_axi_interconnect` - hand-written AXI4 crossbar, 2 masters x
  5 slaves, pure address decoding
- AXI4-to-AXI4-Lite bridge and `periph_decoder` (seven 0x100-byte
  peripheral windows at 0x4000_0000; undefined addresses return DECERR +
  0xDEADBEEF)
- Memory subsystem: Boot ROM (1 KB, 0x0), Instruction SRAM (8 KB,
  0x1_0000), Data SRAM (8 KB, 0x2_0000), AI SRAM (30 KB, 0x3_0000),
  `ai_sram_arbiter` (3:1, priority accelerator > stream > CPU)
- EK-2 peripherals: UART_0, UART_1 stream/DMA, GPIO 16-in/16-out, Timer,
  I2C Master (400 kHz), QSPI Master (x1/x2/x4)
- `ai_accelerator` - TFLite Micro Speech datapath (Conv2D 8x10x8
  stride 2 SAME + fully-connected 4000->4, INT8 MACs, Q31 requantize,
  ReLU, argmax), AXI4-Lite CSR slave, AXI4 master, interrupt line irq17
- Boot chain: QSPI flash -> boot ROM loader -> three-stage copy
  (firmware, data, AI weights) -> application handoff
- JTAG debug subsystem (specification "1x JTAG (Opsiyonel)", EK-2 "JTAG
  (Opsiyonel)", +3 bonus points): IEEE 1149.1 TAP, PULP riscv-dbg DTM/DM at
  0x0004_0000 (program-buffer access, SBA tied off), `axi_dm_slave` bridge,
  CV32E40P debug port, `ndmreset` - part of the delivered chip (`JTAG_DEBUG`
  on in `soc_files.f`, `asic/config.yaml`/`filelist.f` and the FPGA build)
- FPGA prototype (Digilent Genesys-2, Kintex-7 XC7K325T-2) and the live
  on-board system

**JTAG scope note:** the debug subsystem is optional per specification but is
in scope here as delivered hardware (PULP riscv-dbg: IEEE 1149.1 TAP, RISC-V
Debug 0.13 DTM/DM). It is verified in simulation (17-stage TAP/DTM/DM
testbench and bridge unit test inside `make test-all`, OpenOCD and gdb
sessions), on the Genesys 2 board (OpenOCD through the on-board USB-JTAG,
hardware breakpoints, and together with the AI demo - Section 12) and through
the sky130 flow (root README Section 10.10). Its `ifdef` guards (`JTAG_DEBUG`,
`FC1_FIX`, `I2C_SDA_SYNC`) remain only as an isolation proof: `make jtag-equiv`
preprocesses the RTL with all three off and compares it with commit 73d8dcd
(the RTL of the 14 August signed run) - `asic_top` and `ai_accelerator`
byte-identical; `soc_top` and the crossbar identical after constant folding of
the tied-off DM signals and the `sys_rst_n` alias (rules in
`scripts/jtag_equiv_expected.sed`, residual diff 0 lines for the chip RTL);
`fpga_top`, the FPGA wrapper outside the chip, carries only the 12 lines of the
OLED demo pins added on 6 September, stored as its expected diff. Everything
added to the chip RTL since that run lives inside the three `ifdef`s.

**Out of scope:** analog blocks (different category), ASIC physical verification
details (covered by `asic/README.md`).

## 3. Verification Strategy

Layered, evidence-first, fully automated:

1. **Block level** - standalone testbenches drive each peripheral or the
   accelerator directly over its AXI interface, without the full SoC.
2. **Protocol level** - passive SVA checkers observe every AXI/AXI-Lite
   interface during all simulations and fail the run on any violation.
3. **Core level** - the CPU is checked against two independent
   references: the official riscv-arch-test signatures and a
   cycle-by-cycle Spike ISS lockstep trace comparison.
4. **System level** - directed C firmware runs on the real `soc_top`
   with all bus infrastructure and checkers active.
5. **Hardware level** - the same RTL runs on the Genesys-2 board; boot,
   inference, throughput and the jury interaction scenario are measured
   live.

Design rule: every test is self-checking (EK-3 requirement). Three
mechanisms are combined so that no result depends on eyeballing:

- **Golden-string compare** - UART output is decoded bit-by-bit by the
  testbench and compared byte-for-byte against the expected string
  (e.g. "Hello World from BLogic MCU!"); mismatch fails the run.
- **result.log verdict** - each simulation writes `result=PASS|FAIL`
  plus side metrics (`cycles`, `uart_bytes`); Makefile targets grep this
  file for the verdict.
- **Word-level tensor compare** - AI tests compare not only the final
  argmax but the intermediate convolution output (1000 words) and the
  final FC logits (4 x INT8) word-by-word against golden vectors, so an
  arithmetic deviation fails the test even when the class label happens
  to be correct.

## 4. Methods

### 4.1 Directed self-checking system tests (EK-3: mandatory)

C firmware scenarios executed on the unmodified `soc_top`, covering
boot, every peripheral, the accelerator data path and the interrupt
flow. Inventory in Section 6.

### 4.2 SVA protocol checking (EK-3: mandatory)

`verif/sva/axi4_protocol_checker.sv` and
`verif/sva/axi_lite_protocol_checker.sv` are bound by
`verif/sva/soc_protocol_bind.sv` as passive monitors to the SoC's **ten**
AXI/AXI-Lite interfaces; `ai_accel_checker_bind.sv` adds
accelerator-specific checks. Any non-compliant behavior (e.g. X data
during a valid handshake) raises error/fatal during simulation. Sample
volume: a single `uart-baud` run executes **56,651 protocol checks with
zero violations**.

### 4.3 Reference-model comparison (EK-3: core tests)

- **riscv-arch-test**: RV32I + RV32M suites compiled for the DUT,
  signatures diffed against Spike ISS golden signatures.
- **Spike lockstep**: the core trace interface is compared record-by-
  record against Spike; the deep run covers **319,995 PC records** with
  zero divergence.

### 4.4 UVM (EK-3: methodology demonstration)

The UVM environment covers **four peripheral blocks with eight tests
(8/8 PASS)**, all reusing one block-agnostic AXI-Lite agent:

- `verif/uvm/axi_lite_uvm_pkg.sv` - the shared agent (driver, monitor
  with procedural protocol checks, sequencer) plus the GPIO environment
  and its two original tests (`gpio_directed_test`, `gpio_random_test`).
- `verif/uvm/periph_uvm_pkg.sv` - reference-model scoreboards and
  directed + constrained-random tests for **Timer, UART_0 and I2C**
  (register-access level; each block has its own `tb_*_top.sv` DUT
  wrapper and build in `Makefile.uvm`).

Directed tests check reset values, read-back semantics and block
behavior beyond plain register access: Timer counting/CLR/event-clear,
UART `CFG[0]` hardware auto-clear after TX (EK-2 v1.3) with RX line
idle, and the I2C **no-slave NACK path** for both TX and RX
(`TX_DONE`/`RX_DONE` + `NACK_ERR` flags, RDR left clean). Random tests
drive 60 transactions per block from safe address pools against the
scoreboard models. Run with `make -f Makefile.uvm run_all` (also part
of `make test-all` via the `uvm` target); regression result:
**8 PASS, 0 FAIL**.

### 4.5 Coverage (line/branch + functional)

- **Line coverage per module** via Verilator: each testbench runs
  against its target module; results consolidated in
  `verif/coverage_tb_summary.txt`, annotated sources under
  `logs/coverage/`.
- **Functional coverage points**: `ai_func_cov.sv` (layer/state
  transitions), `irq_func_cov.sv` (interrupt raise/clear sequences),
  `qspi_func_cov.sv` (mode x address-phase combinations),
  `uart_func_cov.sv` (baud/stop combinations).
- Exclusions (with rationale): third-party core RTL (CV32E40P -
  behaviorally verified via arch-test + lockstep instead), the UVM
  library, and simulation-only models.

### 4.6 Lint gate

`make lint` runs Verilator lint on the exact ASIC file list
(`asic/filelist.f`, launched from `asic/`; since 2026-09-06 the list carries
the JTAG debug sources and the `JTAG_DEBUG`/`FC1_FIX`/`I2C_SDA_SYNC` defines
of the delivered configuration): **0 errors, 979 warnings,
no waiver file** (flow lint of the signoff run, `asic/README.md` 9.8).
`make lint-fpga` applies the same gate to `fpga_top` with the BSCANE2 TAP and
lint-only Xilinx primitive shells (`verif/tb/xilinx_prim_stubs.sv`). Style-noise categories are suppressed on the command
line (TIMESCALEMOD, WIDTHEXPAND, WIDTHTRUNC, CASEINCOMPLETE, UNSIGNED,
UNOPTFLAT), while MODDUP and PINMISSING are deliberately kept enabled
because they catch module duplication and unconnected pins. The raw log
is delivered as-is (`asic/reports/lint/`); nothing is hidden behind
waivers.

### 4.7 Hardware-in-the-loop

The bitstream of the delivered RTL (`rtl/fpga/fpga_top.bit`, built from
`soc_files.f` with the same defines as the ASIC flow) runs on Genesys-2;
boot from real S25FL256S flash, live inference, UART command menu (h/v/r)
and LED class indication are exercised, and the jury interaction scenario
is rehearsed end-to-end (Section 13). The JTAG debug subsystem is exercised
on the same board through the on-board USB-JTAG (Xilinx BSCANE2 in place of
the ASIC TAP pins): `make jtag-board` (OpenOCD: halt, registers,
single-step, CSR, memory and MMIO access, hardware breakpoint, reset halt /
reset run) and `scripts/kart_jtag_entegrasyon.py` (a debug session
interleaved with live inferences, hardware breakpoint before the
accelerator starts) - Section 12.

## 5. EK-3 Activity Classes - Traceability and Exit Criteria

| EK-3 activity | Priority | Implementation | Exit criterion | Status |
|---|---|---|---|---|
| Verification Plan | Best effort | This document | Scope + methods + progress written and current | Done |
| Block-Level Tests | Optional | Standalone TBs: `uart_stp_tb`, `uart_stream_tb`, `i2c_master_tb`/`i2c_system_tb`, `qspi_modes_tb`, `ai_accel_tb` | Each standalone TB passes self-check | Done (5/5) |
| Protocol Checks | **Mandatory** | SVA on ten AXI/AXI-Lite interfaces, always-on in every run | Zero violations in all runs | Done |
| Core Tests | Best effort | riscv-arch-test + Spike lockstep | Signature diff = 0; trace match end-to-end | Done (46/46; 319,995 records) |
| AI Accelerator Tests | **Mandatory** | Golden-vector TB (6 scenarios) + tensor compare + IRQ test + N=1000 batch | Bit-exact vs software reference, self-checking | Done |
| System-Level Tests | **Mandatory** | Boot + peripheral C tests on `soc_top` | All scenarios pass with checkers active | Done |

## 6. Test Inventory (`make test-all` - 18 components)

One command runs the full package, compiled in the delivered configuration
(`soc_files.f`: `JTAG_DEBUG`, `FC1_FIX`, `I2C_SDA_SYNC`). The 16 SoC
components were executed green on **two independent machines** (the second
a fresh install), 16/16; the two JTAG simulations were added to the package
on 2026-09-06 (`jtag-sim` 17 stages, `jtag-bridge-sim` 6 scenarios, both
passing on the delivered build). The OpenOCD/gdb demos, the `fpga_top` lint
and the `jtag-equiv` isolation proof are grouped in `make jtag-gates`
(the debugger tools are optional; missing tools give `SKIP`).

**Independent reproduction of the full package (2026-09-06, commit
`2f85f97`, second machine: WSL2 Ubuntu 24.04, Verilator 5.049, Spike
1.1.1-dev, xPack RISC-V GCC 13.2.0):** `make test-all` **18/18** - regression
6/6 with both Spike lockstep runs, arch-test 46/46, UVM 8/8, `jtag-sim`
17/17, `jtag-bridge-sim` 6/6, `soc-perf` unchanged at 459,016 cycles /
21.0x - and `make jtag-gates` **6/6** (OpenOCD 0.12 end-to-end demo, gdb
demo, `lint-fpga`, `jtag-equiv`) on the same tree. One environment note for
a fresh machine: `spike` must be on `PATH`; otherwise the two lockstep
sub-tests report `Spike kayit: 0` and the regression component fails
without any design fault. `make test-full` chains `test-all` with the gates
and the physical simulations (`lint`, `lint-fpga`, `jtag-gates`,
`asic-sram-sim`, `asic-top-sim`, `boot-real`, `isa-compliance`,
`ai-uart-load`) for a single local command; the board demo and the VM flow
stay separate. The same targets can be launched from the jury panel
(`sw/demo/juri_panel.py`, "Verification suite").

| # | Target | What it exercises | Pass criterion / key measurement |
|---|---|---|---|
| 1 | `regression` | Mixed package over full SoC: UART bring-up set (x3 firmwares), Spike lockstep (minimal + deep), QSPI | All sub-tests `result=PASS`; lockstep diff 0 |
| 2 | `uart-baud` | Runtime reprogramming of CPB across 115200 (CPB 434) / 1 Mbps (CPB 50) / 9600 (CPB 5208) in one run | Decoded strings match at every rate; baud error +0.47% / +4.17% / +0.01%; 465,047 cycles total (~9.3 ms); 56,651 protocol checks, 0 violations |
| 3 | `uart-stp` | Stop-bit modes per EK-2 UART_STP | Measured TX frame lengths 4336 / 4552 / 4768 / 4768 cycles (deltas +216 / +432 exactly as computed; mode 11 = 2-stop equivalence); hardware guarantee 4755 >= 4752 floor |
| 4 | `uart-stream` | UART_1 RX -> AI SRAM DMA: little-endian word packing, own AXI4 write master (ID 3), completion interrupt (bit 18), ABORT semantics | DMA image in AI SRAM matches sent bytes; interrupt pulse observed |
| 5 | `boot` | Full QSPI boot: 96-byte boot ROM loader, 2048-iteration x1 READ loop (CCR 0x0803_0103), 8 KB image to ISRAM, `fence.i`, jump to 0x0001_0000 | Golden "Hello World" over UART; copy ~27.5 ms, first UART byte ~27.6 ms, full string ~28.7 ms; 120 ms watchdog |
| 6 | `qspi-modes` | x1/x2/x4 data phases, 3/4-byte address, AUTO/FORCE/SKIP address modes | Read-back compare per mode |
| 7 | `qspi-err` | 64-deep TX/RX FIFOs, flush bits, status flags | Flag/flush semantics per EK-2 QSPI_DR/FCR/STA |
| 8 | `i2c-sys` | NBY/ADR programming, TX/RX echo against `i2c_slave_model.sv`, NACK path | Echoed data matches; done/nack flags correct |
| 9 | `ai` | Standalone accelerator TB - **6 scenarios: 2 real-speech + 4 synthetic**, word-level tensor compare | All 6 pass; conv (1000 words) and FC logits (4 x INT8) bit-exact vs golden |
| 10 | `soc-ai` | Full inference launched from C over the real bus | Class + tensors match golden |
| 11 | `soc-perf` | HW vs SW cycle measurement on the same CPU (mcycle) | Simulation (2026-09-01, `verif/perf_summary.txt`): HW 459,016 cycles; SW 9,684,726 cycles (xPack GCC 13.2.0 `-O2`); speedup **21.0x**; conv_out 1000/1000 words bit-exact |
| 12 | `soc-ai-irq` | Specification interrupt flow: configure -> START -> `wfi` -> irq17 -> vector slot 17 ISR -> result over UART -> DONE clear -> `mret` | `result=PASS`; 2,012,223 cycles (~40 ms); 363 report bytes |
| 13 | `soc-timer` | Prescaler, auto-reload, level-triggered interrupt, EVC clear | Event counting and IRQ level semantics per EK-2 |
| 14 | `soc-strm` | UART_1 stream end-to-end through the SoC path with arbiter ownership | Transfer completes; ownership released after ABORT-safe drain |
| 15 | `arch-test` | riscv-arch-test RV32I+M | **46/46**, Spike signature diff = 0 |
| 16 | `uvm` | GPIO, Timer, UART_0 and I2C directed + constrained-random tests via the shared AXI-Lite UVM agent | 8/8 PASS (`UVM_ERROR: 0`) |
| 17 | `jtag-sim` | riscv-dbg JTAG subsystem, pure-SV TAP bit-bang on `soc_top`: IDCODE/DTMCS/DMI, halt/resume, abstract commands, program buffer, single-step/trigger, `ndmreset`, DMI back-pressure, `cmderr` paths, SBA tie-off, DM discovery registers, TAP corner cases, ISRAM write + `ebreak`, DM-region behaviour | **17/17** stages (self-checking; stage 17 pins the documented DM-region limitation, finding #11) |
| 18 | `jtag-bridge-sim` | `axi_dm_slave` unit TB with the real `dm_top`: arbitration (data beats instruction), R/B channel hold with `r_ready`/`b_ready` low, `w_strb` byte enables, reset with a request in flight | **6/6** scenarios + request/response timing-contract SVA |

Additional evidence outside the package: `make lint` / `make lint-fpga`
(Section 4.6), `make jtag-gates` (`jtag-equiv` isolation proof, OpenOCD/gdb
demos when installed), `make jtag-board` (Section 12), `make asic-top-sim`
(`asic_top` + 27 macro models, FC-1 fix proof - finding #8),
`make boot-real` (boot against real-flash timing model, proving
`.rodata` arrives via the loader's data-copy stage), `make coverage-tb`
/ `make coverage` (Section 8), `make ai-batch1000` (Section 10).

## 7. Regression Package Internals

`scripts/run_regression.sh` builds firmware per scenario, runs the
Verilator model, and reads the verdict from `result.log`
(`result=PASS|FAIL` plus `cycles`, `uart_bytes`). Each run is archived
under `logs/regression/<timestamp>/` with a `summary.txt`, and
`logs/latest` symlinks the most recent run; per-test logs live under
`logs/sim/<test>/`. Protocol-check pass/fail counters are aggregated
separately in the summary, so an SVA violation can never hide inside an
otherwise-passing scenario.

## 8. Coverage Plan and Results

Method: each testbench runs with coverage instrumentation against its
target module; per-module line coverage is consolidated in
`verif/coverage_tb_summary.txt` with annotated sources in
`logs/coverage/`. Targets were set in advance per design complexity; the
QSPI target is deliberately lower because several FSM error branches are
unreachable without fault injection in the multi-mode controller.

| TB | Target module | Target | Achieved (2026-09-01, clean rebuild) |
|---|---|---|---|
| uart-stp | `uart_axil.sv` | >= 90% | **93.3%** (98/105) |
| uart-stream | `uart_stream_axil.sv` | >= 90% | **95.2%** (140/147) |
| qspi-modes | `qspi_master_axil.sv` | >= 70% | **72.7%** (226/311) |
| i2c-sys | `i2c_master_axil.sv` | >= 95% | **97.8%** (180/184) |
| ai | `ai_accelerator.sv` | >= 95% | **96.7%** (404/418) |
| boot | `axi_sram_wrapper.sv` | 100% | **100.0%** (31/31) |

All targets met. Reproduce with:

    rm -rf obj_dir*
    make coverage-tb && make coverage

**SoC-level line coverage (15 system tests, single build, fixed
denominator; measured 2026-09-06 on the delivered configuration):** line
**90.7%** (359/396 points), branch **88.6%** (819/924) - raised from
72.2%/84.2% on 2026-09-01 by four targeted tests (`i2c_soc_test`,
`qspi_rdpath_test`, `csr_negatif_test`, `ai_sat_test`); the 1 September
figure on the 14-file denominator was 91.1%/91.3%, and the difference is
entirely the JTAG bridge `axi_dm_slave.sv` (22 lines that only a JTAG
session can reach), which `make jtag-cov` measures at 100% (49/49) with
the 17-stage JTAG testbench (riscv-dbg vendor files: `dmi_jtag_tap`
99.1%, `dm_mem` 96.3%, `dmi_jtag` 90.3%, `dm_csrs` 81.3%). Every
remaining uncovered line is classified as structurally-unreachable (A),
fault-injection-only (B, covered at block level) or a single
rationalized exception, with per-line evidence in
`verif/coverage_siniflandirma.md` - knowing what is uncovered and why
is treated as part of the coverage result itself. Functional coverage
(union over the run): 21/22 bins (95%) - UART 6/7 (reserved stop-bit
code 11 is programmed by no test), QSPI 7/7, AI-CSR 5/5, IRQ 3/3.

Functional coverage points (Section 4.5) are collected in the same runs.
Exclusions and rationale are listed in Section 4.5.

## 9. Core Verification

- **riscv-arch-test:** RV32I + RV32M, **46/46 pass**, every signature
  identical to the Spike ISS reference (diff = 0). Suite provenance is
  pinned in `asic/THIRD_PARTY.md` via a header fingerprint of
  `verif/arch_tests/suite/env/arch_test.h`.
- **Spike lockstep:** trace comparison over **319,995 PC records** in
  the deep run (part of `regression`), zero divergence; a minimal
  lockstep variant guards quick runs.
- The ELF carries no HTIF (`tohost`/`fromhost`), so standalone
  `make spike` is interactive by design; the automated Spike evidence
  path is the lockstep + signature flow inside `make test-all`.

## 10. AI Accelerator Verification

**Golden pipeline (all tools in `sw/ai_model/`):**
`micro_speech_quantized.tflite` -> `extract_weights.py` (weights/bias) ->
`generate_golden.py` (reference tensors) -> `fetch_real_features.py`
(real-speech feature vectors). `generate_ai_sram_init*.py` produce
memory images; `check_ai_sram.py` audits layout.

**Input contract:** feature frame = **1960 bytes** (49 time steps x 40
frequency bins, row-major, signed INT8, zero-point -128 as implemented
at `ai_accelerator.sv:72`), packed little-endian into 490 words at AI
SRAM offset 0 (0x0003_0000). The mandatory host-side uint8->int8
conversion and the full handshake are specified in
`docs/oznitelik_vektoru_formati.md`; the same contract is what a jury
input must follow.

**Directed scenarios:** standalone TB runs 6 self-checking scenarios
(2 real speech, 4 synthetic), each compared at tensor level (Section 3).

**Accuracy window:** the specification requires software-reference
accuracy within a 10% window. Result: over **N = 1000** diversified
inputs the RTL matches the software reference **bit-exact** - the window
is met with zero deviation. Report: `sw/ai_model/accuracy_report_n1000.txt`
(generated by `run_accuracy_window.py`, RTL side ingested from the batch
TB run).

**Accuracy evidence chain (summary):** our accuracy claim is
*equivalence*, not statistical sampling - four independent links close
the chain from the reference model down to the board:

1. **TFLite -> SW reference:** FC logits match the TFLite interpreter
   **1000/1000 inputs, max deviation 0 LSB**
   (`accuracy_report_n1000.txt`).
2. **SW reference -> RTL:** conv tensor (1000 words) + FC logits
   **bit-exact on all 1000 inputs**; accuracy difference **0.0 points**
   against the <=10-point window.
3. **RTL -> board:** live UART sweep of **60/60 diversified vectors**
   matches the SW argmax on Genesys-2, 459,062 cycles per inference
   (`sw/ai_model/kart_sweep_raporu_n60.txt`, handshake protocol of
   `docs/oznitelik_vektoru_formati.md`).
4. **Labeled real speech:** both real micro-speech features classify
   correctly (yes -> 2, no -> 3) in simulation and on the board; the 6/6
   standalone TB scenarios include them.

Because the hardware is bit-identical to the quantized reference model,
its accuracy on *any* dataset equals the reference model's accuracy by
construction; a sampled percentage on a small labeled set would be a
strictly weaker statement than links 1-2 above.

**Interrupt flow (specification-mandated):** `soc-ai-irq` implements the
required sequence exactly - CSR configure, START, core in `wfi`,
irq17 rises on completion, vectored ISR (slot 17) reads STATUS/argmax,
clears DONE, returns via `mret`, result printed over UART. Polling-only
operation would not satisfy the specification; this test proves the
interrupt path.

**Performance:**

- Simulation (`make soc-perf`, mcycle, 2026-09-01 run,
  `verif/perf_summary.txt`): HW 459,016 cycles; SW baseline 9,684,726
  cycles (xPack GCC 13.2.0 `-O2`); **21.0x**. The ratio is sensitive to
  the software baseline (compiler/optimisation level); the hardware
  path is not.
- On board (live, same CPU): HW 459,062 cycles = **9.18 ms** (~109
  inf/s at 50 MHz); SW 9,684,726 cycles = 193.7 ms; **21.0x** measured
  on hardware. Simulation and board differ by 46 cycles (bus/boot
  environment), i.e. the two measurements corroborate each other.

## 11. System-Level Verification

Four directed system tests instantiate the real `soc_top` with all bus
infrastructure, peripherals and protocol checkers active:

- **QSPI boot flow** (`boot_flow_test_tb.sv` +
  `verif/models/spi_flash_model.sv`, which implements the EK-2
  four-command set): timeline and pass criteria as in Section 6 row 5.
- **I2C system test** against `i2c_slave_model.sv` (address, NBY 1-4,
  echo, NACK path).
- **SoC AI chain** (`soc-ai`, `soc-ai-irq`, `soc-strm`): stream DMA into
  AI SRAM, arbiter priority accelerator > stream > CPU, inference,
  interrupt, result reporting.
- **Timer system test**: level-triggered IRQ held while EVN != 0,
  cleared via EVC.

`make boot-real` additionally replays boot against real S25FL256S
timing (tCO) - the scenario that originally exposed finding #5 below.

## 12. FPGA and On-Board Validation

Genesys-2 (XC7K325T-2), 200 MHz LVDS reference -> MMCM -> 50 MHz system
clock; QSPI clock driven through STARTUPE2/USRCCLKO with a bootloader
warm-up read for the first edges. The bitstream is generated from the
repository RTL in the delivered configuration (JTAG debug subsystem through
BSCANE2, `FC1_FIX`, `I2C_SDA_SYNC`) - what the jury sees on the board is
what is delivered in git.

| Metric | Value | Note |
|---|---|---|
| Setup / hold WNS | +2.433 ns / +0.059 ns | 0 violations / 24,260 setup endpoints (320 of them in `jtag_tck`, WNS +94.976 ns); bitstream of 6 Sep 2026 17:43 (JTAG + on-board OLED) |
| LUT | 13,772 | 6.76% (debug subsystem 1,254) |
| Flip-flops | 9,756 | 2.39% (debug subsystem 1,081) |
| Block RAM | 14 | 3.15% |
| DSP | 10 | 1.19% |
| IOB / BUFG / BSCANE2 | 49 / 3 / 2 | 6 IOBs drive the OLED; BSCANE2 TCK on a BUFG; USER3 = DTMCS, USER4 = DMI |
| Power (estimate) | 0.330 W | 0.167 dynamic + 0.163 static |
| Routing | 19,973 / 19,973 | 0 failures |
| Implementation DRC | 0 errors | 80 warnings, each justified |

Resource note: an earlier accelerator revision exposed three
combinational read ports on the `conv_out` store, which blocked RAM
inference and cost ~32,000 flip-flops; converting to a single
synchronous port let every array map to Block RAM and cut resource use
roughly five-fold. This is a verification-driven implementation fix and
applies identically to both FPGA and ASIC targets.

Live system: boots from flash, runs inference automatically at power-up,
accepts a UART command menu (h/v/r) and mirrors the class result on
LEDs.

**JTAG on the board (2026-09-06).** OpenOCD 0.12 (WSL, `ftdi` driver; the
FT2232H is handed to WSL with `scripts/jtag_kart_wsl.ps1`) reaches the debug
module through the Kintex-7 TAP and `BSCANE2` USER3/USER4
(`rtl/debug/openocd/genesys2_bscan.cfg`). `make jtag-board` **PASS**
(`rtl/debug/openocd/demo_run_board_2026-09-06.log`): halt inside the
flash-booted demo firmware, register write/read-back, single-step, `misa`,
DSRAM write/read, 8-word block read, UART0 MMIO write, hardware breakpoint
hit, watchpoint refused as expected (single trigger, no data trigger),
`reset halt` into the boot ROM, `reset run`. `scripts/kart_jtag_entegrasyon.py`
**PASS** (`demo_run_board_entegrasyon_2026-09-06.log`): a halt/inspect/resume
session between live inferences leaves the class result and cycle count
unchanged, and a hardware breakpoint on `run_hw` stops the core after the
UART-delivered vector is verified and before the accelerator starts, with
the 1,960 received bytes already visible in the AI input SRAM; resume
completes the inference with the same result. Both runs used the bitstream
built from the same RTL on 2026-09-03 (then named `fpga_top_jtag.bit`; the
build is now the standard `build_genesys2.tcl` - build log excerpt and
bitstream hash in `rtl/debug/openocd/vivado_ozet_2026-09-03_jtag_bitstream.txt`).

## 13. Jury Demo Rehearsal

The jury stated that unseen data will be pushed over UART during the
final. This exact scenario was rehearsed end-to-end on the board:
**60 diversified inputs** - real speech, noisy copies, time/frequency
shifts, mixtures, Gaussian and uniform random, sparse extremes,
structured patterns, saturation constants - were sent over UART;
**60/60 class results matched the bit-exact software reference**, in
15.9 s with zero timeouts. The tool is in-repo and re-runnable with any
N on demo day:

    python3 sw/ai_model/kart_sweep.py --n <N>

Report: `sw/ai_model/kart_sweep_raporu_n60.txt`. Frame format and
handshake contract: `docs/oznitelik_vektoru_formati.md`.

**Re-validation after the schedule change (same bitstream, same flash
image):** 2026-09-02, 60/60 again (`kart_sweep_raporu_n60_2026-09-02.txt`);
2026-09-03, the announced jury volume - **1000/1000** (40 named
families + 960 seeded-random vectors, zero timeouts, 260 s end-to-end;
`kart_sweep_raporu_n1000_2026-09-03.txt`). The jury criterion is
>= 900/1000 argmax agreement. A flash-independent backup bitstream with
the same demo firmware embedded (`rtl/fpga/fpga_top_m2_demo.bit`, M2
SRAM-direct boot) was also rebuilt and verified on the board on
2026-09-03, and a demo-day GUI (`sw/demo/juri_panel.py`: bitstream
load, live UART view, format-agnostic batch send, result file) was
validated end-to-end on the board.

## 14. Findings Register (what verification caught)

All found by measurement, fixed, and locked into regression - evidence
that the methodology works, not just that the design passes:

1. **Flash image contained only `.text`** - any firmware with string
   literals fell silent on the board. Fix: full-section image
   generation; guarded by `boot` + `boot-real`.
2. **Crossbar performs no data-path reads from Instruction SRAM** (by
   design) - `.rodata` reads returned empty. Fix: a data-copy stage in
   the bootloader; guarded by `scripts/check_srodata.sh` and
   `boot-real`.
3. **`BOOTROM_CONTENT` undefined in synthesis** - boot ROM entered the
   bitstream empty; CPU trapped at reset. One-line define fix; the
   define is now mandatory in both `config.yaml` and `filelist.f`.
4. **`uart_putc` cleared the RX flag on every character** - incoming
   bytes were lost while the board was printing; exactly what jury-side
   traffic would trigger. Reproduced on hardware, fixed, guarded by the
   stream/interaction tests.
5. **QSPI output toggled on the wrong clock edge** (real-flash tCO) -
   TX data is now registered on the falling edge (`tx_io_q`, SPI
   mode-0 correction); RX sampling was not changed; guarded by
   `boot-real`.
6. **WP#/HOLD# regression introduced by fix #5** - caught in
   cross-review; guarded by `qspi-modes`.
7. **UART_0 has no RX FIFO** (EK-2 defines single-byte TDR/RDR, no
   FIFO) - senders must respect the ready-line handshake; the protocol
   is documented in `docs/oznitelik_vektoru_formati.md` and host tools
   comply.
8. **FC-1 - macro-branch read-hold contract violation** (found
   2026-09-01 by `make asic-top-sim`, i.e. *after* the 14 August signoff):
   in the `ASIC_SRAM_MACRO` branch the fully-connected stage consumed its
   `conv_out` read >= 3 cycles after issuing it, while the delivered
   OpenRAM functional model holds read data for exactly one cycle. The
   behavioural branch (all SoC tests, FPGA, 60/60 and 1000/1000 board
   runs) was unaffected. **Fixed in the delivered RTL:** the one-line fix
   (`co_re` re-issued during `ST_FC_FETCH_W_WAIT`, define `FC1_FIX`) is
   enabled in `soc_files.f`, `asic/config.yaml`/`filelist.f` and the FPGA
   build. Proof: `make asic-top-sim` checks the FC argmax (== 2) and the
   result word under the OpenRAM model contract (`CHECK_ARGMAX`); negative
   control (2026-09-06): the same run on RTL without `FC1_FIX` fails.
   Isolation evidence and the expected-silicon analysis are in
   `asic/README.md` section 9.5. The strongest evidence that the
   methodology keeps finding issues past signoff.
9. **`axi_dm_slave` combinational request path in the SS critical set**
   (found 2026-09-03 by the first full sky130 run with the debug module,
   `rtl/debug/asic_jtag_sentez/full/`): the CPU instruction-fetch address
   path continued through the crossbar and the combinational bridge into
   the debug module's memory (140 of the 1000 worst SS paths). Fix: the
   accepted request is registered (DM at T+1, response at T+2); the DM
   endpoints left the SS and hold critical sets (`full_v2/`); guarded by
   `jtag-bridge-sim` (timing-contract SVA) and `jtag-sim`.
10. **gdb demo verdict ignored exit codes** (found 2026-09-03 in review):
    the closing `python` block of the gdb script never ran, gdb exited 1
    and OpenOCD was killed with SIGTERM while the verdict said PASS. Fix:
    the runner closes OpenOCD over telnet and the exit codes of gdb,
    OpenOCD and the simulator are part of the verdict (`make jtag-gdb`).
11. **Debug-module region not qualified by debug mode** (found by
    `jtag-sim` stage 17): firmware can write the DM's `HALTED` flag at
    0x0004_0100 and mislead `dmstatus`; 0x0004_1000-0x0004_FFFF falls
    through to the SRAM legs. **Open - accepted and documented limitation**
    of the delivered chip (no PMP, M-mode only, no security requirement;
    the fix is a crossbar change reserved for a future revision -
    `asic/README.md` section 9.9/9). Stage 17 pins the current behaviour
    so any decode change is caught deliberately. This is the register's
    only open item.

## 15. Known Limitations and Declarations

- **UART_0 RX FIFO:** none, by EK-2 register-map fidelity (FIFO is
  mandated only in QSPI, where a 64-deep FIFO is implemented). Hosts
  must follow the documented handshake.
- **JTAG debug:** optional per specification (+3 bonus), **part of the
  delivered chip** (PULP riscv-dbg on an IEEE 1149.1 TAP, five pins;
  `JTAG_DEBUG` on at every entry point). Declared limitations: the DM
  region is not qualified by debug mode (finding #11; no PMP, M-mode-only
  MCU without a security requirement); the instruction SRAM is not readable
  from the data port (crossbar decode by design, finding #2 - the debugger
  downloads code into ISRAM but reads `.text` from the ELF; hardware
  breakpoints only); System Bus Access is tied off (program-buffer memory
  access, OpenOCD `riscv set_mem_access progbuf`); CV32E40P has a single
  hardware trigger (no data watchpoints). Root README Section 10.10,
  `asic/README.md` 9.9/9.
- **ASIC SS corner:** 50 MHz closes at TT with +1.684 ns margin; SS
  closure is ~32.7 MHz - disclosed with rationale in `asic/README.md`
  9.1/9.9 (the frequency target metric is defined as ~50 MHz on FPGA,
  which is met with +2.538 ns).

<!-- Team decision (Berk approval): the paragraph below is the 30 KB
     interpretation statement; keep or drop per decision. -->
**AI memory budget statement:** the 30 KB AI memory prescribed by the
specification is the AI SRAM region in the system memory map
(0x0003_0000). The entire AI data set - input vector, weights, biases
and intermediate outputs - resides in this region. The small buffers
inside the accelerator (local copies of input / weights / intermediate
output) are pipeline staging for data whose master copy lives in that
region; they hold no additional data class and do not extend the AI data
budget beyond the 30 KB region.

## 16. Completion Status vs. Scoring Breakdown (Table 3-1)

| Scoring row | Where satisfied |
|---|---|
| Verification and test plan | This document |
| Core verification | Section 9 (46/46; 319,995-record lockstep) |
| Accelerator verification | Section 10 (bit-exact N=1000; IRQ flow; 21.0x on board) |
| System-level verification | Sections 11-12 (boot chain, peripherals, live board) |
| Breadth of defined coverage and pass rate within it | Sections 5-8 (100% of mandatory EK-3 classes passing; 16/16 SoC package on two machines plus the two JTAG simulations - 18 components; line + functional coverage) |

## 17. Reproducibility

From a clean clone (toolchain: Verilator 5.049, xPack GCC 13.2.0
riscv32, Spike ISS; FPGA side Vivado 2021.2):

    make test-all                                 # 18 components (16 SoC + jtag-sim + jtag-bridge-sim)
    rm -rf obj_dir* && make coverage-tb && make coverage
    make lint                                     # delivered configuration (asic/filelist.f), 0 errors, no waivers
    make lint-fpga                                # fpga_top with the BSCANE2 TAP
    make jtag-gates                               # + jtag-equiv isolation proof, OpenOCD/gdb demos if installed
    make asic-top-sim                             # asic_top + 27 macro models: boot + AI, argmax (FC-1 fix proof)
    make boot-real                                # real-flash timing boot
    python3 sw/ai_model/kart_sweep.py --n 60      # board (Genesys-2 attached)
    make jtag-board                               # board, OpenOCD through the on-board USB-JTAG (Section 12)

Two-machine evidence: the 16 SoC components also ran 16/16 on an independent,
freshly installed machine; results are not tied to a single environment. The
two Spike lock-step tests inside `regression` need Spike on the host: on the
laptop used for the JTAG work they could not run (no Spike installed); they
are the 6/6 of the regression row on the team machine that has it.

## Appendix A. Requirement -> Test -> Evidence Traceability

| Requirement (source) | Test(s) | Evidence path |
|---|---|---|
| UART programmable baud, >= 2 rates, 1 Mbps cap (spec/EK-2) | `uart-baud` | `logs/sim/uart_baud_sweep/` |
| UART stop-bit modes (EK-2 UART_STP) | `uart-stp` | `logs/sim/uart_stp_reg_test/` |
| GPIO fixed 16-in/16-out, IDR/ODR[15:0] (EK-2) | `uvm` (directed+random), board LEDs | `verif/uvm/`, board demo |
| Timer prescaler + level IRQ (EK-2) | `soc-timer` | `logs/sim/timer_irq_test/` |
| I2C master transactions (EK-2) | `i2c-sys` | `logs/sim/i2c_system_test/` |
| QSPI x1/x2/x4, FIFO, boot (EK-2 + boot flow) | `qspi-modes`, `qspi-err`, `boot`, `boot-real` | `logs/sim/qspi_*`, `logs/sim/boot_flash_hello/` |
| Boot sequence: ROM loader -> flash -> ISRAM -> handoff (spec) | `boot`, `boot-real` | Section 6 row 5 timings |
| AI interrupt-on-completion flow (spec) | `soc-ai-irq` | `logs/sim/ai_irq_test/` |
| AI accuracy within 10% window (spec) | `ai`, `ai-batch1000` | `sw/ai_model/accuracy_report_n1000.txt` |
| AI speedup > 1.0x vs software (team metric) | `soc-perf`, board measurement | Section 10 (21.0x sim / 21.0x board; `verif/perf_summary.txt`) |
| AXI protocol compliance on all interfaces (EK-3 mandatory) | always-on SVA in every run | regression summaries, protocol counters |
| ISA correctness (RV32IMC) | `arch-test`, lockstep | signature diffs; lockstep logs in `logs/lockstep/`, `logs/arch_test/` |
| JTAG debug interface - optional, +3 bonus (spec "1x JTAG (Opsiyonel)"; EK-2 "JTAG (Opsiyonel)": debug module on the CV32E40P debug port through an on-chip TAP, riscv-dbg suggested) | `jtag-sim`, `jtag-bridge-sim`, `jtag-equiv`, `jtag-openocd`, `jtag-gdb`, `jtag-board`, `scripts/kart_jtag_entegrasyon.py` | `rtl/debug/openocd/demo_run_*.log` (sim 2026-09-02/03, board 2026-09-06), `rtl/debug/sim/jtag_cov_summary.txt`, `scripts/jtag_equiv_expected_diffs/`, `logs/jtag/` |

Note: paths under `logs/` are produced by the corresponding make targets;
`logs/` is not committed (see `.gitignore`) and regenerates
deterministically via the commands in Section 17.
