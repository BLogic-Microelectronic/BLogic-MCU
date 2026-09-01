# BLogic MCU - Verification and Test Plan

Team: Ostim BLogic Mikroelektronik - Ostim Teknik Universitesi
Category: TEKNOFEST 2026 Chip Design Competition - Microcontroller (MCU)
Baseline: RTL freeze 2026-08-14 - ASIC signoff run `RUN_teslim_2026-08-14`
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
- FPGA prototype (Digilent Genesys-2, Kintex-7 XC7K325T-2) and the live
  on-board system

**Out of scope:** JTAG debug module (optional per specification; not
implemented in this revision), analog blocks (different category), ASIC
physical verification details (covered by `asic/README.md`).

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
(`asic/filelist.f`, launched from `asic/`): **0 errors, 932 warnings,
no waiver file**. Style-noise categories are suppressed on the command
line (TIMESCALEMOD, WIDTHEXPAND, WIDTHTRUNC, CASEINCOMPLETE, UNSIGNED,
UNOPTFLAT), while MODDUP and PINMISSING are deliberately kept enabled
because they catch module duplication and unconnected pins. The raw log
is delivered as-is (`asic/reports/lint/`); nothing is hidden behind
waivers.

### 4.7 Hardware-in-the-loop

The frozen RTL's bitstream runs on Genesys-2; boot from real
S25FL256S flash, live inference, UART command menu (h/v/r) and LED class
indication are exercised, and the jury interaction scenario is rehearsed
end-to-end (Section 13).

## 5. EK-3 Activity Classes - Traceability and Exit Criteria

| EK-3 activity | Priority | Implementation | Exit criterion | Status |
|---|---|---|---|---|
| Verification Plan | Best effort | This document | Scope + methods + progress written and current | Done |
| Block-Level Tests | Optional | Standalone TBs: `uart_stp_tb`, `uart_stream_tb`, `i2c_master_tb`/`i2c_system_tb`, `qspi_modes_tb`, `ai_accel_tb` | Each standalone TB passes self-check | Done (5/5) |
| Protocol Checks | **Mandatory** | SVA on ten AXI/AXI-Lite interfaces, always-on in every run | Zero violations in all runs | Done |
| Core Tests | Best effort | riscv-arch-test + Spike lockstep | Signature diff = 0; trace match end-to-end | Done (46/46; 319,995 records) |
| AI Accelerator Tests | **Mandatory** | Golden-vector TB (6 scenarios) + tensor compare + IRQ test + N=1000 batch | Bit-exact vs software reference, self-checking | Done |
| System-Level Tests | **Mandatory** | Boot + peripheral C tests on `soc_top` | All scenarios pass with checkers active | Done |

## 6. Test Inventory (`make test-all` - 16 components)

One command runs the full package. Executed green on **two independent
machines** (the second a fresh install), 16/16.

| # | Target | What it exercises | Pass criterion / key measurement |
|---|---|---|---|
| 1 | `regression` | Mixed package over full SoC: UART bring-up set (x3 firmwares), Spike lockstep (minimal + deep), QSPI | All sub-tests `result=PASS`; lockstep diff 0 |
| 2 | `uart-baud` | Runtime reprogramming of CPB across 115200 (CPB 434) / 1 Mbps (CPB 50) / 9600 (CPB 5208) in one run | Decoded strings match at every rate; baud error +0.47% / +4.17% / +0.01%; 465,047 cycles total (~9.3 ms); 56,651 protocol checks, 0 violations |
| 3 | `uart-stp` | Stop-bit modes per EK-2 UART_STP | Measured TX frame lengths 4336 / 4552 / 4768 / 4768 cycles (deltas +216 / +432 exactly as computed; mode 11 = 2-stop equivalence); hardware guarantee 4755 >= 4752 floor |
| 4 | `uart-stream` | UART_1 RX -> AI SRAM DMA: little-endian word packing, own AXI4 write master (ID 3), completion interrupt (bit 18), ABORT semantics | DMA image in AI SRAM matches sent bytes; interrupt pulse observed |
| 5 | `boot` | Full QSPI boot: 96-byte boot ROM loader, 2048-iteration x1 READ loop (CCR 0x0803_0103), 8 KB image to ISRAM, `fence.i`, jump to 0x0001_0000 | Golden "Hello World" over UART; copy ~27.5 ms, first UART byte ~27.6 ms, full string ~28.7 ms; 60 ms watchdog |
| 6 | `qspi-modes` | x1/x2/x4 data phases, 3/4-byte address, AUTO/FORCE/SKIP address modes | Read-back compare per mode |
| 7 | `qspi-err` | 64-deep TX/RX FIFOs, flush bits, status flags | Flag/flush semantics per EK-2 QSPI_DR/FCR/STA |
| 8 | `i2c-sys` | NBY/ADR programming, TX/RX echo against `i2c_slave_model.sv`, NACK path | Echoed data matches; done/nack flags correct |
| 9 | `ai` | Standalone accelerator TB - **6 scenarios: 2 real-speech + 4 synthetic**, word-level tensor compare | All 6 pass; conv (1000 words) and FC logits (4 x INT8) bit-exact vs golden |
| 10 | `soc-ai` | Full inference launched from C over the real bus | Class + tensors match golden |
| 11 | `soc-perf` | HW vs SW cycle measurement on the same CPU (mcycle) | Simulation: HW 436,344 cycles START->DONE (114 inf/s @ 50 MHz, 223.4 KB/s); SW 7,897,598 cycles; speedup 18.1x |
| 12 | `soc-ai-irq` | Specification interrupt flow: configure -> START -> `wfi` -> irq17 -> vector slot 17 ISR -> result over UART -> DONE clear -> `mret` | `result=PASS`; 2,012,223 cycles (~40 ms); 363 report bytes |
| 13 | `soc-timer` | Prescaler, auto-reload, level-triggered interrupt, EVC clear | Event counting and IRQ level semantics per EK-2 |
| 14 | `soc-strm` | UART_1 stream end-to-end through the SoC path with arbiter ownership | Transfer completes; ownership released after ABORT-safe drain |
| 15 | `arch-test` | riscv-arch-test RV32I+M | **46/46**, Spike signature diff = 0 |
| 16 | `uvm` | `gpio_directed_test` + `gpio_random_test` via AXI-Lite UVM agent | Both UVM tests pass (2/2) |

Additional evidence outside the package: `make lint` (Section 4.6),
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

| TB | Target module | Target | Achieved |
|---|---|---|---|
| uart-stp | `uart_axil.sv` | >= 90% | [[REGEN]] |
| uart-stream | `uart_stream_axil.sv` | >= 90% | [[REGEN]] |
| qspi-modes | `qspi_master_axil.sv` | >= 70% | [[REGEN]] |
| i2c-sys | `i2c_master_axil.sv` | >= 95% | [[REGEN]] |
| ai | `ai_accelerator.sv` | >= 95% | [[REGEN]] |
| boot | `axi_sram_wrapper.sv` | 100% | [[REGEN]] |

Note: the committed summary predates the final QSPI RTL fixes; the table
above is refreshed from a clean rebuild before submission:

    rm -rf obj_dir*
    make coverage-tb && make coverage

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

- Simulation (mcycle, START->DONE): HW 436,344 cycles = 114 inf/s at
  50 MHz (223.4 KB/s over 1960-byte frames); SW baseline 7,897,598
  cycles; **18.1x**. Testbench first-read->last-write window: 454,986
  cycles (~4% wider, DONE-polling quantization).
- On board (live, same CPU): HW 459,062 cycles = **9.18 ms**; SW
  9,684,726 cycles = 193.7 ms; **21.0x** measured on hardware.

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
frozen repository RTL - what the jury sees on the board is what is
delivered in git.

| Metric | Value | Note |
|---|---|---|
| Setup / hold WNS | +3.089 ns / +0.068 ns | 0 violations / 21,601 endpoints |
| LUT | 12,340 | 6.05% |
| Flip-flops | 8,639 | 2.12% |
| Block RAM | 14 | 3.15% |
| DSP | 10 | 1.19% |
| Power (estimate) | 0.328 W | 0.167 dynamic + 0.161 static |
| Routing | 17,720 / 17,720 | 0 failures |
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
   RX sampling moved to the rising edge (SPI mode-0 correction);
   guarded by `boot-real`.
6. **WP#/HOLD# regression introduced by fix #5** - caught in
   cross-review; guarded by `qspi-modes`.
7. **UART_0 has no RX FIFO** (EK-2 defines single-byte TDR/RDR, no
   FIFO) - senders must respect the ready-line handshake; the protocol
   is documented in `docs/oznitelik_vektoru_formati.md` and host tools
   comply.

## 15. Known Limitations and Declarations

- **UART_0 RX FIFO:** none, by EK-2 register-map fidelity (FIFO is
  mandated only in QSPI, where a 64-deep FIFO is implemented). Hosts
  must follow the documented handshake.
- **JTAG debug:** optional per specification; not implemented in this
  revision.
- **ASIC SS corner:** 50 MHz closes at TT with +2.210 ns margin; SS
  closure is ~34.4 MHz - disclosed with rationale in `asic/README.md`
  9.1/9.9 (the frequency target metric is defined as ~50 MHz on FPGA,
  which is met with +3.089 ns).

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
| Breadth of defined coverage and pass rate within it | Sections 5-8 (100% of mandatory EK-3 classes passing; 16/16 package on two machines; line + functional coverage) |

## 17. Reproducibility

From a clean clone (toolchain: Verilator 5.049, xPack GCC 13.2.0
riscv32, Spike ISS; FPGA side Vivado 2021.2):

    make test-all                                 # 16/16 package
    rm -rf obj_dir* && make coverage-tb && make coverage
    make lint                                     # 0 errors, no waivers
    make boot-real                                # real-flash timing boot
    python3 sw/ai_model/kart_sweep.py --n 60      # board (Genesys-2 attached)

Two-machine evidence: the full package also ran 16/16 on an independent,
freshly installed machine; results are not tied to a single environment.

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
| AI speedup > 1.0x vs software (team metric) | `soc-perf`, board measurement | Section 10 (18.1x sim / 21.0x board) |
| AXI protocol compliance on all interfaces (EK-3 mandatory) | always-on SVA in every run | regression summaries, protocol counters |
| ISA correctness (RV32IMC) | `arch-test`, lockstep | signature diffs; lockstep logs in `logs/lockstep/`, `logs/arch_test/` |

Note: paths under `logs/` are produced by the corresponding make targets;
`logs/` is not committed (see `.gitignore`) and regenerates
deterministically via the commands in Section 17.
