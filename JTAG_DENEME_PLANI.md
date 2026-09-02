# deneme/jtag — Calisma Plani ve Koruma Raylari

Amac: riscv-dbg tabanli JTAG debug entegrasyonunun PROTOTIP dalda
gosterilmesi (OpenOCD halt/resume/register/bellek/breakpoint demosu).
Teslim edilen cipte JTAG YOKTUR ve bu dal o beyani DEGISTIRMEZ.

## Koruma raylari (ihlal edilemez)
1. Bu dal main'e MERGE EDILMEZ; teslim paketine tek dosya sizmaz.
2. `asic/` klasorune bu daldan da dokunulmaz (config, RTL listesi,
   reports, results, checksums dahil).
3. Butun kosular VM'lerde yapilir; yerel makinede asic akisi kosulmaz.
4. Her RTL degisikligi commit mesajinda gerekcesiyle raporlanir.

## Zaman kutusu (3 is gunu, go/no-go'lu)
- Gun 1: riscv-dbg vendor; `debug_req_i` + `dm_halt_addr_i` DM'e
  baglanir; crossbar'a DM slave bolgesi (progbuf-only, SBA YOK);
  temiz derleme + smoke sim.
- Gun 2: dmi_jtag TAP simulasyonu + OpenOCD remote_bitbang ile
  halt/resume/register okuma. GO/NO-GO: aksama halt/resume yoksa
  deneme kapatilir, sunuma donulur.
- Gun 3: bellek erisimi + breakpoint + demo log/goruntu; artan
  zamanla FPGA denemesi (bitstream YALNIZ Berk'in izniyle yazilir).
- Sunum kapisi: 6 Eylul'e kadar sunum bitmemisse deneme o gun durur.

## Dal kapsaminda onerilen uc ayri commit
1. JTAG entegrasyonu (go/no-go buna bagli).
2. FC-1 tek satir duzeltmesi: `ST_FC_FETCH_W_WAIT` boyunca `co_re`
   ayni adresle yeniden surulur (asic/README 9.5); kanit:
   `make asic-top-sim` FC argmax kontrolu acik, PASS.
3. `i2c_sda_i` girisine 2FF senkronizator (README 9.9/3 notu);
   kanit: `make i2c-sys`.

## Bu dalda YAPILMAYACAKLAR
- obi_to_axi'ye outstanding/pipeline (dogrulama yuku kutuyu patlatir)
- UART0'a RX FIFO (EK-2 sadakati bozulur)
- SS kosesi icin yeniden zamanlama (kose fizigi, RTL yamasi degil)
- io_oe yazmaclama (olcumle reddedilmis bilincli karar, 9.9/7)

## Durum gunlugu

### Gun 1 (2 Eylul 2026) - GO/NO-GO KAPISI ERKEN GECILDI
- riscv-dbg @ 21a5fbe + common_cells v1.38.0 (4 cdc dosyasi + basliklar) +
  tech_cells_generic v0.2.3 (tc_clk) vendor edildi: `rtl/debug/vendor/`,
  kaynak/pin/lisans kaydi `rtl/debug/VENDOR.md`, dosya listesi
  `rtl/debug/jtag_files.f` (soc_files.f DEGISMEDI).
- Entegrasyon tamamen `ifdef JTAG_DEBUG` altinda; define'siz `make sim`
  (uart_hello PASS) ve `make lint` (temiz) ile mevcut davranis dogrulandi.
  - `rtl/bus/soc_axi_interconnect.sv`: DM bolgesi 0x0004_0000 icin buyruk
    (3. AR bacagi + 3-yollu R mux) ve veri (AW/W/AR bacaklari, wr/rd_to_dm
    kayitli bayraklari) yollari; define yokken bayraklar sabit 0.
  - `rtl/debug/axi_dm_slave.sv` (yeni): iki AXI portunu dm_top'un tek bellek
    portuna tahkim eder (veri yazma > veri okuma > buyruk okuma), adresi
    son istekte tutar (dm_mem secicileri addr'i her cevrim ornekler).
  - `rtl/soc_top.sv`: jtag_tck/tms/tdi/trst_n/tdo portlari, dmi_jtag + dm_top,
    debug_req_i / dm_halt_addr (0x40800) / dm_exception_addr (0x40810),
    SBA hata ile tamamlanan tie-off (progbuf-only), IDCODE 0x0B1061C1.
- `make jtag-sim` (verif/tb/jtag_smoke_tb.sv, saf-SV bit-bang): ilk surum
  **5/5 PASS** (UART, IDCODE, DTMCS v1/abits 7, DMI->DM dmstatus v2,
  haltreq -> allhalted (1 poll) -> resumereq -> allresumeack+allrunning);
  10 protokol denetcisi 0 ihlal. Gun-2 go/no-go kriteri (halt/resume)
  boylece Gun 1'de saglandi.
- Dusman gozlu RTL incelemesi (3 mercek, 0 blocker): crossbar define'siz
  bit-aynilik `verilator -E` diff'iyle ISPATLANDI (12 satir fark, hepsi
  sabit-0 katlanir). Uyarilar uygulandi: axi_dm_slave yazmalari da
  rd_pending ile kapilar, AW/W kabulu atomik (ready kardes valid'e bagli),
  2 SVA sozlesme denetimi; crossbar DM penceresi yorumu 64 KB/16x alias
  olarak duzeltildi; dosya modu (755) geri alindi.
- TB **7 asamaya** cikarildi (incelemenin "ROM-disi DM yolu hic egzersiz
  edilmemis" uyarisi): halt'tayken abstract command ile x10 yaz/oku
  round-trip, progbuf ile DSRAM 0x2_1000'e `sw` + `lw` (x12 == yazilan),
  dpc firmware bolgesinde, cmderr==0; cekirdek tarafi `debug_halted_o` /
  `debug_running_o` / `pc_id` gozlemi. -> WhereTo/abstract_cmd/progbuf/data0
  sozcukleri buyruk+veri portlarindan gecer, DM<->DSRAM erisimleri araya girer.
- Ayni dalda, ayri commit'ler (scripts/commit_jtag_gun1.sh): FC-1 duzeltmesi
  (`make asic-top-sim` argmax kontrolu ACIK, PASS) ve `i2c_sda_i` 2FF
  senkronizatoru (`make i2c-sys` PASS + `i2c_soc_test` PASS; A/B farki yok).
- DPI fizibilitesi DOGRULANDI: Verilator 5.049 `--binary --timing` ile
  `import "DPI-C"` calisiyor (depo disi mini test, r=42). Tek kosul: Verilator
  `.c` dosyalarini g++ ile derledigi icin isimler bozuluyor (undefined
  reference) -> vendor `remote_bitbang.c` / `sim_jtag.c`, `extern "C"`
  sarmalayan bir `.cpp` uzerinden derlenmeli.
- Kalanlar (Gun 2-3): OpenOCD remote_bitbang DPI koprusu (SimJTAG +
  `rtl/debug/openocd/blogic_sim.cfg` hazir; DPI smoke gecti),
  abstract command ile GPR/bellek erisimi TB'de, ndmreset -> SoC reseti,
  istege bagli FPGA (bitstream yalniz Berk'in izniyle). OpenOCD WSL'de kurulu
  degil (`sudo apt install openocd`, 0.12 RISC-V destekli).

### Gun 2 (2 Eylul 2026) - OPENOCD UCDAN-UCA DEMO PASS
- Kopru: `rtl/debug/tb/jtag_dpi.cpp` (DPI-C, extern "C") vendor
  `remote_bitbang.c`'yi sarar; `jtag_tick` non-blocking (accept / recv
  MSG_DONTWAIT) -> OpenOCD bosta iken sim ilerler (firmware kosar, UART
  'Hello World from BLogic MCU!' 2.5 ms sim zamaninda). Vendor `sim_jtag.c`
  alinmadi: istemci baglanana ve her bayt gelene kadar mesgul-bekliyor.
  TB `verif/tb/jtag_openocd_tb.sv`: soc_top + SimJTAG (TCP 9999), UART cozucu,
  30 s sim-zamani bekci, 'Q' (shutdown) -> SimJTAG exit -> $finish.
  Derleme `make jtag-openocd-build` (obj_dir_jtag_ocd/jtag_openocd_sim; sim
  Mdir icinden kosulur, hex'ler oradan). Ham protokol sondasi
  `scripts/jtag_bitbang_probe.py` (IDCODE 0x0B1061C1 OK).
- Kosucu: `make jtag-openocd` -> `scripts/run_jtag_openocd.sh`: simi arka
  planda baslatir (binary yoksa once derler), port 9999'u bekler (<=60 s),
  `timeout 900 openocd -f blogic_sim.cfg -f demo_halt_regs_mem.tcl`, simin
  'Q' ile kendiliginden bitmesini bekler (<=30 s, yoksa oldurur), loglar
  `logs/jtag/sim.log` + `logs/jtag/openocd.log`, VERDICT PASS/FAIL (cikis
  0/1). Toplam ~18 s duvar saati (sim 119 ms sim zamani, ~6 ms/s).
- OpenOCD 0.12 demo (`rtl/debug/openocd/demo_halt_regs_mem.tcl`: halt,
  reg oku/yaz, progbuf ile bellek, resume/halt) sonucu **PASS**; kanit logu
  `rtl/debug/openocd/demo_run_2026-09-02.log` (openocd.log kopyasi):
  ```
  Info : JTAG tap: blogic.cpu tap/device found: 0x0b1061c1 (mfg: 0x0e0 (Truevision), part: 0xb106, ver: 0x0)
  Info : datacount=2 progbufsize=8
  Info :  hart 0: XLEN=32, misa=0x40001104
  == DEMO: registers ==
  pc (/32): 0x0001011e
  a0 (/32): 0x00000000
  -- a0 yaz 0x12345678 --
  a0 (/32): 0x12345678
  -- a0 geri oku --
  a0 (/32): 0x12345678
  == DEMO: memory (progbuf) ==
  0x00021000: cafef00d
  0x00021000: cafef00d 11223344
  == DEMO: resume/halt ==
  pc (/32): 0x0001011c
  == DEMO: done ==
  ```
  Yani: halt (cfg) -> pc/a0 oku -> a0 abstract command ile yaz + geri oku ->
  progbuf ile DSRAM 0x2_1000'e mww/mdw (SBA yok, cfg `set_mem_access progbuf`)
  -> resume, 200 ms sonra halt, pc uart_hello sonsuz dongusunde
  (0x1011c/0x1011e) -> shutdown. Gun-3'un "bellek erisimi" maddesi boylece
  OpenOCD uzerinden de saglandi; breakpoint ve FPGA kaldi.
- Ogrenilen: OpenOCD 0.12'de `-f` dosyasi icindeki `reg`/`mdw` ciktisi Tcl
  sonucu olarak toplanir, loga DUSMEZ (`-c "reg pc"` ust seviyede basilir);
  ilk kosuda isaretler vardi, degerler yoktu -> her cikti veren komut
  `echo [string trimright [reg pc]]` ile sarildi. ndmreset SoC resetine bagli
  degil: "reset"/"reset halt" degil "halt" (cfg ve tcl boyle).
- Not: `.gitignore`'a `!rtl/debug/openocd/demo_run_*.log` istisnasi eklendi;
  kanit logu normal `git add` ile izlenir (dal-ici degisiklik).
- Yeniden uretim (WSL, depo koku): `export PATH=/opt/riscv/bin:$PATH` ;
  `make jtag-openocd` (OpenOCD 0.12 + iproute2 `ss` + coreutils `timeout`
  gerekli). Elle: `cd obj_dir_jtag_ocd && ./jtag_openocd_sim` (terminal 1),
  `openocd -f rtl/debug/openocd/blogic_sim.cfg -f rtl/debug/openocd/demo_halt_regs_mem.tcl`
  (terminal 2).

### Gun 3 (2 Eylul 2026) - NDMRESET + BREAKPOINT: TB 9/9, OPENOCD DEMO PASS
- `rtl/soc_top.sv`: sistem reseti `sys_rst_n = rst_ni & ~ndmreset` (yalniz
  `ifdef JTAG_DEBUG`; define yokken `sys_rst_n = rst_ni`, mantik birebir).
  Cekirdek, obi_to_axi kopruleri, crossbar, axi_dm_slave, AXI-Lite kopru +
  periph_decoder, UART0/1, GPIO, timer, QSPI, I2C (+2FF senk.), YZ
  hizlandirici, ai_sram_arbiter, boot ROM, ISRAM/DSRAM/AI-SRAM sarmalayicilari
  ve protokol denetcileri sys_rst_n'de; dm_top + dmi_jtag rst_ni'de kalir
  (yoksa reset istegi kendini silerdi). ndmreset_ack_i = ndmreset_o. Sonuc:
  dmcontrol.ndmreset SoC'yi gercekten resetler, DM/TAP ayakta kalir, SRAM
  icerigi korunur (yalniz sarmalayici yazmaclari), firmware reset vektorunden
  (BOOT_ADDR 0x1_0000) yeniden kosar. `make lint` temiz.
- `make jtag-sim` **9/9 PASS** (verif/tb/jtag_smoke_tb.sv, NSTAGE=9; asama
  1-7 dokunulmadi):
  ```
  [8/9] STEP/TRIGGER OK: A=0x0001011a step->B=0x0001011c, trigger@A -> dpc=0x0001011a cause=2
  [9/9] NDMRESET OK: firmware bastan kostu, UART 'Hello World from BLogic MCU!' (2. kez), core running
  *** TEST SUCCESS *** JTAG: UART+IDCODE+DTMCS+DMI+halt+abstract/progbuf+resume+step/trigger+ndmreset (9/9)
  ```
  Asama 8: dcsr.step=1 + resume -> dpc=B, dcsr cause=4; tselect=0, tdata2=A,
  tdata1=0x2800104C yaz (geri okuma 0x28001044: u biti PULP_SECURE=0 ile
  WARL 0; TB type==2 + execute bitini denetler) -> resume -> dpc==A, cause=2
  (trigger), debug_halted_o=1; tdata1 execute=0 ile kapatilir. Asama 9: on
  kosul ackhavereset -> allhavereset=0 (riscv-dbg havereset_q DM resetinden
  ilk ack'e kadar 1'dir, onsuz kontrol bos gecerdi); ndmreset=1+haltreq=1 ->
  sys_rst_n=0, debug_halted_o=0; ndmreset=0 -> allhalted=1 allhavereset=1
  (1 poll) -> ackhavereset -> 0; dpc=0x00010000 == BOOT_ADDR, dcsr cause=3
  (haltreq); resume -> UART selamlamasi 2. kez, debug_running_o=1. 0 $error,
  protokol denetcileri 0 ihlal, sim 6 ms.
- OpenOCD demo genisletildi (`rtl/debug/openocd/demo_halt_regs_mem.tcl`;
  cfg'de yalniz yorum, init+halt ayni): `== DEMO: breakpoint ==` (halt'taki
  pc `regexp` ile yakalanir, `bp <pc> 4 hw`, resume, wait_halt, pc == bp
  adresi, rbp) ve `== DEMO: reset halt ==` (OpenOCD dmcontrol ndmreset+haltreq
  yazar, ndmreset'i birakip haltreq'i tutar, allhalted bekler, ackhavereset;
  pc == reset vektoru; resume 300 ms; halt; pc yine firmware dongusu).
  `make jtag-openocd` **PASS** ilk kosuda, 33 s duvar saati (sim 363 ms sim
  zamani, 11 ms/s); kanit `rtl/debug/openocd/demo_run_2026-09-02.log`
  (openocd.log kopyasi, ustune yazildi):
  ```
  == DEMO: breakpoint ==
  pc (/32): 0x0001011c
  -- bp 0x0001011c 4 hw --
  Info : [blogic.cpu] Found 1 triggers
  breakpoint set at 0x0001011c
  -- resume + wait_halt (tetikleyici bekleniyor) --
  -- breakpoint: pc (bp adresi 0x0001011c beklenir) --
  pc (/32): 0x0001011c
  -- rbp 0x0001011c --
  == DEMO: reset halt ==
  -- reset halt (ndmreset + haltreq) --
  Info : JTAG tap: blogic.cpu tap/device found: 0x0b1061c1 (mfg: 0x0e0 (Truevision), part: 0xb106, ver: 0x0)
  -- reset vektoru: pc (0x00010000 beklenir) --
  pc (/32): 0x00010000
  -- resume, 300 ms kos (firmware bastan), halt --
  -- firmware yeniden kosuyor: pc (0x0001xxxx beklenir) --
  pc (/32): 0x0001011a
  == DEMO: done ==
  ```
  sim.log: `[2514870000] UART: 'Hello World from BLogic MCU!'` ve reset
  sonrasi `[340359790000] UART: 'Hello World from BLogic MCU!'` (2. kez; TB
  `jtag_openocd_tb.sv` UART cozucusu 40 -> 58 karakter, eski "reset DEGIL"
  yorumu duzeltildi). Logda Error / "unexpectedly reset" yok.
- OpenOCD 0.12 gozlemi: `bp ... hw` tetikleyiciyi tselect/tdata1
  numaralandirmasiyla ("Found 1 triggers") kurar; tdata1 yaz-geri-oku esitligi
  saglanir (misa'da U yok -> 0x28001044 = CV32E40P'nin sabit geri okuma
  deseni). pc == bp adresi iken `resume` once tetikleyiciyi kapatip tek adim
  atar, sonra acar (yerlesik davranis; dongu 0x1011a/1c/1e bir tur sonra ayni
  adrese gelir). `reset halt`: reset_config varsayilani none -> TAP TLR
  (IDCODE yeniden bulunur) + dmcontrol.ndmreset; havereset ack'ini OpenOCD
  kendisi yapar.
- Kosucu `scripts/run_jtag_openocd.sh` VERDICT 5 kriter (a0 0x12345678, mdw
  cafef00d, bp adresi == breakpoint sonrasi ilk pc, reset halt sonrasi ilk
  pc 0x00010000, done isareti); cikti:
  `VERDICT: PASS - a0 geri okuma 0x12345678, mdw cafef00d, hw breakpoint pc=0x0001011c == bp 0x0001011c, reset halt pc=0x00010000, '== DEMO: done =='`
- Yeniden uretim (WSL, depo koku): `export PATH=/opt/riscv/bin:$PATH` ;
  `make jtag-sim` (9/9) ; `make jtag-openocd-build` (RTL degisti: sys_rst_n) ;
  `make jtag-openocd` (PASS). Elle iki terminal akisi Gun 2 ile ayni.
- Kalan: FPGA denemesi (bitstream yalniz Berk'in izniyle). Not: Makefile
  `jtag-sim` recipe'sindeki "(7/7)" PASS metni ve `jtag-openocd-build`
  yorumundaki '"reset" DEGIL' notu eskidi (hedef govdelerine dokunulmadi,
  yalniz `make help` satirlari eklendi).

### Gun 3 - ek: sertlestirme, kapsama, test-all, sentez-elab hazirligi
- Sertlestirme: crossbar DM penceresi 64 KB -> 4 KB (`addr[15:12]==0`,
  0x0004_1000+ eskisi gibi varsayilan bacaklara duser); remote_bitbang sunucusu
  yalniz loopback'e baglanir (`jtag_dpi.cpp`: vendor include'undan once
  INADDR_ANY -> INADDR_LOOPBACK; `ss -ltn` -> `127.0.0.1:9999`). Ikisiyle
  `make jtag-sim` 9/9 ve `make jtag-openocd` (bp hw + reset halt) yeniden PASS;
  define'siz `make regression` 6/6 PASS (sys_rst_n + 4 KB dekod main
  davranisini degistirmedi).
- Kapsama (`make jtag-sim TBCOV=--coverage-line`, verif/jtag_cov_waivers.vlt ile
  TB enstrumantasyon disi - Verilator 5.049 fork/join+coverage C++ hatasi):
  satir kapsamasi axi_dm_slave 35/35 %100, soc_axi_interconnect 78/78 %100
  (DM bacaklari dahil), soc_top JTAG blogu 10/10 %100, dmi_cdc %100,
  debug_rom %100; vendor dm_mem %85, dmi_jtag_tap %82, dmi_jtag %75,
  dm_csrs %57 (cok-hart/SBA/hawindow yollari bu SoC'de kullanilmiyor).
- `make test-all`: `jtag-sim` her zaman, `jtag-openocd` yalniz openocd kuruluysa
  (yoksa ozet "SKIP (openocd yok)").
- Sentez-elab kontrolu (`scripts/jtag_elab_check.sh`): asic_elab.sh'in JTAG
  varyanti, SYNTHESIS + ASIC_SRAM_MACRO + JTAG_DEBUG, top soc_top, `asic/`
  yalniz okunur, cikti build/jtag_elab/. Yerel WSL'de yosys-slang eklentisi
  yok -> LibreLane ortamli VM'de kosulacak (koruma rayi 3 ile uyumlu).
- gdb demosu icin gdb-multiarch gerekli (kurulum sudo; /opt/riscv zincirinde
  gdb yok); OpenOCD zaten :3333'te gdb sunucusu aciyor.

## Sunum cercevesi
Ister matrisinde JTAG isareti degismez (yok / opsiyonel / beyanli).
Basari halinde yalniz "Gelecek Calisma" slayti + soru-cevap karti:
"Sartnamede opsiyonel; imzali tasarimi yeniden acmamak icin cipe
koymadik. Entegrasyonu ayri dalda prototipledik - OpenOCD demosu
calisir durumda, logu depoda. FC-1 duzeltmesiyle birlikte sonraki
revizyona planli."
