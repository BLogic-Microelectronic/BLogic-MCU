# ============================================
# Ostim BLogic Mikroelektronik
# gls_compile.do  -  kapi seviyesi benzetim derlemesi (Questa)
# ============================================
# run_gls.ps1 calisma dizininde (ASCII yol) kosturur. Hucre modelleri
# USE_POWER_PINS ile ve FUNCTIONAL TANIMSIZ derlenir: specify bloklu zamanlama
# modelleri secilir, SDF gecikmeleri ve $setuphold/$recrem/$width denetimleri
# bunlara yuklenir.
onerror {quit -code 1}
if {[file exists work]} { vdel -lib work -all }
vlib work
# sky130 modelleri `default_nettype none altinda tipsiz guc portu bildiriyor (vlog-2892, bastirilabilir)
vlog -work work -timescale 1ns/1ps +define+USE_POWER_PINS -suppress 2892,2388 pdk/primitives.v pdk/sky130_fd_sc_hd.v
vlog -work work -timescale 1ns/1ps +define+USE_POWER_PINS sky130_sram_2kbyte_1rw1r_32x512_8.v sky130_sram_1kbyte_1rw1r_32x256_8.v
vlog -work work -sv -timescale 1ns/1ps spi_flash_model.sv asic_top_gls_tb.sv
vlog -work work -timescale 1ns/1ps asic_top_gls.v
quit -f
