# Third-Party Components and Licenses

Per DDK "Final Istenen Ciktilar" (EN: Final Required Deliverables) section 9.13 and section 10. License texts
are under `asic/licenses/`; the copyright headers in the source trees
have been preserved unmodified.

## RTL and IP

| Component | Source | Version / commit | License | License file | Our modifications |
|---|---|---|---|---|---|
| CV32E40P | https://github.com/openhwgroup/cv32e40p | `6033d2b1be3295ec774d17ac4cf226faacfdeb08` (master; gitlink record 8808914^) | Solderpad HL 0.51 | `rtl/core/cv32e40p/LICENSE` | `rtl/asic/cv32e40p_clock_gate_asic.sv` in place of `cv32e40p_sim_clock_gate`; `cv32e40p_register_file_latch.sv` was not included in the file list, the FF variant is used |
| pulp common_cells | https://github.com/pulp-platform/common_cells | 1.20.0 (`common_cells.core`) | Solderpad HL 0.51 | no LICENSE in the top-level directory; **every source file carries the full SHL-0.51 header** | A subset was vendored (12 files), content unchanged |
| pulp axi | https://github.com/pulp-platform/axi | `e286bb1a4aba6fc145f3cb41bd78665c5868e2a9` (master, after v0.39.9; VERSION=0.39.9 in the tree) | Solderpad HL 0.51 | `rtl/bus/axi/LICENSE` | No modifications |
| pulp fpnew | https://github.com/pulp-platform/fpnew | vendored inside the cv32e40p `6033d2b1be32` tree (no separate pin) | Solderpad HL 0.51 / Apache-2.0 | `.../pulp_platform_fpnew/LICENSE.solderpad`, `LICENSE.apache` | Only `fpnew_pkg.sv`; FPU disabled (`FPU=0`) |
| verilog-uart | https://github.com/alexforencich/verilog-uart | `1b867e53af738e4a8bc7c839ca2f1c07f40382dc` (master; 3 RTL files verified byte-identical against upstream) | MIT (c) 2014-2017 Alex Forencich | `rtl/peripherals/verilog-uart/COPYING` | `uart.v`, `uart_rx.v`, `uart_tx.v` unchanged; the AXI-Lite wrapper (`uart_axil.sv`) is ours |
| pulp riscv-dbg | https://github.com/pulp-platform/riscv-dbg | `21a5fbe31ac91146022ad771d127b15c185e37fa` (master, 2026-08-11) | Solderpad HL 0.51 | `rtl/debug/vendor/riscv-dbg/LICENSE`; copy `asic/licenses/riscv-dbg_SHL-0.51.txt` | JTAG debug subsystem of the delivered chip (TAP, DTM, CDC, DM, debug ROM): files vendored verbatim, no local patches (file list: `rtl/debug/VENDOR.md`); `dmi_bscane_tap.sv` (same commit) is used only by the FPGA build in place of `dmi_jtag_tap.sv`; the AXI bridge `rtl/debug/axi_dm_slave.sv` is ours |
| pulp common_cells v1.38.0 (CDC subset) | https://github.com/pulp-platform/common_cells | tag `v1.38.0` (`9afda9abb565971649c2aa0985639c096f351171`) | Solderpad HL 0.51 | `rtl/debug/vendor/common_cells_v1.38.0/LICENSE`; copy `asic/licenses/common_cells_v1.38.0_SHL-0.51.txt` | `cdc_2phase_clearable`, `cdc_reset_ctrlr(_pkg)`, `cdc_4phase` and the `assertions.svh`/`registers.svh` headers used by riscv-dbg `dmi_cdc`; content unchanged. The 1.20.0 copy under cv32e40p serves the rest of the SoC; the v1.38.0 include directory is listed first (its macros are a strict superset of the 1.20.0 ones) |
| pulp tech_cells_generic | https://github.com/pulp-platform/tech_cells_generic | tag `v0.2.3` (`63da15065d2270788634562bb2240514a70f76cc`) | Solderpad HL 0.51 | `rtl/debug/vendor/tech_cells_generic/LICENSE`; copy `asic/licenses/tech_cells_generic_SHL-0.51.txt` | `tc_clk.sv` only (`tc_clk_inverter` and `tc_clk_mux2`, instantiated by riscv-dbg `dmi_jtag_tap`); content unchanged |

## Physical macros and PDK

| Component | Source | Version / commit | License | Our modifications |
|---|---|---|---|---|
| sky130A PDK | https://github.com/fossi-foundation/open-pdks | `8afc8346a57fe1ab7934ba5a6056ea8b43078e71` | Apache-2.0 | None |
| `sky130_sram_2kbyte_1rw1r_32x512_8` | PDK `libs.ref/sky130_sram_macros/` | bundled with the PDK | Apache-2.0 | **None** - physical and logical views were not modified, per section 1.3 |
| `sky130_sram_1kbyte_1rw1r_32x256_8` | PDK `libs.ref/sky130_sram_macros/` | bundled with the PDK | Apache-2.0 | **None** - same |
| LibreLane | https://github.com/librelane/librelane | v3.0.6 / `ba7193bff33d68941683b2963b90aa30cea117d1` | Apache-2.0 | None - flow tool |

## Verification infrastructure (does not enter the ASIC flow)

| Component | Source | Version / commit | License | License file | Our modifications |
|---|---|---|---|---|---|
| UVM (Verilator adaptation) | https://github.com/verilator/uvm | `656f20d` (Accellera UVM 2020-3.1, IEEE 1800.2-2020, with the Verilator PLI/DPI addition; `795b5f2` until 13 September 2026) | Apache-2.0 | `verif/uvm-lib/LICENSE.txt`, `NOTICE.txt` | The `src/` subset was vendored in place (the URL-less gitlink remained empty in a clean clone); provenance and local deviations: `verif/uvm-lib/KAYNAK.md`, `verif/uvm-lib/DEVIATIONS.md` |
| riscv-arch-test | https://github.com/riscv-non-isa/riscv-arch-test | commit id not recorded; the vendored version is identified from the `env/arch_test.h` header (copyright 2020-2023, the version that adds the instret counter to the signature and skips the `LA` macro at rd=x0) | BSD-3 / Apache-2.0 / CC | `verif/arch_tests/suite/COPYING.{BSD,APACHE,CC}` | Suite was vendored; the run script (`run_arch_test.sh`) is ours. The 27 RV32C sources (`rv32i_m/C/src/`, added 2026-09-10) were copied unmodified from lowRISC Ibex's vendored copy, upstream commit `a3b7f0c2cf89652b8a0cba3146890c512ff8ba44` (Ibex `vendor/riscv_arch_tests.lock.hjson`); they run against the `env/` headers above, and the runner strips their `.org 0x80` line at build time (the committed sources are untouched) |
| riscv-dbg `tb/SimJTAG.sv`, `tb/remote_bitbang/` | https://github.com/pulp-platform/riscv-dbg (same commit as above) | `21a5fbe31ac91146022ad771d127b15c185e37fa` | Apache-2.0 (SiFive) / BSD-3-Clause (UC Berkeley) | `rtl/debug/vendor/riscv-dbg/LICENSE.SiFive`, `tb/LICENSE.SiFive`, `tb/LICENSE.Berkeley` | OpenOCD `remote_bitbang` bridge for `make jtag-openocd-build` (simulation only, not in `asic/filelist.f`); the DPI-C server `rtl/debug/tb/jtag_dpi.cpp` is ours |

## Notes

- The JTAG debug subsystem (riscv-dbg, the common_cells v1.38.0 CDC subset
  and tech_cells_generic) entered the delivered configuration on
  September 6, 2026 (`asic/config.yaml`, `asic/filelist.f`); the three
  licence copies were added to `asic/licenses/` on the same date. The pins
  can be re-verified with the clone commands in `rtl/debug/VENDOR.md`; the
  vendored copies are byte-identical to upstream.
- For the 1.20.0 `common_cells` copy under cv32e40p, the top-level license
  file is not present in the vendored subset (the v1.38.0 CDC subset under
  `rtl/debug/vendor/` does carry `LICENSE`, copied to
  `asic/licenses/common_cells_v1.38.0_SHL-0.51.txt`). The requirement of section 10, "mevcut lisans ve telif
  bildirimlerinin korunmasi" (EN: preservation of existing license and
  copyright notices), is satisfied: every `.sv` file carries the full
  SHL-0.51 header. If the top-level license text is desired under
  `asic/licenses/`, it can be taken from the upstream repository.
- Section 10 requests commit ids "mumkun oldugunca" (EN: to the extent
  possible); for the single component whose record could not be found
  (riscv-arch-test), a verifiable version trace is provided instead of an
  id (see below).
- This file is referenced from `asic/README.md` section 9.13.
- The cv32e40p / axi / verilog-uart commit ids were recovered from the
  gitlink records predating the submodule->folder conversion
  (`git ls-tree 8808914^`), and all three SHAs were verified to be on the
  master branch of the respective upstream repositories (Aug 11, 2026).
- For riscv-arch-test, the commit id was not recorded at vendoring time
  and no gitlink record exists either. Instead of an id, a VERSION TRACE
  was documented: the `verif/arch_tests/suite/env/arch_test.h` header
  carries copyright 2020-2023 and lists three distinguishing changes
  (addition of the instret counter to the signature, the `LA` macro
  skipping generation at rd=x0, detection of the ECALL cause in CLIC
  mode). Since the suite itself is present in the repository in its
  entirety, the version used can be inspected verbatim; furthermore, the
  run and signature comparison can be reproduced with
  `verif/arch_tests/run_arch_test.sh`.

<!-- English translation of THIRD_PARTY.md, 2026-09-01; numeric values converted from Turkish to English number format. -->
