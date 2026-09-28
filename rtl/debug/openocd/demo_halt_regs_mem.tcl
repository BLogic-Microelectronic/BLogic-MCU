# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# demo_halt_regs_mem.tcl  -  OpenOCD demo: halt / register / bellek / resume /
#                            donanim breakpoint / reset halt
# ============================================
# JTAG debug altsistemi, teslim cipinin parcasi (gelistirme gunlugu
# rtl/debug/JTAG_DENEME_PLANI.md, Gun 2-3). blogic_sim.cfg'den SONRA
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
# 3 Eylul eklentileri (bosluk G-09): step (dcsr.step), acik CSR erisimi
# (mstatus/misa), 8 sozcukluk blok okuma (abstractauto yolu), cevre birimi
# MMIO yazmasi (UART0 TDR), negatif watchpoint (veri tetikleyici yok) ve
# "reset run" (haltreq'siz ndmreset -> firmware kendiliginden kosar).
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

# --- G-09: donanim tek-adimi (dcsr.step). OpenOCD "step" komutu dcsr.step=1
# yazip resume eder; cekirdek TEK buyruk sonra debug moduna geri doner.
# Sikistirilmis buyruk bolgesinde pc +2 ilerler (uart_hello bosta dongusu).
echo "== DEMO: step =="
echo "-- step oncesi pc --"
echo [string trimright [reg pc]]
step
echo "-- step sonrasi pc (2 bayt ilerlemis olmali) --"
echo [string trimright [reg pc]]

# --- G-09: acik CSR erisimi (abstract komut -> csrr) ---
echo "== DEMO: CSR =="
echo [string trimright [reg mstatus]]
echo [string trimright [reg misa]]

echo "== DEMO: memory (progbuf) =="
mww 0x00021000 0xCAFEF00D
echo [string trimright [mdw 0x00021000]]
mww 0x00021004 0x11223344
echo [string trimright [mdw 0x00021000 2]]

# --- G-09: blok okuma. OpenOCD 1 sozcukten uzun progbuf okumalarinda
# abstractauto/autoexec yolunu kullanir (dm_csrs autoexecdata/autoexecprogbuf);
# tek sozcukluk mdw bu yolu hic uyarmiyordu.
echo "== DEMO: block memory (8 sozcuk) =="
for {set i 0} {$i < 8} {incr i} {
    mww [expr {0x00021000 + 4 * $i}] [expr {0xB10C0000 + $i}]
}
echo [string trimright [mdw 0x00021000 8]]

# --- G-09: cevre birimi MMIO. UART0 TDR = 0x4000_000C (sw/drivers/blogic_mcu.h).
# Cekirdek HALT'ta iken debugger'in yazdigi bayt yine de gonderilir -> sim.log.
echo "== DEMO: MMIO (UART0 TDR <- 0x41 'A') =="
mww 0x4000000C 0x41

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

# --- G-09 (negatif): CV32E40P'de TEK tetikleyici var ve yalniz EXECUTE adres
# eslesmesini destekler -> veri izleme noktasi (watchpoint) KURULAMAZ.
# Hata metni belgelenir; demo devam eder (bilinen sinir, README 10.10).
echo "== DEMO: watchpoint (negatif, veri tetikleyici YOK) =="
if {[catch {wp 0x00021000 4 w} wp_msg]} {
    echo "-- wp hata (beklenen): $wp_msg --"
} else {
    echo "-- wp kuruldu (beklenmiyordu): $wp_msg --"
    catch {rwp 0x00021000}
}

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

# --- G-09: haltreq'siz ndmreset ("reset run"): cekirdek resetten sonra
# DURMADAN kosar, firmware bastan baslar (sim.log'da UCUNCU selamlama).
echo "== DEMO: reset run =="
reset run
# 2000 ms duvar saati (once 500). Ucuncu selamlama resetten ~2,5 ms sim sonra
# gelir; 6 Eylul'deki run=0 FAIL'in asil nedeni bayat sim ikilisiydi (kosucu
# artik kaynak tarihlerine bakip yeniden derliyor, scripts/jtag_sim_stale.sh);
# bekleme yine de yavas makine icin marj olarak 2000 ms'ye cikarildi
# (>= 8 ms sim @ 4 ms/s).
sleep 2000
halt
wait_halt 5000
echo "-- reset run sonrasi pc (0x0001xxxx beklenir) --"
echo [string trimright [reg pc]]

echo "== DEMO: done =="
shutdown
