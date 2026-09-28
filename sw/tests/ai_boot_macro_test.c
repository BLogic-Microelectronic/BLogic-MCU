/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   ai_boot_macro_test.c - asic_top + SRAM makro modeli tam-yigin kaniti
   ============================================
   asic-top-sim hedefinin firmware'i. Amac: GDS'in GERCEK ust modulu
   (asic_top) ve TESLIM EDILEN OpenRAM makro modelleriyle, flash-boot +
   YZ conv katmanini tek kosuda dogrulamak. Boyle olunca 27 makro
   orneginin TAMAMI islevsel olarak calismis olur: ISRAM/DSRAM/AI SRAM
   boot kopyalarinda; hizlandiricinin ic makrolari (input/conv_w/conv_out)
   cikarim sirasinda (yukleme + 80.000 conv MAC + WCONV bosaltmasi).

   DOGRULAMA KRITERI: cikarim DONE + AI SRAM'deki conv_out bolgesinin
   (0x3_07A8, 1000 word) FNV-1a sagtoplami altin conv_out_yes_real.hex
   ile bit-tam ayni olmali. Bu bolge yalnizca ic makrolardan (girdi
   im'den, agirlik cw'den okunur, sonuc conv_out'a yazilip WCONV'da
   T+1'de geri okunarak) uretilebilir; tek word'luk sapma bile FAIL'dir.

   ARGMAX KONTROLU (CHECK_ARGMAX; make asic-top-sim firmware'i
   -DCHECK_ARGMAX ile derler): teslim RTL'inde FC1_FIX ACIK oldugundan
   (ST_FC_FETCH_W_WAIT boyunca co_re ayni adresle surulur) FC de makro
   modelinin dout-X sozlesmesine uyar; argmax==2 ("yes") ve sonuc word'u
   DA kontrol edilir. PASS = conv bit-tam VE argmax==2 VE sonuc word'u
   dogru; bu kosunun PASS'i FC-1 erratasinin duzeltildiginin kanitidir
   (negatif kontrol 6 Eylul 2026: FC1_FIX'siz RTL'de "AI ARGMAX BAD").

   Tarihce (FC-1 erratasi, 1 Eylul 2026, bu hedef buldu): FC asamasi
   co_rdata'yi okumadan >=3 cevrim sonra tuketiyordu; teslim edilen OpenRAM
   modeli dout'u her posedge'de X'e cektigi icin makro simde FC logitleri
   bozuluyordu (davranissal dalda veri tutuldugundan maskelenir). 14 Agustos
   imzali kosu bu duzeltme olmadan kosuldu; ayrintilar asic/README.md 9.5.
   CHECK_ARGMAX tanimsiz derlemede bu dosya yalniz conv sagtoplamini
   kontrol eder (o gunku davranis).

   Protokol boot_flow_test_tb ailesiyle ayni: 'R' gonder -> 'A' bekle ->
   tam 12 karakter bas. Yalniz tum kontroller gecerse "Hello World!" basilir;
   her hata farkli 12 karakter basar ve TB FAIL der (self-checking).
   Girdi: flash 0x10000'deki ai_sram_init.hex bolgesi (yes_real senaryosu)
   bootloader tarafindan AI SRAM'e kopyalanir.
   ============================================ */
#include "../drivers/blogic_mcu.h"

#define AI_SRAM_BASE   0x00030000U
#define AI_RESULT_OFF  0x00005A58U
#define CONV_OUT_OFF   0x000007A8U   /* rtl/ai_accelerator/ai_accelerator.sv:89 */
#define CONV_OUT_WORDS 1000U

/* python3: FNV-1a(conv_out_yes_real.hex 1000 word) -> 0x9ED98EEF */
#define CONV_GOLDEN_FNV 0x9ED98EEFU

#define CTRL_START      (1U << 0)
#define STATUS_DONE     (1U << 1)

static const char MSG_OK[]      = "Hello World!";   /* 12 karakter */
static const char MSG_TIMEOUT[] = "AI TIMEOUT!!";   /* 12 karakter */
static const char MSG_WRONG[]   = "CONV CRC BAD";   /* 12 karakter */
#ifdef CHECK_ARGMAX
static const char MSG_ARGMAX[]  = "AI ARGMAX BAD";  /* 12+ -> TB FAIL */
#endif

static void puts12(const char *s) {
    for (int i = 0; (i < 12) && (s[i] != '\0'); i++)
        uart_putc(UART0, s[i]);
}

int main(void) {
    UART0->CPB = 434;               /* 50 MHz / 115200 */
    uart_putc(UART0, 'R');          /* hazir isareti */
    (void)uart_getc(UART0);         /* TB'nin 'A'sini bekle */

    /* cikarim: girdi bootloader'in AI SRAM'e kopyaladigi yes_real vektoru */
    AI_ACC->DATA_ADDR = AI_SRAM_BASE;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    AI_ACC->CTRL      = CTRL_START;

    uint32_t st = 0U, tmo = 800000U;
    do { st = AI_ACC->STATUS; } while (((st & STATUS_DONE) == 0U) && --tmo);

    if (tmo == 0U) {
        puts12(MSG_TIMEOUT);
    } else {
        const volatile uint32_t *co =
            (const volatile uint32_t *)(AI_SRAM_BASE + CONV_OUT_OFF);
        uint32_t crc = 0x811C9DC5U;
        for (uint32_t i = 0U; i < CONV_OUT_WORDS; i++) {
            crc ^= co[i];
            crc *= 16777619U;
        }
#ifdef CHECK_ARGMAX
        /* FC1_FIX kaniti: conv bit-tam VE argmax==2 VE sonuc word'u dogru */
        uint32_t argmax = (st >> 4U) & 0xFU;
        uint32_t sonuc  = *(volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
        if (crc != CONV_GOLDEN_FNV)
            puts12(MSG_WRONG);
        else if ((argmax == 2U) && ((sonuc & 0xFU) == 2U))
            puts12(MSG_OK);         /* yes_real -> "yes" */
        else
            puts12(MSG_ARGMAX);
#else
        puts12((crc == CONV_GOLDEN_FNV) ? MSG_OK : MSG_WRONG);
#endif
    }

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
