# ============================================
# Ostim BLogic Mikroelektronik
# compile_user_design.tcl  -  Vivado kaynak ekleme akisi
# ============================================

# Tum yollar teknotest/ klasorune gore relatif (../ ile repo koku)

# Paketler + global tanimlar (once)
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
add_files ../rtl/bus/axi/src/axi_pkg.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv
add_files ../rtl/core/cv32e40p/rtl/include/cv32e40p_pkg.sv
add_files ../rtl/core/cv32e40p/rtl/include/cv32e40p_apu_core_pkg.sv
add_files ../rtl/core/cv32e40p/rtl/include/cv32e40p_fpu_pkg.sv
add_files ../rtl/core/cv32e40p/bhv/cv32e40p_sim_clock_gate.sv

# Interface
add_files ../rtl/bus/axi/src/axi_intf.sv

# PULP common cells
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/lzc.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/rr_arb_tree.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/spill_register.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/counter.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/delta_counter.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/id_queue.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/stream_arbiter_flushable.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fall_through_register.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/addr_decode.sv
add_files ../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/onehot_to_bin.sv

# CV32E40P cekirdek
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_aligner.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_alu.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_alu_div.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_apu_disp.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_controller.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_ex_stage.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_ff_one.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_fifo.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_fp_wrapper.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_hwloop_regs.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_int_controller.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_load_store_unit.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_mult.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_obi_interface.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_popcnt.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_prefetch_buffer.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_prefetch_controller.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_register_file_ff.sv
# NOT: register_file_latch.sv bilerek derlenmiyor - ayni modul adini tanimlar,
# xsim'de son tanim kazanir ve FF varyantini ezer (kart-dogrulamali build FF kullanir).
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_sleep_unit.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_core.sv
add_files ../rtl/core/cv32e40p/rtl/cv32e40p_top.sv

# Bellek
add_files ../rtl/core/cv32e40p/rtl/axi_sram_wrapper.sv
add_files ../rtl/core/cv32e40p/rtl/axi_slave_tieoff.sv

# Veriyolu
add_files ../rtl/bus/obi_to_axi.sv
add_files ../rtl/bus/soc_axi_interconnect.sv
add_files ../rtl/bus/axi4_to_axilite_bridge.sv
add_files ../rtl/bus/periph_decoder.sv

# Peripheraller
add_files ../rtl/peripherals/uart_axil.sv
add_files ../rtl/peripherals/uart.v
add_files ../rtl/peripherals/uart_rx.v
add_files ../rtl/peripherals/uart_tx.v
add_files ../rtl/peripherals/gpio_axil.sv
add_files ../rtl/peripherals/timer_axil.sv
add_files ../rtl/peripherals/i2c_master_axil.sv
add_files ../rtl/peripherals/qspi_master_axil.sv
add_files ../rtl/peripherals/uart_stream_axil.sv

# SVA (soc_top icinde i_protocol_checkers instance edildigi icin gerekli)
add_files ../verif/sva/axi_lite_protocol_checker.sv
add_files ../verif/sva/axi4_protocol_checker.sv
add_files ../verif/sva/soc_protocol_bind.sv

# Top + AI
add_files ../rtl/soc_top.sv
add_files ../rtl/ai_accelerator/ai_accelerator.sv
add_files ../rtl/ai_accelerator/ai_sram_arbiter.sv
add_files ./user_files/teknotest_wrapper.sv

# Include dizinleri user_files'a kopyalandi, tek include dizini yeterli

# Protocol checker'lar Vivado'da multi-driver hatasi verdigi icin kapatildi
set_property verilog_define {NO_PROTOCOL_CHECK} [list [get_filesets sources_1] [get_filesets sim_1]]

# Test kodu helloworld.mem ile instr SRAM'e yuklenir; diger INIT_FILE uyarilari zararsiz
