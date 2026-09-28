/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   ai_sat_test.c  -  requantizasyon doyum-yolu testi
   ============================================
   NEDEN: SoC kapsama siniflandirmasi (verif/coverage_siniflandirma.md,
   bolum 4) rq_round_sat fonksiyonunun ust/alt doyum kollarinin
   (ai_accelerator.sv:315-316) hicbir testte kosulmadigini gosterdi -
   gercek model verisiyle logit'ler hic doymuyor.

   YONTEM: conv bias alanina (AI SRAM 0x1BA8, 8 x int32) uc degerler
   yazilir; hizlandirici her START'ta bias'i SRAM'den yeniden yukler.
     bias = +2^30  ->  acc ~ +2^30 (conv katkisi ~10M, tasma yok)
                   ->  requant cikisi >> 127  ->  ust doyum: TUM conv_out
                       baytlari 0x7F
     bias = -2^30  ->  alt doyum: TUM baytlar 0x80 (act_min = zp = -128;
                       fused ReLU'nun kuantize karsiligi zp'de kirpar)
   conv_out SRAM'e geri yazildigi (0x07A8, 1000 word) icin CPU her
   word'u dogrudan dogrular - 2000 word'un tamami kesin beklentilidir.
   FC bu doymus girdiyle kosar (sonuc bilgi amacli raporlanir); DONE
   akisi her iki kosuda da dogrulanir.
   ============================================ */
#include "../drivers/blogic_mcu.h"

#ifndef TEST_CPB
#define TEST_CPB 434U
#endif

#define AI_SRAM_BASE   0x00030000U
#define CONV_BIAS_OFF  0x00001BA8U   /* 8 x int32 */
#define CONV_OUT_OFF   0x000007A8U   /* 1000 word */
#define AI_RESULT_OFF  0x00005A58U

#define CTRL_START      (1U << 0)
#define CTRL_CLEAR_DONE (1U << 1)
#define STATUS_DONE     (1U << 1)

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

/* bias'i doldur, kos, conv_out'un tamamini beklenen word'le kiyasla */
static void doyum_kosusu(const char *ad, uint32_t bias, uint32_t beklenen) {
    volatile uint32_t *b = (volatile uint32_t *)(AI_SRAM_BASE + CONV_BIAS_OFF);
    volatile uint32_t *c = (volatile uint32_t *)(AI_SRAM_BASE + CONV_OUT_OFF);
    uint32_t uyusmayan = 0U, ilk = 0U, tmo = 3000000U;

    uart_puts(UART0, ad);
    for (int i = 0; i < 8; i++) b[i] = bias;

    AI_ACC->CTRL = CTRL_START;
    while (((AI_ACC->STATUS & STATUS_DONE) == 0U) && --tmo) { }
    kontrol("done geldi", 1U, (tmo != 0U) ? 1U : 0U);

    for (uint32_t i = 0U; i < 1000U; i++) {
        if (c[i] != beklenen) {
            if (uyusmayan == 0U) ilk = c[i];
            uyusmayan++;
        }
    }
    kontrol("conv_out 1000/1000", 0U, uyusmayan);
    if (uyusmayan != 0U) {
        uart_puts(UART0, "  ilk sapan = ");
        puth(ilk);
        uart_puts(UART0, "\n");
    }
    uart_puts(UART0, "  argmax (bilgi) = ");
    putu((AI_ACC->STATUS >> 4U) & 0xFU);
    uart_puts(UART0, "\n");

    AI_ACC->CTRL = CTRL_CLEAR_DONE;
}

int main(void) {
    UART0->CPB = TEST_CPB;
    uart_puts(UART0, "\n=== AI requant doyum testi ===\n");

    AI_ACC->DATA_ADDR = AI_SRAM_BASE;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;

    /* [1] ust doyum: +2^30 bias -> tum conv_out 0x7F */
    doyum_kosusu("[1] bias=+2^30 (ust doyum)\n", 0x40000000U, 0x7F7F7F7FU);

    /* [2] alt doyum: -2^30 bias -> tum conv_out 0x80 */
    doyum_kosusu("[2] bias=-2^30 (alt doyum)\n", 0xC0000000U, 0x80808080U);

    uart_puts(UART0, "\n[AI-SAT] gecen=");
    putu(gecen);
    uart_puts(UART0, " kalan=");
    putu(kalan);
    uart_puts(UART0, (kalan == 0U) ? "  SONUC: PASS\n" : "  SONUC: FAIL\n");
    if (kalan == 0U)
        uart_puts(UART0, "Hello World from BLogic MCU!\n");

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
