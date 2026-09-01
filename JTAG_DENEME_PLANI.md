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

## Sunum cercevesi
Ister matrisinde JTAG isareti degismez (yok / opsiyonel / beyanli).
Basari halinde yalniz "Gelecek Calisma" slayti + soru-cevap karti:
"Sartnamede opsiyonel; imzali tasarimi yeniden acmamak icin cipe
koymadik. Entegrasyonu ayri dalda prototipledik - OpenOCD demosu
calisir durumda, logu depoda. FC-1 duzeltmesiyle birlikte sonraki
revizyona planli."
