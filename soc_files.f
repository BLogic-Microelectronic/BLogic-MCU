# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# soc_files.f  -  Verilator/sentez dosya listesi
# ============================================

# ------------------------------------------------------------
# JTAG debug altsistemi (riscv-dbg) - TESLIM YAPILANDIRMASINDA ACIK
# Sartname "JTAG (Opsiyonel)": JTAG TAP -> riscv-dbg DTM/DM -> CV32E40P debug
# portu. Tanimlar asic/config.yaml VERILOG_DEFINES ile birebir (FC1_FIX: FC-1
# erratasinin duzeltmesi; I2C_SDA_SYNC: i2c_sda_i 2FF senkronizator). Kaynak
# sirasi asic/config.yaml JTAG blogu ve rtl/debug/jtag_files.f ile aynidir.
# v1.38.0 common_cells include dizini ESKI cv32e40p kopyasindan ONCE aranmali
# (ASSUME makrosu 5 arguman; ayrinti rtl/debug/jtag_files.f). Surumler:
# rtl/debug/VENDOR.md. FPGA akisi (build_genesys2.tcl) bu listeyi okur ve
# dmi_jtag_tap.sv yerine BSCANE2'li dmi_bscane_tap.sv'yi koyar.
# ------------------------------------------------------------
+define+JTAG_DEBUG
+define+FC1_FIX
+define+I2C_SDA_SYNC
+incdir+rtl/debug/vendor/common_cells_v1.38.0/include
rtl/debug/vendor/common_cells_v1.38.0/cdc_reset_ctrlr_pkg.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_4phase.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_reset_ctrlr.sv
rtl/debug/vendor/common_cells_v1.38.0/cdc_2phase_clearable.sv
rtl/debug/vendor/tech_cells_generic/tc_clk.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/sync.sv
rtl/debug/vendor/riscv-dbg/src/dm_pkg.sv
rtl/debug/vendor/riscv-dbg/debug_rom/debug_rom.sv
rtl/debug/vendor/riscv-dbg/debug_rom/debug_rom_one_scratch.sv
rtl/debug/vendor/riscv-dbg/src/dm_csrs.sv
rtl/debug/vendor/riscv-dbg/src/dm_mem.sv
rtl/debug/vendor/riscv-dbg/src/dm_sba.sv
rtl/debug/vendor/riscv-dbg/src/dm_top.sv
rtl/debug/vendor/riscv-dbg/src/dmi_cdc.sv
rtl/debug/vendor/riscv-dbg/src/dmi_jtag_tap.sv
rtl/debug/vendor/riscv-dbg/src/dmi_jtag.sv
rtl/debug/axi_dm_slave.sv

# include adresleri
+incdir+rtl/core/cv32e40p/rtl/include
+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
+incdir+rtl/bus/axi/include

# paketler ve global tanimlar (once derlenmeli)
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
rtl/bus/axi/src/axi_pkg.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_apu_core_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_fpu_pkg.sv
rtl/core/cv32e40p/bhv/cv32e40p_sim_clock_gate.sv

# interface tanimlari
rtl/bus/axi/src/axi_intf.sv

# vendor moduller (PULP common cells)
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/lzc.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/rr_arb_tree.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/spill_register.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/counter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/delta_counter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/id_queue.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter_flushable.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fall_through_register.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/addr_decode.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/onehot_to_bin.sv

# islemci cekirdegi
rtl/core/cv32e40p/rtl/cv32e40p_aligner.sv
rtl/core/cv32e40p/rtl/cv32e40p_alu.sv
rtl/core/cv32e40p/rtl/cv32e40p_alu_div.sv
rtl/core/cv32e40p/rtl/cv32e40p_apu_disp.sv
rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv
rtl/core/cv32e40p/rtl/cv32e40p_controller.sv
rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv
rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv
rtl/core/cv32e40p/rtl/cv32e40p_ex_stage.sv
rtl/core/cv32e40p/rtl/cv32e40p_ff_one.sv
rtl/core/cv32e40p/rtl/cv32e40p_fifo.sv
rtl/core/cv32e40p/rtl/cv32e40p_fp_wrapper.sv
rtl/core/cv32e40p/rtl/cv32e40p_hwloop_regs.sv
rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv
rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv
rtl/core/cv32e40p/rtl/cv32e40p_int_controller.sv
rtl/core/cv32e40p/rtl/cv32e40p_load_store_unit.sv
rtl/core/cv32e40p/rtl/cv32e40p_mult.sv
rtl/core/cv32e40p/rtl/cv32e40p_obi_interface.sv
rtl/core/cv32e40p/rtl/cv32e40p_popcnt.sv
rtl/core/cv32e40p/rtl/cv32e40p_prefetch_buffer.sv
rtl/core/cv32e40p/rtl/cv32e40p_prefetch_controller.sv
rtl/core/cv32e40p/rtl/cv32e40p_register_file_ff.sv
rtl/core/cv32e40p/rtl/cv32e40p_register_file_latch.sv
rtl/core/cv32e40p/rtl/cv32e40p_sleep_unit.sv
rtl/core/cv32e40p/rtl/cv32e40p_core.sv
rtl/core/cv32e40p/rtl/cv32e40p_top.sv

# bellek modulleri
rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv
rtl/core/cv32e40p/rtl/axi_slave_tieoff.sv

# veriyolu modulleri
rtl/bus/obi_to_axi.sv
rtl/bus/soc_axi_interconnect.sv
rtl/bus/axi4_to_axilite_bridge.sv
rtl/bus/periph_decoder.sv

# cevre birimleri
rtl/peripherals/uart_axil.sv
rtl/peripherals/uart.v
rtl/peripherals/uart_rx.v
rtl/peripherals/uart_tx.v
rtl/peripherals/gpio_axil.sv
rtl/peripherals/timer_axil.sv
rtl/peripherals/i2c_master_axil.sv
rtl/peripherals/qspi_master_axil.sv
rtl/peripherals/uart_stream_axil.sv

# protocol checker'lar (sentezde yok)
# tb_log_pkg + soc_bus_trace: register access log of every SoC simulation (bus_trace.log)
verif/sva/tb_log_pkg.sv
verif/sva/soc_bus_trace.sv
verif/sva/axi_lite_protocol_checker.sv
verif/sva/axi4_protocol_checker.sv
verif/sva/soc_protocol_bind.sv
verif/sva/uart_func_cov.sv
verif/sva/qspi_func_cov.sv
verif/sva/irq_func_cov.sv
verif/sva/ai_func_cov.sv

# en ust seviye
rtl/asic/boot_rom.sv
rtl/soc_top.sv
rtl/ai_accelerator/ai_accelerator.sv
rtl/ai_accelerator/ai_sram_arbiter.sv
+incdir+rtl/asic
