# ============================================
# Ostim BLogic Mikroelektronik
# rtl/debug/jtag_files_fpga.f  -  JTAG debug dosya listesi, FPGA TAP varyanti
# ============================================
#
# FARK (jtag_files.f'ten): TAP olarak dmi_jtag_tap.sv YERINE dmi_bscane_tap.sv
# listelenir. Ikisi AYNI modul adini (dmi_jtag_tap) tasir; birlikte verilirse
# Verilator MODDUP hatasi uretir. Kartta (rtl/fpga/build_genesys2_jtag.tcl)
# okunan surum budur: TAP FPGA'nin kendi tarama zincirine Xilinx BSCANE2
# (USER3/USER4) ile baglanir. Yalniz 'make jtag-lint-fpga' bu listeyi kullanir
# ve BSCANE2 icin verif/tb/xilinx_prim_stubs.sv kabugu gerekir (sim/sentez YOK).
# Verilator -f dosyasi. Yollar repo koku'ne goredir (soc_files.f gibi).
# soc_files.f ile BIRLIKTE kullanilmak uzere tasarlanmistir:
#   - fifo_v3.sv (dm_csrs kullanir) burada LISTELENMEZ: soc_files.f'de zaten
#     var; ayni dosya iki kez verilirse Verilator MODDUP hatasi uretir.
#   - spill_register.sv de LISTELENMEZ (soc_files.f'de var). cdc_4phase_dst
#     onu yalnizca DECOUPLED=1 iken kullanir; riscv-dbg yolunda cdc_reset_ctrlr
#     DECOUPLED(0) verdigi icin hic elaborate edilmez, lint onsuz da temiz.
#
# ONEMLI - include sirasi:
#   cdc_2phase_clearable.sv (v1.38.0) `include "common_cells/assertions.svh"
#   ve "common_cells/registers.svh" kullanir ve `ASSUME makrosunu 5 argumanla
#   (__desc mesaji) cagirir. cv32e40p altindaki ESKI common_cells (1.20.0)
#   assertions.svh'i bunu desteklemez ("Define passed too many arguments").
#   Verilator +incdir'leri verilis sirasina gore arar; ILK eslesen kazanir.
#   Bu yuzden asagidaki v1.38.0 incdir'i, eski
#   +incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
#   satirindan ONCE gelmelidir (yani "-f rtl/debug/jtag_files.f" argumanini
#   "-f soc_files.f"den once verin). v1.38.0 basliklari eski makrolarin
#   ust kumesidir (ayni imzalar + istege bagli __desc argumani).
+incdir+rtl/debug/vendor/common_cells_v1.38.0/include
#
# Tek basina lint icin (soc_files.f olmadan) fifo_v3.sv ve spill_register.sv'yi
# komut satirinda ayrica verin, ornegin:
#   verilator --lint-only --timing \
#     rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv \
#     rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/spill_register.sv \
#     -f rtl/debug/jtag_files.f --top-module dm_top
#
# Kaynak ve surum bilgisi: rtl/debug/VENDOR.md

# --- CDC hucreleri (pulp-platform/common_cells v1.38.0) ---
rtl/debug/vendor/common_cells_v1.38.0/cdc_reset_ctrlr_pkg.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_4phase.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_reset_ctrlr.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_2phase_clearable.sv

# --- Teknoloji hucreleri (pulp-platform/tech_cells_generic v0.2.3) ---
rtl/debug/vendor/tech_cells_generic/tc_clk.sv

# --- Zaten vendor edilmis common_cells (cv32e40p altinda) ---
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/sync.sv

# --- riscv-dbg (pulp-platform/riscv-dbg @ 21a5fbe31ac91146022ad771d127b15c185e37fa) ---
# paket once derlenmeli
rtl/debug/vendor/riscv-dbg/src/dm_pkg.sv
# debug ROM'lar
rtl/debug/vendor/riscv-dbg/debug_rom/debug_rom.sv
rtl/debug/vendor/riscv-dbg/debug_rom/debug_rom_one_scratch.sv
# debug module
rtl/debug/vendor/riscv-dbg/src/dm_csrs.sv
rtl/debug/vendor/riscv-dbg/src/dm_mem.sv
rtl/debug/vendor/riscv-dbg/src/dm_sba.sv
rtl/debug/vendor/riscv-dbg/src/dm_top.sv
# DMI / JTAG TAP
# (dmi_jtag_tap.sv BURADA listelenmez: dmi_bscane_tap.sv ayni 'dmi_jtag_tap'
#  modul adini tasir; kartta okunan surum bu dosyadir.)
rtl/debug/vendor/riscv-dbg/src/dmi_cdc.sv
rtl/debug/vendor/riscv-dbg/src/dmi_bscane_tap.sv
rtl/debug/vendor/riscv-dbg/src/dmi_jtag.sv
