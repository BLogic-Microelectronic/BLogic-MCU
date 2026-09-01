# DDK Written Decisions and Errata — Those Affecting the Submission

This file carries the full text of the DDK announcements cited as
rationale in `asic/README.md`, so that the citations can be verified
from within the repository. Source: the official Google Groups list of
the "2026 ÇİP TASARIM YARIŞMASI" (EN: 2026 Chip Design Competition).
The texts are reproduced without modification (relevant parts only).

---

## 1. Errata — filelist.f Path Resolution (17 August 2026, 11:47)

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

(EN: Relevant Sections: Section 4 and Section 9.4. The statements about
the path base of asic/filelist.f are inconsistent. For evaluation
purposes, all paths defined in asic/filelist.f will be resolved relative
to the asic/ directory, and the flow will be assumed to be launched from
that directory. Therefore, the statement in Section 9.4 requiring paths
to be defined relative to the Git repository root directory must be
disregarded. This clarification overrides the conflicting statement in
Section 9.4.)

**Impact on our submission:** none — our `filelist.f` paths have been
`asic/`-based from the start (`../rtl/...`); see README 9.4.

---

## 2. Area Scoring (17 August 2026, 11:35 — Q&A)

> Die/core area is an implementation metric that should be reported;
> however, it does not have a separate scoring weight relative to timing
> or signoff requirements unless explicitly stated in the scoring criteria.
>
> Therefore, teams are not expected to optimize area according to an
> additional, undisclosed weighting. The mandatory implementation, timing,
> and signoff requirements defined in the competition documents remain the
> basis of the evaluation.

**Impact on our submission:** confirms the framing of our
channel-widening decision (routing DRC 1348 → 0 in exchange for die
+12.2%); see README 9.7.

---

## 3. Liberty Corner Substitution for Pre-Approved SRAM Macros (17 August 2026, 11:35)

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

**Impact on our submission:** our approach is fully consistent with this
decision; in addition, the 2.661×/0.5× derate we apply is extra
pessimism that the decision *does not require*. Details: README 9.5
and 9.6.

---

## 4. Contextual Decision — Magic/SRAM Incompatibility (17 August 2026, 11:16)

Response given to another team's OpenRAM-SRAM question; in our flow the
Magic steps **are completed** and we do not need this decision, but it
is put on record because it documents the DDK's approach to
macro-induced tool incompatibilities:

> SRAM makrosuna özgü Magic uyumsuzluğu nedeniyle ilgili adımların
> tamamlanamaması kabul edilebilir; ancak bunun SRAM makrosundan
> kaynaklandığının gösterilmesi ve tasarımın geri kalan fiziksel
> doğrulamalarının tamamlanması gerekir.

(EN: Inability to complete the relevant steps due to a Magic
incompatibility specific to the SRAM macro is acceptable; however, it
must be shown that this stems from the SRAM macro, and the remaining
physical verifications of the design must be completed.)

**Impact on our submission:** the "show the source" principle is the
rationale for the method followed in classifying our Magic `nwell.4`
finding by measurement (README 9.9/4 and `scripts/tap_analiz.py`).

---

## 5. AI Accelerator 30 kB Memory Capacity (18 August 2026, 16:55)

> Şartnamede belirtilen 30 kB değeri maksimum bellek sınırı değil, YZ
> hızlandırıcısı için sağlanması beklenen bellek kapasitesidir.
> Tasarımınızın işlevsel olarak daha düşük bellek kapasitesiyle
> çalışabilmesi durumunda belleğin tamamının aktif olarak kullanılması
> zorunlu değildir; ancak hızlandırıcı için toplam 30 kB bellek
> kapasitesinin tasarımda sağlanması beklenmektedir.

(EN: The 30 kB value stated in the specification is not a maximum memory
limit but the memory capacity expected to be provided for the AI
accelerator. If your design can operate functionally with a lower memory
capacity, actively using the entire memory is not mandatory; however, a
total memory capacity of 30 kB for the accelerator is expected to be
provided in the design.)

**Impact on our submission:** our AI SRAM region is exactly 30 KB —
fully consistent with the decision. The statement "active use of the
entirety is not mandatory" supports our declaration that the buffers
inside the accelerator are an off-budget pipeline copy (verification
plan §15).

---

## 6. Contextual Decision — Known DRC Violations in OpenRAM SRAM Macros (18 August 2026, 16:50)

Response given to another team's OpenRAM question; since we do not use
OpenRAM it is not directly binding, but it is put on record because it
puts the DDK's tool-exception evidence framework in writing:

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

(EN: In this scope, if it is shown that the violations in question stem
solely from the SRAM macro's bitcell structure or from known limitations
of the DRC tool used, these violations alone will not be grounds for a
negative evaluation. However, it must be clearly shown and reported
which DRC rules the violations occur in, that the violations are
confined to the SRAM macro/bitcell region, and that they do not
originate from design, routing, PDN, or macro integration outside the
SRAM. [...] The DRC/LVS reports generated by OpenRAM must be delivered
unmodified, and the relevant violations and the references used must be
stated in asic/README.md.)

**Impact on our submission:** none directly — we use the pre-approved
SRAM macros, and our Magic `nwell.4` markers are not in the SRAM region
(measurement: 0 of 9,201 markers in the macro footprint). The
significance of the decision is that it establishes the evidence
framework: rule identity + region analysis + integration exclusion +
delivery of reports unmodified. README 9.9/4 meets this framework in
its entirety by measurement (`scripts/tap_analiz.py`; cross evidence:
on the same GDS, KLayout 0 across 257 rules, LVS 0/0).

---

## 7. Contextual Decision — Alternative Flash and Vendor-Specific Command Differences (18 August 2026, 16:33)

Response given to another team's Winbond W25Q128JV question:

> Flash belleğin üreticiye özgü komut setinden kaynaklanan farklılıklar,
> açıkça belgelenmesi koşuluyla kabul edilebilir. [...] Ancak QSPI Master
> tasarımınızın şartnamede belirtilen komutları, adresleme biçimlerini ve
> diğer zorunlu özellikleri desteklemeye devam etmesi beklenmektedir.

(EN: Differences arising from the flash memory's vendor-specific command
set are acceptable provided they are clearly documented. [...] However,
your QSPI Master design is still expected to continue supporting the
commands, addressing formats, and other mandatory features specified in
the specification.)

**Impact on our submission:** none — the flash on the Genesys 2 is from
the reference family (Spansion S25FL256S). The decision's principle
("a documented deviation is acceptable") is the same principle our UART0
RX FIFO declaration rests on (README 9.9 and
`docs/oznitelik_vektoru_formati.md`).

<!-- English translation of DDK_KARARLARI.md, 2026-09-01; numeric values converted from Turkish to English number format. -->
