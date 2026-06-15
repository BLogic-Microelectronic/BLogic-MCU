# ============================================
# Ostim BLogic Mikroelektronik
# run_teknotest_2021.tcl - teknotest simulasyonunu kosturur
# ============================================

puts ">> \[teknotest\] Vivado projesi olusturuluyor (cerceve scripti)..."

# projeyi olustur
source ./scripts/create_vivado_proj.tcl

# sim top modulu ve kutuphanesi
set_property top teknotest_tb       [get_filesets sim_1]
set_property top_lib xil_defaultlib [get_filesets sim_1]
update_compile_order -fileset sim_1

puts ">> \[teknotest\] Behavioral simulasyon baslatiliyor (xsim)..."

# simulasyonu baslat
launch_simulation

# dalga formuna sinyalleri ekle, hata verirse gecsin diye catch
catch { add_wave {/teknotest_tb/clk}    }
catch { add_wave {/teknotest_tb/resetn} }
catch { add_wave {/teknotest_tb/uart_rx} }
catch { add_wave {/teknotest_tb/uart_tx} }

# testi sonuna kadar kostur
run -all

puts "----------------------------------------------------------------------"
puts ">> Bitti. Tcl konsolunda 'TEST SUCCESS: ... \"Hello World!\"' satirini gor."
puts ">> Dalga formu: SIMULATION penceresinde uart_tx/uart_rx (Zoom Fit: F)."
puts ">> 'R' (0x52) DUT->TB, 'A' (0x41) TB->DUT, ardindan 'Hello World!'."
puts "----------------------------------------------------------------------"
