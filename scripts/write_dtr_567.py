#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ============================================
# Ostim BLogic Mikroelektronik
# write_dtr_567.py  -  5.1 / 5.2 / 6 / 7 bölümleri (kısa, 2 sayfa hedef)
# ============================================
import docx
from docx.shared import Pt
from docx.enum.text import WD_ALIGN_PARAGRAPH
from docx.oxml.ns import qn
from docx.oxml import OxmlElement

SRC = 'BLogic_MCU_DTR_taslak_01.docx'
doc = docx.Document(SRC)

def _font(run, size, bold=False, italic=False):
    run.font.name = 'Calibri'; run.font.size = Pt(size); run.bold = bold; run.italic = italic

def make_para(text, size=11, bold=False, italic=False, sb=0, sa=6, justify=True):
    p = doc.add_paragraph(style='Normal')
    pf = p.paragraph_format; pf.space_before = Pt(sb); pf.space_after = Pt(sa)
    if justify: p.alignment = WD_ALIGN_PARAGRAPH.JUSTIFY
    _font(p.add_run(text), size, bold, italic)
    return p

def set_cell(cell, text, bold=False, size=10, shade=None):
    cell.text = ''
    p = cell.paragraphs[0]
    p.paragraph_format.space_before = Pt(1); p.paragraph_format.space_after = Pt(1)
    _font(p.add_run(text), size, bold)
    if shade:
        tcPr = cell._tc.get_or_add_tcPr()
        shd = OxmlElement('w:shd'); shd.set(qn('w:val'), 'clear'); shd.set(qn('w:fill'), shade); tcPr.append(shd)

def _borders(table):
    tblPr = table._tbl.tblPr
    b = OxmlElement('w:tblBorders')
    for edge in ('top', 'left', 'bottom', 'right', 'insideH', 'insideV'):
        e = OxmlElement('w:' + edge)
        e.set(qn('w:val'), 'single'); e.set(qn('w:sz'), '4'); e.set(qn('w:space'), '0'); e.set(qn('w:color'), '808080')
        b.append(e)
    tblPr.append(b)

def _width(table, pct=5000):
    tblPr = table._tbl.tblPr
    for ex in tblPr.findall(qn('w:tblW')): tblPr.remove(ex)
    w = OxmlElement('w:tblW'); w.set(qn('w:type'), 'pct'); w.set(qn('w:w'), str(pct)); tblPr.append(w)

def make_table(headers, rows):
    t = doc.add_table(rows=1 + len(rows), cols=len(headers))
    _borders(t); _width(t); t.autofit = True
    for j, h in enumerate(headers):
        set_cell(t.rows[0].cells[j], h, bold=True, size=10, shade='D9D9D9')
    for i, row in enumerate(rows, start=1):
        for j, val in enumerate(row):
            set_cell(t.rows[i].cells[j], val, size=10)
    return t

def ref(text):
    p = doc.add_paragraph(style='Normal')
    pf = p.paragraph_format; pf.space_before = Pt(0); pf.space_after = Pt(2)
    _font(p.add_run(text), 10)
    return p

# --- bölüm yerleştirme ---
def section(heading_key, placeholder_key):
    h = ph = None
    for p in doc.paragraphs:
        if heading_key in p.text and p.style.name.startswith('Heading'):
            h = p
        if p.text.strip().startswith(placeholder_key):
            ph = p
    assert h is not None and ph is not None, heading_key
    return h, ph

anchor = None
def place(obj):
    global anchor
    anchor.addnext(obj._element); anchor = obj._element; return obj

# ===================== 5.1 Takım Tanımı =====================
h, ph = section('Takım Tanımı', '{Bu kısımda takım üyeleri')
anchor = h._element
place(make_para(
    "BLogic Mikroelektronik takımı, donanım tasarımı/doğrulama ve yapay zekâ modelleme "
    "eksenlerinde organize olmuş bir ekiptir. Takım üyeleri ve varsa danışman bilgileri "
    "aşağıdaki tabloda verilmiştir.", sa=4))
place(make_table(
    ["Ad Soyad", "Okul", "Bölüm", "Sınıf", "Rol"],
    [
     ["[Ad Soyad]", "[Okul]", "[Bölüm]", "[Sınıf]", "RTL tasarımı, veri yolu, doğrulama, FPGA"],
     ["[Ad Soyad]", "[Okul]", "[Bölüm]", "[Sınıf]", "YZ modeli, altın referans, hızlandırıcı doğrulama"],
     ["[Ad Soyad]", "[Okul]", "[Bölüm]", "[Sınıf]", "[rol]"],
     ["[Danışman — varsa]", "[Okul]", "[Bölüm/Unvan]", "—", "Danışman"],
    ]))

# ===================== 5.2 Görev Dağılımı =====================
h, ph = section('Görev Dağılımı', '{Bu kısımda görev dağılımı')
anchor = h._element
place(make_para(
    "Takım, donanım (RTL ve doğrulama) ile yapay zekâ (model ve altın referans) olmak üzere iki "
    "ana eksende çalışmıştır. Donanım sorumlusu çekirdek entegrasyonu, veri yolu, çevre birimleri "
    "ve FPGA prototiplemesini; yapay zekâ sorumlusu ise model nicemleme, altın referans üretimi ve "
    "hızlandırıcı doğrulamasını üstlenmiştir. Raporlama ve test faaliyetleri ortak yürütülmüştür. "
    "ÖTR planlamasına kıyasla görev dağılımında esasa ilişkin bir değişiklik olmamıştır.", sa=4))
place(make_table(
    ["Çalışma alanı", "Sorumlu"],
    [
     ["RTL tasarımı (çekirdek entegrasyonu, veri yolu, çevre birimleri, YZ hızlandırıcı RTL)", "[Üye 1]"],
     ["RTL doğrulama (Verilator regresyon, SVA, Spike lockstep)", "[Üye 1]"],
     ["FPGA prototipleme (Genesys-2 bitstream ve donanım testleri)", "[Üye 1]"],
     ["YZ modeli ve nicemleme (TFLite Micro Speech)", "[Üye 2]"],
     ["Altın referans üretimi ve hızlandırıcı doğrulama", "[Üye 2]"],
     ["Raporlama ve test planlaması", "Ortak"],
    ]))

# ===================== 6 İş Planı ve Risk =====================
h, ph = section('İş Planı ve Risk', '{Bu kısımda projenin FPGA')
anchor = h._element
place(make_para(
    "Projenin iş paketleri ve tamamlanma durumları aşağıda özetlenmiştir. RTL tasarımı, yazılım, "
    "doğrulama ve FPGA prototipleme büyük ölçüde tamamlanmış; ASIC fiziksel gerçekleme aşaması, "
    "ticari EDA araçlarının DTR sonrası sağlanmasının ardından başlatılmak üzere planlanmıştır. "
    "Takvimde kritik bir gecikme bulunmamaktadır.", sa=4))
place(make_table(
    ["İş paketi", "Durum", "Tamamlanma"],
    [
     ["İP1 — RTL tasarımı (çekirdek, veri yolu, çevre birimleri, YZ hızlandırıcı)", "Tamamlandı", "%100"],
     ["İP2 — RTL doğrulama (Verilator, SVA, Spike lockstep, arch-test)", "Sürüyor", "%90"],
     ["İP3 — Yazılım (bootloader, sürücüler, testler, YZ altın referans)", "Tamamlandı", "%100"],
     ["İP4 — FPGA prototipleme (Genesys-2 bitstream + donanım testleri)", "Tamamlandı", "%95"],
     ["İP5 — DTR raporlama", "Sürüyor", "%85"],
     ["İP6 — ASIC akışı (sentez, P&R, signoff, GDSII)", "Planlandı", "%0"],
     ["İP7 — Doğrulama kapsamının genişletilmesi", "Sürüyor", "%70"],
    ]))
place(make_para("Risk planlaması:", bold=True, sb=4, sa=2, justify=False))
place(make_table(
    ["Risk", "Etki", "Önlem"],
    [
     ["EDA araçlarının geç sağlanması → ASIC gecikmesi", "Yüksek",
      "RTL'i sentez-hazır tutmak; akış betiklerini ve kısıtları önceden hazırlamak"],
     ["ASIC zamanlamasının kapanmaması", "Orta",
      "Muhafazakâr 50 MHz hedef; FPGA'da +2,2 ns WNS marjı; kritik yol erken analizi"],
     ["SRAM makro entegrasyonu", "Orta",
      "Davranışsal SRAM'i foundry makro arayüzüne uygun soyutlamak"],
     ["Spike lockstep kalibrasyonu", "Düşük",
      "Spike çağrısını --log-commits ile düzeltmek"],
     ["YZ doğruluk/hız hedefi (<%10, >1×)", "Orta",
      "Altın referansla sürekli karşılaştırma ve FPGA üzerinde ölçüm"],
    ]))

# ===================== 7 Kaynakça =====================
h, ph = section('Kaynakça', '{Bu bölümde raporda kullanılan')
anchor = h._element
refs = [
 '[1] OpenHW Group, "CV32E40P RISC-V Core — User Manual ve RTL," https://github.com/openhwgroup/cv32e40p',
 '[2] PULP Platform, "AXI SystemVerilog IP Kütüphanesi," https://github.com/pulp-platform/axi',
 '[3] A. Forencich, "verilog-uart: UART IP," https://github.com/alexforencich/verilog-uart',
 '[4] RISC-V International, "The RISC-V Instruction Set Manual, Volume I: Unprivileged ISA," 2019.',
 '[5] ARM, "AMBA AXI and ACE Protocol Specification (IHI 0022)," ARM Ltd.',
 '[6] Cypress/Infineon, "S25FL256S 256-Mbit (32 MB) 3.0 V SPI Flash Memory — Veri Sayfası."',
 '[7] TensorFlow, "TensorFlow Lite for Microcontrollers — Micro Speech," https://github.com/tensorflow/tflite-micro',
 '[8] Digilent, "Genesys 2 FPGA Board Reference Manual."',
 '[9] Xilinx/AMD, "7 Series FPGAs Configuration User Guide (UG470)" (STARTUPE2/CCLK).',
 '[10] Xilinx/AMD, "Vivado Design Suite User Guide — Synthesis & Implementation."',
 '[11] Veripool, "Verilator — Açık Kaynak Verilog/SystemVerilog Simülatörü," https://www.veripool.org/verilator',
 '[12] RISC-V, "riscv-arch-test — ISA Uyumluluk Test Paketi," https://github.com/riscv-non-isa/riscv-arch-test',
]
for rtext in refs:
    place(ref(rtext))

# --- placeholderları sil + kaydet ---
for pk in ['{Bu kısımda takım üyeleri', '{Bu kısımda görev dağılımı', '{Bu kısımda projenin FPGA',
           '{Bu bölümde raporda kullanılan']:
    for p in list(doc.paragraphs):
        if p.text.strip().startswith(pk):
            p._element.getparent().remove(p._element); break

doc.save(SRC)
print("OK - 5.1 / 5.2 / 6 / 7 yazıldı.")
