# ============================================================================
# run_teknotest_2021.tcl  —  YEREL yardimci script (TEKNOFEST juri dosyasi DEGIL)
# ----------------------------------------------------------------------------
# BLogic MCU teknotest'ini Vivado 2021.2'de kurar, derler ve simulasyonu
# SONUNA KADAR kosturur. Basarili olursa Tcl konsolunda sunu gorursun:
#   "TEST SUCCESS: Received expected string "Hello World!""
#
# ON KOSUL (ONCE yazilimi derle -> helloworld.mem uret):
#   (WSL/Linux) :  cd teknotest/sw && python3 scripts/build.py
#   (Windows)   :  cd teknotest\sw  &&  python scripts\build.py
#   -> teknotest/sw/build/helloworld.mem olusur ("Build completed successfully").
#   NOT: helloworld.c'yi (CPB=434) degistirdigimiz icin helloworld.mem'i MUTLAKA
#        yeniden uret; eski (CPB=54) .mem ile baud yanlis olur, test FAIL eder.
#
# KULLANIM (Vivado 2021.2 Tcl Console):
#   cd <.../teknotest>                  ;# teknotest klasorune gir
#   source ../run_teknotest_2021.tcl    ;# bu dosya repo kokunde
# ============================================================================

puts ">> \[teknotest\] Vivado projesi olusturuluyor (cerceve scripti)..."

# 1) Projeyi olustur — TEKNOFEST cerceve scripti, DEGISTIRILMEDEN cagriliyor.
#    (create_project + tum RTL dosyalari + include_dirs + helloworld.mem)
source ./scripts/create_vivado_proj.tcl

# 2) Simulasyon top modulunu ve kutuphanesini garanti altina al.
set_property top teknotest_tb       [get_filesets sim_1]
set_property top_lib xil_defaultlib [get_filesets sim_1]
update_compile_order -fileset sim_1

puts ">> \[teknotest\] Behavioral simulasyon baslatiliyor (xsim)..."

# 3) Davranissal simulasyonu baslat (derleme + elaborate + GUI dalga penceresi).
launch_simulation

# 4) Dalga formuna ana sinyalleri ekle (UART hatlari + clk/reset).
#    Hata vermesin diye catch ile sariyoruz.
catch { add_wave {/teknotest_tb/clk}    }
catch { add_wave {/teknotest_tb/resetn} }
catch { add_wave {/teknotest_tb/uart_rx} }
catch { add_wave {/teknotest_tb/uart_tx} }

# 5) Testi $finish gelene kadar sonuna kadar kostur.
run -all

puts "----------------------------------------------------------------------"
puts ">> Bitti. Tcl konsolunda 'TEST SUCCESS: ... \"Hello World!\"' satirini gor."
puts ">> Dalga formu: SIMULATION penceresinde uart_tx/uart_rx (Zoom Fit: F)."
puts ">> 'R' (0x52) DUT->TB, 'A' (0x41) TB->DUT, ardindan 'Hello World!'."
puts "----------------------------------------------------------------------"
