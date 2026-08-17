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
