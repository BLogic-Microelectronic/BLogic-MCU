<!--
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
Licensed under the GNU General Public License version 3 only.
See the LICENSE file in the repository root for the full license text.
-->

<div align="center">

# BLogic MCU

A 32-bit RISC-V microcontroller with a hardware accelerator for keyword spotting,
implemented on FPGA and signed off as a sky130 ASIC.

[![CI](https://github.com/BLogic-Microelectronic/BLogic-MCU/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/BLogic-Microelectronic/BLogic-MCU/actions/workflows/ci.yml)
[![License: GPL-3.0](https://img.shields.io/badge/license-GPL--3.0-blue)](LICENSE)
[![ISA: RV32IMC](https://img.shields.io/badge/ISA-RV32IMC-orange)](docs/DOCUMENTATION.md#103-isa-compliance-rv32imc-directed-test-3131-pass-riscv-arch-test-7273--1-analysed-known-difference)
[![ASIC: sky130](https://img.shields.io/badge/ASIC-sky130%2C%20DRC%2FLVS%20clean-success)](docs/DOCUMENTATION.md#137-final-signoff-results--run_hold035_2026-09-09)
[![FPGA: 50 MHz](https://img.shields.io/badge/FPGA-Genesys%202%2C%2050%20MHz-success)](docs/DOCUMENTATION.md#12-fpga-prototyping)

<img src="https://raw.githubusercontent.com/BLogic-Microelectronic/BLogic-MCU/main/images/board_demo.gif" width="560" alt="BLogic MCU on a Digilent Genesys 2 board, classifying feature vectors in real time">

<sub>The design on a Digilent Genesys 2 board, classifying feature vectors sent over UART by the competition's
test tool. The OLED shows the class reported by the accelerator, the inference cycle count and the UART rates.
Slowed down 1.6 times.</sub>

</div>

## Overview

BLogic MCU was designed by Berk Muammer Kuzu and Berkin Demircan (Ostim Technical University) for the
Microcontroller Design category of the TEKNOFEST 2026 Chip Design Competition.

The processor is the OpenHW Group CV32E40P (RV32IMC). It is connected through two OBI-to-AXI4 bridges
to an AXI4 interconnect with a boot ROM, instruction and data SRAMs, and an AXI4-Lite peripheral bus
carrying two UARTs, GPIO, a timer, an I2C master and a QSPI master used for booting from external flash.
A JTAG port based on the PULP riscv-dbg debug module allows debugging with OpenOCD and gdb.

The accelerator implements the TFLite Micro Speech "tiny conv" model (Conv2D, ReLU, fully connected
layer, argmax) with INT8 arithmetic. On the same SoC it completes one inference in 459,016 cycles,
compared with 9,684,726 cycles for the software implementation on the CV32E40P, a speed-up of 21x.
Its classification matches the TFLite interpreter on 1000 of 1000 test inputs.

The same RTL has been implemented on a Kintex-7 FPGA at 50 MHz and taken through the sky130 flow
with LibreLane to a GDS that passes DRC and LVS and is signed off at 27 MHz.

## Summary of results

| Area | Result |
|---|---|
| Processor | CV32E40P, RV32IMC, machine mode only, 4-stage pipeline |
| Memory | 1 KB boot ROM, 8 KB instruction SRAM, 8 KB data SRAM, 30 KB AI SRAM |
| Verification | 90.7 % line and 88.5 % branch coverage; riscv-arch-test 72 of 73 signatures identical to Spike; Spike lockstep co-simulation; UVM environment for five blocks; AXI protocol checkers |
| FPGA | Digilent Genesys 2 (XC7K325T), 50 MHz, WNS +2.433 ns |
| ASIC | sky130, 18.77 mm² die, 27 SRAM macros, DRC 0, LVS match, gate-level simulation with SDF passing at 27.0 MHz |

<p align="center">
  <img src="https://raw.githubusercontent.com/BLogic-Microelectronic/BLogic-MCU/main/asic/results/images/asic_top_render_hd.png" width="420" alt="Layout of the delivered sky130 GDS">
  &nbsp;
  <img src="https://raw.githubusercontent.com/BLogic-Microelectronic/BLogic-MCU/main/images/system_architecture_jtag.png" width="420" alt="Block diagram of BLogic MCU">
</p>
<p align="center"><sub>Left: the delivered sky130 layout, with the power grid and fill cells hidden. Right: block diagram.</sub></p>

## Getting started

### With Docker

The simulation image contains Verilator, Spike, the RISC-V GCC toolchain and the sources, so nothing
else has to be installed:

```bash
docker run --rm ghcr.io/blogic-microelectronic/blogic-mcu
```

The default command runs two programs on the Verilator model of the SoC, a boot test that prints over
UART_0 and one inference on the AI accelerator, and prints a summary. It takes about half a minute.
Any make target can be given instead, or a shell can be opened in the environment:

```bash
docker run --rm ghcr.io/blogic-microelectronic/blogic-mcu make regression
docker run --rm -it ghcr.io/blogic-microelectronic/blogic-mcu bash
```

### From source

The simulation flow is verified with Verilator 5.052 and the xPack RISC-V GCC 13.2 toolchain. Spike is
needed for the lockstep and ISA compliance tests. Installation instructions are given in
[section 8 of the documentation](docs/DOCUMENTATION.md#8-prerequisites--toolchain-installation);
on Ubuntu 24.04, [`.github/scripts/build_tools.sh`](.github/scripts/build_tools.sh) builds the same
versions that the CI uses.

```bash
git clone --depth 1 https://github.com/BLogic-Microelectronic/BLogic-MCU.git
cd BLogic-MCU
make compile && make sim
```

`make sim` builds the firmware, simulates the SoC in Verilator and prints the message
"Hello World from BLogic MCU!" received on UART_0. `make regression` runs the main regression suite,
`make test-all` runs all 18 verification components, and `make help` lists every available target.

The `--depth 1` option downloads only the latest version of the repository and is recommended,
because earlier commits contain large physical design files.

### Continuous integration

Every push runs the simulation test suite on GitHub Actions
([workflow](.github/workflows/ci.yml)): lint, the regression, the block and SoC tests, the ISA
compliance suite, UVM, the JTAG debug tests with OpenOCD and gdb, the ASIC top level with the SRAM
macro models, and coverage. The Docker image is built and tested by a
[second workflow](.github/workflows/docker.yml) before it is published.

## Physical design outputs

The large outputs of the ASIC flow (GDS, ODB, Magic database, SDF and SPEF files) are not stored
in the repository. They are attached as downloadable files to the
[v1.0 release](https://github.com/BLogic-Microelectronic/BLogic-MCU/releases/tag/v1.0).
The signoff reports, the configuration and the layout images remain in [`asic/`](asic/README.md).
The repository exactly as submitted to the competition is preserved under the tag
[`teknofest-final`](https://github.com/BLogic-Microelectronic/BLogic-MCU/tree/teknofest-final).

## Documentation

The complete design and verification report is in [docs/DOCUMENTATION.md](docs/DOCUMENTATION.md).
Frequently used sections:

- [Memory map](docs/DOCUMENTATION.md#4-memory-map) and [peripheral register map](docs/DOCUMENTATION.md#5-peripheral-register-map)
- [Deviations from the specification and known limitations](docs/DOCUMENTATION.md#57-deviations-from-the-specification-and-known-limitations)
- [Verification](docs/DOCUMENTATION.md#10-verification)
- [AI accelerator](docs/DOCUMENTATION.md#11-ai-accelerator)
- [FPGA prototyping](docs/DOCUMENTATION.md#12-fpga-prototyping)
- [ASIC flow](docs/DOCUMENTATION.md#13-asic-flow-sky130) and the [ASIC README](asic/README.md)
- [Verification and test plan](docs/verification_and_test_plan.md)

## License

This project is licensed under the GNU General Public License v3.0 only; see [LICENSE](LICENSE).
Third-party components included in the repository retain their original licenses, which are listed
in [LICENSING.md](LICENSING.md).
