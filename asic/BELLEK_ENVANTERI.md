# Memory Inventory (PHASE 1 output)

Measurement: `make asic-elab` -> yosys-slang `--keep-hierarchy` + `stat`
Environment: LibreLane 3.0.5, yosys 0.62 (`7326bb7d`), sky130 `8afc8346`
Date: August 3, 2026 · Raw report: `build/asic/elab.log`
> This is an **elaboration measurement**, not a delivery report. The final numbers
> are taken from `asic/reports/synthesis/stat.rpt` and
> `asic/results/metrics/metrics.json`; in case of conflict, those take precedence.

Total: **11 memories / 410,336 bits**

## Per instance

| Instance                    | Memory | Bits    | Words x Width   | ASIC plan                       |
|-----------------------------|--------|---------|-----------------|---------------------------------|
| `i_soc.i_ai_sram`           | 1      | 245,760 | 7680 x 32       | 15 x `sky130_sram_2kbyte_1rw1r_32x512_8` |
| `i_soc.i_instr_sram`        | 1      |  65,536 | 2048 x 32       | 4 x `32x512` macros             |
| `i_soc.i_data_sram`         | 1      |  65,536 | 2048 x 32       | 4 x `32x512` macros             |
| `i_soc.i_ai_accel`          | 5      |  21,216 | local buffers   | buffer removal / weight ROM     |
| `i_soc.i_boot_rom`          | 1      |   8,192 | 256 x 32        | synthesized case ROM            |
| `i_soc.i_qspi`              | 2      |   4,096 | TX/RX FIFO      | may remain flops (small)        |

The AI SRAM's 7680 words is not a power of two, but it divides **evenly** into
512-word banks (7680 / 512 = 15). No tie-off decode or wasteful rounding up to
8192 is needed.
Total macro count: **23** (August 3 elaboration, excluding BootROM).
In the final design, **27**: four of the `i_ai_accel` local buffers above were
converted into macros (`u_input_mem` 1 x `32x512` + `u_conv_out`
2 x `32x512` + `u_conv_w_mem` 1 x `32x256`). Breakdown:
`asic/environment/versions.txt`.
Confirmed against the final run's `reports/synthesis/stat.rpt`:
26 x `sky130_sram_2kbyte_1rw1r_32x512_8` + 1 x `sky130_sram_1kbyte_1rw1r_32x256_8` = **27**.

## AI data budget (30 kB rule, DDK decision 5)

The specification allocates **30 kB** of memory to the AI accelerator; the DDK
decision of August 18 (see `asic/DDK_KARARLARI.md` item 5) requires that the
capacity be PROVIDED, not that all of it be actively used. The AI SRAM region is
implemented as exactly **30,720 B** (15 x 2 kB macros, `0x0003_0000`).
The region's data layout (`sw/ai_model/generate_ai_sram_init.py`
offsets, confirmed against hex file sizes):

| Data | Offset | Size (B) | Contents |
|---|---|---|---|
| Input feature vector | `0x0000` | 1,960 | 49x40 int8 (490 words) |
| Conv intermediate output | `0x07A8` | 4,000 | 25x20x8 int8 (1000 words) |
| (alignment gap) | `0x1748` | 96 | word alignment |
| Conv weights | `0x17A8` | 640 | 8 filters x 10x8 int8 |
| (alignment gap) | `0x1A28` | 384 | word alignment |
| Conv bias | `0x1BA8` | 32 | 8 x int32 |
| FC weights | `0x1BC8` | 16,000 | 4000x4 int8 |
| FC bias | `0x5A48` | 16 | 4 x int32 |
| Result (argmax) | `0x5A58` | 4 | int32 |
| **Data total** | | **22,652** | |
| **End of layout** | `0x5A5C` | **23,132** | **75.3%** of 30,720 B |
| Free space | `0x5A5C+` | 7,588 | reserved for additional vectors (3 x 1,960 B fit) |

Notes:
- The **quantization parameters (84 B, 21 words)** are NOT in the AI SRAM;
  they are on the RTL constant/CSR path (`quant_params.h`); they do not enter
  the budget and are declared as a separate line item.
- The accelerator's **local buffer macros (~7 kB**: `u_input_mem` 2 kB +
  `u_conv_out` 2x2 kB + `u_conv_w_mem` 1 kB) hold parallel-access copies of
  the SAME tensors listed above; they do not host any NEW class of data outside
  the 30 kB region. The purpose is bandwidth (local concurrent access instead
  of a single port through the arbiter), not additional data capacity.
- Conclusion: all of the model's data (22,652 B) fits within the 30 kB region;
  the capacity rule is satisfied both by the region we provide (30,720 B) and
  by the actual utilization (75.3%).

## PDK macro inventory (came ready with the ciel default)

| Macro                                | Words x Bits | Corner |
|--------------------------------------|-----------|------|
| `sky130_sram_2kbyte_1rw1r_32x512_8`  | 512 x 32  | TT   |
| `sky130_sram_1kbyte_1rw1r_32x256_8`  | 256 x 32  | TT   |
| `sram_1rw1r_32_256_8_sky130`         | 256 x 32  | 7 corners |
| `sky130_sram_1kbyte_1rw1r_8x1024_8`  | 1024 x 8  | TT   |

The port structure (`clk0/csb0/web0/wmask0/addr0/din0/dout0` + `clk1/csb1/addr1/dout1`)
matches `axi_sram_wrapper` one-to-one: 1 write + 1 read port, the `NUM_WMASKS=4`
byte mask maps directly to AXI `wstrb`, reads are synchronous/registered.
OpenRAM is not needed.

## Why macros are mandatory

If 410,336 bits were synthesized as flip-flops instead of macros, the area score
would be lost. Scale reference: the LibreLane smoke test (SPM) is 64 FF -> 3,294 um^2,
i.e. ~26 um^2/FF; at that rate the memory alone would amount to ~11 mm^2. sky130 has
no BRAM/DSP equivalent; this cost, invisible on FPGA, hits the area score directly
on ASIC.

## Frontend note

`read_slang --keep-hierarchy` is **mandatory**. When run without the flag, the design
flattens into a single module (`=== asic_top ===` alone) and the SRAM macros do not
appear as separate instances in the floorplan. With the flag, 49 modules are preserved,
elaboration takes 1.4 s / 100 MB.
The sv2v path was abandoned: it both inlined the hierarchy and took
19 minutes / 2 GB for the same elaboration.

## Open item

`cv32e40p_sim_clock_gate` is the **only latch** in the design (`$dlatch 1`). The file's
own header says "It must not be used for ASIC synthesis"; it is instantiated
unconditionally at `cv32e40p_sleep_unit.sv:154`, meaning the CPU's entire clock passes
through it. Blocker 6.

## Corner coverage — decided (August 5, 2026)

The DDK "Final Istenen Ciktilar" (EN: Final Required Deliverables) section 1.2 requires
the final STA at **exactly three corners**: `tt_025C_1v80`, `ss_100C_1v60`, `ff_n40C_1v95`.
(The statement "LibreLane STA'yi 9 kosede kosar" (EN: LibreLane runs STA at 9 corners)
in the previous version of this file is void.)

Both macros in use ship in the PDK with only the `TT_1p8V_25C` lib. Section 1.2 leaves
an explicit path for this: "Birebir karsilik gelen bir zamanlama
modelinin bulunmamasi durumunda kullanilan model ve ilgili varsayimlar
`asic/README.md` dosyasinda aciklanmalidir." (EN: if no exactly corresponding timing
model exists, the model used and the related assumptions must be explained in
`asic/README.md`.)

**Our approach is not a waiver but a measured derate.** The basis is the
`sky130_fd_sc_hd__dfxtp_1` clk->Q median delay: TT 0.4376 ns / SS 1.1642 ns -> ratio **2.661**.
It is applied in `asic/constraints/design.sdc` as `set_timing_derate -cell_delay -late 2.661`
(early side 0.500). Rationale and full text:
`asic/README.md` section 9.5.

`sram_1rw1r_32_256_8_sky130`, referred to as "option B" in the previous version, has been
**dropped**: it produced downstream LVS errors due to a LEF layer-name issue (tried on
August 5 and reverted) and it is not on the approved SRAM list in DDK Table 5
- using it would, per section 1.3, be subject to prior DDK approval.

<!-- English translation of BELLEK_ENVANTERI.md, 2026-09-01; numeric values converted from Turkish to English number format. -->
