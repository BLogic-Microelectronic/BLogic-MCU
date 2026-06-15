#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ============================================
# Ostim BLogic Mikroelektronik
# write_dtr_21.py  -  2.1 Sistem Mimarisi bolumunu yazar
# ============================================
"""2.1 Sistem Mimarisi bölümünü BLogic_MCU_DTR_taslak_01.docx içine yazar."""
import docx
from docx.shared import Pt, RGBColor
from docx.enum.text import WD_ALIGN_PARAGRAPH
from docx.oxml.ns import qn
from docx.oxml import OxmlElement

SRC = 'BLogic_MCU_DTR_taslak_01.docx'
doc = docx.Document(SRC)

# yardımcılar
def _font(run, size, bold=False, italic=False):
    run.font.name = 'Calibri'
    run.font.size = Pt(size)
    run.bold = bold
    run.italic = italic

def make_para(text, size=11, bold=False, italic=False,
              sb=0, sa=6, justify=True):
    p = doc.add_paragraph(style='Normal')
    pf = p.paragraph_format
    pf.space_before = Pt(sb); pf.space_after = Pt(sa)
    if justify:
        p.alignment = WD_ALIGN_PARAGRAPH.JUSTIFY
    _font(p.add_run(text), size, bold, italic)
    return p

def make_heading(text):
    p = doc.add_paragraph(style='Normal')
    pf = p.paragraph_format
    pf.space_before = Pt(10); pf.space_after = Pt(3); pf.keep_with_next = True
    _font(p.add_run(text), 12, bold=True)
    return p

def make_img(label, desc):
    """Görsel yer-tutucu."""
    p = doc.add_paragraph(style='Normal')
    pf = p.paragraph_format; pf.space_before = Pt(6); pf.space_after = Pt(0)
    p.alignment = WD_ALIGN_PARAGRAPH.LEFT
    _font(p.add_run('[ ' + label + ' ]'), 11, bold=True)
    place(p)
    q = doc.add_paragraph(style='Normal')
    qf = q.paragraph_format; qf.space_before = Pt(0); qf.space_after = Pt(6)
    q.alignment = WD_ALIGN_PARAGRAPH.LEFT
    _font(q.add_run(desc), 10, italic=True)
    return q

def set_cell(cell, text, bold=False, size=10, shade=None):
    cell.text = ''
    p = cell.paragraphs[0]
    p.paragraph_format.space_before = Pt(1); p.paragraph_format.space_after = Pt(1)
    _font(p.add_run(text), size, bold)
    if shade:
        tcPr = cell._tc.get_or_add_tcPr()
        shd = OxmlElement('w:shd')
        shd.set(qn('w:val'), 'clear'); shd.set(qn('w:fill'), shade)
        tcPr.append(shd)

def _borders(table):
    tblPr = table._tbl.tblPr
    b = OxmlElement('w:tblBorders')
    for edge in ('top', 'left', 'bottom', 'right', 'insideH', 'insideV'):
        e = OxmlElement('w:' + edge)
        e.set(qn('w:val'), 'single'); e.set(qn('w:sz'), '4')
        e.set(qn('w:space'), '0'); e.set(qn('w:color'), '808080')
        b.append(e)
    tblPr.append(b)

def _width(table, pct=5000):
    tblPr = table._tbl.tblPr
    for ex in tblPr.findall(qn('w:tblW')):
        tblPr.remove(ex)
    w = OxmlElement('w:tblW'); w.set(qn('w:type'), 'pct'); w.set(qn('w:w'), str(pct))
    tblPr.append(w)

def make_table(headers, rows):
    t = doc.add_table(rows=1 + len(rows), cols=len(headers))
    _borders(t); _width(t); t.autofit = True
    for j, h in enumerate(headers):
        set_cell(t.rows[0].cells[j], h, bold=True, size=10, shade='D9D9D9')
    for i, row in enumerate(rows, start=1):
        for j, val in enumerate(row):
            set_cell(t.rows[i].cells[j], val, size=10)
    return t

# yerleştirme mekanizması
heading_p = None; placeholder = None
for p in doc.paragraphs:
    if p.style.name == 'Heading 2' and 'Sistem Mimarisi' in p.text:
        heading_p = p
    if p.text.strip().startswith('{Bu kısımda projenin nihai tasarımının blok'):
        placeholder = p
assert heading_p is not None, 'Heading bulunamadı'
assert placeholder is not None, 'Placeholder bulunamadı'

anchor = heading_p._element
def place(obj):
    global anchor
    el = obj._element
    anchor.addnext(el)
    anchor = el
    return obj

# içerik
place(make_para(
    "BLogic MCU, açık kaynaklı CV32E40P RISC-V çekirdeğini merkeze alan, uçta (edge) "
    "çalışan sesli komut tanıma uygulamalarına yönelik bütünleşik bir mikrodenetleyicidir. "
    "Sistem; tek çekirdek, iki katmanlı bir AXI veri yolu omurgası, tümüyle yonga-üzeri "
    "bellek alt sistemi, şartname EK-2 ile uyumlu çevre birimi takımı ve TFLite Micro Speech "
    "iş yükünü donanımda hızlandıran özgün bir yapay zekâ (YZ) hızlandırıcısı etrafında "
    "kurgulanmıştır. Bu bölümde tasarımın nihai blok mimarisi, şartname uyumluluğu, alt "
    "blokların görevleri, veri yolu ve adresleme şeması, açılış (boot) akışı, çevre birimi "
    "bağlantıları, yazılım/linker çalışmaları ve FPGA ile ASIC implementasyonları arasındaki "
    "farklar sistem düzeyinde ele alınmaktadır. Yazmaç seviyesindeki ayrıntılar ile "
    "çekirdek/hızlandırıcı iç mimarisi, ilerleyen 2.2-2.4 başlıklarında derinleştirilmektedir."))

# blok şeması
place(make_heading("Sistem Blok Şeması"))
make_img("GÖRSEL 1 - ZORUNLU - buraya eklenecek: Üst-seviye sistem blok şeması",
    "İçermesi gerekenler: CV32E40P çekirdeği ve iki ayrı OBI portu (buyruk + veri); her OBI "
    "portunun bir OBI->AXI köprüsüyle AXI4'e dönüşmesi; soc_axi_interconnect (2 master x 5 "
    "slave); slave tarafında Boot ROM, Buyruk SRAM, Veri SRAM, AI SRAM (arbiter üzerinden) ve "
    "çevre birimi portu; çevre portunun AXI4->AXI-Lite köprüsü ve periph_decoder üzerinden "
    "UART_0, GPIO, Timer, UART_1, I2C, QSPI, YZ-CSR'ye dağılması; YZ hızlandırıcı ile UART_1 "
    "veri-akışı bloklarının kendi AXI4 master'larıyla AI SRAM arbiterine bağlanması; "
    "timer/YZ/akış kesme hatlarının çekirdeğe geri dönmesi. (RTL kaynağı: rtl/soc_top.sv.)")
place(make_para(
    "Tasarımın omurgası, çekirdeğin yerel OBI arayüzünden başlayıp AXI4 ana veri yoluna ve "
    "oradan AXI4-Lite çevre veri yoluna uzanan iki katmanlı bir bağlantı hiyerarşisidir. Bütün "
    "AXI arayüzleri 32-bit adres / 32-bit veri / 4-bit ID genişliğindedir. Bellek alt sistemi "
    "tümüyle yonga üzerindedir ve tam 47 KB (48.128 bayt) kapasiteye sahiptir."))

# şartname uyumluluğu
place(make_heading("Şartname Uyumluluğu"))
place(make_para(
    "Tasarım, yarışma şartnamesinde tanımlanan asgari ve zorunlu gereksinimleri karşılayacak "
    "biçimde kurgulanmıştır. Aşağıdaki tablo, başlıca şartname gereksinimleri ile sistemdeki "
    "karşılıklarını özetlemektedir."))
place(make_table(
    ["Şartname gereksinimi", "BLogic MCU'daki karşılığı", "Durum"],
    [
     ["RISC-V çekirdek (CV32E40P)",
      "cv32e40p_top; RV32IMC; 4 aşamalı boru hattı; yalnız makine-modu", "✓ Entegre"],
     ["Zorunlu çevre birimleri ve EK-2 yazmaç düzenleri (UART, GPIO, Timer, I2C, QSPI)",
      "7 adet AXI4-Lite slave; EK-2 yazmaç haritasına uyumlu tasarım "
      "(bit-seviyesi doğrulama 2.2.2'de)", "✓ Entegre"],
     ["YZ hızlandırıcı - TFLite Micro Speech, INT8 nicemleme",
      "Conv2D + Tam-Bağlı + argmax; INT8 MAC; 4 sınıf", "✓ Gerçeklendi"],
     ["Flash'tan otonom önyükleme",
      "QSPI Boot ROM -> Buyruk SRAM kopyalama", "✓ Gerçeklendi"],
     ["Kesme altyapısı",
      "irq_i[31:0]; timer/YZ/akış hızlı-kesme hatları", "✓ Entegre"],
     ["EK-3 zorunlu SVA protokol monitörleri",
      "On arayüzde AXI-Lite/AXI4 protokol checker", "✓ Bağlandı"],
     ["DDK demo-testbench (Vivado 2021.2, UART 'hello world')",
      "teknotest senaryosu başarıyla geçti", "✓ Geçti"],
     ["YZ: altın referansa göre <%10 doğruluk sapması, >1x hızlanma",
      "Hedef; FPGA ölçümleriyle nicelendirilecek", "Hedef"],
    ]))

# alt bloklar
place(make_heading("Alt Bloklar ve Görevleri"))
place(make_table(
    ["Blok (RTL modülü)", "Görevi"],
    [
     ["Çekirdek (cv32e40p_top)",
      "RV32IMC komut kümeli, 4 aşamalı, makine-modu işlemci; ayrı buyruk ve veri OBI portları"],
     ["OBI->AXI köprüleri (obi_to_axi x2)",
      "Çekirdeğin OBI portlarını AXI4'e çevirir; buyruk köprüsü salt-okunur (ID 0), "
      "veri köprüsü tam R/W (ID 1)"],
     ["AXI çapraz-bağlama (soc_axi_interconnect)",
      "Elle yazılmış, adres-kod-çözmeli özgün AXI4 crossbar; 2 master'ı 5 slave'e yönlendirir"],
     ["AXI4->AXI-Lite köprüsü (axi4_to_axilite_bridge)",
      "Çevre portunu kombinasyonel (gecikmesiz) olarak AXI4-Lite'a indirger"],
     ["Çevre çözücü (periph_decoder)",
      "AXI-Lite tek girişi 7 çevre birimine dağıtır; tanımsız erişimde DECERR üretir"],
     ["Boot ROM / Buyruk SRAM / Veri SRAM / AI SRAM",
      "Sırasıyla 1 KB / 8 KB / 8 KB / 30 KB yonga-üzeri bellekler"],
     ["AI SRAM arbiteri (ai_sram_arbiter)",
      "AI SRAM'e 3 isteyiciyi tek porta çoğullar; öncelik YZ > veri-akışı > CPU"],
     ["UART_0 (uart_axil)", "Genel amaçlı seri haberleşme (konsol/komut)"],
     ["GPIO (gpio_axil)", "16 sabit giriş + 16 sabit çıkış hattı"],
     ["Timer (timer_axil)",
      "Prescaler'lı sayaç, otomatik yeniden-yükleme, seviye-tetiklemeli kesme"],
     ["UART_1 / veri-akışı (uart_stream_axil)",
      "RX baytlarını DMA ile doğrudan AI SRAM'e yazan özel akış birimi"],
     ["I2C Master (i2c_master_axil)", "400 kHz; push-pull SCL + açık-drain SDA"],
     ["QSPI Master (qspi_master_axil)",
      "x1/x2/x4 modları, 3/4-bayt adres; S25FL256S flash'tan boot"],
     ["YZ Hızlandırıcı (ai_accelerator)",
      "Conv2D + Tam-Bağlı + argmax; AXI-Lite CSR + kendi AXI4 master'ı"],
     ["SVA monitörleri (verif/sva/*)", "Yalnız doğrulama; sentezden çıkarılır (EK-3)"],
    ]))

# veri yolu / adresleme
place(make_heading("Veri Yolu (Bus) Mimarisi ve Adresleme"))
place(make_para(
    "Çekirdeğin buyruk ve veri OBI portları, iki ayrı obi_to_axi örneğiyle bağımsız iki AXI4 "
    "master'a dönüştürülür. Bu iki master, soc_axi_interconnect içinde saf adres-kod-çözme ile "
    "beş hedefe yönlendirilir; buyruk ve veri kanalları statik olarak ayrıştırıldığı için "
    "master'lar arasında çekişme (contention) oluşmaz. Çevre birimi portu, "
    "axi4_to_axilite_bridge ile AXI4-Lite'a indirgenir; ardından periph_decoder, adresin "
    "[11:8] alanına göre 0x100 baytlık pencerelerle 7 çevre birimini seçer. Haritalanmamış bir "
    "adrese erişimde çözücü, yanıt kodu olarak DECERR (2'b11) ve okuma verisinde 0xDEADBEEF "
    "üreterek hatayı yazılıma bildirir."))
place(make_para("Sistem bellek haritası:", bold=False, sa=2))
place(make_table(
    ["Bölge", "Taban adres", "Boyut", "Erişim", "İçerik"],
    [
     ["Boot ROM", "0x0000_0000", "1 KB", "Salt-okunur (fetch)", "bootrom.hex (bootloader)"],
     ["Buyruk (Instruction) SRAM", "0x0001_0000", "8 KB",
      "Fetch'ten okuma + bootloader yazması", "firmware.hex (uygulama kodu)"],
     ["Veri (Data) SRAM", "0x0002_0000", "8 KB", "Tam R/W (veri yolu)",
      ".rodata / .data / .bss / yığın"],
     ["AI SRAM", "0x0003_0000", "30 KB", "CPU + YZ + akış (arbiter)",
      "giriş / ağırlık / ara-çıktı"],
     ["Çevre birimleri", "0x4000_0000", "7 x 0x100", "AXI-Lite R/W", "UART_0 ... YZ-CSR"],
    ]))
place(make_para("Çevre birimi adres bloğu (taban 0x4000_0000, addr[11:8] ile seçim):",
                sb=4, sa=2))
place(make_table(
    ["Seçim (addr[11:8])", "Taban adres", "Birim"],
    [
     ["0x0", "0x4000_0000", "UART_0"],
     ["0x1", "0x4000_0100", "GPIO"],
     ["0x2", "0x4000_0200", "Timer"],
     ["0x3", "0x4000_0300", "UART_1 (veri-akışı / DMA)"],
     ["0x4", "0x4000_0400", "I2C Master"],
     ["0x5", "0x4000_0500", "QSPI Master"],
     ["0x6", "0x4000_0600", "YZ Hızlandırıcı CSR"],
    ]))
place(make_para(
    "Kesmeler tek bir vektörde paketlenip çekirdeğin irq_i girişine, hızlı-kesme "
    "(fast-interrupt) bölgesine bağlanır:", sb=4, sa=2))
place(make_table(
    ["irq_i biti", "Kaynak"],
    [
     ["16", "Timer (seviye-tetiklemeli)"],
     ["17", "YZ Hızlandırıcı (çıkarım tamamlandı)"],
     ["18", "UART_1 veri-akışı (DMA tamamlandı)"],
    ]))
make_img("GÖRSEL 2 - önerilen: Adres uzayı / bellek haritası görseli",
    "Yukarıdaki haritayı 0x0000_0000 -> 0x4000_0xxx ekseninde bir adres-bandı (bar) olarak "
    "görselleştirebilirsin. Tablo zaten yeterlidir; görsel raporu güçlendirir.")

# çevre birim bağlantıları
place(make_heading("Çevre Birimlerinin Bağlantı Detayları"))
place(make_para(
    "Yedi çevre birimi de aynı AXI4-Lite slave şablonunu kullanarak periph_decoder'ın arkasına "
    "bağlanır. İki birim ise klasik bir slave'in ötesine geçerek kendi AXI4 master "
    "arayüzlerine sahiptir: YZ hızlandırıcı, yapılandırmasını AXI-Lite CSR'den alırken "
    "ağırlık/aktivasyon verilerine kendi master'ıyla doğrudan AI SRAM'den erişir; UART_1 "
    "veri-akışı birimi ise RX hattından aldığı baytları little-endian biçiminde paketleyip DMA "
    "mekanizmasıyla doğrudan AI SRAM'e yazar. Bu iki master ile CPU'nun AI SRAM erişimi, "
    "ai_sram_arbiter tarafından YZ > veri-akışı > CPU öncelik sırasıyla çakışmasız "
    "paylaştırılır."))
place(make_para(
    "Dış dünya bağlantıları FPGA prototipinde şöyle haritalanır: UART_0 kart üzerindeki "
    "USB-UART (FT232) köprüsüne; UART_1 ve I2C, Pmod JA başlığına (I2C SDA açık-drain "
    "emülasyonuyla); QSPI, kart üzerindeki S25FL256S flash'a; GPIO ise LED, anahtar (switch) ve "
    "butonlara bağlanır. Çevre birimlerinin yazmaç seviyesindeki tasarım ayrıntıları "
    "2.2.2'de verilmektedir."))

# boot
place(make_heading("Boot Sekansı"))
place(make_para(
    "Sistem, enerji verildikten sonra dış müdahale gerektirmeden çalışmayı devralan otonom bir "
    "açılış akışına sahiptir:", sa=2))
for step in [
    "1) Reset sonrası çekirdek 0x0000_0000 adresinden, yani Boot ROM içindeki bootloader'dan "
    "getirmeye başlar.",
    "2) Bootloader QSPI Master'ı yapılandırır (taban 0x4000_0500), hedef olarak Buyruk SRAM'i "
    "(0x0001_0000) ve kaynak olarak flash ofset 0'ı, 2048 sözcük (8 KB) sayacıyla ayarlar.",
    "3) Gerçek kopyalamadan önce bir adet ısınma (warm-up) okuması yapar; bu, FPGA'da "
    "STARTUPE2/USRCCLKO yolunun konfigürasyon sonrası ilk birkaç bozuk saat kenarını soğurmak "
    "içindir.",
    "4) Kopyalama döngüsü: her sözcük için QSPI adres yazmacı yazılır, CCR=0x08030103 yazılarak "
    "işlem başlatılır (komut 0x03 READ, x1 tek-hat, 3-bayt adres, 4 veri baytı), durum "
    "yazmacının done biti beklenir, veri okunup Buyruk SRAM'e yazılır.",
    "5) 8 KB kopyalandıktan sonra fence.i ile buyruk önbelleği eşitlenir ve 0x0001_0000'a "
    "koşulsuz atlanır.",
    "6) Uygulamanın crt0.S başlangıç kodu yığını Veri SRAM tepesine (0x0002_2000) kurar, .bss "
    "bölgesini sıfırlar ve main() fonksiyonunu çağırır.",
]:
    place(make_para(step, sa=2))
place(make_para(
    "Boot faaliyetlerinin kod düzeyindeki ayrıntıları 2.3'te ele alınmaktadır.", sb=2))
make_img("GÖRSEL 3 - önerilen: Boot akış şeması (flowchart)",
    "Reset -> Boot ROM -> QSPI yapılandırma -> warm-up okuma -> kopyalama döngüsü "
    "(flash -> Buyruk SRAM) -> fence.i / jr 0x10000 -> crt0 -> main() kutucuklarıyla.")

# yazılım & linker
place(make_heading("Yazılım Çalışmaları ve Linker Script"))
place(make_para(
    "Yazılım tarafında üç ana çalışma yürütülmüştür. (i) Sürücüler: Tüm çevre birimleri için "
    "bellek-haritalı yazmaç yapıları ve taban adresleri sw/drivers/blogic_mcu.h içinde "
    "(UART_0 ... YZ-CSR), QSPI yardımcıları ise sw/drivers/qspi.h içinde tanımlanmıştır; sürücü "
    "taban adresleri RTL çözücüyle birebir tutarlıdır. (ii) Açılış ve çalışma-zamanı kodu: "
    "bootloader.S (Boot ROM), crt0.S (uygulama başlangıcı) ve derleme akışını üreten build.py "
    "(bootloader'ı RV32I olarak derleyip bootrom.hex üretir). (iii) Test ve altın-referans "
    "yazılımı: sw/tests/ altında UART, GPIO, I2C, QSPI mod, ISA uyumluluk ve micro-speech "
    "testleri; sw/ai_model/ altında ise hızlandırıcının doğruluğunu karşılaştırmak için "
    "altın-vektör üreteçleri yer alır. Uygulama kodu rv32imc hedefiyle derlenir."))
place(make_para("Linker script. Sistemde iki ayrı yerleştirme betiği kullanılır:", sa=2))
place(make_para(
    "•  bootloader.ld - tek bölge: BOOTROM (ORIGIN=0x0000_0000, LENGTH=4K); bootloader kodunu "
    "Boot ROM'a yerleştirir.", sa=2))
place(make_para(
    "•  link.ld - iki bölge: INST_RAM (0x0001_0000, 8K) ve DATA_RAM (0x0002_0000, 8K). .text "
    "Buyruk SRAM'e; .rodata, .data ve .bss Veri SRAM'e yerleştirilir; yığın tepesi "
    "_stack_top = 0x0002_2000 olarak hesaplanır.", sa=6))
place(make_para(
    "Burada mimariye özgü kritik bir karar vardır: .rodata bilerek Veri SRAM'e konur, Buyruk "
    "SRAM'e değil. Çünkü veri yolu çapraz-bağlaması, CPU veri portunun okuma kanalını yalnızca "
    "çevre / AI SRAM / Veri SRAM'e açar; Buyruk SRAM'e yazma (bootloader için) mümkün olsa da "
    "veri portundan okuma yolu yoktur. Dolayısıyla sabitlerin (.rodata) çekirdek tarafından "
    "okunabilmesi için Veri SRAM'e yerleştirilmesi zorunludur. Bu, donanım-yazılım birlikte "
    "tasarımının somut bir örneğidir."))

# fpga / asic
place(make_heading("FPGA ve ASIC İmplementasyon Farkları"))
place(make_para(
    "soc_top modülü kart-bağımsız, sentezlenebilir saf RTL'dir; FPGA'ya özgü tüm uyarlamalar "
    "ince bir sarmalayıcı olan fpga_top içinde toplanmıştır (fpga_top, soc_top'u örnekler, "
    "çoğaltmaz). Başlıca farklar aşağıdaki tabloda özetlenmiştir."))
place(make_table(
    ["Konu", "FPGA (Genesys-2 / Kintex-7 XC7K325T)", "ASIC (hedeflenen akış)"],
    [
     ["Saat üretimi",
      "200 MHz LVDS -> IBUFDS -> MMCME2_BASE -> BUFG -> 50 MHz",
      "Foundry PLL / saat-üretici IP; aynı 50 MHz nominal"],
     ["Reset",
      "Async-bas / senkron-bırak (cpu_resetn & mmcm_locked + 2-FF senkronizatör)",
      "Reset senkronizatör hücreleri; aynı disiplin"],
     ["Bellekler",
      "Davranışsal axi_sram_wrapper; $readmemh ile Block RAM çıkarımı",
      "Foundry SRAM derleyici makroları (compiled memory)"],
     ["Bellek ilk-değeri",
      "$readmemh ön-yükleme (bootrom/firmware/data/ai hex)",
      "Silikonda ön-yükleme yok; içerik flash'tan bootloader ile yüklenir"],
     ["QSPI saati",
      "STARTUPE2/USRCCLKO ile özel CCLK pini; ilk 3 kenar warm-up",
      "Normal IO pad; STARTUPE2 gerekmez"],
     ["Çift-yönlü / açık-drain IO",
      "generate tristate (QSPI inout), I2C OD emülasyonu",
      "Foundry IO/pad hücreleri, gerçek açık-drain sürücüler"],
     ["Kayıt dosyası (regfile)",
      "FF tabanlı (latch regfile sentezde atlanır)",
      "Latch tabanlı regfile (alan/güç) seçeneği"],
     ["Tarama / DFT",
      "scan_cg_en=0 (kullanılmaz)",
      "Tarama zinciri + DFT eklenir"],
     ["SVA monitörleri",
      "translate_off ile sentezden çıkarılır",
      "Aynı; yalnız doğrulama"],
    ]))
place(make_para(
    "FPGA prototipleme ve kaynak kullanımı 2.4'te; ASIC tasarım akışı (sentez, "
    "yerleştirme-bağlama, GDSII) 3. bölümde ayrıntılandırılmaktadır.", sb=2))
make_img("GÖRSEL 4 - önerilen: FPGA saat ve QSPI mimarisi şeması",
    "sysclk_p/n (200 MHz LVDS) -> IBUFDS -> MMCME2_BASE (x5 / ÷20 -> 50 MHz) -> BUFG -> clk_50; "
    "ve ayrıca qspi_sclk_o -> STARTUPE2.USRCCLKO -> CCLK -> flash yolu. İsteğe bağlıdır; "
    "2.4'e de taşınabilir.")

# placeholder'ı sil + kaydet
placeholder._element.getparent().remove(placeholder._element)
doc.save(SRC)
print("OK - 2.1 bölümü yazıldı ve placeholder silindi.")
