#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# shorten_prose.py - teknik detayı bozmadan düz yazıyı kısaltır
# (ÖNCE WORD'Ü KAPAT)
# ============================================
import docx
SRC='BLogic_MCU_DTR_taslak_01.docx'
doc=docx.Document(SRC)

def tighten(prefix, newtext):
    for p in doc.paragraphs:
        if p.text.strip().startswith(prefix):
            runs=p.runs
            if runs:
                runs[0].text=newtext
                for r in runs[1:]: r.text=''
            else:
                p.add_run(newtext)
            return True
    print("  ! bulunamadı:", prefix[:40])
    return False

REPL = [
# ---------- Bölüm 1 ----------
("BLogic Mikroelektronik takımı olarak 2026",
 "BLogic Mikroelektronik takımı, 2026 TEKNOFEST Çip Tasarım Yarışması Mikrodenetleyici "
 "kategorisinde, açık kaynaklı CV32E40P RISC-V çekirdeğini merkeze alan, Edge AI uygulamalarına "
 "yönelik bir mikrodenetleyici tasarlamış ve doğrulamıştır. 32-bit, dört aşamalı boru hattına "
 "sahip RV32IMC çekirdeği etrafında kurgulanan BLogic MCU'nun temel amacı, TFLite Micro Speech "
 "kelime tanıma görevini (bilinmeyen/evet/hayır) doğrudan donanımda hızlandırarak sınırlı "
 "kaynaklı edge cihazlarda düşük güçte ve otonom çalışan bir sesli komut algılama platformu "
 "sunmaktır."),
("Sistemin omurgasını, performans gereksinimine",
 "Sistemin omurgası, performansa göre ayrıştırılmış iki katmanlı bir veri yoludur: bellek "
 "erişimleri AXI4, çevre birimi yazmaç erişimleri ise AXI4-Lite üzerinden taşınır. Çekirdeğin "
 "yerel OBI arayüzü özgün bir OBI-to-AXI4 köprüsüyle ana yola bağlanır; çevre tarafında "
 "AXI4-to-AXI4-Lite köprüsü, özgün soc_axi_interconnect ve 0x4000_0000 tabanından 0x100 aralıklı "
 "yedi slave çözen, tanımsız erişimde DECERR üreten periph_decoder bulunur. Tümüyle yonga-üzeri "
 "~47 KB bellek: 0x0'da 1 KB Boot ROM, 0x10000'de 8 KB Instruction SRAM, 0x20000'de 8 KB Data "
 "SRAM, 0x30000'de YZ hızlandırıcıya ayrılmış 30 KB AI SRAM. Çevre birimi takımı EK-2 yazmaç "
 "düzenlerine uyumludur: UART0, 16/16 GPIO, prescaler'lı ve seviye-tetiklemeli Timer, 400 kHz "
 "açık-drain I2C Master ve x1/x2/x4 modlu, S25FL256S flash'tan önyükleyen QSPI Master."),
("Tasarımı benzerlerinden ayıran en güçlü",
 "Tasarımı öne çıkaran iki özgün blok birbirini tamamlar. İlki, ses sınıflandırmayı donanımda "
 "hızlandıran ai_accelerator: evrişim (Conv2D, 8×10×8 çekirdek, adım 2, SAME dolgu) ve tam-bağlı "
 "katmanı (4000→4) INT8×INT8→INT32 MAC ile yürütür; Q31 yeniden-nicemleme (requant) ve ReLU'nun "
 "ardından argmax ile sınıf kararını üretir. Yapılandırmasını AXI4-Lite CSR'den alırken "
 "weight/activation verisine kendi AXI4 master'ıyla doğrudan AI SRAM'den erişir. İkincisi, gelen "
 "ses örneklerini çekirdeği meşgul etmeden hızlandırıcıya taşıyan UART1-stream birimidir: RX "
 "baytlarını little-endian paketleyip DMA ile doğrudan AI SRAM'e yazar ve tamamlanınca kesme "
 "üretir. Böylece veri ediniminden çıkarıma kadar CPU müdahalesi en aza iner."),
("Tasarımın temelini oluşturan kritik mühendislik",
 "Kritik mühendislik kararları otonom ve deterministik çalışmayı güvence altına alır. AI SRAM "
 "erişim çakışmaları, önceliği ai_accelerator > veri-akışı > CPU olan 3:1 bir arbiter ile "
 "çözülür. Sistem, açılışta Boot ROM bootloader'ıyla program imajını QSPI flash'tan Buyruk SRAM'e "
 "kopyalayıp yürütmeyi otonom devralır; FPGA'da QSPI saati STARTUPE2/USRCCLKO yolundan sürülür. "
 "Kesme haritası timer=bit 16, ai_accelerator=bit 17, UART veri-akışı=bit 18 biçimindedir. FPGA "
 "prototip, Genesys-2 (Kintex-7 XC7K325T) kartında 200 MHz LVDS referansın MMCM ile 50 MHz'e "
 "dönüştürüldüğü bir saat mimarisi üzerine kuruludur. JTAG hata ayıklama opsiyonel tutulmuş, bu "
 "sürümde gerçekleştirilmemiştir."),
("Tüm RTL tasarımı SystemVerilog ile tamamlanmış",
 "Tüm RTL SystemVerilog ile yazılmış ve kapsamlı doğrulanmıştır: Verilator regresyon takımı boot, "
 "I2C entegrasyon, SoC-YZ veri yolu, UART-stream ve QSPI senaryolarını öz-denetimli koşturur; "
 "çekirdek Spike ISS ile lockstep karşılaştırılır; on arayüzde SVA protokol monitörü ve "
 "riscv-arch-test paketi çalışır. İstenen teknotest senaryosu Vivado 2021.2'de başarıyla geçmiş; "
 "RTL ve genesys2.xdc ile FPGA prototip hazır olup sentez ve bitstream üretilmiştir. YZ "
 "hızlandırıcının altın referansa göre <%10 doğruluk sapması ve >1× hızlanması hedeflenmekte, bu "
 "metrikler FPGA ölçümleriyle nicelenecektir. ASIC akışı (komite EDA araçlarıyla sentez, "
 "yerleştirme-bağlama, GDSII) planlanan nihai adımdır."),
("İlerleyen bölümlerde; sistemin blok düzeyindeki",
 "İlerleyen bölümlerde blok mimarisi, veri yolu ve adresleme, çekirdek ve bellek alt sistemi, "
 "çevre birimleri, YZ hızlandırıcı ile UART veri-akışı mimarisi, açılış akışı, doğrulama "
 "metodolojisi ve FPGA sonuçları ayrıntılandırılır."),
# ---------- 2.1 ----------
("BLogic MCU, açık kaynaklı CV32E40P RISC-V çekirdeğini merkeze alan, edge",
 "BLogic MCU, CV32E40P RISC-V çekirdeğini merkeze alan, edge sesli komut tanımaya yönelik "
 "bütünleşik bir mikrodenetleyicidir. Tek çekirdek, iki katmanlı AXI veri yolu, tümüyle "
 "yonga-üzeri bellek, EK-2 uyumlu çevre birimi takımı ve TFLite Micro Speech'i donanımda "
 "hızlandıran özgün bir YZ hızlandırıcı etrafında kurgulanmıştır. Bu bölümde blok mimarisi, "
 "şartname uyumluluğu, alt bloklar, veri yolu ve adresleme, boot akışı, çevre bağlantıları, "
 "yazılım/linker ve FPGA-ASIC farkları sistem düzeyinde ele alınır; yazmaç ve iç mimari "
 "ayrıntıları 2.2-2.4'te derinleştirilir."),
("Çekirdeğin buyruk ve veri OBI portları, iki ayrı obi_to_axi",
 "Çekirdeğin buyruk ve veri OBI portları, iki ayrı obi_to_axi örneğiyle bağımsız iki AXI4 "
 "master'a dönüşür ve soc_axi_interconnect içinde saf adres-kod-çözme ile beş hedefe yönlendirilir; "
 "kanallar statik ayrıştığı için çekişme oluşmaz. Çevre portu axi4_to_axilite_bridge ile "
 "AXI4-Lite'a indirgenir; periph_decoder adresin [11:8] alanına göre 0x100 baytlık pencerelerle 7 "
 "birimi seçer ve tanımsız adreste DECERR (2'b11) + 0xDEADBEEF döndürür."),
("Yedi çevre birimi de aynı AXI4-Lite slave şablonunu kullanarak periph_decoder'ın arkasına",
 "Yedi çevre birimi de aynı AXI4-Lite slave şablonuyla periph_decoder'ın arkasına bağlanır. İki "
 "birim ayrıca kendi AXI4 master arayüzüne sahiptir: YZ hızlandırıcı yapılandırmasını AXI-Lite "
 "CSR'den alırken weight/activation'a kendi master'ıyla AI SRAM'den erişir; UART_1 veri-akışı RX "
 "baytlarını little-endian DMA ile AI SRAM'e yazar. CPU, YZ ve akış master'larının AI SRAM "
 "erişimi ai_sram_arbiter ile YZ > veri-akışı > CPU önceliğinde çakışmasız paylaştırılır."),
("Yazılım tarafında üç ana çalışma yürütülmüştür",
 "Yazılım tarafında üç çalışma yürütülmüştür. (i) Sürücüler: çevre birimi taban adresleri ve "
 "bellek-haritalı yazmaç yapıları sw/drivers/blogic_mcu.h'de, QSPI yardımcıları qspi.h'de; "
 "adresler RTL çözücüyle birebir tutarlıdır. (ii) Açılış/çalışma-zamanı: bootloader.S, crt0.S ve "
 "bootrom.hex üreten build.py. (iii) Test ve golden-reference: sw/tests/ altında UART, GPIO, I2C, "
 "QSPI, ISA ve micro-speech testleri; sw/ai_model/ altında golden-vector üreteçleri. Uygulama "
 "rv32imc hedefiyle derlenir."),
("Burada mimariye özgü kritik bir karar vardır",
 "Mimariye özgü kritik bir karar: .rodata bilerek Veri SRAM'e konur. Çünkü CPU veri portunun "
 "okuma kanalı yalnız çevre / AI SRAM / Data SRAM'e açıktır; Instruction SRAM'e (bootloader ile) "
 "yazılabilse de veri portundan okunamaz. Bu nedenle sabitlerin çekirdekçe okunabilmesi için Veri "
 "SRAM'e yerleştirilmesi zorunludur — donanım-yazılım birlikte tasarımının somut bir örneği."),
# ---------- 2.2.1 ----------
("BLogic MCU'nun işlemci ve veri yolu mimarisi, CV32E40P çekirdeğinin yerel OBI",
 "İşlemci ve veri yolu mimarisi, CV32E40P'nin yerel OBI arayüzünden iki katmanlı AXI omurgasına "
 "uzanır: bellek erişimleri AXI4, çevre yazmaçları AXI4-Lite üzerinden. Tüm AXI arayüzleri 32-bit "
 "adres/veri, 4-bit ID, 1-bit user genişliğindedir. Bu hedef başarılmış olup işlemci-veri yolu "
 "bütünü hem simülasyonda hem DDK demo-testbench'inde doğrulanmıştır."),
("CV32E40P'nin yerel OBI arayüzü tek fazlı bir req/gnt",
 "CV32E40P'nin OBI arayüzü tek fazlı req/gnt + ayrı rvalid protokolüyken sistem yolu beş kanallı "
 "AXI'dir; bu uyumsuzluk özgün obi_to_axi köprüsüyle giderilir. Köprü iki kez örneklenir: "
 "instruction için ID 0 (yazma kapalı: we=0, be=4'b1111, wdata=0), data için ID 1 (tam R/W). Altı "
 "durumlu FSM (IDLE, WAIT_AW_W, WAIT_AW, WAIT_W, WAIT_B, WAIT_R) yazmada AW ve W'yi eşzamanlı "
 "sürer, her kanalın kabulünü ayrı bayrakla izler ve B/R yanıtını OBI rvalid'e taşır. Her işlem "
 "tek-beat'tir (len=0, size=4 bayt, INCR) ve köprü tek-bekleyendir."),
("İki AXI4 master (instruction, data), elle yazılmış",
 "İki AXI4 master (instruction, data) elle yazılmış özgün soc_axi_interconnect içinde beş slave'e "
 "yönlendirilir: Boot ROM, Instruction SRAM, Data SRAM, AI SRAM (arbiter üzerinden) ve çevre "
 "portu. Yönlendirme, hakem yerine saf kombinasyonel adres kod-çözme iledir; kanallar statik ayrı "
 "olduğundan çekişme yoktur ve hakem gerekmez. Instruction yolu yalnız okur. Kod-çözme mantığı "
 "aşağıdaki gibidir:"),
("Çevre portundaki AXI4-full akış, axi4_to_axilite_bridge",
 "Çevre portundaki AXI4-full akış, durum makinesi içermeyen gecikmesiz axi4_to_axilite_bridge ile "
 "AXI4-Lite'a indirgenir: AXI4'e özgü sinyaller (len, size, burst, lock, cache, prot, qos) "
 "düşürülür, yanıtta ID'ler yeniden iliştirilir (s_bid=s_awid, s_rid=s_arid). Ardından "
 "periph_decoder adresin [11:8] alanıyla 7 birimi (UART_0, GPIO, Timer, UART_1, I2C, QSPI, YZ-CSR) "
 "0x100 pencerelerle seçer; tanımsız adreste DECERR + 0xDEADBEEF döner. Ortak slave şablonu "
 "sayesinde register erişimleri tek-tip ve öngörülebilirdir."),
("İşlemci-veri yolu bütünü bu aşamada hedeflendiği gibi",
 "İşlemci-veri yolu bütünü çalışır durumdadır ve kapsamlı doğrulanmıştır: Verilator regresyonu "
 "(boot, SoC-AI veri yolu, UART-stream, QSPI), Spike ISS lockstep, tüm AXI-Lite/AXI4 arayüzlerinde "
 "SVA monitörleri ve riscv-arch-test. Ayrıca DDK demo-testbench (UART 'hello world') Vivado "
 "2021.2'de geçmiş ve tasarım Genesys-2'de gerçeklenmiştir; böylece bu aşamadaki hedef "
 "başarılmıştır."),
# ---------- 2.2.2 ----------
("BLogic MCU, şartname EK-2'de tanımlanan çevre birimi takımını",
 "BLogic MCU, EK-2'de tanımlanan çevre birimi takımını barındırır: UART_0, veri-akışı birimi "
 "UART_1, GPIO, Timer, I2C Master ve QSPI Master. Yedisi de ortak bir AXI4-Lite slave şablonuyla "
 "periph_decoder arkasına bağlanır; yazmaç düzenleri EK-2'ye uyumludur, C sürücü başlıkları "
 "hazırdır ve her biri öz-denetimli testle doğrulanmıştır. Zorunlu asgari gereksinim UART tümüyle "
 "entegre ve DDK demo-testbench'inde doğrulanmıştır. Aşağıda her birim yazmaç haritası, doğrulama "
 "durumu ve kısıtlarıyla verilmektedir."),
("Mevcut sürümde tüm çevre birimleri tasarlanmış ve sisteme entegre",
 "Tüm çevre birimleri tasarlanmış ve entegre edilmiştir; tamamlanmamış birim yoktur. Planlanan "
 "iyileştirmeler: (i) I2C için clock stretching ve repeated START (mevcut testler tekil "
 "yazma/okuma ile geçer); (ii) UART/I2C/QSPI için isteğe bağlı kesme (şu an bilinçli yoklama); "
 "(iii) UART'a opsiyonel TX/RX FIFO. Bunlar asgari gereksinimi etkilemez; UART tam entegredir."),
# ---------- 2.4 ----------
("BLogic MCU, RTL tasarımının gerçek donanım üzerinde doğrulanması amacıyla Genesys-2",
 "BLogic MCU, RTL'in gerçek donanımda doğrulanması için Genesys-2 (Kintex-7 XC7K325T) kartında "
 "prototiplenmiştir. Kart-bağımsız soc_top, FPGA'ya özgü saat/reset/IO uyarlamalarını içeren ince "
 "fpga_top sarmalayıcısıyla karta uyarlanmış; Vivado ile sentezlenip bitstream üretilmiş ve karta "
 "yüklenerek çalıştırılmıştır. İşlemci üzerinde yazılım koşturulmuş, çevre birimleri donanımda "
 "sınanmıştır."),
("Kart üzerindeki 200 MHz LVDS referans saat, IBUFDS",
 "Kart üzerindeki 200 MHz LVDS referans, IBUFDS → MMCME2_BASE (×5 → VCO 1 GHz, ÷20 → 50 MHz) → "
 "BUFG zinciriyle 50 MHz sistem saatine dönüştürülür. Reset, cpu_resetn ile mmcm_locked'ın "
 "VE'siyle üretilip iki kademeli senkronizatörden geçer (async-bas/senkron-bırak); SoC, MMCM "
 "kilitlenene kadar reset'te tutulur. Bring-up görünürlüğü için CPU/reset'ten bağımsız bir "
 "'heartbeat' LED'i (~1.3 s) saatin ve yapılandırmanın sağlığını anında gösterir."),
("Bitstream, proje-dışı bir Vivado betiği olan fpga/build_genesys2.tcl",
 "Bitstream, proje-dışı fpga/build_genesys2.tcl betiğiyle üretilir (parça xc7k325tffg900-2). Betik "
 "latch yerine FF-tabanlı kayıt dosyasını seçer, yalnız-doğrulama SVA'larını sentezden çıkarır ve "
 "bellekleri $readmemh ile Block RAM olarak çıkarır. İki açılış modu vardır: flash-boot "
 "(BOOT_ADDR=0x0; bootloader flash'tan Buyruk SRAM'e kopyalar) ve SRAM-boot (BOOT_ADDR=0x10000; "
 "firmware.hex BRAM'e ön-yüklü). Flash programlama fpga/flash_firmware.tcl ile .mcs üzerinden "
 "S25FL256S'e yazılır."),
("Çevre birimleri yazılımla donanım üzerinde sınanmıştır. UART_0, kartın USB-UART",
 "Çevre birimleri yazılımla donanımda sınanmıştır. UART_0, kartın USB-UART (FT232) köprüsünden "
 "host'a bağlanmış ve 'Hello World' çıktısı seri terminalde gözlemlenmiştir. GPIO, anahtar/buton "
 "girişleri ile LED çıkışları üzerinden test edilmiş; heartbeat LED'i saat/reset bütünlüğünü "
 "sürekli göstermiştir. QSPI, flash-boot'un kartta çalışmasıyla doğrudan doğrulanmıştır (program "
 "gerçek S25FL256S'ten okunup yürütülür). C sürücüleri sw/drivers/ altındadır."),
("Tasarım, Genesys-2 kartında başarıyla sentezlenip yapılandırılmış",
 "Tasarım, Genesys-2'de başarıyla sentezlenip yapılandırılmış ve kompakt bir kaynak profiliyle "
 "çalışmaktadır; LUT/FF/BRAM/DSP/MMCM kullanımı Görsel 2.4.5'te verilmiştir. Kart üzerinde "
 "çalışma ve UART çıktısı, sonuçların görsellerle belgelenmesi gereği uyarınca aşağıda "
 "sunulmaktadır."),
]

n=0
for pre,new in REPL:
    if tighten(pre,new): n+=1
doc.save(SRC)
print(f"{n}/{len(REPL)} paragraf kısaltıldı.")
PY_END = True
