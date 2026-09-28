/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   qspi_fifo_err_test.c  -  KF8: QSPI hata ve sinir yollari
   ============================================
   NEDEN: qspi_master_axil.sv 570 satir, 122'si kapanmamis (%72,1) ve
   kapanmayanlar rastgele degil - FIFO sinirlari, flush, status temizleme
   ve geri okuma yollari. Mevcut testlerin hepsi (qspi_modes_tb.sv,
   qspi_test.c, qspi_debug.c) okuma yonunde ve normal akista kosuyor.

   Tablo 3-1'de "tanimlanan dogrulama kapsaminin genisligi ve bu kapsam
   bunyesindeki dogrulama basarim orani" ayri puanli. Hedef ham yuzde
   degil: erisilebilir hata yollarini kapatmak, erisilemezleri gerekcesiyle
   belgelemek.

   STA bit yerlesimi (qspi_master_axil.sv:557):
     {20'd0, sta_fifo_err[3:0], tx_empty, tx_full, rx_empty, rx_full,
      2'd0, sta_busy, sta_done}

   ERISILEMEZ YOL - test yazilmadi, bilerek:
     :209  RX FIFO bosken pop -> sta_fifo_err = 4'b0001
           Okuma tarafi (:555) cmd_rx_pop'u zaten "if (!rx_empty)" ile
           kuruyor, dolayisiyla :209'daki else dalina hicbir zaman
           girilemez. Olu kod; testle kapatilamaz.
   ============================================ */
#include "../drivers/blogic_mcu.h"

/* STA bitleri - RTL:557 ile birebir */
#define STA_DONE        (1U << 0)
#define STA_BUSY        (1U << 1)
#define STA_RX_FULL     (1U << 4)
#define STA_RX_EMPTY    (1U << 5)
#define STA_TX_FULL     (1U << 6)
#define STA_TX_EMPTY    (1U << 7)
#define STA_ERR_SHIFT   8U
#define STA_ERR_MASK    0xFU
#define ERR_TX_OVF      0x2U        /* RTL:200 */

/* CCR bit 31: status temizle (RTL:496). Bu bit setliyken cmd_start
   KURULMAZ (else-if), yani komut baslatmadan temizleme yapilir. */
#define CCR_CLR_STA     (1U << 31)

/* FCR bitleri - RTL:509-512 */
#define FCR_RX_FLUSH    (1U << 0)
#define FCR_TX_FLUSH    (1U << 1)
#define FCR_ADDR4B      (1U << 2)

#define FIFO_DEPTH      64U

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
    uart_puts(UART0, " beklenen=");
    puth(beklenen);
    uart_puts(UART0, " gercek=");
    puth(gercek);
    if (beklenen == gercek) { uart_puts(UART0, "  PASS\n"); gecen++; }
    else                    { uart_puts(UART0, "  FAIL\n"); kalan++; }
}

static uint32_t sta_err(void) {
    return (QSPI->STA >> STA_ERR_SHIFT) & STA_ERR_MASK;
}

/* Bu test QSPI'yi olcuyor, UART yalniz raporlama kanali. Saha degeri 434,
   ama ~1000 karakterlik rapor 434'te 4,3 M cevrim suruyor; sim icin
   dusurulebilir. Olculen yollarin hicbiri UART hizina bagli degil. */
#ifndef QSPI_ERR_CPB
#define QSPI_ERR_CPB 434U
#endif

int main(void) {
    UART0->CPB = QSPI_ERR_CPB;
    uint32_t tmo = 0U;   /* vaka 5-9 ortak zaman asimi sayaci */

    uart_puts(UART0, "\n=== QSPI FIFO / status hata yollari ===\n");

    QSPI->FCR = FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;

    /* vaka 1: TX FIFO tasmasi (RTL:200) */
    uart_puts(UART0, "[1] TX FIFO tasmasi\n");
    for (uint32_t i = 0U; i < FIFO_DEPTH; i++)
        QSPI->DR = 0xA5000000U | i;
    kontrol("tx_full", STA_TX_FULL, QSPI->STA & STA_TX_FULL);
    kontrol("err(dolu ama tasmamis)", 0U, sta_err());

    QSPI->DR = 0xDEADBEEFU;               /* 65. yazma -> tasma */
    kontrol("err(tasma)", ERR_TX_OVF, sta_err());

    /* vaka 2: status temizleme (RTL:212) */
    uart_puts(UART0, "[2] CCR[31] status temizleme\n");
    QSPI->CCR = CCR_CLR_STA;
    kontrol("err(temizlendi)", 0U, sta_err());
    kontrol("done(temizlendi)", 0U, QSPI->STA & STA_DONE);

    /* vaka 3: TX flush (RTL:194) */
    uart_puts(UART0, "[3] TX FIFO flush\n");
    kontrol("flush oncesi tx_empty yok", 0U, QSPI->STA & STA_TX_EMPTY);
    QSPI->FCR = FCR_TX_FLUSH;
    kontrol("flush sonrasi tx_empty", STA_TX_EMPTY, QSPI->STA & STA_TX_EMPTY);
    kontrol("flush sonrasi tx_full yok", 0U, QSPI->STA & STA_TX_FULL);

    /* vaka 4: RX flush (RTL:205) */
    uart_puts(UART0, "[4] RX FIFO flush\n");
    QSPI->FCR = FCR_RX_FLUSH;
    kontrol("rx_empty", STA_RX_EMPTY, QSPI->STA & STA_RX_EMPTY);
    kontrol("rx_full yok", 0U, QSPI->STA & STA_RX_FULL);
    kontrol("flush hata uretmedi", 0U, sta_err());

    /* vaka 5: yazmac geri okuma (RTL:548-561) */
    uart_puts(UART0, "[5] yazmac geri okuma\n");

    QSPI->ADR = 0x00ABCDEFU;
    kontrol("ADR", 0x00ABCDEFU, QSPI->ADR);

    /* CCR geri okuma (RTL:550-552). Bit31 komut biti, geri okunmaz;
       yazilan alanlar (instr/data_mode/dir/dummy/len/presc) donmeli. */
    QSPI->CCR = CCR_CLR_STA;
    QSPI->CCR = 0x08040501U;
    tmo = 200000U;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol("CCR", 0x08040501U, QSPI->CCR);
    QSPI->CCR = CCR_CLR_STA;

    QSPI->FCR = FCR_ADDR4B;
    kontrol("FCR addr4b", FCR_ADDR4B, QSPI->FCR & FCR_ADDR4B);
    QSPI->FCR = 0U;
    kontrol("FCR addr4b temiz", 0U, QSPI->FCR & FCR_ADDR4B);

    /* ---------------------------------------------------------- vaka 6
       Yazma yonu (RTL:274-280). Mevcut testlerin HEPSI okuma yonunde;
       SPI_DATA_TX govdesi hic kosmamis.
       addr_phase_en = (cfg_addr_mode == 2'b01) (RTL:56), FCR=0 birakinca
       adres fazi yok -> SPI_SEND_CMD'den dogrudan ccr_dir dalina duser.
       CCR: instr=0x01(WRR) data_mode=01(x1) dir=1 dummy=0 len=4 presc=4 */
    uart_puts(UART0, "[6] yazma yonu (SPI_DATA_TX)\n");
    QSPI->FCR = FCR_TX_FLUSH | FCR_RX_FLUSH;   /* adres fazi kapali */
    QSPI->CCR = CCR_CLR_STA;
    QSPI->DR  = 0x11223344U;
    QSPI->CCR = 0x08040501U;                   /* dir=1 -> SPI_DATA_TX */

    tmo = 200000U;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol("yazma tamamlandi (busy dustu)", 0U, QSPI->STA & STA_BUSY);
    kontrol("done kuruldu", STA_DONE, QSPI->STA & STA_DONE);
    kontrol("yazmada hata yok", 0U, sta_err());
    QSPI->CCR = CCR_CLR_STA;

    /* ---------------------------------------------------------- vaka 7-9
       Vaka 6 gecti ama hedefledigi satiri KAPATMADI: cfg_addr_mode=00
       (oto) iken addr_phase_en = (ccr_data_mode != 2'b00) oluyor (RTL:56),
       yani data_mode=01 verince adres fazi otomatik aciliyor ve akis
       SPI_SEND_ADDR'e gidiyor. Adressiz dal (:275-281) hic kosmuyor.
       FCR[4:3]=10 adres fazini ZORLA kapatir -> addr_phase_en=0. */
#define FCR_ADDR_OFF   (2U << 3)

    uart_puts(UART0, "[7] adressiz yazma (SPI_DATA_TX, RTL:275-281)\n");
    QSPI->FCR = FCR_ADDR_OFF | FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
    QSPI->DR  = 0x55AA33CCU;
    QSPI->CCR = 0x08040501U;              /* dir=1 data_mode=01 dummy=0 */
    tmo = 200000U;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol("adressiz yazma bitti", 0U, QSPI->STA & STA_BUSY);
    kontrol("done", STA_DONE, QSPI->STA & STA_DONE);

    uart_puts(UART0, "[8] komut-only (RTL:268-270)\n");
    QSPI->FCR = FCR_ADDR_OFF | FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
    QSPI->CCR = 0x08000006U;              /* WREN: data_mode=00 -> CS_DEASSERT */
    tmo = 200000U;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol("komut-only bitti", 0U, QSPI->STA & STA_BUSY);
    kontrol("done", STA_DONE, QSPI->STA & STA_DONE);

    uart_puts(UART0, "[9] x4 yazma (io_o/io_oe mux, RTL:125-128,142-147)\n");
    QSPI->FCR = FCR_ADDR_OFF | FCR_TX_FLUSH | FCR_RX_FLUSH;
    QSPI->CCR = CCR_CLR_STA;
    QSPI->DR  = 0x0F1E2D3CU;
    QSPI->CCR = 0x08040701U;              /* dir=1 data_mode=11 (x4) */
    tmo = 200000U;
    while ((QSPI->STA & STA_BUSY) && --tmo) { }
    kontrol("x4 yazma bitti", 0U, QSPI->STA & STA_BUSY);
    kontrol("done", STA_DONE, QSPI->STA & STA_DONE);
    kontrol("hata yok", 0U, sta_err());
    QSPI->CCR = CCR_CLR_STA;

    uart_puts(UART0, "\n[QSPI-ERR] gecen=");
    putu(gecen);
    uart_puts(UART0, " kalan=");
    putu(kalan);
    uart_puts(UART0, (kalan == 0U) ? "  SONUC: PASS\n" : "  SONUC: FAIL\n");

    uart_puts(UART0, "[QSPI-ERR] erisilemez: RTL:209 RX underflow "
                     "(cmd_rx_pop zaten !rx_empty ile kurulu)\n");

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
