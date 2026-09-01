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

   ARGMAX KONTROLU (deneme/jtag dalinda YENIDEN ACIK): main'de FC-1
   erratasi nedeniyle yalniz conv sagtoplami kontrol ediliyordu
   (asic/README.md "Known issue FC-1"). Bu dalda ai_accelerator.sv'deki
   tek satirlik duzeltme (ST_FC_FETCH_W_WAIT boyunca co_re surulur) ile
   FC de makro modeli sozlesmesine uydugundan argmax kontrolu geri
   getirildi: PASS = conv bit-tam VE argmax==2 VE sonuc word'u dogru.
   Bu kosunun PASS olmasi FC-1 duzeltmesinin kanitidir.

   Protokol boot_flow_test_tb ailesiyle ayni: 'R' gonder -> 'A' bekle ->
   tam 12 karakter bas. Yalniz sagtoplam dogruysa "Hello World!" basilir;
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
static const char MSG_ARGMAX[]  = "AI ARGMAX BAD";  /* 12+ -> TB FAIL */

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
        uint32_t argmax = (st >> 4U) & 0xFU;
        uint32_t sonuc  = *(volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
        if (crc != CONV_GOLDEN_FNV)
            puts12(MSG_WRONG);
        else if ((argmax == 2U) && ((sonuc & 0xFU) == 2U))
            puts12(MSG_OK);         /* yes_real -> "yes" */
        else
            puts12(MSG_ARGMAX);
    }

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
