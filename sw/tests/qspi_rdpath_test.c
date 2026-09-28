/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   qspi_rdpath_test.c  -  QSPI okuma-yollari kapsama testi
   ============================================
   NEDEN: SoC kapsama siniflandirmasi (verif/coverage_siniflandirma.md,
   bolum 2) qspi_master_axil.sv'de 51 C-sinifi satirin okuma yonunde
   oldugunu gosterdi: cok baytli okuma paketlemesi, dummy cevrimleri,
   adressiz komutlar (RDSR/RES), 4B adres, x2/x4 veri modlari, SE.
   qspi_fifo_err_test yazma/hata yonunu kapatmisti; bu test okuma yonunu
   kapatir.

   SIM FLASH MODELI SOZLESMESI (verif/tb/sim_main.cpp:276-291):
   CS dusukken 32 yukselen SCLK kenarindan SONRA io_i[1] uzerinde sabit
   0xAA deseni doner; komuttan bagimsizdir, MOSI'yi yok sayar.
   0xAA periyot-2 desendir -> cift sayida kenar kaymasi (24b adres,
   8/24 dummy, 32b adres) deseni DEGISTIRMEZ. Bu yuzden:
     - x1 okumalarda TAM word'ler kesin 0xAAAAAAAA'dir (siki kontrol)
     - ilk 32 kenardan once ornekleme -> 0x00 (RDSR icin siki kontrol)
     - x2/x4 orneklemede io_i[0]/[2]/[3] surulmez -> deger desene bagli;
       done + hata-yok + tek pop kontrolu yapilir, deger raporlanir
     - kuyruk (word'e tamamlanmayan) paketleme siralamasi RTL ic
       detayidir -> iki mesru yerlesimden biri kabul edilir
   PP/WREN/RDSR'nin FLASH tarafi fonksiyonel dogrulamasi blok
   seviyesindedir (qspi_modes_tb); burada olculen MASTER yollaridir.
   ============================================ */
#include "../drivers/blogic_mcu.h"

#ifndef TEST_CPB
#define TEST_CPB 434U
#endif

/* STA bitleri (qspi_master_axil.sv:557) */
#define STA_DONE        (1U << 0)
#define STA_BUSY        (1U << 1)
#define STA_RX_EMPTY    (1U << 5)
#define STA_ERR_SHIFT   8U
#define STA_ERR_MASK    0xFU

#define CCR_CLR_STA     (1U << 31)

/* FCR bitleri */
#define FCR_RX_FLUSH    (1U << 0)
#define FCR_TX_FLUSH    (1U << 1)
#define FCR_ADDR4B      (1U << 2)
#define FCR_ADDR_ON     (1U << 3)   /* [4:3]=01 adres fazini zorla ac */
#define FCR_ADDR_OFF    (2U << 3)   /* [4:3]=10 adres fazini zorla kapat */

/* CCR kurucu: [30:25]=presc [23:16]=bayt-1 [15:11]=dummy [10]=dir
   [9:8]=data_mode [7:0]=instr (qspi_master_axil.sv:511-517) */
#define CCR_KUR(instr, mode, dir, dummy, nbayt) \
    ((4U << 25) | (((nbayt) - 1U) << 16) | ((dummy) << 11) | \
     ((dir) << 10) | ((mode) << 8) | (instr))

static uint32_t gecen = 0U, kalan = 0U;

static void putu(uint32_t v) {
    char b[12]; int n = 0;
    if (v == 0U) { uart_putc(UART0, '0'); return; }
    while (v != 0U) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(UART0, b[n]);
}

static void puth(uint32_t v) {
    uart_puts(UART0, "0x");
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(UART0, "0123456789ABCDEF"[(v >> i) & 0xFU]);
}

static void kontrol(const char *ad, uint32_t beklenen, uint32_t gercek) {
    uart_puts(UART0, "  ");
    uart_puts(UART0, ad);
    if (beklenen == gercek) { uart_puts(UART0, " PASS\n"); gecen++; }
    else {
        uart_puts(UART0, " FAIL beklenen=");
        puth(beklenen);
        uart_puts(UART0, " gercek=");
        puth(gercek);
        uart_puts(UART0, "\n");
        kalan++;
    }
}

/* kuyruk word'u: uniform 0xAA baytlarinda iki mesru yerlesim */
static void kontrol_kuyruk(const char *ad, uint32_t alt, uint32_t ust,
                           uint32_t gercek) {
    uart_puts(UART0, "  ");
    uart_puts(UART0, ad);
    if ((gercek == alt) || (gercek == ust)) { uart_puts(UART0, " PASS\n"); gecen++; }
    else {
        uart_puts(UART0, " FAIL gercek=");
        puth(gercek);
        uart_puts(UART0, "\n");
        kalan++;
    }
}

static void temizle(void) {
    QSPI->FCR = FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
}

/* komutu baslat, busy dusene kadar bekle; done+hata-yok kontrolu */
static void kos(const char *ad, uint32_t fcr, uint32_t ccr) {
    uint32_t tmo = 400000U;
    QSPI->FCR = fcr | FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
    QSPI->CCR = ccr;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol(ad, 0U, QSPI->STA & STA_BUSY);
    kontrol("done", STA_DONE, QSPI->STA & STA_DONE);
    kontrol("hata-yok", 0U, (QSPI->STA >> STA_ERR_SHIFT) & STA_ERR_MASK);
}

int main(void) {
    UART0->CPB = TEST_CPB;
    uart_puts(UART0, "\n=== QSPI okuma yollari (kapsama C-sinifi) ===\n");

    QSPI->ADR = 0x00001000U;
    temizle();

    /* [1] cok baytli x1 okuma: 8 bayt -> 2 tam word (RTL:384-389,409-412) */
    uart_puts(UART0, "[1] READ 8B (tam word paketleme)\n");
    kos("bitti", 0U, CCR_KUR(0x03U, 1U, 0U, 0U, 8U));
    kontrol("word0", 0xAAAAAAAAU, QSPI->DR);
    kontrol("word1", 0xAAAAAAAAU, QSPI->DR);
    kontrol("rx bosaldi", STA_RX_EMPTY, QSPI->STA & STA_RX_EMPTY);

    /* [2] 6 bayt: 1 tam + 2 kuyruk (RTL:400-401) */
    uart_puts(UART0, "[2] READ 6B (2-bayt kuyruk)\n");
    kos("bitti", 0U, CCR_KUR(0x03U, 1U, 0U, 0U, 6U));
    kontrol("tam word", 0xAAAAAAAAU, QSPI->DR);
    kontrol_kuyruk("kuyruk-2B", 0x0000AAAAU, 0xAAAA0000U, QSPI->DR);

    /* [3] 7 bayt: 1 tam + 3 kuyruk (RTL:400-401 diger dal) */
    uart_puts(UART0, "[3] READ 7B (3-bayt kuyruk)\n");
    kos("bitti", 0U, CCR_KUR(0x03U, 1U, 0U, 0U, 7U));
    kontrol("tam word", 0xAAAAAAAAU, QSPI->DR);
    kontrol_kuyruk("kuyruk-3B", 0x00AAAAAAU, 0xAAAAAA00U, QSPI->DR);

    /* [4] FAST_READ: adres + 8 dummy (RTL:321-323,350-365) */
    uart_puts(UART0, "[4] FAST_READ 0x0B (addr+dummy)\n");
    kos("bitti", 0U, CCR_KUR(0x0BU, 1U, 0U, 8U, 4U));
    kontrol("veri", 0xAAAAAAAAU, QSPI->DR);

    /* [5] RDSR: adressiz okuma (RTL:303-307); ilk 32 kenar oncesi
       model sessiz -> bayt kesin 0x00 */
    uart_puts(UART0, "[5] RDSR 0x05 (adressiz)\n");
    kos("bitti", FCR_ADDR_OFF, CCR_KUR(0x05U, 1U, 0U, 0U, 1U));
    kontrol("veri(0)", 0x00000000U, QSPI->DR);

    /* [6] RES: adressiz + 24 dummy (RTL:292-295 + SPI_DUMMY) */
    uart_puts(UART0, "[6] RES 0xAB (adressiz+dummy)\n");
    kos("bitti", FCR_ADDR_OFF, CCR_KUR(0xABU, 1U, 0U, 24U, 4U));
    kontrol("veri", 0xAAAAAAAAU, QSPI->DR);

    /* [7] SE: adresli, verisiz (RTL:318-320) */
    uart_puts(UART0, "[7] SE 0xD8 (adresli, verisiz)\n");
    kos("bitti", FCR_ADDR_ON, CCR_KUR(0xD8U, 0U, 0U, 0U, 1U));

    /* [8] READ4: 4-bayt adres (RTL:341) */
    uart_puts(UART0, "[8] READ4 0x13 (4B adres)\n");
    QSPI->ADR = 0x01234567U;
    kos("bitti", FCR_ADDR4B, CCR_KUR(0x13U, 1U, 0U, 0U, 4U));
    kontrol("veri", 0xAAAAAAAAU, QSPI->DR);
    QSPI->ADR = 0x00001000U;

    /* [9] x2 okuma: DOR (RTL:158-161,375). io_i[0] surulmez ->
       deger desene bagli; done+pop yeterli, deger raporlanir */
    uart_puts(UART0, "[9] DOR 0x3B (x2 okuma)\n");
    kos("bitti", 0U, CCR_KUR(0x3BU, 2U, 0U, 8U, 4U));
    uart_puts(UART0, "  x2 veri = ");
    puth(QSPI->DR);
    uart_puts(UART0, " (bilgi)\n");

    /* [10] x4 okuma: QOR (RTL:166,376) */
    uart_puts(UART0, "[10] QOR 0x6B (x4 okuma)\n");
    kos("bitti", 0U, CCR_KUR(0x6BU, 3U, 0U, 8U, 4U));
    uart_puts(UART0, "  x4 veri = ");
    puth(QSPI->DR);
    uart_puts(UART0, " (bilgi)\n");

    /* [11] x2 yazma: dual PP (RTL:127-129 TX yonu) */
    uart_puts(UART0, "[11] dual-PP 0xA2 (x2 yazma)\n");
    QSPI->FCR = FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
    QSPI->DR  = 0x11223344U;
    kos("bitti", 0U, CCR_KUR(0xA2U, 2U, 1U, 0U, 4U));

    temizle();

    uart_puts(UART0, "\n[QSPI-RD] gecen=");
    putu(gecen);
    uart_puts(UART0, " kalan=");
    putu(kalan);
    uart_puts(UART0, (kalan == 0U) ? "  SONUC: PASS\n" : "  SONUC: FAIL\n");
    if (kalan == 0U)
        uart_puts(UART0, "Hello World from BLogic MCU!\n");

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
