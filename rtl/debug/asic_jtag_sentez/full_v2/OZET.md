# JTAG tam akis v2 (yazmacli axi_dm_slave) - VM1, 3 Eylul 2026

Kosu: `scripts/vm_jtag_asic.sh STEPS="full fullozet"`, LibreLane 3.0.6 Classic, sky130A,
teslim `asic/config.yaml` ayarlari birebir + `JTAG_DEBUG` + `design_jtag.sdc`.
Sure 216 dk (v1: 215 dk), 80/80 asama, cikis kodu 2 = teslim kosusuyla AYNI ertelenmis
hata (hold ihlalleri). Kanit dosyalari bu dizinde; v1 (kombinasyonel kopru) bir ust
dizinde (`../full/`), VM'de `build/asic_jtag/full/run_v1_kombinasyonel/`.

## Uretilebilirlik signoff

| | teslim | v1 | v2 |
|---|---|---|---|
| Route DRC | 0 | 0 | 0 |
| KLayout DRC | 0 | 0 | 0 |
| Magic DRC (makro yanlis pozitifi, README 9.9) | 9201 | 9201 | 9201 |
| LVS hata / cihaz / net farki | 0 | 0 | 0 |
| XOR farki | 0 | 0 | 0 |
| Anten ihlalli net | 0 | 1 | **0** |

## Zamanlama (post-PnR STA, 3 kose)

| | teslim | v1 | v2 |
|---|---|---|---|
| TT setup WNS | +2,210 | +2,303 | +1,060 |
| SS setup WNS | -9,083 | -11,983 | **-10,262** |
| FF setup WNS | +4,375 | +4,390 | +3,628 |
| SS setup TNS | -10.640 | -14.320 | -12.190 |
| TT / SS / FF hold WNS | -0,323 / +0,227 / -0,382 | -0,611 / -0,381 / -0,539 | -0,749 / -0,822 / -0,602 |
| SS setup ihlalli yolda DM/JTAG payi | - | 140 / 1000 | **0 / 1000** |
| hold ihlalli ucta DM/JTAG payi | - | 0 | **0** |

Yorum: istek yazmaci amacina ulasti - DM/DTM uclari hem setup hem hold kritik
kumesinden TAMAMEN cikti, anten ihlali de kapandi. SS'te en kotu yol artik
cekirdegin kendi ALU/bolucu yolu (`id_stage -> ex_stage.alu_i.alu_div_i -> id_stage`),
teslimde ayni yol -8,26 ns.

## Marj nereye gitti (3 Eylul olcumu - bu dosyanin ILK SURUMUNDEKI TESHIS YANLISTI)

Ilk aciklama "+1.213 FF ile CTS daha derin kuruluyor" diyordu. Kosu verisi bunu
CURUTUYOR:
  * TritonCTS'in kendi raporu (CTS-0102 Path depth) derinlik ARTISI GOSTERMIYOR:
    clk_i_regs teslimde 7-8, v2'de 6-7 (yani bir seviye DAHA SIG).
  * v1, teslime gore 1.176 sink EKLEDIGI halde daha sig bir firlatma dali ve
    teslimden bir tik IYI TT marji (+2,303 vs +2,210) uretti.
  * "SS carpikligi -2,58 -> +3,58" karsilastirmasi ELMA-ARMUTTU: iki sayi ayri
    yazmac ciftlerinden geliyor. Global SS carpikligi 4,028 -> 4,401 ns.

Gecerli olan iki bulgu (ve siradaki isin hedefi):

1) KRITIK YOLDA firlatma saati uzadi, ama derinlikten degil YERLESIM piyangosundan.
   1,150 ns'lik TT kaybinin 0,836 ns'si (%72,7) firlatma tarafi saat gecikmesi;
   kalani 0,266 ns SRAM sonrasi mantik + 0,067 ns makro CLK->Q. Netlist degisince
   CPU saat-kapisi tamponu tasindi, farkli bir ust dala dustu ve 8'li clkbuf_16
   gecikme-dengeleme zinciri (delaybuf_26..33) CPU dalindan KOMUT-SRAM dalina
   gecti - tek basina 1,091 ns. Firlatma/yakalama ortak yolu da 3 kademeden
   1 kademeye indi.
2) KAYIP CTS'TE DEGIL RESIZER'DA olusuyor. CTS cikisinda v2 teslimden IYI
   (TT +0,694 vs +0,252; global carpiklik esit). Sonra CTS-sonrasi resizer
   teslime +2,483 ns kazandirirken v2'ye yalniz +1,231 ns kazandiriyor. Muhtemel
   neden kose butcelemesi: RSZ_CORNERS ucunu de kapsiyor ve v2'nin SS'i v1'den
   1,72 ns IYI (-10,262 vs -11,983) iken TT'si 1,24 ns kotu - resizer 20 ns
   periyotta zaten kapanamayan SS kosesine caba harciyor.

Yani marj RTL'den degil CTS/resizer ayarlarindan geri kazanilabilir gorunuyor;
varyant taramasi bunu kanitlamanin yolu. Teslim tasarimi bundan etkilenmez
(ayri kosu, ayri dal).

## Alan / guc

| | teslim | v1 | v2 |
|---|---|---|---|
| std-cell adet | 296.005 | 309.985 | 310.754 |
| std-cell alan | 1,249 mm2 | 1,337 mm2 | 1,347 mm2 |
| FF hucre | 8.920 | 10.094 | 10.133 |
| Doluluk (makro dahil) | %49,87 | %50,36 | %50,42 |
| Guc (TT) | 118,3 mW | 123,2 mW | 123,9 mW |
| IR-drop en kotu | 1,54 mV | 2,35 mV | 2,92 mV (1,8 V'un %0,16'si) |

Yazmac katmani v1'e gore yalnizca +769 std-cell (+39 FF) getirdi; JTAG revizyonunun
toplam bedeli teslime gore +%5,0 std-cell / +%7,9 std-cell alani, 18,77 mm2 die'da
~%0,5 alan.
