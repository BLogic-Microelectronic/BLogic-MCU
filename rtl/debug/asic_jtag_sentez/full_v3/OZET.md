# JTAG v3 tam akis - CTS ayarlariyla marj geri kazanimi (VM1, 3-4 Eylul 2026)

v2 (yazmacli `axi_dm_slave`) ile AYNI RTL; tek fark dort LibreLane ayari.
Kosu: `librelane build/asic_jtag/full/config.yaml --flow Classic` uzerine

    -c CTS_MACRO_CLUSTERING_MAX_DIAMETER=600
    -c CTS_MACRO_CLUSTERING_SIZE=2
    -c CTS_OBSTRUCTION_AWARE=true
    -c CTS_CLK_MAX_WIRE_LENGTH=900

Sure 3 sa 28 dk, 78/78 asama, cikis kodu 2 = teslim ve v2 ile AYNI ertelenmis
hata (hold ihlalleri). Teslim kosusuna ve v2 referansina DOKUNULMADI.

## Nereden cikti bu ayarlar

v2'nin TT marj kaybinin (%72,7'si firlatma tarafi saat gecikmesi) kok nedeni
olarak "gecikme-dengeleme zincirinin komut-SRAM dalina gecmesi" olculmustu.
12 varyantlik bir tarama yapildi (bkz. `varyant_taramasi.txt`), her varyant
ayni config + `-c ANAHTAR=DEGER` ile ayri kosu dizininde, adim 45'e kadar
(`--to OpenROAD.STAMidPNR-3`), altisar paralel.

Tarama SASIRTICI sonuc verdi: mekanizmayi dogrudan hedefleyen kol ISE YARAMADI.
`CTS_DELAY_BUFFER_DERATE_PCT` hem 50.0 hem 0.0 degeriyle v2 ile BIREBIR ayni
sonucu uretti (bayragin OpenROAD komut satirina gectigi `openroad-cts.log`
ile dogrulandi: `-delay_buffer_derate 0.5` / `0.0`). Ayni sekilde
`CTS_MAX_CAP` + `CTS_SINK_BUFFER_MAX_CAP_DERATE_PCT` etkisiz kaldi.
Resizer setup marjini 0.15'e cikarmak ZARARLI oldu (taban altina dustu).
`PL_TIMING_DRIVEN=true` OpenROAD'i 28. adimda cokertiyor (CRITICAL RSZ-2007).

Isi yapan sey makro saat alt-agacinin kumelenmesi oldu; engel-farkindali CTS
ve saat teli tavani ekleyince kazanan cikti. D ve B TOPLANMIYOR (ayri ayri
+0,431 ve +0,274, birlikte +0,469) - ikisi buyuk olcude ayni kusuru duzeltiyor.

Ilginc ayrinti: CTS CIKISINDA (adim 36) v2 ve v3 AYNI degeri veriyor (0,6936).
Fark bir sonraki adimda aciliyor (v2 1,925 / v3 2,523). Yani bu ayarlar CTS'in
urettigi agacin kendisini degil, o agacin resizer tarafindan NE KADAR IYI
ONARILABILDIGINI degistiriyor.

## Sonuc

| metrik | teslim | v2 | v3 |
|---|---|---|---|
| TT setup WS | +2,210 | +1,060 | **+1,684** |
| SS setup WS | -9,083 | -10,262 | -10,537 |
| FF setup WS | +4,375 | +3,628 | **+4,010** |
| TT hold WS | -0,323 | -0,749 | **-0,309** |
| SS hold WS | +0,227 | -0,822 | **-0,122** |
| FF hold WS | -0,382 | -0,602 | **-0,290** |
| TT hold TNS | -6,996 | -27,9 | **-8,36** |
| Route DRC / KLayout DRC | 0 / 0 | 0 / 0 | **0 / 0** |
| LVS / XOR / anten | 0 / 0 / 0 | 0 / 0 / 0 | **0 / 0 / 0** |
| Magic DRC (makro yanlis pozitifi) | 9201 | 9201 | 9201 |
| std-cell adet / alan | 296.005 / 1,249 mm2 | 310.754 / 1,347 | 310.531 / 1,343 |
| saat tamponu | 1.771 | 2.051 | 2.104 |
| Guc (TT) | 118,3 mW | 123,9 mW | 124,2 mW |
| IR-drop en kotu | 1,54 mV | 2,92 mV | **0,95 mV** |

KAZANIMLAR: TT setup kaybinin %54'u geri geldi (+0,623 ns). Hold UC KOSEDE DE
duzeldi ve TT'de teslim seviyesine dondu (-0,309 vs -0,323); FF'te teslimi bile
gecti. TT hold TNS -27,9'dan -8,36'ya indi. IR-drop teslimin bile altina indi.
Alan/guc pratikte degismedi (+53 saat tamponu, -223 std-cell).

BEDEL (durustce): SS setup 0,275 ns daha kotulesti (-10,262 -> -10,537) ve
SS setup ihlal listesine 48 JTAG ucu geri girdi (v2'de 0, v1'de 140). SS zaten
hicbir surumde kapanmayan kosedir (teslim -9,083; ~34,4 MHz) ve oradaki sinir
ALU konisinin mantik derinligidir, saat agaci degil - yani bu takas kabul
edilebilir gorunuyor, ama gizlenmemeli.

## Uyarilar

* Bu bir PROTOTIP dal sonucudur. Teslim tasarimi (main, RUN_teslim_2026-08-14)
  DEGISMEDI ve degismeyecek.
* Ayarlar teslim `asic/config.yaml`'a YAZILMADI; komut satirindan gecildi.
  Ileride kalici yapilacaksa once teslim RTL'iyle de bir kosu ile dogrulanmali
  (bu ayarlarin JTAG'siz tasarimda ayni kazanci verecegi OLCULMEDI).
* Adim 45 sıralamayi dogru verir ama buyuklugu ~%45 eksik raporlar; karar
  metrigi olarak kullanildi, nihai rakamlar adim 57'den alindi.
