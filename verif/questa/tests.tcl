# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# tests.tcl - test table for the Questa / ModelSim waveform flow
# ============================================
# One entry per test. Each entry mirrors the Makefile recipe of the same test
# (file list, defines, the directory that holds the hex files, plusargs), so
# Questa runs the same testbench on the same firmware as `make test-all`.
# Fields:
#   top       testbench top module
#   workdir   cwd for vsim, relative to the repository root ($readmemh paths)
#   defines   extra +define+ on top of soc_files.f
#   soc       1 = compile soc_files.f (delivered configuration), 0 = no
#   flists    extra Verilator-style file lists
#   incdirs   extra +incdir+
#   files     extra source files, relative to the repository root
#   plusargs  runtime +plusargs
#   vsimargs  extra vsim options (e.g. -gVERBOSE=0 for the OpenRAM models)
#   wave      wave/<name>.do to load
#   dut       soc_top instance path for wave/soc.do

set QTESTS      [dict create]
set QTEST_ORDER {}

proc q_def {name args} {
    global QTESTS QTEST_ORDER
    set defaults {top "" workdir . defines {} soc 1 flists {} incdirs {} files {} plusargs {} vsimargs {} wave soc dut ""}
    dict set QTESTS $name [dict merge $defaults $args]
    lappend QTEST_ORDER $name
}

set MACROS {
    asic/macros/sky130_sram_2kbyte_1rw1r_32x512_8/verilog/sky130_sram_2kbyte_1rw1r_32x512_8.v
    asic/macros/sky130_sram_1kbyte_1rw1r_32x256_8/verilog/sky130_sram_1kbyte_1rw1r_32x256_8.v
}

# ---- SystemVerilog testbenches (same tops as the Makefile targets) ----------

# make boot: QSPI boot flow, flash model loaded with flash_helloworld
q_def boot            top boot_flow_test_tb  workdir verif/questa/fw/boot \
    defines {BOOTROM_CONTENT} \
    files {verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv} \
    dut /boot_flow_test_tb/dut

# make asic-sram-sim: the same boot on the delivered OpenRAM macro models
q_def asic_sram_sim   top boot_flow_test_tb  workdir verif/questa/fw/boot \
    defines {BOOTROM_CONTENT ASIC_SRAM_MACRO} vsimargs {-gVERBOSE=0} \
    files [concat rtl/asic/sram_macro_bank.sv $MACROS {verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv}] \
    dut /boot_flow_test_tb/dut

# make asic-top-sim: asic_top + 27 macros, flash boot + AI inference, argmax check
q_def asic_top_sim    top asic_top_boot_tb   workdir verif/questa/fw/asic_top_sim \
    defines {BOOTROM_CONTENT ASIC_SRAM_MACRO CHECK_ARGMAX} vsimargs {-gVERBOSE=0} \
    files [concat rtl/asic/asic_top.sv rtl/asic/sram_macro_bank.sv $MACROS {verif/models/spi_flash_model.sv verif/tb/asic_top_boot_tb.sv}] \
    dut /asic_top_boot_tb/dut/i_soc

# make qspi-modes: x1/x2/x4 + 4-byte addressing against the flash model
q_def qspi_modes      top qspi_modes_tb      workdir verif/questa/fw/qspi_modes \
    files {verif/models/spi_flash_model.sv verif/tb/qspi_modes_tb.sv} \
    dut /qspi_modes_tb/dut

# make i2c-sys: CPU -> AXI -> i2c_master + echo slave model
q_def i2c_sys         top i2c_system_tb      workdir verif/questa/fw/i2c_sys \
    files {verif/models/i2c_slave_model.sv verif/tb/i2c_system_tb.sv} \
    dut /i2c_system_tb/dut

# make jtag-sim: riscv-dbg TAP bit-banged from the testbench, 17 stages
q_def jtag_sim        top jtag_smoke_tb      workdir verif/questa/fw/jtag_sim \
    files {verif/tb/jtag_smoke_tb.sv} \
    dut /jtag_smoke_tb/dut

# make jtag-bridge-sim: axi_dm_slave unit testbench with the real dm_top
q_def jtag_bridge_sim top axi_dm_slave_tb    workdir . soc 0 \
    flists {rtl/debug/jtag_files.f} \
    incdirs {rtl/bus/axi/include rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include} \
    files {rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv
           rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv
           rtl/bus/axi/src/axi_pkg.sv rtl/bus/axi/src/axi_intf.sv
           rtl/debug/axi_dm_slave.sv verif/tb/axi_dm_slave_tb.sv} \
    wave axi_dm_slave

# make uart-stp: stop bits 1 / 1.5 / 2 on the bare UART block
q_def uart_stp        top uart_stp_tb        workdir . soc 0 \
    files {rtl/peripherals/uart_axil.sv rtl/peripherals/uart_tx.v rtl/peripherals/uart_rx.v
           verif/tb/uart_stp_tb.sv verif/sva/uart_func_cov.sv} \
    wave uart_stp

# make uart-stream: UART_1 stream DMA block, scenarios A-E
q_def uart_stream     top uart_stream_tb     workdir . soc 0 \
    files {rtl/peripherals/uart_stream_axil.sv rtl/peripherals/uart_tx.v rtl/peripherals/uart_rx.v
           verif/tb/uart_stream_tb.sv} \
    wave uart_stream

# make ai: standalone accelerator, 6 scenarios + 40-sample batch (golden files
# are read relative to the repository root, hence workdir .)
q_def ai              top ai_accel_tb        workdir . soc 0 \
    files {verif/tb/ai_accel_tb.sv rtl/ai_accelerator/ai_accelerator.sv} \
    wave ai_accel

# ---- firmware-driven SoC tests through verif/questa/questa_soc_tb.sv --------
# (the Verilator flow drives these from verif/tb/sim_main.cpp)

proc q_soc {name dir args} {
    q_def $name top questa_soc_tb workdir verif/questa/fw/$dir \
        files {verif/questa/questa_soc_tb.sv} dut /questa_soc_tb/dut plusargs $args
}
q_soc uart_hello      uart_hello      +CPB=434
q_soc uart_hello_1m   uart_hello_1m   +CPB=50
q_soc uart_hello_9600 uart_hello_9600 +CPB=5208
q_soc qspi_flash      qspi_flash      +CPB=434
q_soc uart_baud_sweep uart_baud_sweep +SWEEP_N=3 +SWEEP0=434 +SWEEP1=50 +SWEEP2=5208
q_soc qspi_fifo_err   qspi_fifo_err   +CPB=64 +GOLDEN_FILE=golden.txt +MAX_CYCLES=3000000
q_soc ai_micro_speech ai_micro_speech +CPB=434
q_soc ai_irq          ai_irq          +CPB=434
q_soc timer_irq       timer_irq       +CPB=434
q_soc uart1_strm      uart1_strm      +CPB=434
# soc-perf: the software reference inference, 12.3 M cycles - slow in Questa
q_soc ai_sw_reference ai_sw_reference +CPB=434 +MAX_CYCLES=25000000
