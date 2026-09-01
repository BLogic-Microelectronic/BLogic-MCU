/* ============================================
   Ostim BLogic Mikroelektronik
   i2c_soc_test.c  -  I2C SoC-seviyesi kapsama testi
   ============================================
   NEDEN: SoC kapsama siniflandirmasi (verif/coverage_siniflandirma.md,
   bolum 1) i2c_master_axil.sv'nin 122 satirinin SoC kosusunda hic
   kapsanmadigini gosterdi - 11 testin hicbiri I2C'ye dokunmuyordu.
   Blok TB'si (i2c_system_tb, echo slave) %97,8 kapsiyor; bu test ayni
   yollarin SoC uzerinden (CPU -> AXI -> I2C) kosuldugunu kanitlar.

   SIM ORTAMI SOZLESMESI (verif/tb/sim_main.cpp): jenerik harness
   i2c_sda_i'yi SURMEZ -> giris sabit 0'dir. Open-drain dunyasinda
   sda=0 "hat cekilmis" demektir:
     - ACK pencerelerinde master 0 ornekler -> her adres/veri ACK'lenir
       (nack_err HICBIR ZAMAN kurulmaz; NACK yollari B-sinifi olarak
       UVM i2c_directed_test'te blok seviyesinde kapsanir)
     - RX'te tum veri bitleri 0 -> RDR kesin 0x00000000
   Bu determinizm sayesinde test self-checking'dir.
   ============================================ */
#include "../drivers/blogic_mcu.h"

#ifndef TEST_CPB
#define TEST_CPB 434U
#endif

/* I2C CFG bitleri (i2c_master_axil.sv:154) */
#define CFG_TX_EN    (1U << 0)
#define CFG_TX_DONE  (1U << 1)
#define CFG_RX_EN    (1U << 2)
#define CFG_RX_DONE  (1U << 3)
#define CFG_NACK     (1U << 4)

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

/* CFG'de maske set olana kadar bekle; 0 = zaman asimi */
static uint32_t bekle(uint32_t maske) {
    uint32_t tmo = 400000U;
    while (((I2C->CFG & maske) == 0U) && --tmo) { }
    return tmo;
}

int main(void) {
    UART0->CPB = TEST_CPB;
    uart_puts(UART0, "\n=== I2C SoC kapsama testi (sda=0 ortami) ===\n");

    /* [1] reset degerleri (okuma mux RTL:148-155) */
    uart_puts(UART0, "[1] reset degerleri\n");
    kontrol("NBY", 0x1U, I2C->NBY);
    kontrol("ADR", 0x0U, I2C->ADR);
    kontrol("RDR", 0x0U, I2C->RDR);
    kontrol("CFG", 0x0U, I2C->CFG);

    /* [2] NBY kiskaci (RTL:104-106) */
    uart_puts(UART0, "[2] NBY kiskaci\n");
    I2C->NBY = 0U;  kontrol("0->1", 1U, I2C->NBY);
    I2C->NBY = 7U;  kontrol("7->4", 4U, I2C->NBY);
    I2C->NBY = 3U;  kontrol("3->3", 3U, I2C->NBY);

    /* [3] ADR/TDR readback (RTL:107-108) */
    uart_puts(UART0, "[3] ADR/TDR readback\n");
    I2C->ADR = 0x50U;        kontrol("ADR", 0x50U, I2C->ADR);
    I2C->TDR = 0xDEADBEEFU;  kontrol("TDR", 0xDEADBEEFU, I2C->TDR);

    /* [4] negatif erisimler: RO RDR'ye yazma yutulur (RTL:119),
       haritasiz 0x14 sifir okur (RTL:156) */
    uart_puts(UART0, "[4] negatif erisimler\n");
    *(volatile uint32_t *)(I2C_BASE + 0x08U) = 0x12345678U;
    kontrol("RDR yazma yutuldu", 0x0U, I2C->RDR);
    kontrol("haritasiz 0x14", 0x0U, *(volatile uint32_t *)(I2C_BASE + 0x14U));

    /* [5] TX NBY=4: motor tam yol - START/BITS/ACK/STOP + coklu bayt +
       tdr_byte idx 0..3 (RTL:196-201,237-345). sda=0 -> hep ACK */
    uart_puts(UART0, "[5] TX 4 bayt (hep-ACK)\n");
    I2C->NBY = 4U;
    I2C->ADR = 0x2AU;
    I2C->TDR = 0xA1B2C3D4U;
    I2C->CFG = CFG_TX_EN;
    kontrol("tx_done geldi", 1U, bekle(CFG_TX_DONE) != 0U ? 1U : 0U);
    kontrol("nack yok", 0U, I2C->CFG & CFG_NACK);

    /* [6] bayrak temizleme (RTL:113-115): CFG=0 hepsini dusurur */
    uart_puts(UART0, "[6] bayrak temizleme\n");
    I2C->CFG = 0U;
    kontrol("CFG=0", 0x0U, I2C->CFG);

    /* [7] RX NBY=4: giris orneklemesi (RTL:271) + RDR bayt mux
       (RTL:287-292) + RX'te RDR on-sifirlama (RTL:245).
       sda=0 -> tum bitler 0 -> RDR kesin 0 */
    uart_puts(UART0, "[7] RX 4 bayt (veri=0)\n");
    I2C->NBY = 4U;
    I2C->CFG = CFG_RX_EN;
    kontrol("rx_done geldi", 1U, bekle(CFG_RX_DONE) != 0U ? 1U : 0U);
    kontrol("nack yok", 0U, I2C->CFG & CFG_NACK);
    kontrol("RDR=0", 0x00000000U, I2C->RDR);

    /* [8] tek baytlik TX (last_byt ilk baytta - RTL:316-317) */
    uart_puts(UART0, "[8] TX 1 bayt\n");
    I2C->CFG = 0U;
    I2C->NBY = 1U;
    I2C->TDR = 0x000000E7U;
    I2C->CFG = CFG_TX_EN;
    kontrol("tx_done geldi", 1U, bekle(CFG_TX_DONE) != 0U ? 1U : 0U);
    I2C->CFG = 0U;

    uart_puts(UART0, "\n[I2C-SOC] gecen=");
    putu(gecen);
    uart_puts(UART0, " kalan=");
    putu(kalan);
    uart_puts(UART0, (kalan == 0U) ? "  SONUC: PASS\n" : "  SONUC: FAIL\n");
    if (kalan == 0U)
        uart_puts(UART0, "Hello World from BLogic MCU!\n");

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
