# Questa / ModelSim waveform flow

Runs the delivered configuration (`soc_files.f`: `JTAG_DEBUG`, `FC1_FIX`,
`I2C_SDA_SYNC`) in **Questa Sim-64 10.7c** (2018.08) so that every test of
`make test-all` can be watched in a waveform window. The Verilator flow stays
the reference for the verdicts (`make test-all`, root README section 10); this
flow exists for waveform inspection and for a second simulator's opinion.

**Status:** validated on Questa Sim-64 10.7c (Windows, licensed
installation) on 6 September 2026 - **21/21 tests pass** headless, see the run
record at the end. The wrapper testbench `questa_soc_tb.sv` was first checked
under Verilator; the first Questa run needed six flow fixes (listed under
"What happens"), no RTL or testbench change.

## Quick start

Windows (double-click or from `cmd`):

```
verif\questa\wave.bat              menu of tests
verif\questa\wave.bat jtag_sim     one test
```

Linux:

```
verif/questa/wave.sh jtag_sim
```

Headless, all tests or a subset (verdict per test + `logs/SUMMARY.txt`, exit
code = number of failing tests; the whole set takes about 25 minutes on a
laptop, `ai_sw_reference` alone 8-9 minutes):

```
powershell -ExecutionPolicy Bypass -File verif\questa\batch.ps1            (Windows)
powershell -ExecutionPolicy Bypass -File verif\questa\batch.ps1 jtag_sim boot
verif/questa/batch.sh [test ...]                                            (Linux)
```

or by hand: `vsim -c -do "onerror {quit -code 1}; do verif/questa/run_test.do <test>; quit -f"`
from the repository root (the `onerror` makes a compile or elaboration error
exit instead of leaving `vsim -c` at its prompt).

From the jury panel (`python sw/demo/juri_panel.py`, tab **Questa waves**):
pick a test in the table, tick the wave groups you want to see (and, if
needed, type extra signal paths), then *Open in Questa (GUI + wave)*; *Run
headless* runs the selected tests with `vsim -c` and shows the verdicts in the
table and the log.

Inside a running Questa GUI (any working directory):

```
do <repo>/verif/questa/run_test.do jtag_sim
do <repo>/verif/questa/run_test.do            (lists the tests)
```

Requirements: `vsim` on `PATH` (Questa `win64` or `linux_x86_64` directory)
and the firmware bundles under `verif/questa/fw/` (committed; regenerate on the
WSL / Linux side with `make questa-pack`, which needs the RISC-V toolchain).
Nothing else is needed on the Questa machine: no toolchain, no Verilator.

What happens: the design is recompiled from `soc_files.f` into
`verif/questa/work/` with the test's defines, the testbench is loaded from the
directory that holds its hex files, a wave window with the groups below is
opened (GUI only; skipped in `-c` mode), and the simulation runs to its
verdict (`run -all`). `$finish` stops the simulation but keeps the GUI open
(`-onfinish stop`), so the waveform can be inspected afterwards. Every run
also writes its own transcript to `verif/questa/logs/<test>.transcript`
(`-l`), because Questa overwrites the launch directory's `transcript` on each
run.

Verdict strings: the nine SystemVerilog testbenches print `*** TEST SUCCESS
***` (the standalone accelerator test `ai` prints `[ADIM E] PASS`), the eleven
firmware tests print `*** TEST SUCCESS ***` plus `result=PASS`. A failing
SystemVerilog testbench stops with `$error("TIMEOUT")` / `$fatal` (there is no
"TEST FAILED" string in those); `questa_soc_tb` prints `*** TEST FAILED ***`
and `result=FAIL`. `batch.ps1` / `batch.sh` grep exactly these.

Flow details that matter for Questa (all measured on 10.7c, 6 September 2026):

- `vlog -mfcu -cuname questa_cu` and `vsim ... work.<top> work.questa_cu`: the
  four functional-coverage modules and the protocol checkers are attached with
  `bind` statements at compilation-unit scope; without a named compilation
  unit Questa silently drops them (vlog-2650). With it every run ends with the
  `[FUNC-COV]` and `PROTOKOL UYUMLU` reports, as in Verilator.
- `-suppress 7061` (vlog and vopt): `axi_sram_wrapper.sv` and `ai_accel_tb.sv`
  fill a memory from an `initial` block (`$readmemh`) and write it from
  `always_ff`; Questa reports this as a suppressible error, Verilator does not
  check it. `-suppress 8386` (vsim): the vendor `cdc_reset_ctrlr_pkg` assigns a
  2-bit value to an enum in a reset macro.
- `cv32e40p_register_file_latch.sv` is skipped when the file list is copied:
  it defines the same module as the flip-flop register file, Verilator keeps
  the first definition (FF), Questa would keep the last (latch). The FF file
  is what the FPGA build and the sky130 flow use.
- No `-DVERILATOR` is passed, so the vendor assertions that Verilator compiles
  out (`fifo_v3`, `rr_arb_tree`, `addr_decode`, `axi_intf` stability checks)
  are active in Questa - a second, stricter opinion; all 21 tests pass with
  them enabled.
- `run_test.do` locates its own directory by checking for `questa_lib.tcl`
  next to it: Questa's `do` does not update `info script`.
- `-gVERBOSE=0` for the two OpenRAM-model tests silences the models'
  per-access prints (the Makefile filters them with `grep -v`).

## Tests

| Name | `make` target | Top | Working directory | Notes |
|---|---|---|---|---|
| `boot` | `boot` | `boot_flow_test_tb` | `fw/boot` | QSPI boot of `flash_helloworld` through the boot ROM |
| `asic_sram_sim` | `asic-sram-sim` | `boot_flow_test_tb` | `fw/boot` | same boot on the delivered OpenRAM macro models (`ASIC_SRAM_MACRO`) |
| `asic_top_sim` | `asic-top-sim` | `asic_top_boot_tb` | `fw/asic_top_sim` | `asic_top` + 27 macros, flash boot + AI inference, `CHECK_ARGMAX` |
| `qspi_modes` | `qspi-modes` | `qspi_modes_tb` | `fw/qspi_modes` | x1 / x2 / x4 + 4-byte addressing |
| `i2c_sys` | `i2c-sys` | `i2c_system_tb` | `fw/i2c_sys` | CPU -> I2C master -> echo slave model |
| `jtag_sim` | `jtag-sim` | `jtag_smoke_tb` | `fw/jtag_sim` | riscv-dbg TAP bit-banged from the testbench, 17 stages |
| `jtag_bridge_sim` | `jtag-bridge-sim` | `axi_dm_slave_tb` | `.` | `axi_dm_slave` unit testbench with the real `dm_top` |
| `uart_stp` | `uart-stp` | `uart_stp_tb` | `.` | stop bits 1 / 1.5 / 2 on the bare UART block |
| `uart_stream` | `uart-stream` | `uart_stream_tb` | `.` | UART_1 stream DMA, scenarios A-E |
| `ai` | `ai` | `ai_accel_tb` | `.` | standalone accelerator, 6 scenarios + 40-sample batch |
| `uart_hello` | `regression` (UART 115200) | `questa_soc_tb` | `fw/uart_hello` | firmware built with `-DCPB_VAL=434` |
| `uart_hello_1m` | `regression` (UART 1 Mbps) | `questa_soc_tb` | `fw/uart_hello_1m` | `-DCPB_VAL=50`, `+CPB=50` |
| `uart_hello_9600` | `regression` (UART 9600) | `questa_soc_tb` | `fw/uart_hello_9600` | `-DCPB_VAL=5208`, `+CPB=5208` |
| `qspi_flash` | `regression` (QSPI) | `questa_soc_tb` | `fw/qspi_flash` | flash stub answers 0xAA after 32 clocks, as in `sim_main.cpp` |
| `uart_baud_sweep` | `uart-baud` | `questa_soc_tb` | `fw/uart_baud_sweep` | three `BAUD-OK` phases, receiver CPB 434 -> 50 -> 5208 |
| `qspi_fifo_err` | `qspi-err` | `questa_soc_tb` | `fw/qspi_fifo_err` | 25 checks, golden line from `golden.txt`, CPB 64 |
| `ai_micro_speech` | `soc-ai` | `questa_soc_tb` | `fw/ai_micro_speech` | SoC-level inference, needs `ai_sram_init.hex` (bundled) |
| `ai_irq` | `soc-ai-irq` | `questa_soc_tb` | `fw/ai_irq` | accelerator interrupt / ISR path |
| `timer_irq` | `soc-timer` | `questa_soc_tb` | `fw/timer_irq` | timer peripheral + irq16 |
| `uart1_strm` | `soc-strm` | `questa_soc_tb` | `fw/uart1_strm` | UART_1 stream DMA at SoC level |
| `ai_sw_reference` | `soc-perf` | `questa_soc_tb` | `fw/ai_sw_reference` | software reference inference, 12.3 M cycles: slow, run last |

Not ported: the two Spike lockstep runs of `regression` (they need the
Verilator PC trace), `riscv-arch-test` (signature dump from the C++ harness),
the UVM package (built on the Verilator-side `verif/uvm-lib`) and the
OpenOCD / gdb demos (DPI socket server). Their verdicts remain those of
`make test-all` / `make jtag-gates`.

## Firmware-driven tests: `questa_soc_tb.sv`

The eleven firmware tests are driven in the Verilator flow by
`verif/tb/sim_main.cpp`, a C++ harness. `questa_soc_tb.sv` reproduces that
harness in SystemVerilog: 50 MHz clock, reset released after 10 cycles, UART0
and UART1 TX -> RX loopback, the QSPI flash stub (0xAA on IO1 after 32 SCLK
edges with CS low) and the UART bit decoder that prints every received byte
to the transcript and compares the stream with the golden string. Plusargs:
`+CPB=`, `+MAX_CYCLES=`, `+GOLDEN=` (no spaces) or `+GOLDEN_FILE=`, and the
baud-sweep set `+SWEEP_N= +SWEEP0= +SWEEP1= ...`. `tests.tcl` passes the same
values the Makefile passes to `sim_main.cpp`.

## Wave groups (`wave/soc.do`)

Testbench top signals, clock / reset, UART0 (pins, `cfg_rx_done`, `uart_rdr`),
CPU (`pc_id`, `id_valid`, `is_decoding`), interrupts, QSPI (pins and the
master FSM), I2C, GPIO, UART1, AI accelerator (FSM, CSR shadow registers,
ports), JTAG TAP pins, DMI handshake, debug-module memory port, `axi_dm_slave`
request register, crossbar ports. Each `add wave` is wrapped in `catch`, so a
testbench that does not contain a signal simply skips it. The other testbenches
have their own small files in `wave/`.

Two environment variables narrow the wave window without editing the files
(the jury panel sets them from its check boxes): `QUESTA_WAVE_GROUPS`, a
`;`-separated list of group names — only those `-group` entries are added,
dividers and ungrouped signals always stay (`questa_lib.tcl` turns it into the
`WAVE_GROUPS` Tcl list that the `w` proc of every wave file checks); and
`QUESTA_WAVE_EXTRA`, a `;`-separated list of signal paths added after the wave
file, e.g. `set QUESTA_WAVE_EXTRA=/questa_soc_tb/dut/i_uart_0/*` before
`wave.bat uart_hello`.

## Layout

| Path | What |
|---|---|
| `run_test.do` | entry point: `do run_test.do <test>` |
| `questa_lib.tcl` | compile / simulate helpers (`q_run`) |
| `tests.tcl` | the test table above, one line per test |
| `questa_soc_tb.sv` | SystemVerilog replacement for `sim_main.cpp` |
| `wave/*.do` | wave windows |
| `wave.bat`, `wave.sh` | GUI launchers |
| `batch.ps1`, `batch.sh` | headless runners: all tests or a list, `logs/SUMMARY.txt`, exit code = failures |
| `fw/<test>/` | hex bundles + `MANIFEST.txt` (recipe, date, commit), produced by `scripts/questa_pack.sh` |
| `work/`, `logs/`, `transcript`, `*.wlf` | run products, git-ignored (the root `.gitignore` also covers `transcript`, `modelsim.ini` and `vsim.wlf` left in the repository root by the four tests that run from `.`) |

## Troubleshooting

- `vsim not found`: add Questa's `win64` (or `linux_x86_64`) directory to
  `PATH`; `wave.bat` prints the exact command.
- `working directory ... is missing`: the bundles were not generated; run
  `make questa-pack` on the WSL side and commit `verif/questa/fw/`.
- `vlog` errors: the design is compiled with `-sv -timescale 1ns/1ps`. Send
  the `transcript` file; the Verilator flow is more permissive than Questa in
  a few places and a construct may need a small change.
- The OpenRAM macro models would print `Reading` / `Writing` for every access
  in `asic_sram_sim` and `asic_top_sim` (a 150 MB transcript); `tests.tcl`
  passes `-gVERBOSE=0` for these two tests.
- X on the JTAG side: the DTM's TCK-domain registers are held in reset in
  `questa_soc_tb` (`jtag_trst_ni = 0`, TCK static). If a testbench that ties
  `jtag_trst_ni` high shows X on `dmi_*` signals, tie it low there too.
- A test that "finishes" in a few seconds with no verdict line usually failed
  in `vlog`; open `logs/<test>.stdout` (batch) or the transcript for the
  `** Error` line.

## Run record

- 2026-09-06 (a.m.): flow written; `questa_soc_tb.sv` compiled and run under
  Verilator 5.049 on the bundles in `fw/` (uart_hello, qspi_flash,
  uart_baud_sweep, qspi_fifo_err, timer_irq) before commit.
- 2026-09-06 (evening), Questa Sim-64 10.7c (2018.08) on Windows, `vsim -c`,
  bundles of commit `aaf01b1`, delivered configuration (`JTAG_DEBUG`,
  `FC1_FIX`, `I2C_SDA_SYNC`): **21/21 PASS**. The first attempt failed on the
  six points fixed above (`info script`, dropped `bind`s, vlog/vopt-7061,
  vsim-8386, the `+incdir+` order of `jtag_bridge_sim`, `$now`); after the
  fixes every test reached its verdict with all protocol checkers reporting
  `PROTOKOL UYUMLU` and the `[FUNC-COV]` counters printed.

| Test | Verdict | Wall time |
|---|---|---|
| `uart_stp` | `*** TEST SUCCESS ***` | 3 s |
| `uart_stream` | `*** TEST SUCCESS ***` | 2 s |
| `jtag_bridge_sim` | `*** TEST SUCCESS ***` (6/6) | 3 s |
| `ai` | `[ADIM E] PASS` (6/6 scenarios) | 17 s |
| `uart_hello` | `result=PASS` (125,750 cycles) | 8 s |
| `uart_hello_1m` | `result=PASS` | 4 s |
| `uart_hello_9600` | `result=PASS` | 57 s |
| `qspi_flash` | `result=PASS` | 8 s |
| `uart_baud_sweep` | `result=PASS` (3 `BAUD-OK` phases) | 21 s |
| `qspi_fifo_err` | `result=PASS` (25 checks) | 49 s |
| `timer_irq` | `result=PASS` | 41 s |
| `ai_irq` | `result=PASS` | 80 s |
| `uart1_strm` | `result=PASS` | 31 s |
| `ai_micro_speech` | `result=PASS` | 135 s |
| `i2c_sys` | `*** TEST SUCCESS ***` | 6 s |
| `qspi_modes` | `*** TEST SUCCESS ***` | 23 s |
| `jtag_sim` | `*** TEST SUCCESS ***` (17/17) | 21 s |
| `boot` | `*** TEST SUCCESS ***` | 120 s |
| `asic_sram_sim` | `*** TEST SUCCESS ***` | 149 s |
| `asic_top_sim` | `*** TEST SUCCESS ***` (argmax checked) | 236 s |
| `ai_sw_reference` | `result=PASS` (12,253,130 cycles, speedup 21.0x) | 509 s |

The Verilator flow (`make test-all`) remains the reference for the delivered
verdicts; this table is the second simulator's agreement.
