# ============================================
# Ostim BLogic Mikroelektronik
# demo_halt_regs_mem.tcl  -  OpenOCD demo: halt / register / bellek / resume /
#                            donanim breakpoint / reset halt
# ============================================
# deneme/jtag dali (JTAG_DENEME_PLANI.md, Gun 2-3). blogic_sim.cfg'den SONRA
# calistirilir; o dosya init + halt yapmis olur:
#   openocd -f rtl/debug/openocd/blogic_sim.cfg -f rtl/debug/openocd/demo_halt_regs_mem.tcl
# (kosucu: make jtag-openocd -> scripts/run_jtag_openocd.sh, log logs/jtag/)
# Yalniz OpenOCD 0.12 riscv hedefinde gecerli komutlar kullanilir. Bellek
# erisimi program buffer uzerinden (cfg: riscv set_mem_access progbuf);
# 0x0002_1000 veri SRAM icinde, firmware .data/yigin bolgesi disinda.
# Gun 3: ndmreset soc_top sys_rst_n'e bagli -> "reset halt" gecerli: OpenOCD
# dmcontrol.ndmreset+haltreq yazar, resetten sonra haltreq'i tutar, allhalted
# bekler, ackhavereset gonderir; cekirdek reset vektorunde (BOOT_ADDR
# 0x0001_0000) halt'ta gelir, DM ve TAP ayakta kalir, SRAM icerigi korunur.
# Donanim breakpoint: CV32E40P'nin tek tetikleyicisi (tdata1/tdata2, yalniz
# execute adres esitligi); "bp <adres> 4 hw" tetikleyiciyi debug modunda
# abstract CSR erisimiyle kurar. pc == bp adresi iken resume: OpenOCD once
# tetikleyiciyi kapatip tek adim atar, sonra acip kosturur (yerlesik davranis).
# Sonda "shutdown": remote_bitbang 'Q' gonderir -> SimJTAG exit -> sim biter.
#
# NOT: OpenOCD 0.12'de -f ile kaynaklanan dosya icindeki komutlarin ciktisi
# (reg, mdw, bp ...) Tcl sonucu olarak toplanir, loga DUSMEZ; -c "reg pc" ile
# ust seviyede kosunca basilir. Bu yuzden cikti veren her komut
# `echo [string trimright [...]]` ile sarilir (trimright: cift satir sonu).
# Isaret satirlari ("== DEMO: ... ==", "-- ... --") run_jtag_openocd.sh
# VERDICT'inin ayristirdigi sabit metinlerdir; degistirirken kosucuyu guncelle.

echo "== DEMO: halt =="
halt
wait_halt 5000

echo "== DEMO: registers =="
echo [string trimright [reg pc]]
echo [string trimright [reg a0]]
echo "-- a0 yaz 0x12345678 --"
echo [string trimright [reg a0 0x12345678]]
echo "-- a0 geri oku --"
echo [string trimright [reg a0]]

echo "== DEMO: memory (progbuf) =="
mww 0x00021000 0xCAFEF00D
echo [string trimright [mdw 0x00021000]]
mww 0x00021004 0x11223344
echo [string trimright [mdw 0x00021000 2]]

echo "== DEMO: resume/halt =="
resume
sleep 200
halt
wait_halt 5000
echo [string trimright [reg pc]]

# Halt'taki pc uart_hello'nun sonsuz dongusunde (0x1011a nop / 0x1011c nop /
# 0x1011e j 0x1011a): ayni adrese donanim breakpoint kur, resume -> dongu
# adrese geri gelince tetikleyici cekirdegi debug moduna sokar (dcsr.cause=2),
# pc == bp adresi olmali. Sonra breakpoint kaldirilir (rbp).
echo "== DEMO: breakpoint =="
set pc_line [string trimright [reg pc]]
echo $pc_line
regexp {0x[0-9a-fA-F]+} $pc_line bp_addr
echo "-- bp $bp_addr 4 hw --"
set bp_msg [string trimright [bp $bp_addr 4 hw]]
if {$bp_msg ne ""} { echo $bp_msg }
echo "-- resume + wait_halt (tetikleyici bekleniyor) --"
resume
wait_halt 5000
echo "-- breakpoint: pc (bp adresi $bp_addr beklenir) --"
echo [string trimright [reg pc]]
echo "-- rbp $bp_addr --"
rbp $bp_addr

# reset halt: OpenOCD dmcontrol.ndmreset=1 + haltreq=1 -> ndmreset=0 (haltreq
# kalir) -> allhalted -> ackhavereset. sys_rst_n = rst_ni & ~ndmreset ile
# cekirdek, bus, cevre birimleri ve SRAM sarmalayicilari resetlenir; cekirdek
# reset vektorunde halt: pc == 0x00010000. resume ile firmware bastan kosar
# (UART selamlamasi ikinci kez, sim.log), sonra halt: pc yine 0x0001xxxx.
echo "== DEMO: reset halt =="
echo "-- reset halt (ndmreset + haltreq) --"
reset halt
wait_halt 5000
echo "-- reset vektoru: pc (0x00010000 beklenir) --"
echo [string trimright [reg pc]]
echo "-- resume, 300 ms kos (firmware bastan), halt --"
resume
sleep 300
halt
wait_halt 5000
echo "-- firmware yeniden kosuyor: pc (0x0001xxxx beklenir) --"
echo [string trimright [reg pc]]

echo "== DEMO: done =="
shutdown
