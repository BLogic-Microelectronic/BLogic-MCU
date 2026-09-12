# BLogic MCU - ASIC Physical Design Flow

> **STATUS.** The headings match DDK "Final Istenen Ciktilar" (EN: Final
> Required Deliverables) sections 9.1-9.13 one-to-one. All sections are
> complete. **All signoff/timing/power/area results come from a SINGLE
> run: `RUN_hold035_2026-09-09`** (VM1, from scratch on a clean clone of
> commit `248069b` with the five-line configuration delta of 9.7,
> `make asic_run` 3 h 44 min, `make pdk` excluded). Decision and experiment
> measurements taken DURING the design process (August 3-11;
> channel-widening, derate derivation, hold-repair trials) are marked
> separately with their own dates and document decision rationales, not
> final results. The full text of the DDK errata and written decisions
> dated August 17, 2026: `asic/DDK_KARARLARI.md`.
> **Delivered configuration (September 9, 2026):** the riscv-dbg JTAG debug
> subsystem (`JTAG_DEBUG`), the FC-1 fix (`FC1_FIX`) and the `i2c_sda_i`
> synchronizer (`I2C_SDA_SYNC`) are enabled in `config.yaml`/`filelist.f`
> (9.4, 9.5, 9.9/3, 9.9/9); the official run of this configuration is
> **`RUN_hold035_2026-09-09`** (VM1, clean clone of commit `248069b`; the run
> tag records its one configuration change, the resizer hold margin of 0.35,
> 9.7). Two earlier signed runs are kept as historical references and are
> named as such wherever they are quoted: `RUN_final_2026-09-06` (same RTL,
> LibreLane default hold repair - the run superseded on 9 September, delta in
> 9.11.1) and the run of August 14, 2026 (JTAG-less RTL, commit `73d8dcd`,
> the reference of the exploration comparisons in root README Section 10.10).

## 9.1 Design Summary

RISC-V (CV32E40P) based microcontroller SoC: AXI4/AXI4-Lite interconnect,
QSPI boot, UART/GPIO/Timer/I2C peripherals, and a TFLite Micro Speech
(2D convolution + fully connected layer) AI accelerator. Top-level module:
`asic_top`. Clocks: `clk_i` (system clock, all SoC logic) and `jtag_tck_i`
(JTAG TAP clock, asynchronous to `clk_i`; the only crossing is riscv-dbg's
`dmi_cdc` two-phase handshake - 9.6, 9.9/9). Resets: `rst_ni` (asynchronous
assert; release synchronization is an integration requirement outside the
delivered macro - 9.6, 9.9/10) and `jtag_trst_ni` (TAP reset, false path). The
design also carries the specification's optional JTAG debug interface (PULP
riscv-dbg debug module on an IEEE 1149.1 TAP, connected to the CV32E40P debug
port - `JTAG_DEBUG`, 9.4, 9.9/9). Inputs/outputs are macro pins
in the final LEF/DEF (Section 2).

**Top-level interface (21 ports, `rtl/asic/asic_top.sv`):**

| Port | Direction | Width | Function |
|---|---|---|---|
| `clk_i` / `rst_ni` | input | 1/1 | system clock / asynchronous reset (release synchronization outside the macro, 9.6) |
| `uart_rxd_i` / `uart_txd_o` | input/output | 1/1 | UART0 (console + BLG1 vector reception) |
| `uart1_rxd_i` / `uart1_txd_o` | input/output | 1/1 | UART1 (stream DMA input) |
| `gpio_in_i` / `gpio_out_o` | input/output | 32/32 | GPIO (inputs with 2FF synchronizers) |
| `qspi_sclk_o` `qspi_cs_no` `qspi_io_o` `qspi_io_i` `qspi_io_oe` | output x3, input | 1/1/4/4/4 | QSPI flash (boot + data) |
| `i2c_scl_o` `i2c_sda_oe_o` `i2c_sda_i` | output x2, input | 1/1/1 | I2C master (open-drain drive via `sda_oe`) |
| `jtag_tck_i` `jtag_tms_i` `jtag_tdi_i` `jtag_trst_ni` / `jtag_tdo_o` | input x4 / output | 1 each | JTAG debug port (IEEE 1149.1 TAP -> riscv-dbg DTM/DM -> CV32E40P debug port; specification "1x JTAG (Opsiyonel)", EK-2 debug module); `jtag_tck` is a second, asynchronous clock (9.6) |

**Target clock frequency, per-corner closure and the declared operating
frequency (delivery run `RUN_hold035_2026-09-09`):**

The design is **built** at the 50 MHz target and **signed off** at 27.0 MHz.
LibreLane 3.0.6 reads two SDC files: the PnR steps use `PNR_SDC_FILE`
(`constraints/design.sdc`, `create_clock -period 20.000`) and the final
post-PnR STA uses `SIGNOFF_SDC_FILE` (`constraints/design_signoff.sdc`,
identical except `create_clock -period 37.000`) -
`librelane/steps/openroad.py:323` and `:970`. The two files are delivered
side by side (9.6).

| Corner | Setup WS @ 37 ns (signoff) | Setup viol. | Hold WS | Hold viol. | Setup WS @ 20 ns (target, `reports/timing_target_20ns/`) |
|---|---|---|---|---|---|
| tt_025C_1v80 | **+9.718 ns** | 0 | **+0.165 ns** | 0 | **+1.218 ns** - the 50 MHz target closes on setup |
| ss_100C_1v60 | **+0.197 ns** | 0 | **+0.637 ns** | 0 | -9.879 ns, 3,304 endpoints (TNS -11,648 ns) - does not close |
| ff_n40C_1v95 | **+12.185 ns** | 0 | **+0.040 ns** | 0 | **+3.685 ns** - closes |

**Declared statement** - wording per the DDK ruling of 8 September 2026,
which defines a *verified* operating frequency as one that closes **setup
and hold in every mandatory signoff corner** after post-PnR parasitic
extraction (`DDK_KARARLARI.md` item 8):

- **Verified operating frequency: 27.0 MHz** (37.000 ns). At this period
  every corner closes both setup and hold with zero violating endpoints
  (`reports/timing/summary.rpt`; worst setup slack +0.197 ns in SS, worst
  hold slack +0.040 ns in FF). The other check classes are clean at the
  same period: `jtag_tck` group +24.319 / +21.252 / +25.605 ns setup and
  +0.615 / +1.340 / +0.354 ns hold, recovery +28.562 / +21.635 / +31.314 ns,
  removal +1.225 / +2.708 / +0.755 ns (TT / SS / FF).
- **Target clock: 50 MHz** (`config.yaml` CLOCK_PERIOD = 20 ns, identical to
  `design.sdc`). The delivered netlist closes setup at the target in TT
  (+1.218 ns) and FF (+3.685 ns) and not in SS (-9.879 ns); hold is closed
  at every corner at any period. 50 MHz is therefore reported as the
  *target*, exactly as the DDK wording requires, and the 20 ns STA of the
  same database is delivered as supporting evidence in
  `reports/timing_target_20ns/` (same netlist, same parasitics, re-timed
  with `design.sdc`; the hold reports of that directory are byte-identical
  to `reports/timing/` and are therefore not duplicated).
- The FPGA prototype of the same RTL is verified at 50 MHz
  (WNS +2.433 ns / WHS +0.059 ns, zero failing endpoints - root README
  section 12.4). The two implementations need not share a frequency (DDK
  item 10); the difference is target technology and three-corner PVT
  signoff, not design (root README section 13.8).

**Why 37.000 ns - the closing period was measured, not extrapolated.** The
signoff STA step (`OpenROAD.STAPostPNR`) was re-run on the **unmodified**
placed-and-routed database with nothing changed but the `create_clock`
period of the signoff SDC (`--only OpenROAD.STAPostPNR`). No re-synthesis,
no re-placement, no re-routing:

| Signoff period | SS setup WS | Hold WS TT / SS / FF |
|---|---|---|
| 20 ns | -9.879 ns | +0.165 / +0.637 / +0.040 ns |
| 32 ns | -2.303 ns | same |
| 34 ns | -1.303 ns | same |
| 36 ns | -0.303 ns | same |
| **37 ns** | **+0.197 ns** | same |

Between 32 and 37 ns setup slack improves by **0.5 ns for every 1 ns of
period**, not 1.0 ns; the setup-only closing point of this netlist is
36.6 ns = 27.3 MHz, and 37.000 ns was chosen to leave a +0.197 ns margin in
the slowest corner. Hold is period-independent, as expected.

**Root cause of the 0.5 ns/ns slope: the SRAM read path is half-cycle.**
The Liberty model of the competition-supplied `sky130_sram_*_1rw1r_*` macros
declares the read-data output arc as `timing_type : falling_edge` (related
pin `clk0` / `clk1`). The macro latches the address on the **rising** edge
and drives read data on the **falling** edge; the CPU captures it on the
next rising edge. Everything after the SRAM therefore gets only **T/2**, so
opening the period by 2 ns hands that path just 1 ns. At 37 ns the worst
setup path is this one at **all three corners**, and at 20 ns it is the
worst TT and FF path as well:
`i_soc.i_instr_sram.u_sram.gen_bank[3].gen_512.u_macro` (falling edge) ->
`i_soc.i_cpu.core_i.if_stage_i._855_` (rising edge). Only the SS corner at
20 ns is bound by a different path - the pure standard-cell CPU path
`id_stage` -> `ex_stage.alu_i` / `alu_div_i` -> `id_stage` (first path of
`reports/timing_target_20ns/nom_ss_100C_1v60/max.rpt.gz`). Measured
composition of the SRAM path in SS, read from the delivered 37 ns signoff
report (`reports/timing/nom_ss_100C_1v60/max.rpt`, path 1, lines 7-213;
wire delays are folded into the stage they feed):

| Segment (report lines) | SS delay |
|---|---|
| Clock tree to the SRAM clock pin, from the falling edge at 18.5 ns (:16-83) | 7.944 ns (1.81 ns of it the `delaybuf_15..20` balancing chain) |
| SRAM `clk1 -> dout1` arc, TT Liberty x 2.661 SS derate (:84) | 4.257 ns - extrapolated beyond the Liberty table, see the note below |
| Buffer `wire5167` (:86-87) | 0.404 ns |
| Bank-select multiplexer, `mux4_2` (:90) | 1.861 ns |
| Crossbar multiplexers, `mux2_4` + `mux2_1` (:93, :96) | 1.615 ns (0.937 + 0.653 + wires) |
| Hold-repair cell `hold10455`, `dlygate4sd3_1` (:99) | 1.124 ns |
| Bridge / OBI buffers, `i_obi_axi_instr._444_`, `instruction_obi_i._324_` (:102-105) | 0.484 ns |
| CV32E40P prefetch-buffer multiplexer, `prefetch_buffer_i._063_` (:108) | 0.886 ns |
| CV32E40P instruction aligner, `aligner_i` incl. the resizer buffer `max_cap745` (:111-120) | 1.966 ns |
| CV32E40P RV32C compressed-instruction decoder, `compressed_decoder_i`, 5 cells (:123-135) | 4.731 ns |
| CV32E40P multiplexer into the endpoint register `if_stage_i._855_`, `_788_` (:138) | 0.665 ns |
| **Data arrival, measured from the launch edge** | **25.938 ns** |

The capture side allows 18.500 ns (T/2) + 8.411 ns capture clock latency -
0.500 ns uncertainty - 0.276 ns setup = 26.135 ns, which leaves the
+0.197 ns of the declaration.

**Note - the 4.257 ns macro arc lies outside the macro's Liberty table.**
The read arc is characterised for output loads of 1.72-27.56 fF and input
transitions up to 0.04 ns
(`macros/sky130_sram_2kbyte_1rw1r_32x512_8/lib/sky130_sram_2kbyte_1rw1r_32x512_8_TT_1p8V_25C.lib:41-46`;
`dout1` `max_capacitance` 0.02756 pF at :389). Its delay rows are identical
for every input transition (:399-408), so the 0.249 ns slew at `clk1` does
not change the value; but on this path `dout1[17]` drives 216.7 fF (:84 of
the report), 7.9x the largest characterised load. OpenSTA extrapolates
linearly from the last two table points (0.412 / 0.529 ns at 6.89 /
27.56 fF): 0.529 ns + 189.2 fF x 5.660 ns/pF = 1.600 ns in TT, x 2.661 (the
pessimistic SS proxy of 9.5) = 4.257 ns, the reported value. Of that,
0.529 x 2.661 = 1.408 ns is inside the table and **2.849 ns is
extrapolation - about 14x the +0.197 ns SS margin**; the output transition
is extrapolated the same way (0.016 -> 0.117 ns). Linear extrapolation is
the STA tool's standard behaviour and it has not been checked against a
SPICE simulation of the macro's output driver, so we claim no direction for
the error: the SS margin holds for the delivered models and is only as
accurate as this extrapolation. The same mechanism produces the
167 / 167 / 166 `dout1` max-capacitance entries of 9.11.

So the **half-cycle window** that caps this delivery is imposed by the
timing model of the supplied memory macro (falling-edge read arc); what
fills it is the clock insertion delay to the macro (7.94 ns), the macro arc
(4.26 ns), the bank and crossbar multiplexing of our memory system
(3.48 ns), one hold-repair cell (1.12 ns), 0.89 ns of buffers and
**8.25 ns of CV32E40P instruction-fetch logic** (prefetch multiplexer,
aligner, RV32C decoder). Removing the half cycle means registering the read
data at the memory boundary. That mechanism is already in the RTL
(`axi_sram_wrapper` parameter `REG_RDATA`,
`rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv:11`) and enabled on the data and
AI SRAMs (`rtl/soc_top.sv:655`, `:665`); it is **deliberately off on the
instruction SRAM** (`rtl/soc_top.sv:645`), because there it adds a cycle to
every instruction fetch - measured: +49.9 % CPU cycles, a net slowdown at
any clock the rest of this netlist can reach (9.9/12). A pipelined fetch
path that avoids that cost is future work, not part of this delivery.

**Slack-derived "fmax" figures are deliberately not quoted.** OpenSTA's
`report_clock_min_period` (`reports/timing/<corner>/clock.rpt`) and the
usual 1 / (T - WS) arithmetic both assume 1 ns of slack per ns of period;
with a half-cycle binding path they overstate the ceiling. The previous
revision of this document quoted "~32.7 MHz" for the SS corner of the
September 6 run from exactly those two sources; the period sweep measured
28.6 MHz (35.0 ns) for that run, and the claim was withdrawn on
9 September (9.11.1 keeps the corrected figure). The one projection this
document does make - the ceiling without the half-cycle path, 9.9/12 -
rests on a path whose slope was measured at two periods (1.000 ns of slack
per ns) and is labelled as a projection.

**History of the frequency declaration.** The August 14, 2026 signed run of
the JTAG-less RTL gave setup +2.210 / -9.083 / +4.375 ns and hold
-0.323 / +0.227 / -0.382 ns at 20 ns (TT / SS / FF). The September 6 run of
the delivered RTL (`RUN_final_2026-09-06`) gave setup
+1.684 / -10.537 / +4.010 ns and hold -0.309 / -0.122 / -0.290 ns with
87 / 5 / 142 hold-violating endpoints, so under the DDK definition it could
declare **no** verified frequency. The delivered run differs from it in
five configuration lines only (resizer hold margin 0.35 with
`ALLOW_SETUP_VIOS`, and the split signoff SDC - 9.7); it closes hold at
every corner at the cost of 10,509 delay cells and about 1.3 MHz of setup
ceiling (28.6 -> 27.3 MHz, measured in 9.9/12), which is what makes the
27.0 MHz declaration possible. Delta tables: 9.11.1.

## 9.2 Tool and Environment Information

See `asic/environment/versions.txt` (LibreLane 3.0.6 / `ba7193b`, Classic,
sky130A @ Open PDKs `8afc834`, sky130_fd_sc_hd, OpenRAM not used).
No tool/PDK/library differing from the reference release was USED.

## 9.3 Running the Flow

**Prerequisites:**

- Nix (with flakes support). Installation guide: LibreLane 3.0.6 official
  documentation, Nix-based installation page.
- Reference PDK (once, with network access): `cd asic && make pdk`
  (`ciel enable --pdk-family sky130 8afc8346a57fe1ab7934ba5a6056ea8b43078e71`).
- No environment variables required; all paths are repository-relative.

**Starting the Nix environment (optional, for manual work):**

    cd asic/environment
    nix develop --accept-flake-config     # librelane --version -> v3.0.6

**Mandatory re-run command (DDK Section 8):**

    cd asic && make asic_run

If `librelane` is not on PATH, the `make` targets automatically run the
commands inside the `environment/` flake environment
(`scripts/run_in_env.sh`); opening `nix develop` beforehand is not
required.

**Preparation of the `run/` directory:** `asic_run` first cleans the
`run/` subtree (only `.gitkeep` remains), then starts the LibreLane
Classic flow with `--force-run-dir run/RUN_<date-time>`; all temporary
step directories, intermediate databases and `final/` views are created
in this directory.

**Collecting reports and outputs:** when the flow finishes,
`scripts/collect_outputs.sh` copies the Section 5 reports into
`asic/reports/` and the Section 6 outputs into `asic/results/` following
the Table 8 layout, and produces `checksums/SHA256SUMS`. `asic_run`
invokes this script with `ALLOW_MISSING=1` (so that the reports at hand
are collected even if the flow finishes partially); **the hard gate of
the mandatory set is `make asic_verify`** — on any missing mandatory item
it exits with a non-zero code and prints the missing list.

**Additional targets:** `make asic_verify` (mandatory file presence +
metric summary), `make asic_clean` (cleans `run/`), `make check_filelist`
(config.yaml <-> filelist.f consistency).

**Approximate runtime and resources:** the verified environment is GCP
8 vCPU / 60 GB RAM; the delivery run `RUN_hold035_2026-09-09` took
**3 hours 44 minutes** (23:17 UTC September 8 - 03:02 UTC September 9, 2026;
clean clone, excluding `make pdk`; VM: 8 vCPU / 60 GB RAM / NVMe; the
September 6 run of the same RTL took 3 h 28 min - the extra time is the
larger hold-repair pass, 9.7).
On low-RAM machines the `magic-writelef` step may OOM; with 60 GB it runs
without issues. Disk: run directory (`run/`, deleted at delivery)
**~18 GB**; the collected report+output tree as committed is ~0.9 GB
(`reports/` 280 MB + `results/` 653 MB; files above GitHub's 100 MB limit
are gzipped - `results/BUYUK_DOSYALAR.md`).

## 9.4 RTL and Flow Inputs

- **File list:** `asic/filelist.f`. The canonical source is the
  `VERILOG_FILES` list inside `asic/config.yaml`; `filelist.f` is
  generated from it (`python3 scripts/check_filelist.py --generate`) and
  consistency is checked automatically at the start of every
  `make asic_run` (the automation requested by DDK page 20). 84 source
  files, in compilation order: the SoC RTL plus the JTAG debug subsystem
  (riscv-dbg DM/DTM/TAP and debug ROM, common_cells v1.38.0 CDC cells,
  tech_cells_generic `tc_clk`, `rtl/debug/axi_dm_slave.sv`); the same
  list heads `soc_files.f` (simulation/lint) and is read by
  `rtl/fpga/build_genesys2.tcl` (FPGA).
- **Path base:** all paths inside `filelist.f` are resolved **relative to
  the `asic/` directory** (`../rtl/...`) and the flow is started from
  this directory (`cd asic && make asic_run`). This is exactly in line
  with the DDK announcement *"Errata - filelist.f Path Resolution"* dated
  August 17, 2026; the announcement supersedes the Section 9.4 wording
  that said paths were to be defined relative to the repository root. The
  main RTL sources, verification/testbench and FPGA files are NOT COPIED
  under `asic/` (Section 3/4 rule).
- **Include directories:** `rtl/debug/vendor/common_cells_v1.38.0/include`
  (listed FIRST: riscv-dbg's `dmi_cdc` needs the v1.38.0 `assertions.svh`/
  `registers.svh`, a strict superset of the 1.20.0 copy under cv32e40p),
  `rtl/asic`, `rtl/core/cv32e40p/rtl/include`,
  `.../pulp_platform_common_cells/include`, `rtl/bus/axi/include`.
- **Compile defines (MANDATORY):** `SYNTHESIS`, `ASIC_SRAM_MACRO`
  (selects the SRAM macro branches), `BOOTROM_CONTENT` (embeds the boot
  ROM content), `JTAG_DEBUG` (JTAG TAP + riscv-dbg debug module: five extra
  ports, the `jtag_tck` clock, the DM window at 0x0004_0000), `FC1_FIX`
  (FC-1 erratum fix, 9.5) and `I2C_SDA_SYNC` (2FF synchronizer on
  `i2c_sda_i`, 9.9/3). Both `config.yaml` and `filelist.f` carry the same
  six defines; `soc_files.f` and the FPGA build enable the same three design
  defines, so simulation, FPGA and ASIC share one configuration.
- **Main configuration:** `asic/config.yaml` (LibreLane Classic).
- **Timing constraints:** `asic/constraints/design.sdc` (section 9.6).
- **Third-party RTL locations:** `rtl/core/cv32e40p/` (vendored:
  common_cells, including the fpnew package), `rtl/bus/axi/`, the UART
  core originating from `rtl/peripherals/verilog-uart`, and
  `rtl/debug/vendor/` (riscv-dbg, common_cells v1.38.0 CDC subset,
  tech_cells_generic; pins and file lists in `rtl/debug/VENDOR.md`).
  Details and licenses: `asic/THIRD_PARTY.md`.
- **Top-level module:** `asic_top` — the RTL, `config.yaml` and this
  README all use the same name (Section 3.1 consistency requirement).

## 9.5 SRAM and Physical Macros

The design uses the two ready-made SKY130 SRAM macros approved in
Table 5. Source: reference PDK installation
(`libs.ref/sky130_sram_macros/`, Open PDKs `8afc834`); the views are
copied into the repository as required by Table 8. The physical and
logical views are NOT MODIFIED (Section 1.3).

| | `sky130_sram_2kbyte_1rw1r_32x512_8` | `sky130_sram_1kbyte_1rw1r_32x256_8` |
|---|---|---|
| Capacity / depth / width | 2 KiB / 512 / 32 bit | 1 KiB / 256 / 32 bit |
| Port structure / write | 1RW + 1R / 8-bit | 1RW + 1R / 8-bit |
| Instance paths | `i_soc.i_instr_sram.*.u_macro`, `i_soc.i_data_sram.*.u_macro`, `i_soc.i_ai_sram.*.u_macro` (bank arrays, `sram_macro_bank.sv`), `i_soc.i_ai_accel.u_input_mem`, `i_soc.i_ai_accel.u_conv_out.*.u_macro` (2 banks) | `i_soc.i_ai_accel.u_conv_w_mem` |
| GDSII | `macros/<name>/gds/<name>.gds` | same pattern |
| LEF | `macros/<name>/lef/<name>.lef` | same pattern |
| Liberty | `macros/<name>/lib/<name>_TT_1p8V_25C.lib` | same pattern |
| Verilog model | `macros/<name>/verilog/<name>.v` | same pattern |
| SPICE netlist | `macros/<name>/spice/` | same pattern |
| Power / ground pins | `vccd1` / `vssd1` | `vccd1` / `vssd1` |

The total macro count is verified from the synthesis statistics:
26 x 2KB + 1 x 1KB = **27 macros** (Aug 10 `config.yaml` synthesis run;
the final count is read from `reports/synthesis/stat.json`; in case of
conflict, stat is authoritative).

**PDN connection:** the macro `vccd1`/`vssd1` pins connect to the
design's `VPWR`/`VGND` nets (`config.yaml` `PDN_MACRO_CONNECTIONS`, a
separate rule for each of the three instance patterns; consistent with
section 9.7 and the macro LEF `PIN vccd1 ... USE POWER` definitions).
The fixed placement is given via `macro_placement.cfg`.

**Functional verification with the delivered Verilog models
(Section 1.3 requirement):** the mandatory SRAM macros are exercised in
functional verification with the **delivered OpenRAM Verilog models
themselves**, not only through the timing-equivalent behavioural model:
`make asic-sram-sim` (repository root) compiles the SoC with
`ASIC_SRAM_MACRO` plus the `macros/*/verilog` models and runs the full
QSPI boot flow — firmware, data and AI weights are written into the
macro-modelled ISRAM / DSRAM / AI SRAM over the bus (no `$readmemh`
preload exists on this path) and the firmware then executes entirely out
of the macro contents, printing "Hello World!" (`TEST SUCCESS`, all 10
AXI/AXI-Lite protocol checkers clean, zero model warnings). Verified
2026-09-01, **PASS**. The behavioural/macro equivalence argument (same
address-at-T / data-at-T+1 contract) remains documented in
`rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv`.

**Full-stack functional simulation of the ASIC top module
(`make asic-top-sim`):** goes one step further than `asic-sram-sim` — the
DUT is `asic_top` itself (the module that becomes the GDS, which no other
run simulated), compiled with `ASIC_SRAM_MACRO` and the delivered OpenRAM
models, booting from QSPI flash and then running the AI accelerator's
convolution layer. **Scope limit:** this is an **RTL** simulation
(`soc_files.f` + `rtl/asic/asic_top.sv`) against the vendor's *behavioural*
macro models; it is **not** a post-layout netlist or SDF back-annotated
simulation, and this delivery contains no such run. It proves functional
behaviour and the macro read/write contract at the ASIC top level — the
post-layout timing evidence is the three-corner STA of 9.11, not this run.
The firmware (`sw/tests/ai_boot_macro_test.c`) checks the 1000-word
`conv_out` region in AI SRAM bit-exactly against the committed golden
vector (FNV-1a checksum of `conv_out_yes_real.hex`). A single-word
deviation fails the run, and the region can only be produced through the
accelerator's **internal** macros (input read from `u_input_mem`,
weights from `u_conv_w_mem`, results written to and drained back out of
`u_conv_out`), so this run exercises **all 27 macro instances**
functionally, including the three inside the accelerator that the boot
flow alone never touches. Verified 2026-09-01 (conv checksum), **PASS**.
Since September 6, 2026 the target compiles the delivered configuration
(`soc_files.f`: `JTAG_DEBUG`, `FC1_FIX`, `I2C_SDA_SYNC`) and additionally
checks the FC argmax (== 2, "yes") and the result word (`+define+CHECK_ARGMAX`,
firmware built with `-DCHECK_ARGMAX`): it is the proof that the FC-1 erratum
described below is fixed in the delivered RTL. Negative control (September 6,
2026): the same testbench on RTL without `FC1_FIX` fails with `AI ARGMAX BA`.

**Erratum FC-1 (found by `asic-top-sim` on 2026-09-01, after the August 14
signoff; FIXED in the delivered RTL, `FC1_FIX`):** in the `ASIC_SRAM_MACRO`
branch, the fully-connected stage issued a `conv_out` read in `ST_FC_FETCH_W` but
consumed `co_rdata` only after the AXI weight fetch completes, ≥3 cycles
later (`rtl/ai_accelerator/ai_accelerator.sv`, state `ST_FC_FETCH_W_WAIT`). The delivered
OpenRAM functional model drives `dout1` to `X` on **every** rising edge
(`#(T_HOLD) dout1 = 32'bx;` — the model's own comment: *"Delay to hold
dout value after posedge. Value is arbitrary"*), so read data is valid
for exactly one consuming cycle; under the model, every FC MAC therefore
reads a clobbered `conv_out` value and the final argmax is wrong, while
the convolution layer itself (whose reads are re-issued every cycle, and
whose `WCONV` drain consumes at exactly T+1) is bit-exact. The behavioural
branch registers and *holds* read data, which is why 15/15 SoC tests,
4/4 golden-model scenarios and the 60/60 board demo (FPGA = behavioural
branch) all pass and masked this until the run with the delivered macro
models. Isolation
evidence: the identical firmware and flash image **pass** on the
behavioural build and **fail identically** (same signature, same
timestamp) on `soc_top`+macros and on `asic_top`+macros — i.e. the issue
is the macro-branch read-hold contract, not `asic_top` wiring. Expected
silicon impact: the physical macro's `dout` is driven by the sense-amp
output stage and holds its last read value while `csb1` stays high (no
new sense operation occurs), so the fabricated chip is expected to
compute FC correctly; the delivered functional model simply forbids
relying on that hold, and under that model contract the FC output is
treated as unverified. The remediation is a one-line
RTL change (keep re-issuing `co_re` with the same address during
`ST_FC_FETCH_W_WAIT`, define `FC1_FIX`). History: the August 14 signed run
was built without it and carried FC-1 as a declared erratum (Section 1.3 and
the signed-run consistency rule); the fix was first validated in the sky130
exploration runs and the FPGA build of September 3 (root README Section
10.10), and since September 6, 2026 `FC1_FIX` is enabled at every entry
point of the delivered configuration (`config.yaml`, `filelist.f`,
`soc_files.f`, `rtl/fpga/build_genesys2.tcl`); `make asic-top-sim` proves
the fix under the OpenRAM model contract (argmax == 2). Argmax correctness
is also proven on the behavioural side (Section 9.11 / root README
Section 11).

**Corner assumption (the most important item of this section):** both
macros are distributed in the PDK with only the `TT_1p8V_25C` Liberty;
there is NO model corresponding one-to-one to the SS/FF corners of
Table 4.

The DDK's written clarification dated August 17, 2026 made the expected
approach for this situation explicit: for ready-made SRAM macros, **the
provided `TT_1p8V_25C` Liberty model may be used as a documented
substitute in the SS and FF analyses as well**; the standard-cell
libraries continue to use their respective corner models, and **no
artificial scaling of the model is required**. Our delivery is within
this framework:

- Standard cells use their own corner Liberty in every analysis
  (`tt_025C_1v80` / `ss_100C_1v60` / `ff_n40C_1v95`).
- The SRAM macros are modeled with `TT_1p8V_25C` in all three analyses;
  **no modification whatsoever** has been made to the Liberty files.
- **In addition,** a measurement-based pessimistic `set_timing_derate` is
  applied to the SRAM paths: `sky130_fd_sc_hd__dfxtp_1` clk->Q median
  delay TT 0.4376 ns / SS 1.1642 ns, ratio **2.661x** (setup/late), and
  0.5x for hold/early. At signoff, the application is conditional on the
  corner name inside `constraints/design.sdc` (1.0 in TT). **In the PnR
  context** the corner name is undefined, so the derate is applied
  unconditionally (late 2.661 / early 0.5) — the 0-DRC physical result
  was produced under these pessimistic constraints. This is extra
  pessimism the DDK *does not require*; it does not modify the model, it
  only tightens the margin in analysis.
- It has also been measured that the derate does not determine the SS
  result: the worst setup path in the SS corner is a pure standard-cell
  CPU path that does not pass through SRAM (section 9.9/1), so even with
  the derate removed, 50 MHz does not close in SS.

Summary: the model gap is closed by the TT substitution accepted in the
DDK's August 17, 2026 decision; the 2.661x/0.5x derate is a
measurement-based safety margin added on top of it and is not mandatory.

## 9.6 Timing Constraints and Exceptions

Constraint files: **two**, delivered side by side (Section 6.2).
`asic/constraints/design.sdc` is the PnR SDC (`PNR_SDC_FILE`; `clk`
20.000 ns = the 50 MHz target) and `asic/constraints/design_signoff.sdc`
is the signoff SDC (`SIGNOFF_SDC_FILE`; identical in every constraint
line - only the header comment and the `clk` period differ, 37.000 ns =
the verified 27.0 MHz, 9.1). Every other
constraint below is present, unchanged, in both files. `results/sdc/`
carries the SDC as written back by OpenROAD at the end of the flow (the
PnR view).

- **Primary clock:** `clk` = `clk_i` port, period 20.000 ns (50 MHz
  target) in `design.sdc`, 37.000 ns (verified 27.0 MHz) in
  `design_signoff.sdc`.
- **Primary clock (JTAG):** `jtag_tck` = `jtag_tck_i` port, period
  100.000 ns (OpenOCD adapter speed <= 10 MHz); uncertainty setup 0.500 /
  hold 0.100 ns, transition 0.150 ns (JTAG block at the end of `design.sdc`).
- **Generated clock:** NONE. QSPI SCLK is generated from `clk` via a
  register output (at most clk/2: 25 MHz at the 50 MHz target, 13.5 MHz
  at the verified 27.0 MHz), is not used as an internal
  clock, and its data paths stay in the `clk` domain; therefore no
  generated clock definition is required.
- **Clock domain relations / asynchronous clock groups:** TWO clock
  domains. `clk` (all SoC logic) and `jtag_tck` (the riscv-dbg TAP and DTM
  registers) are declared asynchronous with
  `set_clock_groups -asynchronous -group clk -group jtag_tck`. The only
  crossing is riscv-dbg's `dmi_cdc` (two-phase handshake built from
  common_cells v1.38.0 `cdc_2phase_clearable` with 2FF synchronizers,
  structurally safe); no timing relation between the two clocks is
  constrained. The FPGA's MMCM is inside `fpga_top` and does not enter the
  ASIC.
- **Input/output delay:** for the synchronously constrained inputs
  (`i2c_sda_i`, `qspi_io_i*`) and ALL outputs: max 6.000 ns / min
  0.500 ns budget; the ports are given as an explicit list. Asynchronous
  inputs (`gpio_in_i*`, `uart*_rxd_i`) carry NO input_delay — they are
  declared as false paths below. JTAG pins are budgeted against `jtag_tck`:
  `jtag_tms_i`/`jtag_tdi_i` input delay max 20.000 / min 2.000 ns,
  `jtag_tdo_o` output delay max 20.000 / min 2.000 ns and a 5 pF load (TMS/TDI
  are sampled on the rising and TDO driven on the falling TCK edge; a 100 ns
  period leaves ample margin).
- **Design-wide rules:** `set_max_transition 1.000 ns`,
  `set_max_fanout 32` (design.sdc).
- **Clock uncertainty:** setup 0.500 ns, hold 0.100 ns.
  **Input transition:** clock transition 0.150 ns. **Output load:** 5 pF
  (pessimistic pad + trace budget). (Section 3.2 "recommended" items.)
- **False path (reset):** `set_false_path -from [get_ports rst_ni]`.
  `rst_ni` is a **primary asynchronous chip input**: it is asserted
  asynchronously and is distributed inside `asic_top` **without a
  synchronizer** (`rtl/asic/asic_top.sv:55` passes the pad straight to
  `soc_top`; `rtl/soc_top.sv:93` forms `sys_rst_n = rst_ni & ~dm_ndmreset`).
  The port has no launching clock, so no recovery/removal or setup check
  can be formulated from it - OpenSTA lists it under `check_setup` as an
  input without `set_input_delay` (`reports/timing/*/checks.rpt`). The
  exception therefore removes an **unconstrainable asynchronous input arc,
  not a genuinely timed synchronous path**; the Section 3.2 rule (a
  genuinely timed path must not be made a false path) is not violated.
  **The reset network itself is not left unmeasured:** the same `sys_rst_n`
  net is also driven by `dm_ndmreset`, a flip-flop clocked by `clk`, so
  every recovery/removal check on the reset pins is timed from that
  startpoint. In `RUN_hold035_2026-09-09` the `asynchronous` path group
  reports 1,000 recovery and 1,000 removal paths per corner with **0
  violations** - worst recovery slack +28.562 ns (TT) / +21.635 ns (SS) /
  +31.314 ns (FF), worst removal slack +1.225 ns (TT) / +2.708 ns (SS) /
  +0.755 ns (FF) at the 37 ns signoff (`reports/timing/*/max.rpt`,
  `min.rpt`; the September 6 run gave +12.515 / +6.567 / +14.943 and
  +0.390 / +1.024 / +0.199 ns at 20 ns). **Synchronizing
  the release of `rst_ni` to `clk` is an integration requirement on the pad
  ring / reset controller outside the delivered macro** - the FPGA
  prototype implements exactly that with a 2-FF release synchronizer
  (`rtl/fpga_top.sv`, `rst_sync_n`); see the known-limitation entry 9.9/10.
  (The comment block above line 41 of `design.sdc` still uses the earlier
  wording "synchronization is done at the chip top level"; this section is
  the authoritative statement, the SDC file is left byte-identical to the
  delivery run.) `jtag_trst_ni` (asynchronous TAP reset, IEEE 1149.1 TRST)
  is a false path for the same reason (JTAG block at the end of
  `design.sdc`).
- **False path (asynchronous inputs):** via `set_false_path -from`:
  `gpio_in_i*` (2FF synchronizer, `gpio_axil.sv:44-50`), `uart_rxd_i` and
  `uart1_rxd_i` (asynchronous serial lines, sampled via `rxd_reg`). These
  ports have no meaningful arrival window relative to `clk`; a
  synchronous input_delay produces spurious setup/hold violations
  (measured: the TT worst hold path was `gpio_in_i[0]`). These are not
  genuinely timed paths, so the Section 3.2 rule is preserved; see
  9.9/3. `i2c_sda_i` and `qspi_io_i*` REMAIN synchronously constrained.
- **Multicycle path:** NONE (all paths follow the single-cycle rule).
- **SRAM derate:** the 2.661x/0.5x `set_timing_derate` application of
  section 9.5 is not a timing exception; it is a non-mandatory,
  measurement-based safety margin added on top of the TT substitution
  accepted by the DDK (details and jury decision: section 9.5). It is
  declared here as well for transparency.

### 9.6.1 Constraint-rationale table (with design.sdc line references)

The table below gives EVERY constraint in `design.sdc`, its value and its
rationale at a glance. The line numbers refer to the base
constraints; the JTAG constraints (added September 6, 2026, when the debug
subsystem entered the delivered configuration) are the block at the end of
`design.sdc` and are listed without line numbers. The file is an input of
the official run; this table is documentation consolidation only.

| Constraint (`design.sdc` line; the signoff copy's header is 4 lines shorter) | Value | Rationale |
|---|---|---|
| `create_clock clk` (line 24) | 20.000 ns (50 MHz) in `design.sdc` (PnR); **37.000 ns (27.0 MHz) in `design_signoff.sdc`** (signoff) | Primary system clock (the second clock, `jtag_tck`, is below). The PnR value must equal config.yaml `CLOCK_PERIOD` (9.13 consistency rule); the signoff value is the verified operating frequency of 9.1. In the ASIC the clock comes from a pad; the FPGA's MMCM stays in `fpga_top`. |
| `set_clock_uncertainty -setup` (line 27) | 0.500 ns | Jitter + skew budget (Section 3.2 "recommended" item); a pessimistic constant since the source is not finalized. |
| `set_clock_uncertainty -hold` (line 28) | 0.100 ns | Hold side of the same budget; margin against the skew measured after CTS. |
| `set_clock_transition` (line 29) | 0.150 ns | Clock input transition time assumption (typical value in the absence of a pad model). |
| `set_false_path -from rst_ni` (line 43) | - | One of the two reset false paths (the other is `jtag_trst_ni`, JTAG block). `rst_ni` is a primary asynchronous input with no launching clock (release synchronization is expected from the integrating pad ring / reset controller); the reset network is timed from the `dm_ndmreset` startpoint (asynchronous path group, 0 violations, worst removal +0.755 ns FF at the 37 ns signoff (+0.199 ns in the superseded September 6 run)). Carries no real data timing; the Section 3.2 rule "gercekte zamanlanan yol false path yapilamaz" (EN: a genuinely timed path must not be made a false path) is not violated. |
| `set_false_path -from` asynchronous inputs (lines 60-61) | `gpio_in_i*`, `uart_rxd_i`, `uart1_rxd_i` | 2FF synchronizer (`gpio_axil.sv:44-50`) and asynchronous serial lines; no meaningful arrival window relative to `clk`. A synchronous input_delay produces spurious violations (measured: the TT worst hold path had come out as `gpio_in_i[0]`). |
| `set_input_delay` (lines 70-71) | max 6.000 / min 0.500 ns | ~30% input budget of the 20 ns PnR period (16% of the 37 ns signoff period) for the inputs that remain synchronous (`i2c_sda_i`, `qspi_io_i*`); ports are given as an explicit list for tool portability. |
| `set_output_delay` (lines 72-73) | max 6.000 / min 0.500 ns | ~30% output budget (16% at the 37 ns signoff) for ALL outputs; sufficient margin for the low-speed peripherals (UART/I2C/QSPI/GPIO). |
| `set_load` (line 77) | 5.0 pF | Pessimistic load for pad + external trace; to be refined once the pad model is finalized. |
| `set_max_transition` (line 82) | 1.000 ns | Design-wide signal integrity rule (Section 3.2). |
| `set_max_fanout` (line 83) | 32 | Design-wide fanout limit; synthesis/PnR buffer accordingly. |
| SRAM corner-conditional derate (lines 127-149) | SS: late 2.661 / FF: early 0.500 / TT: 1.0 | The macro Liberty is TT-only; for SS/FF analysis, a proxy coefficient MEASURED from the `dfxtp_1` clk->Q TT/SS ratio (not a waiver but a measurement correction; DDK decision 3 + section 9.5). 1.0 in TT: the TT lib is the exactly correct model. In the PnR context the unconditional pessimistic legacy behavior is retained (freeze discipline). |
| Generated clock | NONE | QSPI SCLK is generated from `clk` via a register output (<= clk/2), not used as an internal clock; its data paths stay in the `clk` domain (the "ilgili yapi varsa zorunlu" (EN: mandatory only if the relevant structure exists) condition is not triggered). |
| `create_clock jtag_tck` (JTAG block, end of design.sdc) | 100.000 ns | JTAG TAP clock on `jtag_tck_i`; OpenOCD adapter speed <= 10 MHz. Uncertainty setup 0.500 / hold 0.100 ns, transition 0.150 ns - same budget logic as `clk`. |
| `set_clock_groups -asynchronous` clk / jtag_tck (JTAG block) | 2 groups | The two clocks have no phase relation; the only crossing is riscv-dbg's `dmi_cdc` two-phase handshake (2FF synchronizers), so no timing path between them is real. MMCM outside `asic_top`. |
| `set_false_path -from jtag_trst_ni` (JTAG block) | - | Asynchronous TAP reset (IEEE 1149.1 TRST); same rationale as `rst_ni`. |
| `set_input_delay -clock jtag_tck` on `jtag_tms_i`/`jtag_tdi_i` (JTAG block) | max 20.000 / min 2.000 ns | TMS/TDI are sampled on the rising TCK edge; 20% of the 100 ns period as external budget. |
| `set_output_delay -clock jtag_tck` on `jtag_tdo_o` + `set_load` (JTAG block) | max 20.000 / min 2.000 ns, 5.0 pF | TDO is driven on the falling TCK edge (IEEE 1149.1); pad + probe-cable budget. |
| Multicycle path | NONE | All paths are closed under the single-cycle rule; no exception is defined. |

The comments in `design_signoff.sdc` that quote `max clk/2 = 25 MHz` (line 155) and a ~30 % I/O budget (line 44) are copied from `design.sdc` and describe its 20 ns PnR period; at the 37 ns signoff period the figures are 13.5 MHz and ~16 %. The file is an input of the delivered run, so its comments are left as they are.

## 9.7 Physical Design Configuration

Measurement source: **`RUN_hold035_2026-09-09`** (delivery run).

- **Floorplan (absolute):** `DIE_AREA` 4180 x 4490 um = **18.77 mm2**,
  `CORE_AREA` (60,60)-(4120,4430) = 17.74 mm2 configured (17.72 mm2 after
  row snapping, `design__core__area`); `FP_SIZING: absolute`.
- **Aspect ratio:** 4180/4490 = **0.931** (approximately square). Since
  `FP_SIZING: absolute` is used, the `FP_ASPECT_RATIO` parameter is not
  in effect; the ratio derives from the width of the 4-column macro array
  (4 x 683.1 um macros + channels) and the total height of the 7-row
  arrangement + the 834.2 um central logic corridor
  (macro_placement.cfg). The channel-widening decision was taken by
  measurement: with macro column channel 209 -> 300 um and inter-row
  spacing 60 -> 100 um, route DRC went 1348 -> 0 and convergence
  195 -> 10 iterations (cost: die +12.2%). The experiment chain is in the
  `config.yaml` comments.
- **Utilization (measured):** instance total 51.0% (including macros);
  std-cell 14.4% (September 6 run: 50.4% / 13.3%; the difference is the
  hold-repair cells of 9.9/12). Target `PL_TARGET_DENSITY_PCT: 35`,
  `PL_MAX_DISPLACEMENT_Y: 300`.
- **Macro placement:** `macro_placement.cfg` — 27 SRAM macros, manual
  placement in 4 columns x bottom/top bands (coordinates in the file,
  rationale in 9.5).
- **Pin placement:** LibreLane default automatic pin placer; no custom
  pin-order file was used.
- **Power/ground nets:** top level `VPWR`/`VGND`; SRAM macro pins
  `vccd1`/`vssd1`, mapped via `PDN_MACRO_CONNECTIONS` (3 patterns,
  27 macros). `PDN_MULTILAYER: true` (met4 vertical + met5 horizontal
  straps). PDN verification: `reports/pdn/{VPWR,VGND}-grid-errors.rpt`
  both EMPTY (0 errors).
- **Routing:** all layers (li1-met5) open to the router; 81
  `ROUTING_OBSTRUCTIONS` boxes over the macros (met1/met2/met5 x
  27 macros, rationale in the config comment: met5 OBS missing in the
  SRAM LEF). `GRT_ALLOW_CONGESTION: true`, `GRT_OVERFLOW_ITERS: 25`.
  Measured result: route DRC 0 (TritonRoute converges in 21 iterations
  from 37,456 initial violations - four repair passes ending 11 -> 0,
  15 -> 0, 14 -> 0 and 10 -> 9 -> 0, `reports/general/flow.log`; the
  September 6 run needed 7 iterations from 170, the difference being the
  10,509 additional hold cells re-routed), total wire 6.67 m, 856,965 vias.
- **CTS (configuration):** four explicit TritonCTS settings in
  `config.yaml` (added September 6, 2026): `CTS_MACRO_CLUSTERING_MAX_DIAMETER:
  600`, `CTS_MACRO_CLUSTERING_SIZE: 2`, `CTS_OBSTRUCTION_AWARE: true`,
  `CTS_CLK_MAX_WIRE_LENGTH: 900`. Rationale (measured): with the debug module
  in the netlist, the CTS delay-balancing chain moved onto the
  instruction-SRAM branch and the post-CTS resizer recovered less TT setup
  margin; a 12-variant sweep on VM1 (September 3-4, 2026,
  `rtl/debug/asic_jtag_sentez/full_v3/varyant_taramasi.txt` and `OZET.md`)
  showed that clustering the macro clock sub-tree plus obstruction-aware CTS
  and a clock wire-length cap recovers it (exploration run v3: TT setup
  +1.684 ns against +1.060 ns without the settings, hold back to the
  JTAG-less level at TT (-0.309 vs -0.323 ns) and better at FF (-0.290 vs
  -0.382 ns) - SS, hold-clean on August 14 (+0.227 ns), kept 5 endpoints at
  -0.122 ns - worst IR-drop 0.95 mV; the September 6 run
  `RUN_final_2026-09-06` reproduced these figures, and the delivered run
  keeps the same four CTS settings and adds only the hold-repair settings
  of the next bullet), while the
  knobs aimed directly at the mechanism (`CTS_DELAY_BUFFER_DERATE_PCT`,
  `CTS_MAX_CAP`) measured no effect and a wider resizer setup margin was
  harmful - those are deliberately absent. Otherwise LibreLane default CTS.
- **CTS (measured):** clock tree
  2,104 clock buffers + 311 clock inverters (`metrics.json`
  `design__instance__count__class:clock_buffer` / `clock_inverter`),
  unchanged from the September 6 run; worst TT skew between the earliest
  flop and the latest macro clock pin 1.793 ns (3.325 -> 5.118 ns,
  `reports/timing/nom_tt_025C_1v80/clock.rpt`; 1.882 ns on September 6).
- **Hold repair (the configuration delta of the delivered run, added
  9 September 2026):** `PL_RESIZER_HOLD_SLACK_MARGIN: 0.35`,
  `GRT_RESIZER_HOLD_SLACK_MARGIN: 0.35`, `PL_RESIZER_ALLOW_SETUP_VIOS: true`,
  `GRT_RESIZER_ALLOW_SETUP_VIOS: true`, and `SIGNOFF_SDC_FILE:
  dir::constraints/design_signoff.sdc` (37.000 ns; `PNR_SDC_FILE` stays
  `design.sdc` at 20.000 ns). Everything else - RTL, floorplan, macro
  placement, obstructions, PDN, CTS - is identical to the September 6 run.
  Rationale, measured (9.9/12): with LibreLane's default margin (0.10) and
  `ALLOW_SETUP_VIOS` off, the resizer declines to repair hold under the
  50 MHz setup pressure and leaves 87 / 5 / 142 violating endpoints; the
  parasitic shift between in-PnR and post-extraction hold is about
  0.31 ns, so a usable margin has to exceed it; 0.30 leaves one FF
  endpoint at -0.044 ns, 0.35 closes every corner, 0.40 over-repairs and
  fails to converge. The resizer inserted 10,509 hold cells (10,467
  `sky130_fd_sc_hd__dlygate4sd3_1`; netlist census of
  `results/netlist/asic_top_pnr.v.gz`); the antenna-repair pass added 173
  diodes (`antenna_diodes_count`; 101 on September 6) on top of the
  heuristic diode insertion, for 96,292 `diode_2` cells in total (9.11).
  `RUN_POST_GRT_RESIZER_TIMING: true` as before (63 -> 10
  measurement, Aug 11 configuration experiment on the JTAG-less RTL).
- **Area/frequency trade-off (DDK Aug 17 decision):** die/core area
  carries no separate scoring weight; timing and signoff cleanliness are
  what matters. The +12.2% area cost of the channel-widening is
  deliberate within this framework, in exchange for 0 DRC
  (`asic/DDK_KARARLARI.md`).
- **Auxiliary files:** `macro_placement.cfg`, `constraints/design.sdc`,
  `scripts/` (filelist check, output collection, environment wrapper).

<p align="center"><img src="results/images/asic_top.png" width="480" alt="asic_top final layout"></p>
<p align="center"><sub>asic_top final layout (RUN_hold035_2026-09-09)</sub></p>

<p align="center"><img src="results/images/asic_top_render_hd.png" width="820" alt="asic_top high-resolution render (power grid and fill cells hidden)"></p>
<p align="center"><sub>Full-chip render of the delivered GDS (<code>results/gds/asic_top_klayout.gds.gz</code>, 4180 &times; 4490 &micro;m) with the met4/met5 power grid and the fill / decap / tap cells hidden (<code>scripts/render_die.py</code>, KLayout batch): the 27 hand-placed SRAM macros (4 &times; 7 grid, bitcell arrays dark), the standard-cell logic drawn by its met2 (orange) / met3 (green) routing &mdash; the wide band across the middle is the CV32E40P core (left, 30.6 k cells), the crossbar and peripherals (centre) and the QSPI controller (right, 12.9 k cells); the separate cluster at the lower right is the AI accelerator (12.0 k cells); the narrow vertical strip at the top centre is the JTAG debug module (<code>dm_top</code> + <code>dmi_jtag</code>) reaching the JTAG pins on the top edge (placement centroids from <code>results/def/asic_top.def.gz</code>) &mdash; and the met1 (blue) routing channels between the macros. Colour key: diff green, poly red, li1 grey, met1 blue, met2 orange, met3 green.</sub></p>
<p align="center"><img src="results/images/asic_top_render_layers.jpg" width="820" alt="asic_top - every layer drawn, power grid visible"></p>
<p align="center"><sub>The same GDS with every layer drawn (KLayout batch render of the delivered GDS, 9 September 2026): the met4 / met5 power grid and the fill cells cover the whole core, which is what the chip physically looks like &mdash; the render above hides exactly those to expose the logic underneath.</sub></p>
<p align="center"><img src="results/images/zoom_80um_cells.png" width="360" alt="80 um zoom - standard cell rows">&nbsp;<img src="results/images/zoom_sram_edge.png" width="360" alt="SRAM edge zoom"></p>
<p align="center"><sub>Left: 80 um window in the densest standard-cell region of the core (centre (1720, 3160) um, 4,249 cells in the window) — standard-cell rows with routing, fill / decap / tap cells and PDN layers hidden. Right: 120 um window on the right edge of AI SRAM bank 0 — bitcell array, periphery and the routing channel. Both rendered from the delivered GDS by <code>scripts/render_zoom.py</code> (KLayout batch), 9 September 2026.</sub></p>
<p align="center"><img src="results/images/zoom_25um_transistors.png" width="560" alt="25 um zoom - individual devices"></p>
<p align="center"><sub>25 um window (centre (1762.5, 3137.5) um) — individual devices of the delivered GDS (<code>scripts/render_zoom.py</code>, KLayout batch, 9 September 2026).</sub></p>

## 9.8 Lint Results and Exceptions

Measurement source: the flow's Verilator lint step (Verilator 5.044),
`reports/lint/verilator_lint.log`, `RUN_hold035_2026-09-09` (same RTL as
the September 6 run; identical result - 0 errors / 979 warnings - only the
run-directory paths inside the log differ).

Repository gate: `make lint` runs the same Verilator lint on the delivered
configuration (`asic/filelist.f` with its six defines, top `asic_top`,
MODDUP/PINMISSING deliberately enabled; the full log goes to
`logs/lint/asic_lint.log` and any `%Error` fails the target). `make lint-fpga`
lints `fpga_top` with the BSCANE2 TAP (`dmi_bscane_tap.sv`) and lint-only
Xilinx primitive shells.

- **Errors: 0. Warnings: 979. NO waiver file was USED** — no warning was
  suppressed, the log is delivered in its raw form
  (`reports/lint/waivers/` empty, deliberately).
- **No inferred latches:** LATCH-class warnings 0.
- Warning distribution and assessment:
  - `TIMESCALEMOD` 472: mix of files with/without a timescale directive;
    resolved on the simulation side with a compiler flag, does not affect
    the synthesis result.
  - `UNUSEDSIGNAL` 238 / `UNUSEDPARAM` 68: mostly unused fields of
    interface bundles and configuration constants (example: unused AXI
    side signals). Automatically pruned in synthesis.
  - `WIDTHEXPAND` 65 / `WIDTHTRUNC` 32: deliberate width conversions;
    the critical arithmetic paths were verified by regression (root
    `README.md` verification section: the `make test-all` package - 16 SoC
    components green on two machines, 18 with the two JTAG simulations -
    and coverage measurements).
  - `PINCONNECTEMPTY` 37: deliberately left-open output pins.
  - The rest (`PROCASSINIT` 15, `BLKSEQ` 13, `VARHIDDEN` 9,
    `CASEINCOMPLETE` 8, `ASCRANGE` 7, `GENUNNAMED` 6, `UNDRIVEN` 4,
    `PINMISSING` 3, `UNOPTFLAT` 2): style/informational level; functional
    correctness was demonstrated with the `make test-all` package (16 SoC
    components 16/16 on two machines + `jtag-sim` 17/17 and
    `jtag-bridge-sim` 6/6) and riscv-arch-test signature equality with
    Spike (RV32I/M 46/46; with RV32C added on 10 September, 72/73 - the 73rd,
    `cebreak-01`, is an analysed framework difference, root README 8.7).

## 9.9 Known Issues and Accepted Exceptions

Known errors/warnings/violations; tool or flow issues that could affect
the results; team assessment.

Known and accepted limits (delivery run `RUN_hold035_2026-09-09`;
where a figure of the superseded September 6 run is kept for comparison it
is named as such):

1. **50 MHz does not close in the SS corner; the verified frequency is
   27.0 MHz.** At the 20 ns target the `ss_100C_1v60` (1.6 V / 100 C)
   corner has setup WS -9.879 ns with 3,304 violating endpoints (TNS
   -11,648 ns; `reports/timing_target_20ns/nom_ss_100C_1v60/`), and its
   worst path is a pure standard-cell CPU path (`id_stage` ->
   `ex_stage.alu_i` / `alu_div_i` -> `id_stage`; no SRAM/derate effect on
   that path). This is a consequence of the corner physics - the logic
   depth of the core's ALU cone, which no constraint or clock-tree setting
   removes. The declaration in 9.1 therefore reads: target 50 MHz (closes
   in TT +1.218 ns and FF +3.685 ns), **verified 27.0 MHz** (37 ns: SS
   +0.197 ns, all corners, setup and hold). As the period is opened the
   binding path migrates from the ALU cone to the half-cycle SRAM read
   path, which is why the closing point had to be measured by period
   sweep rather than extrapolated (9.1; the earlier ~32.7 MHz figure of
   the September 6 run was withdrawn for that reason). The reports for
   all three corners are complete at both periods. Run-to-run: August 14
   signed run -9.083 ns / 2,521 endpoints; September 6 run -10.537 ns /
   2,219 endpoints; delivered run -9.879 ns / 3,304 endpoints at 20 ns.
   Of the -1.454 ns September 6 change, -1.179 ns came with the debug
   module's clock-tree effect (9.7); the delivered run recovers 0.658 ns
   of it while carrying 10,509 hold cells, and the higher endpoint count
   is the hold cells' setup cost spread over more paths (9.9/12).

2. **Hold: closed in all three corners (+0.165 / +0.637 / +0.040 ns TT /
   SS / FF, 0 violating endpoints, `reports/timing/<corner>/min.rpt`).**
   This is the change that distinguishes the delivered run from the
   September 6 run, which carried 87 / 5 / 142 hold-violating reg-to-reg
   endpoints (-0.309 / -0.122 / -0.290 ns) and therefore could not declare
   a verified frequency. What was measured on that run is kept here
   because it is the reason the delivered configuration looks the way it
   does:
   *Mechanism (September 6 run, re-measured 8 September 2026):* all 234
   violations were a single check class, `[hold reg-reg]` on the `clk`
   group; the cause was clock-tree skew to the 27 macro clock pins, not
   logic depth - on the worst path (`i_obi_axi_instr._250_/Q` ->
   `i_instr_sram ... u_macro/addr1[3]`, identical at all three corners)
   the capture clock arrived 1.651 ns (TT) later than the launch clock
   against a data path of 1.386 ns, and the violation was exactly that
   skew plus the 0.100 ns hold uncertainty minus the 0.056 ns library hold
   term minus the data path. The endpoint families were SRAM-macro
   address / chip-select / data-in pins, `dm_mem` / `dm_csrs` -> CPU
   prefetch and load-store registers, and boot-ROM / bridge / CPU-internal
   control paths; no path ended in JTAG/DM logic, none was launched from
   an SRAM macro, and the FF `-early 0.500` derate of the macro Liberty
   substitution (9.5) entered none of them. The September 6 netlist
   contained only 115 hold cells: LibreLane's default resizer settings
   (`ALLOW_SETUP_VIOS` false, hold margin 0.10) let the in-PnR repair stop
   early under the 50 MHz setup pressure.
   *Repair (delivered run):* the hold margin was raised to 0.35 with
   `ALLOW_SETUP_VIOS` enabled (9.7). The resizer inserted 10,509 hold
   cells (10,467 `dlygate4sd3_1` + 42 buffers), the worst post-extraction
   hold slack is +0.040 ns (FF, `i_obi_axi_instr._263_` ->
   `if_stage_i.prefetch_buffer_i.instruction_obi_i._305_`), and the
   skew itself is essentially unchanged (TT 1.793 ns between the earliest
   flop and the latest macro clock pin, 1.882 ns on September 6) - the
   repair adds delay on the data side of the skew-dominated paths, it
   does not remove the skew. The price is setup: the closing period of
   the netlist moved from 35.0 ns (28.6 MHz, September 6 netlist) to
   36.6 ns (27.3 MHz), because the delay cells sit on the half-cycle SRAM
   read path (`hold10455` alone adds 1.12 ns to its worst path, 9.1). The margin
   response is non-monotonic and was mapped before choosing 0.35 (9.9/12).
   *Conclusion:* hold is a closed item of this delivery; the September 6
   exceptions were a clock-tree / floorplan integration effect of a
   4,180 x 4,490 um die with 27 macros, bounded by measurement and now
   repaired at a measured cost, not an RTL defect and not located in the
   JTAG/DM subsystem.

3. **`i2c_sda_i` 2FF synchronizer - APPLIED.** The RTL review of the
   August 14 run noted that `i2c_sda_i` was sampled without a synchronizer;
   a 2FF synchronizer (`rtl/soc_top.sv`, `I2C_SDA_SYNC`; reset value 1 =
   idle SDA, +2 cycles = 74 ns at the verified 27.0 MHz (40 ns at the
   50 MHz target), negligible against the I2C bit time) is
   enabled in the delivered configuration. The port is kept synchronously
   constrained in the SDC (6.000 / 0.500 ns budget). `gpio_in_i` (2FF
   synchronizer) and `uart*_rxd_i` are false paths as asynchronous inputs
   (section 9.6).
4. **Magic DRC 9,201 markers — all from a SINGLE rule: `nwell.4`. The
   root cause was MEASURED and closed: geometric tap deficiency was ruled
   out; this is an accepted exception attributed to Magic's connectivity
   resolution limit.**
   Measured facts (`reports/drc/drc.magic.rpt`):
   - **Single rule type:** "All nwells must contain metal-connected N+
     taps" (`nwell.4`). No other Magic rule is violated.
   - Magic's own note in its report: *"Should be divided by 3 or 4"* —
     i.e. the distinct violation count is on the order of
     **~2,300-3,100**.
   - Marker geometry: horizontal strips spanning standard-cell rows
     (mean marker height 2.79 um, median 2.83 um; sky130_fd_sc_hd row
     height 2.72 um —
     `scripts/tap_analiz.py` uses 2.72 in its row grouping), at 23
     distinct X positions; within the standard-cell area.
   - **There are zero markers INSIDE the SRAM macro footprints** (checked
     against the 27 macro boxes). 2,142 of the markers are in the central
     logic corridor, which has no macros around it. Therefore the finding
     **cannot be attributed to the vendor macro**; the phrase
     "vendor macro noise" present in earlier revisions was removed
     because it was not supported by measurement.
   - **Input basis of the two DRC runs differs (declared):** the Magic DRC
     step of this run reads the DEF plus abstract cell views (`config.yaml`
     `MAGIC_DRC_USE_GDS: false`), whereas **KLayout DRC runs on the
     streamed-out GDS and returns 0 across all 257 rules**; Netgen LVS is a
     real GDS extraction (`MAGIC_EXT_USE_GDS: true`) with 0 errors, and the
     Magic/KLayout streamout XOR is 0 (a streamout consistency check, not a
     rule check). Under the DDK ruling of 8 September 2026 (the final
     signoff DRC must be GDS-based; a LEF/DEF-based result is supporting
     evidence only; XOR does not replace a DRC - `DDK_KARARLARI.md` item 9)
     the GDS-based signoff DRC of this delivery is the KLayout result, and
     that check covers the full geometry including the 27 pre-approved SRAM
     macros - no blackboxing in this DRC (the Netgen LVS, by contrast,
     compares the two SRAM types as black boxes, 9.9/5): the delivered GDS carries the full OpenRAM
     cell hierarchy (`sky130_fd_bd_sram__openram_dp_cell` instances are present
     by the tens of thousands in `results/gds/asic_top_klayout.gds`),
     `resolved.json` sets no
     exclusion, and the step order in `reports/general/flow.log` is
     StreamOut (59/60) -> XOR (64) -> Magic.DRC (66) -> KLayout.DRC (67);
     the KLayout DRC step log itself is not part of the delivered set. The
     Magic figure is reported unmodified as the
     abstract-view result it is; a GDS-based Magic DRC of the same GDSII was
     not re-run before the freeze because the deliverables rule (Final
     Deliverables document section 7: files from the same LibreLane run,
     no post-flow edits) was given priority over a mixed-run report set.
   - **ROOT CAUSE MEASURED — NOT missing taps.** The positions of the
     135,957 tap cells (1,605 rows) were extracted from the final DEF of
     the September 6 run `RUN_final_2026-09-06` (the delivered run has the
     same floorplan, the same 135,957 tap cells and the identical 9,201
     markers) and the nearest-tap distance from each
     marker's center was computed:

     | Measurement | Result |
     |---|---|
     | Nearest tap distance (min / median / max) | 0.14 / 3.11 / **6.13 um** |
     | Markers with a tap within 10 um | **9,201 / 9,201 (100%)** |
     | Markers with no tap in the same or a neighboring row | **0** |

     sky130's tap distance requirement is on the order of ~15 um; our
     worst case is 6.13 um, and this value is consistent with
     LibreLane's default tapcell step. That is, tap cells are present in
     every flagged region and the distance rule is satisfied with ample
     margin — **the markers do not indicate missing taps and there is no
     real latch-up risk.**
   - **Assessment:** `nwell.4` is a connectivity-aware rule; it requires
     not only the presence of a tap but also that it be metal-connected.
     Given that geometric deficiency was ruled out by measurement and that
     LVS verified netlist equivalence with 0 errors (including VPWR/VGND
     connections), the markers point not to a design defect but to Magic's connectivity
     resolution on the DEF + abstract-view input of this run
     (`MAGIC_DRC_USE_GDS: false`): an abstract cell view carries no
     metal-connected tap geometry for a connectivity-aware rule to resolve.
     The KLayout result (0 across 257 rules) is independent evidence for
     those 257 rules only - the KLayout deck does not implement `nwell.4`
     (its nwell rules are `nwell.1`, `nwell.2a`, `nwell.6`, `nwell.9` plus
     the tap rules `difftap.*`, `reports/drc/drc.klayout.json`), so it
     neither confirms nor refutes the Magic markers. It is therefore
     declared an **accepted exception**.
   - Reproduction: `python3 scripts/tap_analiz.py results/def/<design>.def
     reports/drc/drc.magic.rpt` (repeats the measurement).
   - Note: the Magic steps **do complete** in the flow; the report has
     been produced and delivered. The rationale for
     `MAGIC_CAPTURE_ERRORS=false` is in the comment inside `config.yaml`.
5. LVS = 0 (real GDS extraction; `reports/lvs/lvs.netgen.rpt`: "Circuits
   match uniquely" - the top-level `asic_top` comparison is 103,699
   devices / 92,242 nets per side after netgen merged 2,153,654 parallel
   devices (September 6 run: 92,149 / 81,121 after 2,185,771; the +11,550
   devices follow the hold repair's +11,370 standard cells, 10,509 of them
   delay cells, and the changed diode set, +249 `diode_2` cells - netgen
   counts after parallel merging, so this is not a one-to-one cell census);
   `metrics.json` `design__lvs_error__count` = 0, device / net /
   pin / property differences all 0). **Scope:** Netgen compares the two
   SRAM macro types as **black boxes** (`lvs.netgen.rpt:3113` and `:5116`,
   "is a black box; will not flatten") - the macro instances and their pin
   connections are checked, the macro internals are not. The DDK ruling of
   8 September does not require the team to redo the LVS of a pre-approved
   macro (`DDK_KARARLARI.md` item 9), and the macro geometry is inside the
   GDS-based KLayout DRC (9.9/4). The 18 "Error" lines of
   `reports/general/error.log` belong to this check: Magic's SPICE
   extraction for LVS (step 70, `magic-spiceextraction`) does not recognise
   five layer/datatype pairs (33/42, 33/43, 22/21, 22/22, 235/0) in the
   OpenRAM bit-cell views (`sky130_fd_bd_sram__openram_dp_cell` and its
   `_dummy`, `_replica`, `_cap_row` variants). Those cells lie inside the
   black-boxed macros, so the comparison is unaffected; the flow counts no
   error (`flow__errors__count` = 0). The previous 197/205 differences
   came from the diode placement of the old narrow-channel floorplan;
   they are fully closed in the wide-channel final floorplan.
6. Some timing fields of `metrics.json` may not match the corner report
   of the same run one-to-one (observed in the Aug 11 verification run:
   the `timing__setup__ws` metric showed -91.57 while the ss `max.rpt`
   gave -23.71; the reason for the difference is that the metric field
   may carry an intermediate-step value; likewise
   `design__instance__count__hold_buffer` = 29 in the delivered
   `metrics.json` is the last resizer step's own counter while the netlist
   census gives 10,509 hold cells, 9.9/2). For this reason, **the
   `reports/timing/<corner>/` report files and the netlist are
   authoritative** in our declarations; the 9.1/9.11 figures were read
   from the delivery run's report files and are also consistent with
   `reports/signoff/metrics.json`.

7. **QSPI output-enable (`io_oe`) not registered — deliberate decision.**
   `qspi_master_axil.sv` registers the data output on the falling edge as
   required by mode 0 (`tx_io_q`), but `io_oe` is combinational and is
   released simultaneously with the sampling edge on the LAST bit of an
   output phase; i.e. the RTL hold margin of that single bit is zero. Our
   reasons for choosing not to register `io_oe` as well:
   - The effect is **not systematic**, it is only the last-bit edge
     margin; every other bit of every transfer gets half a period of
     setup + half a period of hold.
   - **Measured:** QSPI flash-boot works on the board and there is zero
     deviation in the 60/60 random classification sweep
     (`sw/ai_model/kart_sweep_raporu_n60.txt`); `qspi-modes` 6/6 and
     `qspi-err` 25/25 are green in simulation.
   - On the real chip, the pad's **output-disable delay** moves the
     effective hold margin positive; the zero margin in RTL is a
     pessimistic upper bound.
   - Registering `io_oe` changes the **bus turnaround** timing in the
     x2/x4 modes; that is not a fresh-regression risk to take on freeze
     day (the same day, registering `tx_io_q` had produced the WP#/HOLD#
     tieoff regression — see commit `285698b`).
   **Follow-up RESULT (closed):** in the delivered run the
   `ff_n40C_1v95` corner has no hold violation at all (worst hold slack
   +0.040 ns, 0 endpoints, 9.9/2), so `qspi_io_o` cannot be one; in the
   September 6 run, which still carried 142 FF hold violations, NONE of
   them was `qspi_io_o` (`grep -c qspi_io_o
   reports/timing/nom_ff_n40C_1v95/violator_list.rpt` -> 0; the 142 were
   50 SRAM-macro pins, 78 debug-module -> CPU read-return paths and 14
   boot-ROM / bridge / CPU-internal paths).
   The decision is validated: leaving `io_oe` combinational produced no
   measurable hold risk in the fast corner.

8. **Matters accepted in advance by the DDK's written decisions**
   (full texts: `asic/DDK_KARARLARI.md`):
   - *Errata (Aug 17, 2026):* `filelist.f` paths are resolved relative to
     the `asic/` directory — our delivery is already on this base
     (section 9.4).
   - *Area weighting (Aug 17, 2026):* die/core area carries no separate
     scoring weight; the framework for our channel-widening trade-off
     (section 9.7).
   - *SRAM Liberty substitution (Aug 17, 2026):* the TT_1p8V_25C model is
     accepted as a documented substitute in the SS/FF analyses; no
     scaling is required (section 9.5).
   - *Verified operating frequency (Sep 8, 2026):* only a frequency that
     closes setup AND hold in all mandatory corners counts as verified; a
     negative-slack frequency is the target - hence the wording of 9.1 and
     9.11 ("target 50 MHz, verified 27.0 MHz at the 37 ns signoff"; until
     the 9 September run this read "target 50 MHz, no verified ASIC
     frequency").
   - *GDS-based signoff DRC (Sep 8, 2026):* LEF/DEF-based DRC is supporting
     evidence only and XOR does not replace a DRC - hence the KLayout run is
     named as the GDS-based signoff DRC in 9.9/4 and 9.11.
   - *FPGA and ASIC frequencies may differ (Sep 8, 2026):* performance is
     reported per implementation at its own verified frequency - root
     README sections 11.5 and 13.8.

9. **JTAG debug subsystem - part of the delivered chip; one timing note
   and two accepted limitations.** The specification lists JTAG as optional
   ("1x JTAG (Opsiyonel)"; EK-2: a debug module reached through an on-chip
   JTAG TAP controller and connected to the CV32E40P debug port, +3 bonus
   points) and suggests pulp-platform/riscv-dbg; that is what is integrated:
   IEEE 1149.1 TAP (`dmi_jtag_tap`), DTM with a two-phase CDC
   (`dmi_jtag`/`dmi_cdc`), Debug Module (`dm_top`, window
   0x0004_0000-0x0004_0FFF, program-buffer memory access only - System Bus
   Access is tied off), the `rtl/debug/axi_dm_slave.sv` bridge (registered
   request stage) and the five top-level pins of 9.1. `JTAG_DEBUG` is
   enabled in `config.yaml` / `filelist.f`; the `ifdef` guards remain in the
   RTL only as isolation evidence: `make jtag-equiv` preprocesses the RTL
   with `JTAG_DEBUG`, `FC1_FIX` and `I2C_SDA_SYNC` all off and compares it
   with commit 73d8dcd (the RTL of the August 14 signed run) - `asic_top`,
   `fpga_top` and `ai_accelerator` byte-identical, `soc_top` and the
   crossbar identical after constant folding of the tied-off DM signals and
   the `sys_rst_n` alias (`scripts/jtag_equiv_expected.sed`, residual diff
   0 lines). Verification: the 17-stage TAP/DTM/DM testbench and the bridge
   unit test inside `make test-all`, OpenOCD and gdb sessions on the
   Verilator model, and OpenOCD on the Genesys 2 board on September 6, 2026
   (root README Section 10.10).
   - *Timing:* the second clock domain (`jtag_tck`, 100 ns, asynchronous
     group, 9.6) adds no constrained crossing, and the `jtag_tck` path
     group itself closes at every corner: at the 37 ns signoff worst setup
     slack +21.252 ns (SS; TT +24.319, FF +25.605), worst hold slack
     +0.354 ns (FF; TT +0.615, SS +1.340) - `reports/timing/<corner>/max.rpt`
     / `min.rpt`, "Path Group: jtag_tck". At 37 ns there is no violating
     path of any class in the design (9.1). At the 20 ns target
     (`reports/timing_target_20ns/`) no setup violating path ENDS in
     JTAG/DM logic (0 endpoints in `dm_top` / `dmi_jtag` / TAP at all
     three corners) and hold is clean; paths that START in the debug
     module do appear among the SS setup violators, launched from the
     `ndmreset` register of `dm_csrs` (`i_dm_top.i_dm_csrs._3330_`, net
     `dm_ndmreset`) through the system reset gating into `i_qspi`
     registers - 41 of the 2,219 SS violators of the September 6 run; the
     delivered run's 3,304 SS violators at 20 ns contain the same family.
     The v3 exploration run that preceded the September 6 run
     (`rtl/debug/asic_jtag_sentez/full_v3/`, same RTL and settings)
     counted 48 such paths in its step-45 sweep report (v2 without the CTS
     settings of 9.7 had none). SS is the corner that does not close at
     50 MHz in any version of this design (9.9/1); its worst path remains
     the core's own ALU/divider cone.
   - *Accepted limitation A - the DM window is not qualified by debug
     mode.* The crossbar routes 0x0004_0xxx to the DM for every access; the
     MCU has no PMP and runs M-mode only, so firmware can write the DM's own
     `Halted`/`Going`/`Resuming` flag addresses (e.g. `HALTED` at
     0x0004_0100) and mislead the DM (`dmstatus.allhalted = 1` while the
     core runs; a subsequent abstract command hangs in `dm_mem`'s Go state
     until `ndmreset`). The rest of the 64 KB window
     (0x0004_1000-0x0004_FFFF) falls through to the default SRAM legs. For
     an MCU without a security requirement this is accepted and documented;
     stage 17 of `make jtag-sim` pins the current behaviour so that any
     decode change is caught deliberately. The fix - qualifying the
     `*_to_dm` legs with debug mode in the crossbar and answering `SLVERR`
     otherwise - is a crossbar change reserved for a future revision.
   - *Accepted limitation B - the instruction SRAM is not readable from the
     data port.* The crossbar's data-port read decode has no ISRAM leg
     (0x0001_xxxx reads fall to the DSRAM alias; by design - the bootloader
     copies `.rodata` to DSRAM for the same reason), so a debugger can
     download code into ISRAM but cannot read it back through the data
     port. OpenOCD is configured with `riscv set_mem_access progbuf`, gdb
     with `trust-readonly-sections on` (code read from the ELF) and
     hardware breakpoints only (`gdb_breakpoint_override hard`; CV32E40P
     has one trigger and no data watchpoints) - `rtl/debug/openocd/demo_gdb.gdb`.
   - Licences: `asic/licenses/riscv-dbg_SHL-0.51.txt`,
     `common_cells_v1.38.0_SHL-0.51.txt`, `tech_cells_generic_SHL-0.51.txt`
     (9.13); pins in `rtl/debug/VENDOR.md`.

10. **`rst_ni` release is not synchronized inside `asic_top` (integration
    requirement, declared).** The delivered macro has no pad ring; a 2-FF
    release synchronizer on `rst_ni` is an integration requirement of the
    chip top level (the FPGA prototype implements it in `rtl/fpga_top.sv`,
    `rst_sync_n`). No signoff number depends on it: the reset network's
    recovery/removal checks are timed from the `dm_ndmreset` startpoint and
    close at all three corners (9.6).

11. **Flow warnings: declared and inventoried; none affects signoff.** New
    in `RUN_final_2026-09-06` (absent from the August 14 run's
    `warning.log`): `[CTS-0128]
    -obstruction_aware is obsolete` (OpenROAD of this LibreLane build treats
    `CTS_OBSTRUCTION_AWARE` as a no-op; the setting is kept as documented in
    9.7, the measured gain of that sweep arm is therefore attributable to the
    clock wire-length cap); `[CTS-0041] Net "i_soc.i_dmi_jtag.i_dmi_jtag_tap.
    i_dft_tck_mux.clk_o" has 1 sinks. Skipping...` (the `jtag_tck` DFT mux
    net has a single sink and is skipped by CTS - expected, the TAP clock
    group closes with the margins in 9.9/9); `[RSZ-0065] max wire length
    less than 6884u increases wire delays` (side effect of
    `CTS_CLK_MAX_WIRE_LENGTH: 900`, accepted because the measured
    post-resizer margin improved, 9.7). Source:
    `reports/general/warning.log`. The delivered run's `warning.log`
    (3,124 lines against 3,117) contains **no warning class that the
    September 6 run did not have**. Path-normalised diff of the two files:
    the same seven `[DRT-0120]` large-net notices are printed four times
    instead of three (+7 lines, the whole line-count difference); 45 of the
    1,000 `[EST-0026] Missing route to pin` notices (present in both runs)
    name different pins; and the `[STA-1648]` / `[STA-1650]` "`ANTENNA_*`
    not found" notices name different diode instances, following the
    resizer's diode placement.

    **Inventory** (`warning.log` codes with the flow step that emits them,
    from `reports/general/flow.log`, plus the warnings of the signoff STA in
    `reports/timing/<corner>/checks.rpt` and `clock.rpt`):

    | Warning | Count | Step | Cause | Impact on signoff |
    |---|---|---|---|---|
    | `check_setup`: input ports without `set_input_delay` | 36 per corner | signoff STA | `gpio_in_i[31:0]`, `uart_rxd_i`, `uart1_rxd_i`, `rst_ni`, `jtag_trst_ni` - false paths (`design_signoff.sdc:39`, `:57`, `:173`; 9.6) | none: asynchronous inputs without a launching clock |
    | `check_setup`: unconstrained endpoints | 16 per corner | signoff STA | `i_soc.i_gpio._208_` ... `_223_/D`, the first synchronizer stage (`gpio_in_sync1[15:0]`) behind the false-path `gpio_in_i` | none: synchronizer inputs; the same check reports no loops and no unclocked or multi-clock endpoints |
    | `[STA-0469]` derating factor greater than 2.0 | 26 | every step that loads the SDC | the 2.661x SS late derate on the SRAM macros (9.5) | intended |
    | `[STA-1140]` library already exists | 16 | 32, 35, 37, 44 | the two SRAM Liberty files are loaded twice in those steps | none |
    | `[PDN-0110]` no via inserted | 14 | 21 | 8 met4-met5 crossings (VGND) and 6 met1-met4 crossings (3 VPWR, 3 VGND) where the PDN generator placed no via | none measured: `reports/pdn/*-grid-errors.rpt` empty, PSM "All shapes ... connected", IR-drop 0.96 / 1.04 mV (9.10) |
    | `[GRT-0281]` large fanout | 3 | 28 | `clk_i` (7,530 terminals), `i_cpu.core_i.clk` (2,345) and `i_ai_accel.rst_ni` (4,236) before CTS / buffering | informational |
    | `[RSZ-0020]` found 2 floating nets | 1 | 32 | not named in the delivered reports (`metrics.json` `timing__drv__floating__nets` = 2, `timing__drv__floating__pins` = 0) | not traced to a net; LVS 0 |
    | `[RSZ-0062]` unable to repair all setup violations | 2 | 37, 44 | the PnR resizer works against the 20 ns target, which SS does not meet (9.1, 9.9/1) | expected with the split-SDC method (9.9/12); setup closes at the 37 ns signoff |
    | `[CTS-0128]`, `[CTS-0041]`, `[RSZ-0065]` | 1 each | 35 | above | none |
    | `[EST-0026]` missing route to pin | 1,000 + limit notice | 44 | the post-GRT resizer's parasitic estimate meets pins without a global route (e.g. the first `clk_i` buffer and antenna-diode pins) | step-internal estimate; the signoff STA uses the extracted SPEF |
    | `[DRT-0120]` large net | 28 (7 nets x 4) | 46 | `id_stage_i.regfile_addr_rc_id[0..3]`, `register_file_i._1001_` / `_1002_`, `id_stage_i._1663_` (106-518 pins); the two 518-pin nets are constant 0 (9.11.1) | router performance notice; route DRC 0 |
    | `[DRT-0349]` LEF58_ENCLOSURE with no CUTCLASS | 10 | 46 | a PDK tech-LEF rule on `mcon` that the router skips | none found: route DRC 0, KLayout DRC 0 on the GDS |
    | `[STA-1648]` / `[STA-1650]` `ANTENNA_*` not found in SPEF | 1,001 each | 58 (IR drop) | that step's SPEF read does not match antenna-diode instance / net names | confined to the IR-drop step (9.10); not raised by the signoff STA |
    | `VSRC_LOC_FILES` not given | 1 | 58 | no pad / bump source locations (`resolved.json:1131`) | IR-drop caveat, 9.10 |
    | `[IFP-0028]` core area snapped; `MACRO_PLACEMENT_CFG` deprecated | 1 + 1 | 13; config | row snapping (60, 60) -> (60.26, 62.56); LibreLane 3 prefers `MACROS` | none (17.72 mm2 after snapping, 9.7) |
    | `reports/general/error.log`: "Unknown layer/datatype" | 18 | 70 | OpenRAM bit-cell layers unknown to Magic's SPICE extraction | none: inside the black-boxed macros (9.9/5) |
    | `clock.rpt` header `Virtual: yes` / `Propagated: no` | both clocks, every corner | signoff STA report | printed by the report script | none: the analysis is propagated - the same file lists network latencies of 5.79-8.86 ns, every path in `max.rpt` / `min.rpt` carries the clock-tree cells (9.1 path: 7.944 ns to the macro) and `unpropagated.rpt` is empty (0 bytes) in all three corners |

12. **The hold exceptions of the September 6 run were a setup/hold trade,
    not a structural defect - measured, and the delivered run is the
    result.** The
    hold violations of the superseded September 6 run raised a fair
    question: was the design *capable* of closing hold at all? To answer it we built variants
    of the same RTL and floorplan that differ only in the resizer's hold
    margin, and measured each one after parasitic extraction. Hold does
    close - in all three corners, with zero violations - but it is paid for
    in setup, and the exchange rate is what sets our ceiling.

    | Run | Hold margin | `ALLOW_SETUP_VIOS` | Hold cells | Hold after PnR | Hold after RCX (TT / SS / FF) | Hold violations | Setup-side closing point |
    |---|---|---|---|---|---|---|---|
    | `RUN_final_2026-09-06` (September 6, superseded) | 0.10 (default) | off | 115 | - | -0.309 / -0.122 / -0.290 | 87 / 5 / 142 | 28.6 MHz |
    | A | 0.15 | on | 201 | +0.150 | -0.128 / +0.151 / -0.159 | yes | 27.1 MHz |
    | B | 0.30 | on | 9,677 | +0.300 | +0.043 / +0.439 / **-0.044** | 0 / 0 / **1** | 28.0 MHz |
    | **C = `RUN_hold035_2026-09-09` (delivered)** | 0.35 | on | 10,509 | +0.350 | **+0.165 / +0.637 / +0.040** | **0 / 0 / 0** | 27.3 MHz (declared 27.0 at 37.0 ns) |
    | D | 0.40 | on | 11,031 | **-1.530 (target not reached)** | - | - | - |

    Four things this measures:

    - **Hold is repairable.** Run C closes hold in every mandatory corner
      after extraction - it is the delivered run. So the September 6
      exceptions were the tool declining to repair *under 50 MHz setup
      pressure*, not a path the design cannot fix.
    - **Parasitic shift is about 0.31 ns.** Run A was repaired to +0.150 at
      PnR and landed at -0.159 after extraction. Any usable margin must
      exceed that shift, which is why 0.15 fails and 0.30 does not.
    - **Over-repair is self-defeating.** At 0.40 the tool inserted 11,031
      cells and still ended at -1.530 with `Unable to repair all hold checks
      within margin`. The response is **not monotonic**; the working window
      is roughly 0.30-0.35.
    - **The price is setup, and it is steep.** Run C's 10,509 hold cells cost
      1.3 MHz against the September 6 netlist (28.6 -> 27.3 MHz). The
      mechanism was measured, not assumed: hold cells land directly on the
      SS critical path - `hold10455` alone contributes 1.12 ns to the worst
      path broken down in 9.1. Run C still closes the 50 MHz target in TT
      (+1.218 ns) and FF (+3.685 ns), and its SS slack at 20 ns (-9.879 ns)
      is 0.658 ns better than the September 6 run's, because
      `ALLOW_SETUP_VIOS` lets the resizer keep working on setup after the
      hold pass. Runs A-D are independent resizer / routing outcomes, so
      the setup ceiling does not scale with the cell count (run B with
      9,677 cells closes at 28.0 MHz, run A with 201 cells at 27.1 MHz); the
      1.3 MHz figure is the measured difference between run C and the
      September 6 netlist, not a per-cell rate.

    **Consequence for the frequency ceiling.** The September 6 run's
    setup-only ceiling was 28.6 MHz *while still carrying hold violations*.
    Every hold-clean variant is necessarily slower, because hold repair
    spends setup; the delivered run declares 27.0 MHz. **No configuration
    of this netlist reaches 30 MHz with hold closed**, and no synthesis or
    place-and-route setting changes that, because the binding path at long
    periods is the half-cycle SRAM read path of 9.1, whose window is fixed
    by the macro's falling-edge read arc.

    **Why the read register stays off on the instruction SRAM - measured
    trade-off.** Registering the macro read data (`REG_RDATA=1`,
    `rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv:169-194`) is how the data and
    AI SRAMs already avoid the half cycle (`rtl/soc_top.sv:655`, `:665`). On
    the instruction SRAM it adds a cycle to every fetch: the wrapper delays
    `r_valid` by one cycle and holds `ar_ready` low meanwhile
    (`axi_sram_wrapper.sv:190-194`), and the OBI-to-AXI bridge keeps one read
    outstanding - it issues AR only from `IDLE` and returns there after each
    R beat (`rtl/bus/obi_to_axi.sv:158-165`, `:215-222`). Measured on
    10 September 2026 with `make soc-perf` (Verilator 5.049) on the delivered
    RTL with only `rtl/soc_top.sv:645` changed to `.REG_RDATA(1'b1)`:

    | Workload | Delivered RTL (`verif/perf_summary.txt`) | `REG_RDATA=1` on the instruction SRAM |
    |---|---|---|
    | Software reference inference on the CV32E40P, cycles | 9,684,726 | 14,516,918 (**+49.9 %**) |
    | AI accelerator inference, cycles | 459,016 | 459,019 (+3) |
    | Result | PASS, `conv_out` 1000/1000 bit-exact | PASS, 1000/1000 bit-exact |

    The variant's log is not part of the delivered set; the one-line change
    reproduces it. With the half cycle gone, the next binding path of this
    netlist is the ALU cone of 9.9/1 (`id_stage_i._3802_` -> `_3715_`): SS
    slack -9.879 ns at 20 ns (`reports/timing_target_20ns/nom_ss_100C_1v60/max.rpt.gz`,
    path 1) and +7.121 ns at 37 ns (`reports/timing/nom_ss_100C_1v60/max.rpt`),
    i.e. 1.000 ns of slack per ns of period, closing near 29.9 ns
    (33.5 MHz). This is a **projection from the delivered netlist, not a
    verified frequency**: on the same slope the cone of the three signed
    netlists closes at 29.1-30.5 ns (9.9/1), and a new netlist needs its own
    period sweep and hold repair, so the realistic ceiling of such a re-run
    is about 32-33 MHz. Even at 29.88 ns the CPU would be slower than it is
    today - 14,516,918 x 29.88 ns = 433.8 ms against
    9,684,726 x 37 ns = 358.3 ms, **21 % longer**; break-even would need
    37 ns / 1.499 = 24.7 ns (40.5 MHz), which the ALU cone does not reach.
    Only the accelerator, whose cycle count does not change, would gain
    (16.98 -> 13.72 ms). The register therefore stays off on the instruction
    SRAM. Raising the ceiling without that CPU loss needs a pipelined fetch
    path (a bridge that issues the next AR while waiting for R, and a
    two-entry read buffer in the wrapper) - an RTL change with its own
    re-verification, **future work, not part of this delivery**.

    **Settings tried and rejected** (each measured, each recorded here so the
    negative result is not repeated):

    | Setting | Measured outcome |
    |---|---|
    | `SYNTH_STRATEGY: "DELAY 2"` + `SYNTH_SIZING: true` | Post-synthesis SS setup got **worse**, -101.96 -> -134.27 ns, and netlist area grew 795k -> 992k (+25 %). Delay-driven mapping back-fires on this design; the default `AREA 0` is kept. |
    | `CLOCK_PERIOD: 32` (relaxing the PnR target) | The resizer meets the relaxed target on its internal estimate and stops early (170 resizes against 786 at 20 ns); after extraction SS lands at -4.438 ns. The PnR target must stay tight even when signoff is relaxed. |
    | Enlarging `PL/GRT_RESIZER_SETUP_SLACK_MARGIN` | Rejected on source inspection, not run: LibreLane passes the same variable to the hold-repair call as `-setup_margin` (`rsz_timing_postcts.tcl:45`), so enlarging it would lock hold repair - the opposite of the intent. |
    | `PL/GRT_RESIZER_HOLD_SLACK_MARGIN: 0.40` | Run D above: over-repair, target not reached. |

    **Method note.** Runs A-D are builds of the *same* RTL, floorplan and
    PDK that differ only in the resizer hold settings; run C is the
    delivered run and the artefacts in `results/` and `reports/` are its
    own. They use LibreLane's split-SDC capability - PnR steps read
    `PNR_SDC_FILE` and the final STA reads `SIGNOFF_SDC_FILE`
    (`librelane/steps/openroad.py:323` and `:970`) - so the design is built
    against the tight 20 ns target and signed off at the measured 37 ns.
    This is the standard overconstrained-PnR technique; the PnR target and
    the declared period are both stated wherever a frequency is quoted
    (9.1, 9.6, 9.11).

13. **Parasitic-corner sensitivity outside the mandatory set: measured and
    declared.** The mandatory signoff corner set of this competition is the
    three PVT corners at *nominal* parasitics (`nom_tt_025C_1v80`,
    `nom_ss_100C_1v60`, `nom_ff_n40C_1v95`; deliverables document Table 4),
    and the delivered run closes setup and hold in all three with zero
    violating endpoints at 37 ns (9.11). Because LibreLane also extracts
    *minimum* and *maximum* parasitic corners
    (`results/spef/min/`, `results/spef/max/`), we re-ran the signoff STA
    across all nine PVT x RC combinations on the same database, without
    touching the design, to see how much margin the declaration actually has:

    | Parasitic corner | tt | ss | ff |
    |---|---|---|---|
    | **min** (best-case RC) | setup +9.990 / hold +0.283 | setup +0.689 / hold +0.817 | setup +12.468 / hold +0.119 |
    | **nom** (mandatory, delivered) | setup +9.718 / hold +0.165 | **setup +0.197** / hold +0.637 | setup +12.185 / **hold +0.040** |
    | **max** (worst-case RC) | setup +9.539 / hold +0.039 | **setup -0.029 (1 path)** | setup +11.970 / **hold -0.054 (7 paths)** |

    All nine corners are clean except two cells in the `max` row: one setup
    path at **-0.029 ns** in `max_ss_100C_1v60` and seven hold paths at
    **-0.054 ns** in `max_ff_n40C_1v95`. Both are tens of picoseconds, and
    neither corner is in the mandatory set, so **the declared 27.0 MHz stands
    as stated**. We report the measurement rather than omit it, because it
    bounds the claim honestly: the delivered design has roughly 0.2 ns of
    setup margin and 0.04 ns of hold margin at nominal parasitics, and that
    margin is consumed by the pessimistic RC corner. Note also that the setup
    side of this cannot be bought back with a slower clock in the usual way -
    the binding path is the half-cycle SRAM read arc of 9.1, so a longer
    period returns only 0.5 ns per ns - and the hold side is
    period-independent by construction. Closing the `max` corners would need
    another hold-repair pass at a higher margin, i.e. another full run and
    another setup cost (9.9/12); that trade was not taken inside the freeze
    window. Evidence: the `nom` row is `reports/timing/summary.rpt`
    (mandatory three, delivered). The `min` and `max` rows come from an
    additional signoff STA run with nine corners on the delivered database
    and the committed `results/spef/min` / `results/spef/max` parasitics;
    its reports are not part of the delivered set (`run/` is deleted at
    delivery), so those six cells are quoted here and cannot be re-checked
    from this repository alone.

14. **Antenna: 2 violating nets / 2 pins after antenna repair (173 repair
    diodes, `antenna_diodes_count`, besides the heuristically inserted
    ones - 96,292 diode cells in total, 9.11) - declared exception (the
    September 6 run had 0).** Both are met1
    side-area ratio violations at 1.6-1.7x the limit on nets created or
    lengthened by the hold-repair pass
    (`reports/antenna/antenna_summary.rpt`, `antenna.rpt`):

    | Net | Pin | Layer | Partial ratio | Required | x limit |
    |---|---|---|---|---|---|
    | `net7416` (resizer-inserted buffer net) | `wire7415/A` | met1 | 685.56 | 400.00 | 1.71 |
    | `i_soc.i_periph_decoder.qspi_wdata[22]` | `i_soc.i_qspi._15086_/A1` | met1 | 645.11 | 400.00 | 1.61 |

    The standard remedy is one antenna diode per affected gate (or a
    layer hop on the net) as a routing ECO, not a design change. It was
    not applied in this delivery because a full re-run costs 3 h 44 min
    and a partial ECO would invalidate the extraction / STA / DRC / LVS
    chain within the freeze window; the DDK ruling of 8 September states
    that a violation in one signoff check does not automatically
    invalidate the design (`DDK_KARARLARI.md` item 8), and it is declared
    here with its numbers. Route DRC, KLayout DRC, LVS, XOR and PDN are
    clean on the same database (9.11); the two nets are not on the
    critical timing paths of 9.1.

## 9.10 Power and IR-Drop Analysis

Measurement source: **`RUN_hold035_2026-09-09`** (delivery run).

- **Conditions:** the power reports are produced by the signoff STA at
  the **verified** clock of 27.0 MHz (`create_clock` 37 ns,
  `design_signoff.sdc`); supply 1.80 V nominal; three signoff corners
  (Table 4). The same database re-timed at the 50 MHz **target**
  (`reports/timing_target_20ns/<corner>/power.rpt`) is quoted alongside so
  that the figures stay comparable with the earlier runs.
- **NO switching activity input** (no VCD/SAIF provided); the OpenSTA
  default switching activity was used. Per Section 5.7 the results below
  are marked as **ESTIMATED**.
- **Total power (estimated):**

  | Corner | Supply | Total @ 27.0 MHz (verified, `reports/power/`) | Total @ 50 MHz target (`reports/timing_target_20ns/`) |
  |---|---|---|---|
  | tt_025C_1v80 | 1.80 V | **64.0 mW** | 117.5 mW |
  | ss_100C_1v60 | 1.60 V | 59.6 mW | 108.8 mW |
  | ff_n40C_1v95 | 1.95 V | 67.9 mW | 124.6 mW |

  TT breakdown at the verified clock (by group, from
  `reports/power/nom_tt_025C_1v80/power.rpt`): SRAM macros 63.0%; clock
  network 18.0%; sequential 17.2% (11.0 mW); combinational 1.8% (1.1 mW).
  The dominant item of the power budget is memory - the expected picture
  for 27 macros. The single declared figure is the TT corner at the
  verified clock (**64.0 mW**); the 9.11 table carries the same value.
  The 20 ns figures of the delivered netlist (117.5 / 108.8 / 124.6 mW)
  are within 0.4 mW of the September 6 run's (117.2 / 108.5 / 124.2 mW):
  the 10,509 hold cells add practically nothing, and the ratio between the
  two columns (0.545) is the clock ratio (20 / 37 = 0.541) - the estimate
  is dominated by clock-driven activity, as expected without a VCD. The
  August 14 signed run gave 112.1 / 104.4 / 118.3 mW at 20 ns; the +5.1 mW
  at TT of the debug module (clock 16.8 -> 18.1 %, sequential 16.1 ->
  17.3 %) is documented in 9.11.1.

<p align="center"><img src="results/images/power_breakdown.png" width="760" alt="power breakdown tt"></p>
<p align="center"><sub>Total-power split, tt corner at the verified 27.0 MHz - rendered from the delivered report by <code>scripts/power_breakdown.py</code>.</sub></p>
- **IR-drop (OpenROAD PSM, tt corner):** VPWR worst drop **0.96 mV**,
  VGND worst rise **1.04 mV** -> **0.05% / 0.06%** of the supply voltage
  (average 12.5 uV; far below the typical 5% limit; September 6 run
  0.95 / 1.00 mV). PSM verification for both nets: "All shapes
  connected". Report: `reports/power/irdrop.rpt`.
  **Conditions of this result:** PSM runs inside the flow (step 58,
  `58-openroad-irdropreport`) with the activity of the 50 MHz target -
  `irdrop.rpt` reports "Total power: 1.17e-01 W" for both nets, the
  117.5 mW TT figure at 20 ns above and about 1.8x the 64.0 mW at the
  verified clock, so in power terms the figure is conservative. No voltage
  source location file was given (`VSRC_LOC_FILES` null,
  `results/config/resolved.json:1131`), and the tool warns that this "may
  make the results of IR drop analysis inaccurate" (`warning.log:1109`);
  PSM then uses its default source model instead of real pad or bump
  positions, so the result reads as the health of the macro's own grid -
  the drop in a chip with real pad locations may differ and is not claimed
  here. The 1,001 + 1,001 `[STA-1648]` / `[STA-1650]` "`ANTENNA_*` not
  found" notices of `warning.log` come from this step's SPEF read, not from
  the signoff STA (inventory in 9.9/11).
- **Node-level voltage dump (5.7):** `reports/power/net-VPWR.csv` and
  `net-VGND.csv` are ~144 MB (137 MiB) each in raw form, so per GitHub's 100 MB
  single-file limit they are stored in the repository **gzipped**
  (`net-VPWR.csv.gz`, `net-VGND.csv.gz`). Decompression:
  `gunzip -k <name>.gz`; integrity: `sha256sum -c <name>.sha256`
  (digests in the same directory). Details:
  `results/BUYUK_DOSYALAR.md`. These files are NOT inputs to the flow
  (they are reports produced after signoff); the flow does not depend on
  the compressed files, and `make asic_run` runs without decompressing
  them.
- **IR-drop heatmap (visualization of the dumps):** worst-case deviation
  per 20 um bin, rendered directly from the compressed dumps by
  `scripts/irdrop_heatmap.py`. Cross-checks: 2,561,057 nodes per net
  (= the instance count in 9.11) and worst values identical to
  `irdrop.rpt` (0.959 mV / 1.041 mV). The die is essentially flat; the
  white rectangles are the SRAM macro footprints (no standard-cell
  nodes inside), and the worst bins sit in the vertical macro channel
  between `i_instr_sram` bank 1 and `i_data_sram` bank 0 in the upper
  macro band, near (2224, 3732) um (VPWR) and (2224, 3838) um (VGND) -
  the same bins as on September 6.

<p align="center"><img src="results/images/irdrop_heatmap.png" width="820" alt="IR-drop heatmap VPWR/VGND"></p>
<p align="center"><sub>Worst-case IR-drop per 20 um bin, tt corner - VPWR drop (left) and VGND rise (right); the full color scale is 1.1 mV, i.e. 0.06% of the 1.80 V supply.</sub></p>

- **No custom voltage source location file was used** (`VSRC_LOC_FILES`
  unset; PSM's default source model - see the conditions under the
  IR-drop bullet above).

## 9.11 Signoff Results Summary

Source run: **`RUN_hold035_2026-09-09`** (delivery run; produced from
scratch on a clean clone of commit `248069b` on VM1 with `make pdk` +
`make asic_run`, configuration delta of 9.7). Corner set: tt_025C_1v80 /
ss_100C_1v60 / ff_n40C_1v95. Signoff period 37.000 ns (verified 27.0 MHz);
the 20 ns target figures are in `reports/timing_target_20ns/` and in 9.1.

| Item | Result |
|---|---|
| Route (TritonRoute) DRC | **0** |
| KLayout DRC | **0** (257 rules, all zero) |
| Magic DRC (DEF + abstract-view input, `MAGIC_DRC_USE_GDS: false`; the GDS-based signoff DRC is the KLayout row) | 9,201 - all from a single rule (`nwell.4`); root cause measured, accepted exception (9.9/4); identical to the September 6 run |
| Netgen LVS (real GDS extraction) | **0 errors / 0 device differences** (103,699 devices / 92,242 nets per side, 9.9/5) |
| XOR (Magic vs KLayout GDS; streamout consistency check, not a DRC) | **0** |
| Antenna violations | **2 nets / 2 pins** - declared exception, 9.9/14 (September 6 run: 0 / 0). Diodes: 173 from the antenna-repair pass (`antenna_diodes_count`; 101 on September 6) on top of the heuristic insertion (`RUN_HEURISTIC_DIODE_INSERTION`, threshold 90 um, `resolved.json:160`, `:1092`); 96,292 `diode_2` cells in the netlist in total (`design__instance__count__class:antenna_cell`) |
| Disconnected pins | 880 (classification: note below the table) |
| PDN grid errors (VPWR / VGND) | **0 / 0** (report files empty) |
| **Verified operating frequency** (DDK definition of 8 Sep 2026: setup + hold closed in all mandatory corners) | **27.0 MHz (37.000 ns)** - all rows below at this period; target 50 MHz closes setup in TT (+1.218 ns) and FF (+3.685 ns), not in SS (-9.879 ns) - 9.1 |
| Setup WS (tt / ss / ff) | **+9.718 / +0.197 / +12.185** ns |
| Setup TNS (tt / ss / ff) | 0 / 0 / 0 ns |
| Setup violation count (tt / ss / ff) | 0 / 0 / 0 |
| Hold WS (tt / ss / ff) | **+0.165 / +0.637 / +0.040** ns (section 9.9/2) |
| Hold TNS (tt / ss / ff) | 0 / 0 / 0 ns |
| Hold violation count (tt / ss / ff) | **0 / 0 / 0** |
| `jtag_tck` group setup / hold WS (tt / ss / ff) | +24.319 / +21.252 / +25.605 ; +0.615 / +1.340 / +0.354 ns |
| Recovery / removal WS (tt / ss / ff) | +28.562 / +21.635 / +31.314 ; +1.225 / +2.708 / +0.755 ns (9.6) |
| Max cap violation count (tt / ss / ff) | 235 / 646 / 197 - design-rule counts, classified in the note below |
| Max slew violation count (tt / ss / ff) | 5,681 / 33,927 / 2,883 - classified in the note below |
| Max fanout violation count (tt / ss / ff) | 837 / 837 / 837 - antenna-diode pins only: without them no net exceeds 32 loads (note below) |
| Power (total, estimated, tt corner, verified clock) | **64.0 mW** (117.5 mW at the 50 MHz target, 9.10) |
| IR-drop (tt) | 0.05% VPWR / 0.06% VGND (worst 0.96 mV / 1.04 mV) - computed with the 117 mW activity of the 50 MHz target and PSM's default source model (9.10) |
| Die area | 18.77 mm2 (4180 x 4490 um) |
| Instance count / std cells | 2,561,057 / 321,880 (10,509 of them hold cells, 9.9/2) |
| Transistor count (MOS gates, measured on the delivered GDS) | **12,750,459** (`scripts/count_transistors.py`: flat poly-over-diffusion count, SRAM bitcells and decap devices included; 12,715,215 on September 6) |
| Utilization | 51.05% (std-cell 14.39%) |

<p align="center"><img src="results/images/setup_slack_histogram.png" width="860" alt="setup slack histograms per corner"></p>
<p align="center"><sub>Setup-slack distribution of the 2,310 reported paths per corner at the 37 ns signoff (<code>scripts/timing_histogram.py</code>). All three populations are positive; the SS worst path sits at +0.197 ns (9.1).</sub></p>

**Table notes:**

- **Disconnected pins (880):** breakdown in
  `reports/signoff/full_disconnected_pins_table.txt`, total in
  `metrics.json` -> `design__disconnected_pin__count = 880`. The source
  is two design features: (a) in all 27 SRAM macros, Port0 is used only
  for writes and all reads go through Port1; therefore `dout0[31:0]` is
  deliberately left open in each macro (`rtl/asic/sram_macro_bank.sv`,
  `rtl/ai_accelerator/ai_accelerator.sv`) -> 27 x 32 = 864 pins. (b) The
  top-level `gpio_in_i` port is defined as 32 bits; per specification
  Annex-2 (EK-2), GPIO uses 16 inputs and the upper half
  (`gpio_in_i[31:16]`) carries no load -> 16 pins. Total 864 + 16 = 880.
  There is no discontinuity on the power pins (consistent with LVS = 0
  and XOR = 0).
- **Max slew / max cap / max fanout counts - what they are.** These are
  design-rule (DRV) counts of `reports/timing/summary.rpt` and
  `metrics.json`, listed per pin in `reports/timing/<corner>/checks.rpt`
  (`report_check_types`); they are not timing violations - setup and hold
  close in every corner at the signoff period (WS +0.197 ns in SS, TNS 0),
  computed with the actual slews and loads. Most limits come from the
  SDC, not the library: `set_max_transition 1.000` and `set_max_fanout 32`
  (`design_signoff.sdc:78-79`); the others are Liberty limits (SRAM input
  pins 0.04 ns, SRAM `dout1` 27.56 fF, standard-cell `max_capacitance` of
  each corner library). Classified from `checks.rpt`:

  | Class | TT | SS | FF | Reading |
  |---|---|---|---|---|
  | **Max slew, total** | 5,681 | 33,927 | 2,883 | |
  | antenna-diode pins (`ANTENNA_*/DIODE`) | 2,455 | 16,616 | 1,043 | the slew of a net is listed again at every diode pin on it |
  | output ports with the SDC's 5 pF `set_load` (`design_signoff.sdc:73`, rationale 9.6.1) | 31 | 31 | 31 | worst 5.31 / 7.69 / 4.25 ns; set by the pessimistic pad budget |
  | SRAM `addr0` / `addr1` / `wmask0` pins, Liberty limit 0.04 ns | 584 | 584 | 584 | outside the macro's characterised input range (worst 0.32 / 0.50 / 0.25 ns); its setup/hold tables are flat in slew (0.103 / -0.056 ns, `...32x512_8_TT_1p8V_25C.lib:191-213`, `:228-250`, `:430-452`), so the constraint values do not change, but they are used outside their characterisation |
  | other pins over 1.000 ns, incl. the 31 buffers driving those ports (up to 7.64 ns in SS) | 2,611 | 16,696 | 1,225 | worst after the port buffers: SRAM `din0` pins, 2.34 / 3.53 / 1.88 ns |
  | clock pins | 0 | 0 | 0 | |
  | **Max cap, total** | 235 | 646 | 197 | |
  | SRAM `dout1`, limit 27.56 fF | 167 | 167 | 166 | up to 7.9x - the load extrapolation of 9.1 |
  | the 31 buffers driving the 5 pF ports | 31 | 31 | 31 | ~5.01 pF each |
  | other cells over their corner library's `max_capacitance` | 37 | 448 | 0 | median 1.03x (TT) / 1.15x (SS), worst 1.89x (SS); the SS library's limits are lower |
  | **Max fanout, total** | 837 | 837 | 837 | every violating net carries antenna diodes; counted without them no net exceeds 32 loads (worst `fanout1483`: 32 loads + 34 diodes; census of `results/netlist/asic_top_pnr.v.gz`) |

  The counts are identical at the 20 ns target
  (`reports/timing_target_20ns/summary.rpt`), i.e. independent of the clock
  period. The flow did not repair them to zero and they are reported
  unmodified: the 5 pF port load is an assumption of the pad budget
  (9.6.1), and the SRAM entries follow from using the macro's single TT
  characterisation outside its table range (9.1, 9.5).

### 9.11.1 Delta against the two earlier signed runs

All columns are read from the committed `summary.rpt` / `metrics.json` of
the respective run (August 14: `origin/main-save`, JTAG-less RTL `73d8dcd`;
September 6: `RUN_final_2026-09-06`; delivered: `RUN_hold035_2026-09-09`).
Two steps: the debug module (August 14 -> September 6) adds +14,500 standard
cells (+4.9 %), +1,213 flip-flops and +5 pins, drops TT setup by 0.526 ns
and worsens SS hold from clean to 5 endpoints; the hold repair
(September 6 -> delivered) adds +11,370 standard cells (10,509 of them delay
cells), closes hold at every corner, costs 1.3 MHz of setup ceiling and
2 antenna violations, and turns the declaration from "target 50 MHz, no
verified frequency" into "target 50 MHz, verified 27.0 MHz". The 20 ns
column of the delivered run is `reports/timing_target_20ns/`.

| Metric | August 14 signed run (20 ns) | `RUN_final_2026-09-06` (20 ns) | `RUN_hold035_2026-09-09` @ 20 ns target | `RUN_hold035_2026-09-09` @ 37 ns signoff |
|---|---|---|---|---|
| Setup WS TT / SS / FF (ns) | +2.210 / -9.083 / +4.375 | +1.684 / -10.537 / +4.010 | +1.218 / -9.879 / +3.685 | **+9.718 / +0.197 / +12.185** |
| Setup TNS SS (ns) / violating endpoints | -10,639.4 / 2,521 | -12,533.0 / 2,219 | -11,648 / 3,304 | **0 / 0** |
| Hold WS TT / SS / FF (ns) | -0.323 / **+0.227** / -0.382 | -0.309 / -0.122 / -0.290 | +0.165 / +0.637 / +0.040 | **+0.165 / +0.637 / +0.040** |
| Hold TNS TT / SS / FF (ns) | -6.996 / 0 / -14.680 | -8.360 / -0.399 / -13.158 | 0 / 0 / 0 | **0 / 0 / 0** |
| Hold violating endpoints TT / SS / FF | 48 / 0 / 112 | 87 / 5 / 142 | 0 / 0 / 0 | **0 / 0 / 0** |
| Verified operating frequency (DDK 8 Sep definition) | - | none | - | **27.0 MHz** |
| Setup-only closing period of the netlist (period sweep) | (not measured) | 35.0 ns = 28.6 MHz | 36.6 ns = 27.3 MHz | same netlist |
| Hold cells in the netlist | - | 115 | 10,509 | same |
| Max slew / max cap / max fanout violations (worst corner; classified in the 9.11 note) | 30,668 / 662 / 786 | 34,716 / 647 / 865 | 33,927 / 646 / 837 | same |
| Worst hold clock skew TT / SS / FF (ns, `skew.min.rpt`) | -2.076 / -3.182 / -1.545 | -1.780 / -2.979 / -1.246 | -1.703 / -2.852 / -1.195 | same |
| `jtag_tck` path group (setup / hold worst slack) | - (single clock domain) | +21.29 / +0.124 ns, closed | closed | +21.25 / +0.354 ns, closed |
| Instances total / standard cells | 2,588,379 / 296,010 | 2,578,862 / 310,510 | 2,561,057 / 321,880 | same |
| Standard-cell area (um2) | 1,249,370 | 1,342,780 | 1,458,020 (+8.6 %) | same |
| Sequential cells / clock buffers / clock inverters | 8,920 / 1,771 / 276 | 10,133 / 2,104 / 311 | 10,133 / 2,104 / 311 | same |
| Utilization total / std-cell | 49.87 % / 12.33 % | 50.40 % / 13.25 % | 51.05 % / 14.39 % | same |
| Die / core area | 18.77 / 17.72 mm2 | 18.77 / 17.72 mm2 | 18.77 / 17.72 mm2 | same |
| I/O pins | 89 | 94 | 94 | same |
| Power TT / SS / FF (mW, estimated) | 112.1 / 104.4 / 118.3 | 117.2 / 108.5 / 124.2 | 117.5 / 108.8 / 124.6 | **64.0 / 59.6 / 67.9** |
| IR-drop worst / average | 1.54 mV / 9.8 uV | 0.95 mV / 12.5 uV | 0.96 mV / 12.5 uV | same |
| Routed wire length / vias | 6.135 m / 746,392 | 6.522 m / 812,086 | 6.667 m / 856,965 | same |
| Antenna-repair diodes (`antenna_diodes_count`) / all diode cells (`antenna_cell`) / antenna violations | 114 / 87,022 / 0 | 101 / 96,043 / 0 | 173 / 96,292 / **2** (9.9/14) | same |
| Route DRC / KLayout DRC / LVS / XOR | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 | same |
| Magic DRC (`nwell.4`, abstract-view input) | 9,201 | 9,201 | 9,201 | same |
| Transistors (delivered GDS) | - | 12,715,215 | 12,750,459 | same |
| Unannotated drivers (SPEF; all without a load, note below) | 2,438 | 2,734 | 2,734 | same |
| New flow warnings | - | CTS-0128, CTS-0041, RSZ-0065 (9.9/11) | none new (9.9/11) | - |

Notes on the delivered column:

- **Unannotated drivers (2,734, the same list in all three corners,
  `checks.rpt` `report_parasitic_annotation`):** every one is a driver
  without a load - 864 unused SRAM `dout0` pins (the disconnected pins of
  9.11), 1,002 CTS dummy-load outputs (`clkload*`, 692 X + 310 Y), 852
  unused tie-cell outputs (777 HI + 75 LO) and the 16 unused
  `gpio_in_i[31:16]` ports. `metrics.json`
  `timing__unannotated_net_filtered__count` is 0 in every corner, so no
  loaded net lacks parasitics.
- **Longest net:** `id_stage_i.regfile_addr_rc_id[1]` (7.905 mm; `[0]`
  6.897 mm, `reports/routing/wire_lengths.csv:2-3`; 518 pins each, the
  `[DRT-0120]` notices of 9.9/11) is a constant 0. Its driver
  `id_stage_i._1943_` (`inv_2`) is fed by an `o2bb2a` whose output is
  forced to 1 through tie-HI cells (input `B2` directly, input `A2_N` via
  an `and2b` whose two inputs are both tied); `[0]` is built the same way
  (`_1939_`). The net never switches; its cost is routing (258 loads +
  259 antenna diodes). The same 518-pin nets are reported in the
  September 6 run. Why synthesis did not propagate the constant through
  the CV32E40P register-file read-port select was not established (the
  flow synthesises with `SYNTH_HIERARCHY_MODE: deferred_flatten`,
  `resolved.json:323`).

## 9.12 Report and Output Locations

- **Run tag:** **`RUN_hold035_2026-09-09`** (produced from scratch on a
  clean clone of commit `248069b` on VM1 with the configuration delta of
  9.7; the chain was verified end to end: `make asic_run` -> collection ->
  `make asic_verify` OK; the signoff STA step was re-run once more from the
  finished database with the committed `design_signoff.sdc` before
  collection, and once with `design.sdc` to produce
  `reports/timing_target_20ns/`).
- **Primary GDSII:** `results/gds/asic_top.gds` (delivered gzipped as
  `asic_top.gds.gz`, see the packaging note below) — the **Magic**
  streamout output is authoritative. The KLayout streamout
  (`asic_top_klayout.gds.gz`) is delivered alongside for comparison; the
  **XOR difference between the two outputs is 0** (9.11).
- **Use of `run/`:** `make asic_run` cleans the workspace, runs the flow
  under `run/<TAG>/`, then `scripts/collect_outputs.sh` copies to the
  permanent locations below (details 9.3). Integrity:
  `checksums/SHA256SUMS` — SHA-256 digests of the mandatory outputs
  under results/, produced by `collect_outputs.sh` (DDK 6.3 scope).
  Report and result files exceeding GitHub's 100 MB limit are packaged
  before commit with `scripts/guard_large_files.sh`; for this run 14
  files were packaged (`results/BUYUK_DOSYALAR.md`: the three GDS files,
  DEF, MAG, the PnR and powered netlists, ODB in 2 parts, the three SPEF
  files, the SPICE netlist and the two IR-drop CSV dumps; the original
  SHA-256 of each is in the adjacent `.sha256` file). The three `max.rpt`
  files of `reports/timing_target_20ns/` were gzipped the same way by hand,
  each with its `.sha256` (they are below the limit; 45 MB each raw).
- **Section 5 reports -> `asic/reports/`:**

  | DDK 5.x | Location |
  |---|---|
  | 5.1 General (log/metrics/versions) | `reports/general/` (`flow.log`, `warning.log` - inventory in 9.9/11, `error.log` - the 18 Magic extraction lines of 9.9/5, `metrics.json`, `versions.txt`, `resolved.json`) |
  | 5.2 Lint | `reports/lint/verilator_lint.log` (no waivers, 9.8) |
  | 5.3 Synthesis | `reports/synthesis/` (`stat.rpt`, `chk.rpt`, `latch.rpt`) |
  | 5.4 STA (three corners) | `reports/timing/nom_<corner>/` (wns/tns/ws, min/max, `checks.rpt`, `skew.*`, `violator_list.rpt`) at the 37 ns signoff; `reports/timing_target_20ns/` the same database at the 20 ns target (`summary.rpt`; per corner `max.rpt.gz` + `.sha256`, wns/tns/ws, `clock.rpt`, `skew.*`, `checks.rpt`, `violator_list.rpt` and `power.rpt`; the hold reports `min.rpt` are byte-identical to `reports/timing/` and are not duplicated; see its `README.md`) |
  | 5.5 Placement/CTS/Routing | `reports/routing/` (`asic_top.drc`, `wire_lengths.csv`); placement/CTS measurements inside `reports/general/metrics.json` (utilization, clock tree cell counts, skew) |
  | 5.6 PDN | `reports/pdn/` (grid error reports; both empty) |
  | 5.7 Power + IR-drop | `reports/power/` (per corner `power.rpt`, `irdrop.rpt`) |
  | 5.8 DRC | `reports/drc/` (KLayout json/lyrdb + Magic rpt/lyrdb) |
  | 5.9 LVS | `reports/lvs/lvs.netgen.rpt` (+ json) |
  | 5.10 Antenna | `reports/antenna/` |
  | Signoff summary | `reports/signoff/` (`metrics.json`, `manufacturability.rpt`) |

- **Section 6 outputs -> `asic/results/`:** `gds/` (primary +
  comparison), `def/`, `lef/`, `odb/`, `netlist/` (synthesis / PnR /
  powered), `sdc/` (the PnR SDC as written back by OpenROAD; the two
  source SDC files of 9.6 are in `asic/constraints/`), `sdf/`, `spef/`,
  `lib/`, `mag/`, `spice/`, `config/resolved.json`, `metrics/`,
  `images/asic_top.png` (Table 8 layout).
- The single source of the collection map is
  `scripts/collect_outputs.sh`; verification is `make asic_verify`
  (`scripts/verify_outputs.sh`).

## 9.13 Third-Party Components and Licenses

See `asic/THIRD_PARTY.md` (inventory with versions, commit ids and our
modifications) and `asic/licenses/` (licence texts). Components entering the
ASIC flow: CV32E40P, pulp axi, pulp common_cells 1.20.0 (with the fpnew
package), verilog-uart, and - for the JTAG debug subsystem - pulp riscv-dbg
(commit `21a5fbe`, `asic/licenses/riscv-dbg_SHL-0.51.txt`), the pulp
common_cells v1.38.0 CDC subset (`common_cells_v1.38.0_SHL-0.51.txt`) and pulp
tech_cells_generic v0.2.3 (`tech_cells_generic_SHL-0.51.txt`), all Solderpad
HL 0.51, vendored verbatim under `rtl/debug/vendor/` (pins and file lists:
`rtl/debug/VENDOR.md`). The riscv-dbg `SimJTAG`/`remote_bitbang` files
(Apache-2.0 / BSD-3) are simulation-only and not in `filelist.f`.

---

**Consistency rule (section 9.13):** no conflicting information may exist
among `asic/README.md`, `asic/environment/versions.txt`,
`asic/config.yaml`, the delivered reports and the final outputs.

<!-- English edition; numbers refreshed for RUN_hold035_2026-09-09 on 2026-09-09 (English number format). -->
