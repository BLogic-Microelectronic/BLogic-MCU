# ============================================================
# Ostim BLogic Mikroelektronik - asic/filelist.f
# ASIC sentezinde kullanilan RTL kaynak listesi (DDK Tablo 8).
#
# KANONIK KAYNAK: asic/config.yaml VERILOG_FILES listesi.
# Bu dosya oradan uretilir: python3 scripts/check_filelist.py --generate
# Uyum denetimi:            python3 scripts/check_filelist.py
# (make asic_run her kosuda denetimi otomatik calistirir.)
#
# Yollar asic/ dizininden goreli cozulur (akis asic/ icinden baslar,
# DDK sayfa 20). Ayni yollar depo kokune gore rtl/... agacina denk
# gelir; ana RTL kaynaklari asic/ altina KOPYALANMAMISTIR (Bolum 3/4).
# Sira = HDL derleme bagimlilik sirasi.
# ============================================================

# --- Include dizinleri (config.yaml VERILOG_INCLUDE_DIRS ile birebir) ---
+incdir+../rtl/asic
+incdir+../rtl/core/cv32e40p/rtl/include
+incdir+../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
+incdir+../rtl/bus/axi/include

# --- Derleme tanimlari (config.yaml VERILOG_DEFINES ile birebir) ---
# ASIC_SRAM_MACRO : SRAM makro dallarini secer (ifndef korumali RTL)
# BOOTROM_CONTENT : boot ROM icerigini gomer
+define+SYNTHESIS
+define+ASIC_SRAM_MACRO
+define+BOOTROM_CONTENT

# --- RTL kaynaklari (derleme sirasina gore) ---
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
../rtl/bus/axi/src/axi_pkg.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv
../rtl/core/cv32e40p/rtl/include/cv32e40p_pkg.sv
../rtl/core/cv32e40p/rtl/include/cv32e40p_apu_core_pkg.sv
../rtl/core/cv32e40p/rtl/include/cv32e40p_fpu_pkg.sv
../rtl/asic/cv32e40p_clock_gate_asic.sv
../rtl/bus/axi/src/axi_intf.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/lzc.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/rr_arb_tree.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/spill_register.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/counter.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/delta_counter.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter_flushable.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fall_through_register.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/addr_decode.sv
../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/onehot_to_bin.sv
../rtl/core/cv32e40p/rtl/cv32e40p_aligner.sv
../rtl/core/cv32e40p/rtl/cv32e40p_alu.sv
../rtl/core/cv32e40p/rtl/cv32e40p_alu_div.sv
../rtl/core/cv32e40p/rtl/cv32e40p_apu_disp.sv
../rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv
../rtl/core/cv32e40p/rtl/cv32e40p_controller.sv
../rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv
../rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv
../rtl/core/cv32e40p/rtl/cv32e40p_ex_stage.sv
../rtl/core/cv32e40p/rtl/cv32e40p_ff_one.sv
../rtl/core/cv32e40p/rtl/cv32e40p_fifo.sv
../rtl/core/cv32e40p/rtl/cv32e40p_fp_wrapper.sv
../rtl/core/cv32e40p/rtl/cv32e40p_hwloop_regs.sv
../rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv
../rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv
../rtl/core/cv32e40p/rtl/cv32e40p_int_controller.sv
../rtl/core/cv32e40p/rtl/cv32e40p_load_store_unit.sv
../rtl/core/cv32e40p/rtl/cv32e40p_mult.sv
../rtl/core/cv32e40p/rtl/cv32e40p_obi_interface.sv
../rtl/core/cv32e40p/rtl/cv32e40p_popcnt.sv
../rtl/core/cv32e40p/rtl/cv32e40p_prefetch_buffer.sv
../rtl/core/cv32e40p/rtl/cv32e40p_prefetch_controller.sv
../rtl/core/cv32e40p/rtl/cv32e40p_register_file_ff.sv
../rtl/core/cv32e40p/rtl/cv32e40p_sleep_unit.sv
../rtl/core/cv32e40p/rtl/cv32e40p_core.sv
../rtl/core/cv32e40p/rtl/cv32e40p_top.sv
../rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv
../rtl/core/cv32e40p/rtl/axi_slave_tieoff.sv
../rtl/bus/obi_to_axi.sv
../rtl/bus/soc_axi_interconnect.sv
../rtl/bus/axi4_to_axilite_bridge.sv
../rtl/bus/periph_decoder.sv
../rtl/peripherals/uart_axil.sv
../rtl/peripherals/uart.v
../rtl/peripherals/uart_rx.v
../rtl/peripherals/uart_tx.v
../rtl/peripherals/gpio_axil.sv
../rtl/peripherals/timer_axil.sv
../rtl/peripherals/i2c_master_axil.sv
../rtl/peripherals/qspi_master_axil.sv
../rtl/peripherals/uart_stream_axil.sv
../rtl/soc_top.sv
../rtl/ai_accelerator/ai_accelerator.sv
../rtl/ai_accelerator/ai_sram_arbiter.sv
../rtl/asic/boot_rom.sv
../rtl/asic/sram_macro_blackbox.sv
../rtl/asic/sram_macro_bank.sv
../rtl/asic/asic_top.sv
