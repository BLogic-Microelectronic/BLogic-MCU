# Questa / ModelSim waveform flow

Runs the delivered configuration (`soc_files.f`: `JTAG_DEBUG`, `FC1_FIX`,
`I2C_SDA_SYNC`) in **Questa Sim-64 10.7c** (2018.08) so that every test of
`make test-all` can be watched in a waveform window. The Verilator flow stays
the reference for the verdicts (`make test-all`, root README section 10); this
flow exists for waveform inspection and for a second simulator's opinion.

**Status:** written against Questa 10.7c documentation, first validated on a
real Questa installation by the team member who has the licence. The wrapper
testbench `questa_soc_tb.sv` was validated with Verilator before commit (see
the run record at the end).

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
opened, and the simulation runs to its verdict (`run -all`). `$finish` stops
the simulation but keeps the GUI open (`-onfinish stop`), so the waveform can
be inspected afterwards; the verdict is in the transcript (`*** TEST SUCCESS
***` / `*** TEST FAILED ***`, and `result=PASS|FAIL` for the firmware tests).

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

## Layout

| Path | What |
|---|---|
| `run_test.do` | entry point: `do run_test.do <test>` |
| `questa_lib.tcl` | compile / simulate helpers (`q_run`) |
| `tests.tcl` | the test table above, one line per test |
| `questa_soc_tb.sv` | SystemVerilog replacement for `sim_main.cpp` |
| `wave/*.do` | wave windows |
| `wave.bat`, `wave.sh` | launchers |
| `fw/<test>/` | hex bundles + `MANIFEST.txt` (recipe, date, commit), produced by `scripts/questa_pack.sh` |
| `work/`, `transcript`, `*.wlf` | run products, git-ignored |

## Troubleshooting

- `vsim not found`: add Questa's `win64` (or `linux_x86_64`) directory to
  `PATH`; `wave.bat` prints the exact command.
- `working directory ... is missing`: the bundles were not generated; run
  `make questa-pack` on the WSL side and commit `verif/questa/fw/`.
- `vlog` errors: the design is compiled with `-sv -timescale 1ns/1ps`. Send
  the `transcript` file; the Verilator flow is more permissive than Questa in
  a few places and a construct may need a small change.
- The OpenRAM macro models print `Reading` / `Writing` for every access in
  `asic_sram_sim` and `asic_top_sim`; this is expected noise.
- X on the JTAG side: the DTM's TCK-domain registers are held in reset in
  `questa_soc_tb` (`jtag_trst_ni = 0`, TCK static). If a testbench that ties
  `jtag_trst_ni` high shows X on `dmi_*` signals, tie it low there too.

## Run record

- 2026-09-06: flow written; `questa_soc_tb.sv` compiled and run under
  Verilator 5.049 on the bundles in `fw/` (uart_hello, qspi_flash,
  uart_baud_sweep, qspi_fifo_err, timer_irq) before commit. Questa 10.7c run: pending.
