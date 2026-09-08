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

---

## 8. Definition of the Verified Operating Frequency (8 September 2026, Google Groups "2026 ÇİP TASARIM YARIŞMASI" - public reply to another team's question of 15:45; ruling of general applicability)

> SDC içerisinde tanımlanan saat periyodu/frekansı tasarımın hedef çalışma
> frekansını ifade eder. Ancak yalnızca SDC içerisinde daha yüksek bir
> frekans tanımlanmış olması, tasarımın bu frekansta zamanlamayı kapattığı
> anlamına gelmez. Zamanlama değerlendirmesinde, yarışmada zorunlu olarak
> belirtilen signoff PVT corner'larında, parazitik çıkarım sonrasında elde
> edilen nihai Post-PnR statik zamanlama analizi sonuçları esas alınacaktır.
> Dolayısıyla bir çalışma frekansının zamanlama
> açısından başarıyla elde edilmiş kabul edilebilmesi için ilgili saat
> kısıtı altında zorunlu signoff corner'larında setup ve hold zamanlamasının
> kapanması beklenir. Negatif setup slack bulunan bir frekans, yalnızca
> hedeflenen frekanstır; zamanlaması doğrulanmış çalışma frekansı olarak
> değerlendirilmez. [...] DRC, LVS, anten, zamanlama ve diğer signoff
> sonuçları ise değerlendirmede birlikte dikkate alınmaktadır. Bu
> kontrollerden birinde ihlal bulunması tasarımı otomatik olarak geçersiz
> hâle getirmez; ancak ilgili değerlendirme kalemini ve genel tasarım
> kalitesi değerlendirmesini etkileyebilir.

(EN: The clock period/frequency defined in the SDC expresses the design's
target operating frequency. Merely defining a higher frequency in the SDC
does not mean the design closes timing at that frequency. The timing
evaluation is based on the final post-PnR static timing analysis after
parasitic extraction in the mandatory signoff PVT corners. For an
operating frequency to be accepted as achieved, setup and hold timing must
close in the mandatory signoff corners under that clock constraint. A
frequency with negative setup slack is only the targeted frequency; it is
not evaluated as a timing-verified operating frequency. [...] DRC, LVS,
antenna, timing and the other signoff results are considered together; a
violation in one of them does not automatically invalidate the design, but
it can affect that evaluation item and the overall quality assessment.)

**Impact on our submission:** this is the decision that bears directly on
our section 9.1 declaration. Our SDC target is 50 MHz (`design.sdc`
`create_clock -period 20.000`; `config.yaml` CLOCK_PERIOD = 20). Setup
closes in TT (+1.684 ns) and FF (+4.010 ns) but not in SS (WS -10.537 ns,
2,219 paths); hold is negative in all three corners (TT -0.309 / SS -0.122 /
FF -0.290 ns; 87 / 5 / 142 paths, classified in 9.9/2). Under this
definition 50 MHz is our **targeted** frequency and, because hold does not
close anywhere, **no verified ASIC operating frequency is declared**; the
SS figure of ~32.7 MHz is reported only as that corner's setup-side limit.
No measured number changed; what changed on 8 September is the wording of
9.1, 9.11 and root README sections 11.5 / 13.7, which previously read
"50 MHz target met" for the TT corner. The FPGA prototype is verified at
50 MHz in the full sense (root README section 12.4).

---

## 9. Final Signoff DRC Must Be GDS-Based; XOR Does Not Replace the Magic DRC (8 September 2026 - public replies of 15:49 and 15:52 to two other teams' questions; the second-person wording and the "[...]" in the first quote refer to that team's LEF+DEF result; rulings of general applicability)

> LEF+DEF üzerinden elde ettiğiniz [...] sonuç ve buna ilişkin tapcell pitch
> analizi, problemin kaynağını açıklayan destekleyici bir analiz olarak
> sunulabilir. Ancak yarışma kapsamında nihai signoff DRC sonucu olarak GDS
> tabanlı kontroller esas alınmalıdır. Bu nedenle LEF+DEF üzerinden elde
> edilen sonuç nihai DRC sonucu yerine geçmez. SRAM makrolarının top-level
> DRC sırasında blackbox olarak ele alınması ise tek başına bir ihlal
> değildir. [...] SRAM, yarışmada sağlanan hazır ve onaylanmış SRAM
> makrolarından biri ise makronun kendi DRC/LVS kontrollerinin takım
> tarafından yeniden gerçekleştirilmesi zorunlu değildir. [...] DRC kural
> dosyalarının, PDK'nın veya kontrol eşiklerinin değiştirilmemesi ve
> kullanılan yöntemin/config değişikliklerinin README içerisinde açıkça
> belirtilmesi gerekmektedir.
>
> Magic ve KLayout tarafından üretilen GDSII dosyaları arasındaki XOR
> sonucunun Total XOR differences: 0 olması, iki GDSII görünümünün geometrik
> olarak birbiriyle uyumlu olduğunu göstermektedir. Bununla birlikte XOR
> kontrolü, Magic DRC kontrolünün yerine geçmez. Yarışma kapsamında Magic
> DRC ve KLayout DRC sonuçları ayrı fiziksel signoff çıktıları olarak
> değerlendirilmektedir.

(EN: A LEF+DEF-based result and its tapcell-pitch analysis may be presented
as supporting analysis explaining the source of a problem, but within the
competition the final signoff DRC result must be GDS-based; a LEF+DEF result
does not replace the final DRC. Treating SRAM macros as blackboxes during
top-level DRC is not in itself a violation; for the ready-made, approved SRAM
macros the team need not redo the macro's own DRC/LVS. DRC rule files, the
PDK and check thresholds must not be modified, and the method/config changes
used must be stated clearly in the README. A zero XOR between the Magic and
KLayout GDSII views shows geometric consistency but does not replace the
Magic DRC check; Magic DRC and KLayout DRC are evaluated as separate signoff
outputs.)

**Impact on our submission:** two wording corrections and one open item,
all recorded in 9.9/4 and 9.11.
- Our Magic DRC step ran with `MAGIC_DRC_USE_GDS: false`, i.e. on the DEF
  plus abstract cell views; the 9,201 `nwell.4` markers are that run's
  result. Under this decision it cannot be offered as the final DRC and is
  now labelled as the abstract-view result it is.
- The GDS-based signoff DRC of the delivery is the **KLayout run: 0 across
  257 rules on the streamed-out GDS**, covering the full geometry including
  the 27 pre-approved SRAM macros (no blackboxing was needed: the delivered
  GDS carries the full OpenRAM cell hierarchy and `resolved.json` sets no
  exclusion; the KLayout step log is not in the delivered set). The KLayout
  deck does not implement `nwell.4`, so its 0 is independent evidence for
  the other rules, not a verdict on the Magic markers (9.9/4). Netgen LVS is
  a real GDS extraction with 0 errors. The XOR row is kept but relabelled as
  a streamout consistency check.
- Open item, declared: a GDS-based Magic DRC of the same GDSII was not
  re-run before the freeze; the Final Deliverables rule that files come from
  the same LibreLane run and are not edited after the flow was given
  priority over a mixed-run report set.

---

## 10. FPGA and ASIC Need Not Share a Frequency; Performance per Implementation (8 September 2026 - public replies of 15:56 and 15:59 to another team's question; ruling of general applicability)

> FPGA prototipi ile ASIC fiziksel tasarımının aynı saat frekansında
> çalışması zorunlu değildir. [...] Her iki akışın da kendi çalışma
> frekansında ilgili zamanlama gereksinimlerini sağlaması ve kullanılan
> frekansların raporlarda açıkça belirtilmesi gerekmektedir. ASIC tarafında
> nihai çalışma frekansı değerlendirilirken, zorunlu signoff corner'larında
> parazitik çıkarım sonrası Post-PnR STA sonuçları esas alınmalıdır. YZ
> hızlandırıcı performansı raporlanırken de kullanılan frekans açıkça
> belirtilmelidir. Veri/saat döngüsü metriği ile veri/saniye metriği ayrı
> olarak verilmelidir. Veri/saniye hesabında hangi implementasyon
> değerlendiriliyorsa o implementasyonda doğrulanmış çalışma frekansı
> kullanılmalıdır. [...] FPGA ve ASIC arasındaki frekans farkının nedeni ve
> her iki akışta kullanılan saat kısıtları raporda kısaca açıklanmalıdır.

(EN: The FPGA prototype and the ASIC physical design need not run at the
same clock frequency. Each flow must meet its timing requirements at its
own frequency and the frequencies used must be stated clearly in the
reports; on the ASIC side the final operating frequency is judged on the
post-PnR STA after parasitic extraction in the mandatory signoff corners.
When reporting AI-accelerator performance the frequency used must be
stated; the data-per-clock-cycle and data-per-second metrics must be given
separately, and the data-per-second figure must use the verified operating
frequency of the implementation being evaluated. The reason for the
FPGA/ASIC frequency difference and the clock constraints of both flows
must be explained briefly in the report.)

**Impact on our submission:** both implementations target the same 50 MHz,
but only the FPGA verifies it (Vivado post-implementation: WNS +2.433 ns /
WHS +0.059 ns, 0 failing endpoints among 24,260 setup / 24,257 hold - root
README section 12.4). On the ASIC the same 50 MHz is a target (item 8). The
cycle count per inference (459,016; 459,065 measured on the board) is
identical in both implementations because the RTL is the same; the
inference/s figures are therefore given per implementation in root README
section 11.5 (FPGA at the verified 50 MHz; ASIC rows explicitly marked as
target / setup-limit figures, not verified-frequency figures), and the
implementation differences with the reason for the frequency gap (target
technology and PVT signoff, not design) are tabulated in root README
section 13.8.

<!-- English translation of DDK_KARARLARI.md, 2026-09-08; numeric values converted from Turkish to English number format. -->
