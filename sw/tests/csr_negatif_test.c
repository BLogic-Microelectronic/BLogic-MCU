/* ============================================
   Ostim BLogic Mikroelektronik
   csr_negatif_test.c  -  haritasiz/RO ofset negatif erisim testi
   ============================================
   NEDEN: SoC kapsama siniflandirmasi (verif/coverage_siniflandirma.md,
   bolum 6) cevre birimlerinin decode "default" kollarinin hicbir testte
   kosulmadigini gosterdi. EK-2 haritasi disindaki ofsetlere erisim mesru
   bir senaryodur (hatali yazilim, tarama araci): yazma sessizce yutulmali,
   okuma 0 dondurmelidir - DECERR yalniz periph_decoder penceresi disinda
   uretilir, pencere ICI haritasiz ofset her blokta default kola duser.

   Kapsanan satirlar: gpio_axil.sv:87,121 - uart_axil.sv:160 -
   uart_stream_axil.sv:219 - timer_axil.sv:189 (bayt-adres, araddr[1:0]!=0)
   - qspi_master_axil.sv:537,584 - ai_accelerator.sv:929,963.
   ============================================ */
#include "../drivers/blogic_mcu.h"

#ifndef TEST_CPB
#define TEST_CPB 434U
#endif

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

static uint32_t oku(uint32_t adres) {
    return *(volatile uint32_t *)adres;
}

static void yaz(uint32_t adres, uint32_t deger) {
    *(volatile uint32_t *)adres = deger;
}

int main(void) {
    UART0->CPB = TEST_CPB;
    uart_puts(UART0, "\n=== Haritasiz/RO ofset negatif erisimleri ===\n");

    /* [1] GPIO: RO IDR'ye yazma yutulur (gpio_axil.sv:87 default),
       haritasiz 0x08 sifir okur (:121 default) */
    uart_puts(UART0, "[1] GPIO\n");
    GPIO->ODR = 0x1234U;
    yaz(GPIO_BASE + 0x00U, 0xFFFFU);          /* IDR = RO */
    kontrol("IDR yazma ODR'yi bozmadi", 0x1234U, GPIO->ODR);
    kontrol("haritasiz 0x08", 0x0U, oku(GPIO_BASE + 0x08U));
    GPIO->ODR = 0x0U;

    /* [2] UART0: haritasiz 0x14 (uart_axil.sv:160 default) */
    uart_puts(UART0, "[2] UART0\n");
    kontrol("haritasiz 0x14", 0x0U, oku(UART0_BASE + 0x14U));

    /* [3] UART1: SCTL (0x1C) yalniz-yazilir -> okuma default'a duser;
       0x24 tamamen haritasiz (uart_stream_axil.sv:219) */
    uart_puts(UART0, "[3] UART1\n");
    kontrol("SCTL okuma (WO)", 0x0U, oku(UART1_BASE + 0x1CU));
    kontrol("haritasiz 0x24", 0x0U, oku(UART1_BASE + 0x24U));

    /* [4] TIMER: bayt-adresli okuma araddr[1:0]!=0 -> default kol
       (timer_axil.sv:189); cv32e40p lb bayt adresini oldugu gibi surer */
    uart_puts(UART0, "[4] TIMER\n");
    kontrol("bayt-ofset okuma", 0x0U,
            (uint32_t)*(volatile uint8_t *)(TIMER_BASE + 0x01U));

    /* [5] QSPI: haritasiz 0x18'e yazma yapilandirmayi bozmaz
       (qspi_master_axil.sv:537), 0x14/0x18 okumalar 0 (:584) */
    uart_puts(UART0, "[5] QSPI\n");
    {
        uint32_t ccr_once = oku(QSPI_BASE + 0x00U);
        uint32_t fcr_once = oku(QSPI_BASE + 0x10U);
        yaz(QSPI_BASE + 0x18U, 0xDEADBEEFU);
        kontrol("CCR degismedi", ccr_once, oku(QSPI_BASE + 0x00U));
        kontrol("FCR degismedi", fcr_once, oku(QSPI_BASE + 0x10U));
        kontrol("haritasiz 0x14", 0x0U, oku(QSPI_BASE + 0x14U));
        kontrol("haritasiz 0x18", 0x0U, oku(QSPI_BASE + 0x18U));
    }

    /* [6] AI CSR: haritasiz 0x10 yazma yutulur (ai_accelerator.sv:929),
       okuma 0 doner (:963); mevcut CSR'lar etkilenmez */
    uart_puts(UART0, "[6] AI CSR\n");
    AI_ACC->DATA_ADDR = 0x00030000U;
    yaz(AI_ACC_BASE + 0x10U, 0xCAFEBABEU);
    kontrol("DATA_ADDR degismedi", 0x00030000U, AI_ACC->DATA_ADDR);
    kontrol("haritasiz 0x10", 0x0U, oku(AI_ACC_BASE + 0x10U));

    uart_puts(UART0, "\n[CSR-NEG] gecen=");
    putu(gecen);
    uart_puts(UART0, " kalan=");
    putu(kalan);
    uart_puts(UART0, (kalan == 0U) ? "  SONUC: PASS\n" : "  SONUC: FAIL\n");
    if (kalan == 0U)
        uart_puts(UART0, "Hello World from BLogic MCU!\n");

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
