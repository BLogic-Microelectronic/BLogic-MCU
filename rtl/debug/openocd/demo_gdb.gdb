# ============================================
# Ostim BLogic Mikroelektronik
# demo_gdb.gdb  -  gdb demo: OpenOCD gdb sunucusu (:3333) uzerinden reset halt /
#                  breakpoint / tek adim / register / bellek / resume-halt
# ============================================
# JTAG debug altsistemi, teslim cipinin parcasi (gelistirme gunlugu
# rtl/debug/JTAG_DENEME_PLANI.md, Gun 3). blogic_sim.cfg init + halt
# yapip :3333'te gdb sunucusunu acmis olmali (kosucu: make jtag-gdb ->
# scripts/run_jtag_gdb.sh). Elle:
#   gdb-multiarch -batch -x rtl/debug/openocd/demo_gdb.gdb build/test.elf
# build/test.elf = uart_hello (Makefile.verilator sw, -O2, -g YOK) -> satir
# bilgisi olmadigi icin next/step degil stepi + x/i kullanilir. "break main"
# -g olmadan gdb'nin prolog sezgisiyle main+12'ye kayar; "break *main" sembol
# adresine (0x000100e8) kurar.
# Notlar:
#   - ISRAM (0x0001_xxxx) veri portundan YALNIZ yazilir (crossbar rd_dest'te
#     instr-SRAM secenegi yok; okuma DSRAM'e duser). Bu yuzden:
#     * trust-readonly-sections on: .text okumalari (x/i, breakpoint turu)
#       ELF'ten yapilir, hedeften degil;
#     * gdb_breakpoint_override hard: gdb'nin yazilim breakpoint'i (ebreak
#       yaz + eski buyrugu geri yaz) yerine donanim tetikleyicisi kullanilir;
#       yazilim breakpoint'i "eski buyrugu" DSRAM alias'indan okuyup geri
#       yazacagi icin ISRAM'i bozardi.
#   - gdb'nin riscv stepi'si yazilim tek-adimidir: sonraki pc'ye gecici
#     breakpoint koyup resume eder (vCont;s DEGIL). CV32E40P'de TEK tetikleyici
#     var -> stepi'den once breakpoint 1 silinir (delete 1); yoksa 2. tetikleyici
#     bulunamaz ("Cannot insert breakpoint 0").
#   - remote_bitbang + sim yavas (~11 ms sim/s): gdb'nin 2 s remotetimeout'u
#     "Ignoring packet error" uretir -> 120 s.
#   - monitor (reset halt / halt) sonrasi gdb register onbellegi bayatlar ->
#     "maintenance flush register-cache".
#   - print/x sifir doldurmaz (0xbadcafe); print/z ve printf %08x doldurur.
#   - Isaret satirlari ("== GDB: ... ==", "pc = 0x...") run_jtag_gdb.sh
#     VERDICT'inin ayristirdigi sabit metinlerdir; degistirirken kosucuyu guncelle.
#   - Sonda gdb yalniz "disconnect" + "quit" yapar (Python YOK, bkz. dosya sonu).
#     OpenOCD'yi kosucu telnet :4444 'shutdown' ile kapatir; o da remote_bitbang
#     'Q' gonderir -> SimJTAG exit -> sim biter.

set pagination off
set confirm off
set architecture riscv:rv32
set trust-readonly-sections on
set remotetimeout 120

echo == GDB: connect (target extended-remote :3333) ==\n
target extended-remote :3333
monitor gdb_breakpoint_override hard

echo == GDB: reset halt (pc 0x00010000 beklenir) ==\n
monitor reset halt
maintenance flush register-cache
info registers pc
printf "pc = 0x%08x\n", $pc

echo == GDB: break *main + continue (main 0x000100e8 beklenir) ==\n
break *main
continue
info registers pc ra sp a0
printf "pc = 0x%08x\n", $pc

echo == GDB: x/8i $pc (kod ELF .text'ten; ISRAM veri portundan okunamaz) ==\n
x/8i $pc
echo -- ayni adres hedeften (progbuf lw): DSRAM alias, kod DEGIL --\n
monitor mdw 0x000100e8 2

echo == GDB: delete 1 (tek donanim tetikleyicisi stepi icin bosaltilir) ==\n
delete 1
echo == GDB: stepi x3 ==\n
stepi
stepi
stepi
info registers pc
printf "pc = 0x%08x\n", $pc
print/x $a0

echo == GDB: memory write/read 0x00021000 (gdb -> OpenOCD progbuf) ==\n
set {int}0x00021000 = 0x600DF00D
x/4xw 0x00021000

echo == GDB: a0 write/read ==\n
set $a0 = 0x0BADCAFE
print/x $a0
print/z $a0

echo == GDB: monitor resume / sleep 100 / halt ==\n
monitor resume
monitor sleep 100
monitor halt
maintenance flush register-cache
info registers pc
printf "pc = 0x%08x\n", $pc

echo == GDB: mstatus/misa (CSR abstract komutlari) ==\n
p/x $mstatus
p/x $misa

echo == GDB: done ==\n
# OpenOCD'yi gdb'den KAPATMIYORUZ. "monitor shutdown" qRcmd'ye
# ERROR_COMMAND_CLOSE_CONNECTION (-600 -> "EA8") ile cevap verir; gdb bunu
# "Protocol error with Rcmd: A8" diye hata sayar, -batch'te dosyayi keser ve
# cikis kodu 1 olur. Onceki surumde bu hata bir `python ... except` blogu ile
# yutuluyordu; ama bu ortamdaki gdb (xPack riscv 13.2) Python DESTEKLEMIYOR
# ("Scripting in the Python language is not supported"), dolayisiyla blok
# hicbir zaman kosmadi: gdb rc=1 ile bitti, OpenOCD acik kaldi ve kosucunun
# 30 s beklemesinden sonra SIGTERM ile olduruldu (rc=143). VERDICT yalniz log
# dizelerine baktigi icin bunu PASS gosteriyordu (bosluk G-06).
# Artik: gdb yalniz baglantiyi birakir; OpenOCD'yi kosucu (scripts/run_jtag_gdb.sh)
# telnet komut portundan "shutdown" ile kapatir -> gdb rc=0, openocd rc=0.
disconnect
quit
