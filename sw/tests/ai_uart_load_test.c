/* ============================================
   Ostim BLogic Mikroelektronik
   ai_uart_load_test.c  -  B11: UART'tan oznitelik vektoru yukle, cikarim kostur
   ============================================
   NEDEN: TEKNOFEST test verisini SAHADA verecek. Su ana kadarki butun demolar
   girdi vektorunu bitstream'e gomuyordu; sahada yeni veri gelirse 40 dakikalik
   bitstream kurmak imkansiz. Bu firmware o yolu aciyor.

   FORMATTAN BAGIMSIZ: protokol ham bayt tasir. Juri hangi olcekleme / hangi
   uzunluk verirse versin, bayt dizisi oldugu surece calisir. Uzunluk basliktan
   gelir, derleme zamaninda sabit degildir.

   KANAL SECIMI - neden UART0:
     UART0 -> FT232 USB kopru (genesys2.xdc:26-27, Y20/Y23)  = COM7, kabloda hazir
     UART1 -> Pmod JA ja[0]/ja[1] (genesys2.xdc:63)          = harici USB-TTL gerekir
   Sahada adaptor olmayabilir, o yuzden varsayilan yol UART0. UART1'deki stream
   DMA (uart_stream_axil.sv, STRM_SADR/SLEN/SCTL) daha hizli ve donanimi
   gosterir; adaptor varsa AI_UART_USE_DMA ile acilir.

   PROTOKOL (UART0, 115200):
     host -> mcu : 'B','L','G','1'  + uzunluk[4, little-endian]
     host -> mcu : <uzunluk> bayt ham veri
     host -> mcu : saglama[4, little-endian]  (baytlarin toplami, mod 2^32)
     mcu  -> host: rapor (argmax, sinif adi, sonuc word'u, saglama dogrulamasi)
   Sonra basa doner - juri arka arkaya vektor gonderebilir.

   Baslik gelmezse gomulu vektorle kosar; demo asla bos ekranda kalmaz.
   ============================================ */
#include "../drivers/blogic_mcu.h"

/* AI SRAM yerlesimi - ai_accelerator.sv ile ayni */
#define AI_SRAM_BASE      0x00030000U
#define AI_INPUT_OFF      0x00000000U
#define AI_RESULT_OFF     0x00005A58U
#define AI_INPUT_MAX      1960U        /* 490 word - CONV_OUT 0x07A8'de basliyor */

/* Hizlandirici CSR bitleri */
#define CTRL_START        (1U << 0)
#define CTRL_CLEAR_DONE   (1U << 1)
#define STATUS_DONE       (1U << 1)
#define RESULT_SHIFT      4U
#define RESULT_MASK       0xFU

#define POLL_TIMEOUT      500000U
#define RX_TIMEOUT        20000000U    /* ~bayt basina bekleme; sonsuz asilmasin */
#define HDR_TIMEOUT       60000000U    /* baslik icin daha uzun: juri yaziyor */

/* Saha varsayilani 434 (50 MHz / 115200) - DEGISMEDI.
   Simulasyonda 1972 baytlik cerceve 434'te ~8,6 M cevrim suruyor;
   -DAI_UART_CPB=64 ile ~1,3 M'ye iniyor. Protokol mantigi ayni,
   yalniz bit zamanlamasi degisiyor. Donanim on-bolme CPB>>3 oldugu
   icin 64 -> bolen 8; DTR'de CPB=50 (1 Mbps) zaten dogrulanmisti. */
#ifndef AI_UART_CPB
#define AI_UART_CPB 434U
#endif

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

/* ---------------------------------------------------------------- yardimci */

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

/* DIKKAT: surucudeki uart_getc() rx bayragini TEMIZLEMIYOR.
   uart_axil.sv:197 -> bayrak yalniz CFG'ye bit1=0 yazilinca dusuyor; RDR
   okumak yetmiyor. uart_getc ile art arda okuma yapilirsa ayni bayt sonsuza
   kadar geri gelir (uart_loopback.c tek bayt okudugu icin bu hic patlamamis).
   Cok baytli alim bu yuzden kendi fonksiyonumuzla yapiliyor. */
static uint32_t rx_byte(uint32_t *out, uint32_t timeout) {
    while ((UART0->CFG & UART_CFG_RX_READY) == 0U) {
        if (timeout-- == 0U) return 0U;
    }
    *out       = UART0->RDR & 0xFFU;
    UART0->CFG = 0U;                    /* rx_done temizle - sart */
    return 1U;
}

/* little-endian 32-bit oku */
static uint32_t rx_u32(uint32_t *out, uint32_t timeout) {
    uint32_t v = 0U, b;
    for (uint32_t i = 0U; i < 4U; i++) {
        if (!rx_byte(&b, timeout)) return 0U;
        v |= (b << (8U * i));
    }
    *out = v;
    return 1U;
}

/* ------------------------------------------------------------- cikarim */

static void run_inference(const char *etiket) {
    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;

    /* Sentinel: hizlandirici gercekten yazdi mi, yoksa eski deger mi duruyor? */
    volatile uint32_t *res = (volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
    *res = 0xDEADBEEFU;

    AI_ACC->CTRL = CTRL_START;

    uint32_t st = 0U, tmo = POLL_TIMEOUT, iter = 0U;
    do { st = AI_ACC->STATUS; tmo--; iter++; }
    while (((st & STATUS_DONE) == 0U) && (tmo != 0U));

    uart_puts(UART0, "[AI] kaynak=");
    uart_puts(UART0, etiket);

    if (tmo == 0U) {
        uart_puts(UART0, "  SONUC: FAIL - DONE gelmedi (timeout)\n");
        return;
    }

    uint32_t argmax = (st >> RESULT_SHIFT) & RESULT_MASK;
    uint32_t word   = *res;

    uart_puts(UART0, "  argmax=");
    putu(argmax);
    uart_puts(UART0, " (");
    uart_puts(UART0, (argmax < 4U) ? CLASS_NAMES[argmax] : "GECERSIZ");
    uart_puts(UART0, ")  mem[OUT]=");
    puth(word);
    uart_puts(UART0, "  poll=");
    putu(iter);
    uart_puts(UART0, "\n");

    if (word == 0xDEADBEEFU)
        uart_puts(UART0, "[AI] UYARI: sentinel duruyor - hizlandirici sonuc yazmadi\n");

    AI_ACC->CTRL = CTRL_CLEAR_DONE;
}

/* --------------------------------------------------------------- ana dongu */

int main(void) {
    UART0->CPB = AI_UART_CPB;          /* saha: 434 = 50 MHz / 115200 */

    uart_puts(UART0, "\n========================================\n");
    uart_puts(UART0, " BLogic MCU - UART'tan YZ vektor yukleme\n");
    uart_puts(UART0, "========================================\n");
    uart_puts(UART0, "[RX] Protokol: 'BLG1' + uzunluk[4] + veri + saglama[4]\n");
    uart_puts(UART0, "[RX] Tum alanlar little-endian. Bekleniyor...\n");

    /* Baslangicta gomulu vektorle bir tur: kablo takili degilse bile demo yasar */
    run_inference("gomulu vektor");

    volatile uint8_t *dst = (volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);

    for (;;) {
        /* --- baslik: 'B','L','G','1' senkronizasyonu --- */
        static const char MAGIC[4] = {'B', 'L', 'G', '1'};
        uint32_t matched = 0U, b;

        uart_puts(UART0, "\n[RX] HAZIR - vektor bekleniyor\n");

        while (matched < 4U) {
            if (!rx_byte(&b, HDR_TIMEOUT)) { matched = 0U; continue; }
            matched = (b == (uint32_t)MAGIC[matched]) ? (matched + 1U)
                    : ((b == (uint32_t)MAGIC[0]) ? 1U : 0U);
        }

        uint32_t len = 0U;
        if (!rx_u32(&len, RX_TIMEOUT)) {
            uart_puts(UART0, "[RX] HATA: uzunluk alinamadi\n");
            continue;
        }

        /* DIKKAT: burada TX YAPILMAZ. uart_putc gonderimi beklerken CPU
           RDR'yi yoklamiyor ve UART'ta FIFO yok; host akisi surdugu icin
           o sirada gelen her bayt kaybolur. Onceki surumde uzunluk raporu
           tam burada basiliyordu ve akisin ilk ~20 baytini yiyordu -
           simulasyonda da donanimda da. Rapor saglamadan SONRA. */

        if ((len == 0U) || (len > AI_INPUT_MAX)) {
            uart_puts(UART0, "[RX] HATA: uzunluk gecersiz (1..");
            putu(AI_INPUT_MAX);
            uart_puts(UART0, " olmali) - vektor atlandi\n");
            continue;
        }

        /* --- veri --- */
        uint32_t sum = 0U, ok = 1U;
        for (uint32_t i = 0U; i < len; i++) {
            if (!rx_byte(&b, RX_TIMEOUT)) {
                uart_puts(UART0, "[RX] HATA: veri yarida kesildi, alinan=");
                putu(i);
                uart_puts(UART0, "\n");
                ok = 0U;
                break;
            }
            dst[i] = (uint8_t)b;
            sum   += b;
        }
        if (!ok) continue;

        /* Kismi vektor gelirse kalani sifirla - eski veri karismasin */
        for (uint32_t i = len; i < AI_INPUT_MAX; i++) dst[i] = 0U;

        /* --- saglama --- */
        uint32_t crc = 0U;
        if (!rx_u32(&crc, RX_TIMEOUT)) {
            uart_puts(UART0, "[RX] HATA: saglama alinamadi\n");
            continue;
        }

        if (crc != sum) {
            uart_puts(UART0, "[RX] SAGLAMA HATASI: beklenen=");
            puth(crc);
            uart_puts(UART0, " hesaplanan=");
            puth(sum);
            uart_puts(UART0, " - cikarim KOSTURULMADI\n");
            continue;
        }

        uart_puts(UART0, "[RX] uzunluk=");
        putu(len);
        uart_puts(UART0, " bayt  saglama OK (");
        puth(sum);
        uart_puts(UART0, ")\n");

        run_inference("UART");
    }

    return 0;
}
