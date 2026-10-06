/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   ai_multi_class_test.c  -  4 sinifin tamami, tek bitstream
   ============================================
   ai_micro_speech_test.c tek senaryo (yes_real) kosuyordu. Jury demosunda
   "4 sinifli konusma tanima" diyip tek sinif gostermek eksik kalir.

   AI SRAM'de 4 girdi vektoru gomulu (generate_ai_sram_init_multi.py):
     0x0000  silence   0x5A60  unknown   0x6208  yes   0x69B0  no
   Firmware her turdan once secileni 0x0'a kopyalar, hizlandiriciyi
   calistirir, argmax'i beklenen degerle karsilastirir.
   ============================================ */
#include "../drivers/blogic_mcu.h"

/* AI SRAM yerlesimi (ai_accelerator.sv ve generate_ai_sram_init_multi.py ile ayni) */
#define AI_SRAM_BASE        0x00030000U
#define AI_INPUT_OFF        0x00000000U
#define AI_RESULT_OFF       0x00005A58U

/* Girdi vektoru: 1960 bayt = 490 word */
#define AI_INPUT_WORDS      490U

/* Ek senaryo yuvalari - generator ile BIREBIR ayni olmali */
#define SLOT1_OFF           0x00005A60U
#define SLOT2_OFF           0x00006208U
#define SLOT3_OFF           0x000069B0U

/* AI accelerator CSR bitleri */
#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_BUSY         (1U << 0)
#define STATUS_DONE         (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

#define POLL_TIMEOUT        500000U

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

typedef struct {
    uint32_t    src_off;    /* AI SRAM icindeki kaynak ofseti */
    uint32_t    expected;   /* beklenen argmax */
    const char *name;
} scenario_t;

/* Sira generator'daki SCENARIOS ile AYNI olmali */
static const scenario_t SCEN[4] = {
    { AI_INPUT_OFF, 0U, "silence" },   /* zaten 0x0'da, kopyalama yok */
    { SLOT1_OFF,    1U, "unknown" },
    { SLOT2_OFF,    2U, "yes"     },
    { SLOT3_OFF,    3U, "no"      },
};


static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[12];
    int  n = 0;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v != 0U) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
}

static void uart_puth(UART_TypeDef *u, uint32_t v) {
    uart_puts(u, "0x");
    for (int i = 28; i >= 0; i -= 4) {
        uart_putc(u, "0123456789ABCDEF"[(v >> i) & 0xFU]);
    }
}

/* Secilen vektoru calisan girdi alanina (0x0) tasi */
static void load_input(uint32_t src_off) {
    if (src_off == AI_INPUT_OFF) return;          /* zaten yerinde */
    volatile uint32_t *src = (volatile uint32_t *)(AI_SRAM_BASE + src_off);
    volatile uint32_t *dst = (volatile uint32_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    for (uint32_t i = 0U; i < AI_INPUT_WORDS; i++) {
        dst[i] = src[i];
    }
}

/* Bir senaryoyu kostur. Donen: 1 = gecti, 0 = kaldi */
static uint32_t run_scenario(const scenario_t *s) {
    uart_puts(UART0, "\n[AI] --- scenario: ");
    uart_puts(UART0, s->name);
    uart_puts(UART0, " (expected argmax=");
    uart_putu(UART0, s->expected);
    uart_puts(UART0, ") ---\n");

    load_input(s->src_off);

    /* CSR'lari her turda tazele - hizlandirici DONE sonrasi sifirlanmis olabilir */
    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;

    /* Sonuc alanini bilinen bir degerle doldur: hizlandirici gercekten yazdi mi? */
    volatile uint32_t *result_ptr = (volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
    *result_ptr = 0xDEADBEEFU;

    AI_ACC->CTRL = CTRL_START;

    uint32_t st        = 0U;
    uint32_t timeout   = POLL_TIMEOUT;
    uint32_t poll_iter = 0U;
    do {
        st = AI_ACC->STATUS;
        timeout--;
        poll_iter++;
    } while (((st & STATUS_DONE) == 0U) && (timeout != 0U));

    if (timeout == 0U) {
        uart_puts(UART0, "[AI]     FAIL: TIMEOUT, the DONE bit never came\n");
        return 0U;
    }

    uint32_t argmax      = (st >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    uint32_t result_word = *result_ptr;

    uart_puts(UART0, "[AI]     argmax=");
    uart_putu(UART0, argmax);
    uart_puts(UART0, " (");
    uart_puts(UART0, (argmax < 4U) ? CLASS_NAMES[argmax] : "INVALID");
    uart_puts(UART0, ")  mem[OUT]=");
    uart_puth(UART0, result_word);
    uart_puts(UART0, "  poll=");
    uart_putu(UART0, poll_iter);
    uart_puts(UART0, "\n");

    /* Bir sonraki tur icin DONE'i temizle */
    AI_ACC->CTRL = CTRL_CLEAR_DONE;

    if (result_word == 0xDEADBEEFU) {
        uart_puts(UART0, "[AI]     FAIL: the accelerator wrote no result (sentinel still there)\n");
        return 0U;
    }
    if ((argmax == s->expected) && ((result_word & 0xFU) == s->expected)) {
        uart_puts(UART0, "[AI]     PASS\n");
        return 1U;
    }

    uart_puts(UART0, "[AI]     FAIL: expected=");
    uart_putu(UART0, s->expected);
    uart_puts(UART0, " got=");
    uart_putu(UART0, argmax);
    uart_puts(UART0, "\n");
    return 0U;
}


int main(void) {
    UART0->CPB = 434;

    uart_puts(UART0, "\n");
    uart_puts(UART0, "========================================\n");
    uart_puts(UART0, " BLogic MCU - 4-class keyword spotting\n");
    uart_puts(UART0, "========================================\n");

    uint32_t st0 = AI_ACC->STATUS;
    uart_puts(UART0, "[AI] STATUS pre-start = ");
    uart_puth(UART0, st0);
    uart_puts(UART0, "\n");

    uint32_t passed = 0U;
    for (uint32_t i = 0U; i < 4U; i++) {
        passed += run_scenario(&SCEN[i]);
    }

    uart_puts(UART0, "\n----------------------------------------\n");
    uart_puts(UART0, "[AI] RESULT: ");
    uart_putu(UART0, passed);
    uart_puts(UART0, " of 4 classes correct\n");
    if (passed == 4U) {
        uart_puts(UART0, "[AI] ALL CLASSES PASS\n");
    } else {
        uart_puts(UART0, "[AI] MISSING: ");
        uart_putu(UART0, 4U - passed);
        uart_puts(UART0, " classes wrong\n");
    }
    uart_puts(UART0, "----------------------------------------\n");

    /* TB golden_string SADECE gercekten gectiyse basilir.
       6 Agustos ister denetiminde yakalandi: sim_main.cpp:76,217-219 PASS
       kararini bu dizgeyi aramaya bagliyor. Kosulsuz basilirsa test FAIL
       verirken kapi yine PASS der - ai_micro_speech_test.c:145'teki hata
       tam olarak buydu ve ben bu dosyada onu tekrarlamistim. */
    if (passed == 4U) {
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    }

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
