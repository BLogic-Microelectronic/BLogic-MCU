# rtl/debug -- vendored JTAG debug dependencies

This directory holds third-party RTL for the RISC-V debug module (DM) and the
JTAG debug transport module (DTM), vendored verbatim from the pinned upstream
revisions listed below. **Do not edit files under `rtl/debug/vendor/`**; to
change something, bump the pin and re-copy.

File list for Verilator: `rtl/debug/jtag_files.f` (see the notes at the end
of this document for include-order requirements).

## 1. pulp-platform/riscv-dbg

| | |
|---|---|
| URL | https://github.com/pulp-platform/riscv-dbg |
| Pin | commit `21a5fbe31ac91146022ad771d127b15c185e37fa` ("doc: Correct debug system documentation", 2026-08-11) |
| Destination | `rtl/debug/vendor/riscv-dbg/` (upstream directory layout preserved) |

Files copied (upstream path -> local path, relative to the destination):

| Upstream | Local | License |
|---|---|---|
| `src/dm_pkg.sv` | `src/dm_pkg.sv` | SHL-0.51 |
| `src/dm_csrs.sv` | `src/dm_csrs.sv` | SHL-0.51 |
| `src/dm_mem.sv` | `src/dm_mem.sv` | SHL-0.51 |
| `src/dm_top.sv` | `src/dm_top.sv` | SHL-0.51 |
| `src/dm_sba.sv` | `src/dm_sba.sv` | SHL-0.51 |
| `src/dmi_cdc.sv` | `src/dmi_cdc.sv` | SHL-0.51 |
| `src/dmi_jtag.sv` | `src/dmi_jtag.sv` | SHL-0.51 |
| `src/dmi_jtag_tap.sv` | `src/dmi_jtag_tap.sv` | SHL-0.51 |
| `debug_rom/debug_rom.sv` | `debug_rom/debug_rom.sv` | SHL-0.51 |
| `debug_rom/debug_rom_one_scratch.sv` | `debug_rom/debug_rom_one_scratch.sv` | SHL-0.51 |
| `tb/SimJTAG.sv` | `tb/SimJTAG.sv` | Apache-2.0 (SiFive, see `tb/LICENSE.SiFive`) |
| `tb/remote_bitbang/remote_bitbang.c` | `tb/remote_bitbang/remote_bitbang.c` | BSD-3-Clause (UC Berkeley, see `tb/LICENSE.Berkeley`) |
| `tb/remote_bitbang/remote_bitbang.h` | `tb/remote_bitbang/remote_bitbang.h` | BSD-3-Clause (UC Berkeley, see `tb/LICENSE.Berkeley`) |
| `tb/remote_bitbang/sim_jtag.c` | `tb/remote_bitbang/sim_jtag.c` | Apache-2.0 (SiFive, see `tb/LICENSE.SiFive`) |
| `tb/remote_bitbang/Makefile` | `tb/remote_bitbang/Makefile` | Apache-2.0 (ETH Zurich) |
| `LICENSE` | `LICENSE` | Solderpad Hardware License v0.51 (full text) |
| `LICENSE.SiFive` | `LICENSE.SiFive` | Apache License 2.0 (full text) |
| `tb/LICENSE.Berkeley` | `tb/LICENSE.Berkeley` | BSD-3-Clause (full text) |
| `tb/LICENSE.SiFive` | `tb/LICENSE.SiFive` | Apache License 2.0 (full text) |

`tb/SimJTAG.sv` and `tb/remote_bitbang/` are **not** in `jtag_files.f`; they
are kept for a later OpenOCD remote-bitbang bridge (DPI-C, simulation only).

Not copied (not needed): `src/dm_obi_top.sv`, ,
`src/dmi_intf.sv`, `src/dmi_test.sv`, the rest of `tb/`, `debug_rom/*.S|.h|.py`.

Upstream dependencies of these files (module -> where it comes from):

| Instantiated | Provided by |
|---|---|
| `fifo_v3` (in `dm_csrs`) | already in `soc_files.f` (`rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv`) -- **not** listed in `jtag_files.f` to avoid a MODDUP |
| `cdc_2phase_clearable` (in `dmi_cdc`) | common_cells v1.38.0, section 2 |
| `tc_clk_inverter` (in `dmi_jtag_tap`) | tech_cells_generic v0.2.3, section 3 |
| `debug_rom`, `debug_rom_one_scratch` (in `dm_mem`) | this section |

## 2. pulp-platform/common_cells

| | |
|---|---|
| URL | https://github.com/pulp-platform/common_cells |
| Pin | tag `v1.38.0` (commit `9afda9abb565971649c2aa0985639c096f351171`, 2025-02-28) |
| Destination | `rtl/debug/vendor/common_cells_v1.38.0/` (flat; plus `include/common_cells/` for headers) |
| License | Solderpad Hardware License v0.51 (`LICENSE`, full text; every file carries an SHL-0.51 header) |

Files copied:

| Upstream | Local |
|---|---|
| `src/cdc_2phase_clearable.sv` | `cdc_2phase_clearable.sv` |
| `src/cdc_reset_ctrlr.sv` | `cdc_reset_ctrlr.sv` |
| `src/cdc_reset_ctrlr_pkg.sv` | `cdc_reset_ctrlr_pkg.sv` |
| `src/cdc_4phase.sv` | `cdc_4phase.sv` |
| `include/common_cells/assertions.svh` | `include/common_cells/assertions.svh` (added during lint, see below) |
| `include/common_cells/registers.svh` | `include/common_cells/registers.svh` (added during lint, see below) |
| `LICENSE` | `LICENSE` |

Why the two headers were added: `cdc_2phase_clearable.sv` does
`` `include "common_cells/registers.svh" `` and
`` `include "common_cells/assertions.svh" `` and calls `` `ASSUME `` with a
5th argument (`__desc` message, line 260). The copy of `common_cells` that
already lives under `rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/`
is version **1.20.0**; its `assertions.svh` accepts at most 4 arguments and
Verilator stops with:

```
%Error: rtl/debug/vendor/common_cells_v1.38.0/cdc_2phase_clearable.sv:261:58: Define passed too many arguments: ASSUME
```

The v1.38.0 headers are a strict superset of the 1.20.0 ones (every macro keeps
its signature and gains optional trailing arguments; `FFARN`/`FFLARN` become
aliases of `FF`/`FFL`; `FFARNC`, `REG_DFLT_CLK`, `REG_DFLT_RST`,
`NO_SYNOPSYS_FF` are new; the include guard changed from `PRIM_ASSERT_SV` to
`COMMON_CELLS_ASSERTIONS_SVH`). Linting `soc_top` with
`-f soc_files.f` produces byte-identical output with and without
`+incdir+rtl/debug/vendor/common_cells_v1.38.0/include` placed first, so they
are a drop-in replacement for the whole SoC.

Dependencies of the cdc files that are **not** vendored here:

| Instantiated | Provided by |
|---|---|
| `sync` (in `cdc_2phase_clearable`, `cdc_4phase`) | already-vendored `rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/sync.sv` (1.20.0), listed in `jtag_files.f`. Only the `STAGES` parameter is used, so the older `sync` without `ResetValue` is sufficient. |
| `spill_register` (in `cdc_4phase_dst`, only inside `if (DECOUPLED)`) | already in `soc_files.f`. `cdc_reset_ctrlr` instantiates `cdc_4phase_*` with `DECOUPLED(0)`, so the module is never elaborated on the riscv-dbg path and lint passes without it. Not listed in `jtag_files.f` (MODDUP with `soc_files.f`). |

## 3. pulp-platform/tech_cells_generic

| | |
|---|---|
| URL | https://github.com/pulp-platform/tech_cells_generic |
| Pin | tag `v0.2.3` (commit `63da15065d2270788634562bb2240514a70f76cc`, 2021-01-28) |
| Destination | `rtl/debug/vendor/tech_cells_generic/` (flat) |
| License | Solderpad Hardware License v0.51 (`LICENSE`, full text) |

Files copied:

| Upstream | Local |
|---|---|
| `src/rtl/tc_clk.sv` | `tc_clk.sv` (provides `tc_clk_and2`, `tc_clk_buffer`, `tc_clk_gating`, `tc_clk_inverter`, `tc_clk_mux2`, `tc_clk_xor2`, `tc_clk_delay`; only `tc_clk_inverter` is used, by `dmi_jtag_tap`) |
| `LICENSE` | `LICENSE` |

## Notes for integrators

* **Include order matters.** Verilator resolves `` `include `` against
  `+incdir` entries in command-line order; the first hit wins, and a
  `+incdir` given on the command line or in an earlier `-f` file beats one
  in a later `-f` file. `jtag_files.f` carries
  `+incdir+rtl/debug/vendor/common_cells_v1.38.0/include`; it must come
  **before** `+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include`
  (which `soc_files.f` adds). Practically: pass `-f rtl/debug/jtag_files.f`
  before `-f soc_files.f`, or put the v1.38.0 `+incdir` first on the command
  line.
* `jtag_files.f` deliberately omits `fifo_v3.sv` and `spill_register.sv`
  (both already in `soc_files.f`). For a stand-alone lint pass `fifo_v3.sv`
  on the command line.
* Standalone lint that passes with 0 errors / 0 warnings (Verilator 5.049):

  ```
  verilator --lint-only --timing -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND \
    -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-UNOPTFLAT \
    rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv \
    -f rtl/debug/jtag_files.f --top-module dm_top      # and --top-module dmi_jtag
  ```

## Re-verifying / updating the pins

```
git clone https://github.com/pulp-platform/riscv-dbg.git          && (cd riscv-dbg          && git checkout 21a5fbe31ac91146022ad771d127b15c185e37fa)
git clone https://github.com/pulp-platform/common_cells.git       && (cd common_cells       && git checkout v1.38.0)
git clone https://github.com/pulp-platform/tech_cells_generic.git && (cd tech_cells_generic && git checkout v0.2.3)
```

then `diff` each file listed above against the checkout; the vendored copies
are byte-identical to upstream (no local patches).

## dmi_bscane_tap.sv (added 3 Sep 2026, FPGA build only)

`src/dmi_bscane_tap.sv` copied verbatim from the same riscv-dbg commit
(21a5fbe31ac91146022ad771d127b15c185e37fa), sha256
d1f03a609532a57fce61a514cb85ee6dd5ce758cd7697d83bed1e09c65ebbb2f.
It declares `module dmi_jtag_tap` (drop-in for the full TAP) built on two
Xilinx `BSCANE2` primitives (USER3 = dtmcs, USER4 = dmi), so the Genesys 2
on-board USB-JTAG reaches the debug module without a pin header.
It is deliberately NOT listed in `jtag_files.f` (same module name as
`dmi_jtag_tap.sv` -> Verilator MODDUP); only `rtl/fpga/build_genesys2_jtag.tcl`
reads it, in place of `dmi_jtag_tap.sv`. ASIC/Verilator flows are unaffected.
