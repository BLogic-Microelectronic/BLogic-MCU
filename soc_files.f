# ==============================================================================
# BLogic MCU - Verilator / Sentez Dosya Listesi (soc_files.f)
# Jüri Uyumlu Modüler Klasör Hiyerarşisi Düzeni
# ==============================================================================

# 1. INCLUDE ADRESLERI (Derleyici Arama Yolları)
+incdir+rtl/core/cv32e40p/rtl/include
+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
+incdir+rtl/bus/axi/include

# 2. PAKETLER VE GLOBAL TANIMLAR (Her şeyden önce derlenmelidir)
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
rtl/bus/axi/src/axi_pkg.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_apu_core_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_fpu_pkg.sv

# 3. INTERFACE (ARAYÜZ) TANIMLARI
rtl/bus/axi/src/axi_intf.sv

# 4. VENDOR / KÜTÜPHANE MODÜLLERİ (PULP Common Cells)
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

# 5. GERÇEK İŞLEMCİ ÇEKİRDEĞİ DOSYALARI (rtl/core/cv32e40p/rtl/ içinde korunanlar)
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
rtl/core/cv32e40p/rtl/cv32e40p_top.sv

# 6. BELLEK YÖNETİMİ MODÜLLERİ (Core altında kalanlar)
rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv
rtl/core/cv32e40p/rtl/axi_slave_tieoff.sv

# 7. VERİYOLU / STRÜKTÜR MODÜLLERİ (rtl/bus/ altına taşınanlar)
rtl/bus/obi_to_axi.sv
rtl/bus/soc_axi_interconnect.sv
rtl/bus/axi4_to_axilite_bridge.sv
rtl/bus/periph_decoder.sv

# 8. ÇEVRE BİRİMLERİ (rtl/peripherals/ altına taşınanlar)
rtl/peripherals/uart_axil.sv
rtl/peripherals/uart.v
rtl/peripherals/uart_rx.v
rtl/peripherals/uart_tx.v
rtl/peripherals/gpio_axil.sv
rtl/peripherals/timer_axil.sv

# 9. EN ÜST SEVİYE TOP-LEVEL MODÜL (rtl/ kök dizinine taşınan)
rtl/soc_top.sv
