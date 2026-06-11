// I2C sistem testi (sartname EK-2): NBY yuvarlama, ADR maskesi,
// 1B/4B TX + echo RX (RDR bayt paketleme), transfer-ortasi latch, NACK.
// Slave: TB'deki i2c_slave_model @0x42 (echo).
#include "../drivers/blogic_mcu.h"

#ifndef CPB_VAL
#define CPB_VAL 434
#endif

#define CFG_TXEN  0x01U
#define CFG_TXDN  0x02U
#define CFG_RXEN  0x04U
#define CFG_RXDN  0x08U
#define CFG_NACK  0x10U

static int check(const char *name, uint32_t got, uint32_t exp) {
    if (got == exp) return 0;
    uart_puts(UART0, "FAIL ");
    uart_puts(UART0, (char *)name);
    uart_puts(UART0, "\n");
    return 1;
}

static uint32_t i2c_tx(void) {
    I2C->CFG = CFG_TXEN;
    while (!(I2C->CFG & CFG_TXDN)) { }
    uint32_t nack = I2C->CFG & CFG_NACK;
    I2C->CFG = 0;                 /* enable dusur + 0-yaz-temizle */
    return nack;
}
static uint32_t i2c_rx(void) {
    I2C->CFG = CFG_RXEN;
    while (!(I2C->CFG & CFG_RXDN)) { }
    uint32_t nack = I2C->CFG & CFG_NACK;
    I2C->CFG = 0;
    return nack;
}

int main(void) {
    UART0->CPB = CPB_VAL;
    int fail = 0;

    I2C->NBY = 0;  fail += check("T1a NBY 0->1 ", I2C->NBY, 1);
    I2C->NBY = 25; fail += check("T1b NBY 25->4", I2C->NBY, 4);
    I2C->NBY = 3;  fail += check("T1c NBY 3->3 ", I2C->NBY, 3);

    I2C->ADR = 0xFFU; fail += check("T2 ADR maske ", I2C->ADR, 0x7FU);
    I2C->ADR = 0x42U;

    I2C->NBY = 1; I2C->TDR = 0xA5U;
    fail += check("T3a TX nack=0", i2c_tx(), 0);
    fail += check("T3b RX nack=0", i2c_rx(), 0);
    fail += check("T3c RDR==A5  ", I2C->RDR & 0xFFU, 0xA5U);

    I2C->NBY = 4; I2C->TDR = 0x44332211U;
    fail += check("T4a TX       ", i2c_tx(), 0);
    fail += check("T4b RX       ", i2c_rx(), 0);
    fail += check("T4c RDR pack ", I2C->RDR, 0x44332211U);

    I2C->NBY = 4; I2C->TDR = 0x778899AAU;
    I2C->CFG = CFG_TXEN;
    I2C->TDR = 0;                  /* islem ortasi yazimlar — latch testi */
    I2C->NBY = 1;
    while (!(I2C->CFG & CFG_TXDN)) { }
    I2C->CFG = 0;
    I2C->NBY = 4;
    fail += check("T5a RX       ", i2c_rx(), 0);
    fail += check("T5b latch    ", I2C->RDR, 0x778899AAU);

    I2C->ADR = 0x13U; I2C->NBY = 1; I2C->TDR = 0x00U;
    fail += check("T6 NACK set  ", i2c_tx() ? 1U : 0U, 1U);
    I2C->ADR = 0x42U;

    if (fail == 0) uart_puts(UART0, "I2C SYS OK\n");
    else           uart_puts(UART0, "FAIL toplam\n");
    while (1) { }
}
