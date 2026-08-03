+incdir+rtl/asic
# ============================================
# Ostim BLogic Mikroelektronik
# soc_files_asic.f  -  ASIC sentez dosya listesi
# soc_files.f'ten turetildi: SVA/checker ve TB dosyalari haric,
# ust seviye asic_top. Simulasyon bu listeyi KULLANMAZ.
# ============================================

+incdir+rtl/core/cv32e40p/rtl/include
+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
+incdir+rtl/bus/axi/include

# paketler (once)
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
rtl/bus/axi/src/axi_pkg.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_apu_core_pkg.sv
rtl/core/cv32e40p/rtl/include/cv32e40p_fpu_pkg.sv
# generic ICG (latch+AND); hedef kutuphanenin ICG hucresiyle degistirilebilir
rtl/core/cv32e40p/bhv/cv32e40p_sim_clock_gate.sv

rtl/bus/axi/src/axi_intf.sv

rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/lzc.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/rr_arb_tree.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/spill_register.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/counter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/delta_counter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter_flushable.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fall_through_register.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/addr_decode.sv
rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/onehot_to_bin.sv

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
rtl/core/cv32e40p/rtl/cv32e40p_sleep_unit.sv
rtl/core/cv32e40p/rtl/cv32e40p_core.sv
rtl/core/cv32e40p/rtl/cv32e40p_top.sv

# bellekler: davranissal SRAM dizileri; PnR'da makrolarla degistirilecek
# sinir noktasi axi_sram_wrapper icindeki mem[] dizileridir
rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv
rtl/core/cv32e40p/rtl/axi_slave_tieoff.sv

rtl/bus/obi_to_axi.sv
rtl/bus/soc_axi_interconnect.sv
rtl/bus/axi4_to_axilite_bridge.sv
rtl/bus/periph_decoder.sv

rtl/peripherals/uart_axil.sv
rtl/peripherals/uart.v
rtl/peripherals/uart_rx.v
rtl/peripherals/uart_tx.v
rtl/peripherals/gpio_axil.sv
rtl/peripherals/timer_axil.sv
rtl/peripherals/i2c_master_axil.sv
rtl/peripherals/qspi_master_axil.sv
rtl/peripherals/uart_stream_axil.sv

rtl/soc_top.sv
rtl/ai_accelerator/ai_accelerator.sv
rtl/ai_accelerator/ai_sram_arbiter.sv

# NOT: soc_top icindeki protocol checker instance'i 'synthesis translate_off'
# pragmasiyla korunur - sentez araclari otomatik dislar, listeye SVA eklenmez.
# (Verilator lint bu pragmayi tanimaz; lint icin SVA dosyalari komuta eklenir.)

# SRAM makro bankasi (ASIC_SRAM_MACRO tanimliyken devreye girer)
rtl/asic/boot_rom.sv
rtl/asic/sram_macro_blackbox.sv
rtl/asic/sram_macro_bank.sv

# ASIC ust seviye
rtl/asic/asic_top.sv
