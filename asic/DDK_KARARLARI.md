# DDK Yazılı Kararları ve Errata — Teslimi Etkileyenler

Bu dosya, `asic/README.md` içinde gerekçe olarak atıf yapılan DDK
duyurularının tam metnini taşır; böylece atıflar depo içinden
doğrulanabilir. Kaynak: "2026 ÇİP TASARIM YARIŞMASI" resmi Google Groups
listesi. Metinler değiştirilmeden aktarılmıştır (yalnızca ilgili kısımlar).

---

## 1. Errata — filelist.f Yol Çözümlemesi (17 Ağustos 2026, 11:47)

> **İlgili Bölümler: Bölüm 4 ve Bölüm 9.4**
>
> asic/filelist.f dosyasının yol bazına ilişkin ifadeler tutarsızdır.
>
> Değerlendirme amacıyla, asic/filelist.f içinde tanımlanan tüm yollar
> asic/ dizinine göre çözümlenecek ve akışın bu dizin üzerinden
> başlatıldığı varsayılacaktır.
>
> Bu nedenle, Bölüm 9.4'te yolların Git repository kök dizinine göre
> tanımlanması gerektiğini belirten ifade dikkate alınmamalıdır.
>
> Bu açıklama, Bölüm 9.4'teki çelişkili ifadeyi geçersiz kılar.

**Teslimimize etkisi:** yok — `filelist.f` yollarımız baştan beri `asic/`
tabanlıdır (`../rtl/...`); bkz. README 9.4.

---

## 2. Alan Puanlaması (17 Ağustos 2026, 11:35 — soru-cevap)

> Die/core area is an implementation metric that should be reported;
> however, it does not have a separate scoring weight relative to timing
> or signoff requirements unless explicitly stated in the scoring criteria.
>
> Therefore, teams are not expected to optimize area according to an
> additional, undisclosed weighting. The mandatory implementation, timing,
> and signoff requirements defined in the competition documents remain the
> basis of the evaluation.

**Teslimimize etkisi:** kanal-genişletme kararımızın (die +%12,2 karşılığında
yönlendirme DRC 1348 → 0) çerçevesini doğrular; bkz. README 9.7.

---

## 3. Hazır SRAM Makroları için Liberty Köşe İkamesi (17 Ağustos 2026, 11:35)

> For the pre-approved SRAM macros, where only the provided TT_1p8V_25C
> Liberty model is available, this Liberty model may also be used as a
> documented substitution for the SRAM during the required SS and FF STA
> runs.
>
> The standard-cell libraries shall still use the corresponding required
> corner-specific Liberty models: TT STA: tt_025C_1v80 / SS STA:
> ss_100C_1v60 / FF STA: ff_n40C_1v95.
>
> For the SRAM macro, the provided TT_1p8V_25C Liberty may be used in all
> three analyses where a matching SRAM Liberty corner is unavailable. This
> substitution and the associated assumption shall be clearly documented in
> asic/README.md, as described in Sections 1.2 and 3.3.
>
> No modification or artificial scaling of the SRAM Liberty model is
> required for this purpose.

**Teslimimize etkisi:** yaklaşımımız bu kararla birebir uyumludur; ek olarak
uyguladığımız 2,661×/0,5× derate, kararın *gerekli görmediği* fazladan bir
kötümserliktir. Ayrıntı: README 9.5 ve 9.6.

---

## 4. Bağlamsal Karar — Magic/SRAM Uyumsuzluğu (17 Ağustos 2026, 11:16)

Başka bir takımın OpenRAM-SRAM sorusuna verilen yanıt; bizim akışımızda
Magic adımları **tamamlanmaktadır** ve bu karara ihtiyacımız yoktur, ancak
DDK'nin makro-kaynaklı araç uyumsuzluklarına yaklaşımını belgelediği için
kayda alınmıştır:

> SRAM makrosuna özgü Magic uyumsuzluğu nedeniyle ilgili adımların
> tamamlanamaması kabul edilebilir; ancak bunun SRAM makrosundan
> kaynaklandığının gösterilmesi ve tasarımın geri kalan fiziksel
> doğrulamalarının tamamlanması gerekir.

**Teslimimize etkisi:** "kaynağın gösterilmesi" ilkesi, Magic `nwell.4`
bulgumuzun ölçümle sınıflandırılmasında izlenen yöntemin gerekçesidir
(README 9.9/4 ve `scripts/tap_analiz.py`).

---

## 5. YZ Hızlandırıcısı 30 kB Bellek Kapasitesi (18 Ağustos 2026, 16:55)

> Şartnamede belirtilen 30 kB değeri maksimum bellek sınırı değil, YZ
> hızlandırıcısı için sağlanması beklenen bellek kapasitesidir.
> Tasarımınızın işlevsel olarak daha düşük bellek kapasitesiyle
> çalışabilmesi durumunda belleğin tamamının aktif olarak kullanılması
> zorunlu değildir; ancak hızlandırıcı için toplam 30 kB bellek
> kapasitesinin tasarımda sağlanması beklenmektedir.

**Teslimimize etkisi:** AI SRAM bölgemiz tam 30 KB — karar ile birebir
uyumlu. "Tamamının aktif kullanımı zorunlu değil" ifadesi, hızlandırıcı
içi tamponların bütçe dışı boru hattı kopyası olduğu beyanımızı
(doğrulama planı §15) destekler.

---

## 6. Bağlamsal Karar — OpenRAM SRAM Makrolarında Bilinen DRC İhlalleri (18 Ağustos 2026, 16:50)

Başka bir takımın OpenRAM sorusuna verilen yanıt; OpenRAM kullanmadığımız
için doğrudan bağlayıcı değildir, ancak DDK'nin araç-istisnası kanıt
çerçevesini yazılı hâle getirdiği için kayda alınmıştır:

> Bu kapsamda, söz konusu ihlallerin yalnızca SRAM makrosunun bitcell
> yapısından veya kullanılan DRC aracının bilinen sınırlamalarından
> kaynaklandığının gösterilmesi hâlinde, bu ihlaller tek başına olumsuz
> değerlendirme nedeni olmayacaktır.
>
> Ancak; ihlallerin hangi DRC kurallarında oluştuğu, ihlallerin SRAM
> makrosu/bitcell bölgesiyle sınırlı olduğu, SRAM dışındaki tasarım,
> routing, PDN veya macro entegrasyonundan kaynaklanmadığı açıkça
> gösterilmeli ve raporlanmalıdır. [...] OpenRAM tarafından oluşturulan
> DRC/LVS raporları değiştirilmeden teslim edilmeli ve ilgili ihlaller
> ile kullanılan referanslar asic/README.md içerisinde belirtilmelidir.

**Teslimimize etkisi:** doğrudan yok — hazır onaylı SRAM makrolarını
kullanıyoruz ve Magic `nwell.4` işaretlerimiz SRAM bölgesinde değildir
(ölçüm: 9.201 işaretin 0'ı makro ayak izinde). Kararın önemi, kanıt
çerçevesini belirlemesidir: kural kimliği + bölge analizi + entegrasyon
dışlaması + raporların değiştirilmeden teslimi. README 9.9/4 bu
çerçevenin tamamını ölçümle karşılar (`scripts/tap_analiz.py`; çapraz
kanıt: aynı GDS'te KLayout 257 kuralda 0, LVS 0/0).

---

## 7. Bağlamsal Karar — Alternatif Flash ve Üreticiye Özgü Komut Farkları (18 Ağustos 2026, 16:33)

Başka bir takımın Winbond W25Q128JV sorusuna verilen yanıt:

> Flash belleğin üreticiye özgü komut setinden kaynaklanan farklılıklar,
> açıkça belgelenmesi koşuluyla kabul edilebilir. [...] Ancak QSPI Master
> tasarımınızın şartnamede belirtilen komutları, adresleme biçimlerini ve
> diğer zorunlu özellikleri desteklemeye devam etmesi beklenmektedir.

**Teslimimize etkisi:** yok — Genesys 2 üzerindeki flash referans
ailedendir (Spansion S25FL256S). Kararın ilkesi ("belgelenmiş sapma
kabul edilir"), UART0 RX FIFO beyanımızın dayandığı ilkeyle aynıdır
(README 9.9 ve `docs/oznitelik_vektoru_formati.md`).
