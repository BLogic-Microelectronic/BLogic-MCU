# ============================================
# Ostim BLogic Mikroelektronik
# demo_halt_regs_mem.tcl  -  OpenOCD demo: halt / register / bellek / resume
# ============================================
# deneme/jtag dali (JTAG_DENEME_PLANI.md, Gun 2). blogic_sim.cfg'den SONRA
# calistirilir; o dosya init + halt yapmis olur:
#   openocd -f rtl/debug/openocd/blogic_sim.cfg -f rtl/debug/openocd/demo_halt_regs_mem.tcl
# (kosucu: make jtag-openocd -> scripts/run_jtag_openocd.sh, log logs/jtag/)
# Yalniz OpenOCD 0.12 riscv hedefinde gecerli komutlar kullanilir. Bellek
# erisimi program buffer uzerinden (cfg: riscv set_mem_access progbuf);
# 0x0002_1000 veri SRAM icinde, firmware .data/yigin bolgesi disinda.
# ndmreset SoC resetine bagli degil: "reset"/"reset halt" KULLANILMAZ, "halt".
# Sonda "shutdown": remote_bitbang 'Q' gonderir -> SimJTAG exit -> sim biter.
#
# NOT: OpenOCD 0.12'de -f ile kaynaklanan dosya icindeki komutlarin ciktisi
# (reg, mdw ...) Tcl sonucu olarak toplanir, loga DUSMEZ; -c "reg pc" ile
# ust seviyede kosunca basilir. Bu yuzden cikti veren her komut
# `echo [string trimright [...]]` ile sarilir (trimright: cift satir sonu).

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

echo "== DEMO: done =="
shutdown
