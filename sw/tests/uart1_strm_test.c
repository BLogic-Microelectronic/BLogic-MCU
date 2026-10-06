/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// uart1_strm_test.c  -  UART_1 stream DMA testi
// RX (TB loopback) -> word packer -> AXI master -> AI SRAM + irq18 pulse
// irq18 tek-cevrim pulse oldugundan ISR yerine SSTA polling kullanilir;
// pulse'in kendisi irq covergroup'unun strm binini kapatir.
// ============================================
#include "../drivers/blogic_mcu.h"

// stream DMA yazmaclari (uart_stream_axil.sv; UART_TypeDef 0x00-0x10'u kapsar)
#define STRM_SADR (*(volatile uint32_t *)(UART1_BASE + 0x14U))
#define STRM_SLEN (*(volatile uint32_t *)(UART1_BASE + 0x18U))
#define STRM_SCTL (*(volatile uint32_t *)(UART1_BASE + 0x1CU))
#define STRM_SSTA (*(volatile uint32_t *)(UART1_BASE + 0x20U))

#define SSTA_BUSY  (1U << 0)
#define SSTA_DONE  (1U << 1)

// DMA hedefi: AI SRAM scratch (stream master ai_sram_arbiter uzerinden
// YALNIZ AI SRAM'e yazabilir; data SRAM erisilemez - soc_top baglantisi)
#define DMA_DST 0x00037000U
static volatile uint32_t * const dma_buf = (volatile uint32_t *)DMA_DST;

int main(void) {
    UART0->CPB = 434;   // rapor kanali
    UART1->CPB = 50;    // stream kanali 1 Mbps (sim hizli)
    uint32_t ok = 1U;

    uart_puts(UART0, "\n[STRM] UART_1 stream DMA test\n");

    // ---- Faz A: DMA disi yollar - STP yaz/oku, readback'ler, RDR ----
    UART1->STP = 1U;
    if (UART1->STP != 1U)  { uart_puts(UART0, "[STRM] FAIL: STP readback\n"); ok = 0U; }
    if (UART1->CPB != 50U) { uart_puts(UART0, "[STRM] FAIL: CPB readback\n"); ok = 0U; }
    UART1->STP = 0U;
    // putc kullanma: loopback'te RX, TX'ten once biter; putc'un donusteki
    // CFG=0 yazmasi rx_done'i siler. Ham TDR yazisi TX'i baslatir (tx_start=wr_tdr_hit).
    UART1->TDR = (uint32_t)'Z';
    { uint32_t tmo = 100000U;
      while (((UART1->CFG & UART_CFG_RX_READY) == 0U) && (tmo != 0U)) { tmo--; }
      if (tmo == 0U) { uart_puts(UART0, "[STRM] FAIL: RX_READY timeout\n"); ok = 0U; }
      else if (UART1->RDR != (uint32_t)'Z') { uart_puts(UART0, "[STRM] FAIL: RDR != Z\n"); ok = 0U; }
      (void)UART1->TDR;      // TDR okuma kolu
      UART1->CFG = 0U;       // rx_done temizle
    }

    // DMA kurulumu: SADR yalniz bostayken yazilir -> once adres
    STRM_SADR = (uint32_t)dma_buf;
    STRM_SLEN = 8U;
    if (STRM_SADR != (uint32_t)dma_buf) { uart_puts(UART0, "[STRM] FAIL: SADR readback\n"); ok = 0U; }
    if (STRM_SLEN != 8U)                { uart_puts(UART0, "[STRM] FAIL: SLEN readback\n"); ok = 0U; }
    STRM_SCTL = 1U;     // start

    // 8 bayt gonder; TB loopback'i UART_1 RX'ine geri verir
    for (uint32_t i = 0U; i < 8U; i++) {
        uart_putc(UART1, (char)(0xA0U + i));
    }

    // DMA tamamlanmasini bekle
    uint32_t timeout = 500000U;
    while (((STRM_SSTA & SSTA_DONE) == 0U) && (timeout != 0U)) { timeout--; }

    if (timeout == 0U) {
        uart_puts(UART0, "[STRM] FAIL: DMA done timeout, SSTA=");
        { uint32_t s = STRM_SSTA;
          for (int i = 28; i >= 0; i -= 4)
              uart_putc(UART0, "0123456789ABCDEF"[(s >> i) & 0xFU]); }
        uart_puts(UART0, "\n");
        ok = 0U;
    } else {
        uint32_t sta = STRM_SSTA;
        if ((sta >> 16) != 8U)          { uart_puts(UART0, "[STRM] FAIL: rxcnt != 8\n");   ok = 0U; }
        if ((sta & SSTA_BUSY) != 0U)    { uart_puts(UART0, "[STRM] FAIL: busy stuck\n");   ok = 0U; }
        if (dma_buf[0] != 0xA3A2A1A0U)  { uart_puts(UART0, "[STRM] FAIL: word0 wrong\n"); ok = 0U; }
        if (dma_buf[1] != 0xA7A6A5A4U)  { uart_puts(UART0, "[STRM] FAIL: word1 wrong\n"); ok = 0U; }
        if (ok != 0U) uart_puts(UART0, "[STRM] DMA 8 bytes -> 2 words correct, irq18 pulse generated\n");
    }

    // ---- Faz C: abort yolu (SCTL[1]) - veri kontrollerinden SONRA ----
    STRM_SLEN = 16U;
    STRM_SCTL = 1U;
    for (uint32_t i = 0U; i < 4U; i++) { uart_putc(UART1, (char)(0xB0U + i)); }
    STRM_SCTL = 2U;    // abort
    { uint32_t tmo = 200000U;
      while (((STRM_SSTA & SSTA_BUSY) != 0U) && (tmo != 0U)) { tmo--; }
      if (tmo == 0U) { uart_puts(UART0, "[STRM] FAIL: busy did not drop after abort\n"); ok = 0U; }
      else if ((STRM_SSTA & SSTA_DONE) != 0U) { uart_puts(UART0, "[STRM] FAIL: done set on abort\n"); ok = 0U; }
      else { uart_puts(UART0, "[STRM] abort: busy dropped, done=0, no interrupt\n"); }
    }

    if (ok != 0U) {
        uart_puts(UART0, "[STRM] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");  // golden
    } else {
        uart_puts(UART0, "[STRM] FAIL\n");  // golden yok -> FAIL
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
