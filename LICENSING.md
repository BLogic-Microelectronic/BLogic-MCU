<!--
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
-->

# BLogic MCU licensing

Copyright (C) 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan.

The original work by BLogic Mikroelektronik in this repository is licensed under
the **GNU General Public License, version 3 only** (`GPL-3.0-only`). The complete,
unmodified license text is in [LICENSE](LICENSE).

You may redistribute and modify this original work under GPL version 3. It is
provided WITHOUT ANY WARRANTY, including the implied warranties of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See LICENSE for the full
terms, including the source requirements when conveying covered works.

## Original work covered by GPLv3

This grant covers the team's original RTL, SoC integration, AI accelerator,
peripheral wrappers, FPGA and ASIC wrappers, firmware, drivers, tests,
verification environments, scripts, build files, configurations and project
documentation. It also covers the team's original contributions to generated
files and artifacts; third-party content in them retains its applicable terms.

Source files that carry the team's `SPDX-FileCopyrightText` and
`SPDX-License-Identifier: GPL-3.0-only` identify this grant directly. Existing
third-party notices and the exclusions below take precedence over the general
description of a directory. A GPL notice on a wrapper or build script does not
relicense the dependencies it instantiates, includes, downloads or builds.

In `teknotest/`, GPL notices have been added only to these files identified in
their existing headers as BLogic work:

- `sw/scripts/build.py` and `sw/scripts/elf_to_mem.py`
- `sw/src/crt0.S`
- `tb/teknotest_tb.sv`
- `user_files/bootrom.ld`, `compile_user_design.tcl` and `rv_toolchain.conf`
- `user_files/teknotest_tb_user_code.sv`, `teknotest_wrapper.sv` and `user_defines.h`

The paths in this list are relative to `teknotest/`. Any underlying
organizer-owned material retains the organizer's rights; this grant covers only
the team's contributions.

## Third-party components and exclusions

This repository includes work by other authors. The root LICENSE does **not**
replace their licenses, remove their notices or claim authorship of their work.
Retain the applicable license texts, copyright notices and NOTICE files when
redistributing those components. See [asic/THIRD_PARTY.md](asic/THIRD_PARTY.md)
and [rtl/debug/VENDOR.md](rtl/debug/VENDOR.md) for provenance and pinned versions.

| Material | Location | Applicable terms |
|---|---|---|
| CV32E40P and its vendored dependencies | `rtl/core/cv32e40p/` | Existing Solderpad, Apache and other per-file licenses; see the bundled notices. |
| PULP AXI | `rtl/bus/axi/` | Solderpad Hardware License 0.51 and existing per-file notices. |
| PULP debug, common cells and technology cells; simulation dependencies | `rtl/debug/vendor/` | Existing Solderpad, Apache-2.0 and BSD-3-Clause notices. |
| Alex Forencich UART | `rtl/peripherals/verilog-uart/` and the copies `rtl/peripherals/uart.v`, `uart_rx.v`, `uart_tx.v` | MIT; the original MIT headers remain in place, including in the locally annotated copies. |
| Accellera UVM / Verilator adaptation | `verif/uvm-lib/` | Apache-2.0, bundled NOTICE and existing provenance/deviation records. |
| RISC-V architecture test suite | `verif/arch_tests/suite/` | Existing per-file licenses and `COPYING.BSD`, `COPYING.APACHE`, `COPYING.CC`. The BLogic target and runner outside this directory are GPLv3. |
| SRAM macro views | `asic/macros/` | Existing upstream terms; see the physical macros inventory in `asic/THIRD_PARTY.md`. |
| Copied license texts and notices | `asic/licenses/` | The respective licensors' texts, preserved unchanged. |
| Copied PULP / lowRISC headers | `teknotest/user_files/axi/`, `teknotest/user_files/common_cells/` | Existing Solderpad or Apache-2.0 headers. |
| Other competition package material | Remaining files under `teknotest/`, including `scripts/create_vivado_proj.tcl` and `sw/src/helloworld.c` | Outside this GPL grant; absence of a license header does not make organizer-owned material BLogic work or grant redistribution rights. |
| TensorFlow Lite Micro Speech model and model/feature-derived data | `sw/ai_model/micro_speech_quantized.tflite`, upstream-derived files in `sw/ai_model/golden_vectors/`, and copies embedded in datasets or memory images | Existing TensorFlow Apache-2.0 terms where applicable; this grant does not relicense upstream model weights or feature data. BLogic's Python tools and original synthetic-vector header are identified separately by GPL notices. |
| Third-party logos, photos, screenshots and quoted documents | Wherever present, including `images/` and project documentation | Retain their owners' rights; no new license to third-party material or trademarks is granted here. |

The inventory documents the licensing boundary; it is not a claim that every
third-party file is available under one license or that all combinations have
the same redistribution requirements.

## Generated files and archived results

Firmware images, FPGA bitstreams, synthesized netlists and physical design
outputs can contain both team work and third-party material. GPL obligations
for covered team work continue to apply; applicable third-party notices and
terms must also be retained. These artifacts are not relabeled wholesale as
exclusively BLogic-owned work.

License comments are not injected into binary images, raw memory data, checksums
or archived tool reports. Their original bytes and recorded results are kept
intact. A file does not acquire GPL licensing merely because a GPL-licensed
tool produced it; the content and its inputs determine the applicable rights.

The generators for `rtl/asic/bootrom_content.svh`, `asic/filelist.f` and
`sw/ai_model/golden_vectors/blogic_ai_golden.h` preserve GPL notices on the
team-owned source they emit.

## Adding files

For new original team source, use the following notice in the file's comment
syntax, retaining shebangs and encoding declarations where required:

```text
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
Licensed under the GNU General Public License version 3 only.
See the LICENSE file in the repository root for the full license text.
```

Preserve the actual authors and years on future contributions. For imported
files, preserve the upstream license and record their provenance rather than
adding the team's copyright notice.
