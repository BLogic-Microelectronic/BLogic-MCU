#include "../drivers/blogic_mcu.h"
#include "../drivers/qspi.h"

void uart_put_hex8(uint8_t v) {
    const char h[] = "0123456789ABCDEF";
    uart_putc(UART0, h[(v >> 4) & 0xF]);
    uart_putc(UART0, h[v & 0xF]);
}
void uart_put_hex32(uint32_t v) {
    uart_puts(UART0, "0x");
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(UART0, "0123456789ABCDEF"[(v >> i) & 0xF]);
}

int main(void) {
    UART0->CPB = 54;
    uart_puts(UART0, "=== QSPI Debug ===\n");

    // Adres yaz
    QSPI->ADR = 0x000000;
    uart_puts(UART0, "ADR set\n");

    // STA oku (islem oncesi)
    uart_puts(UART0, "STA pre=");
    uart_put_hex32(QSPI->STA);
    uart_puts(UART0, "\n");

    // CCR yaz (READ cmd baslar)
    uint32_t ccr_val = 0x03 | (1 << 8);  // instr=0x03, data_mode=1, dir=0, dummy=0, len=0
    QSPI->CCR = ccr_val;
    uart_puts(UART0, "CCR=");
    uart_put_hex32(ccr_val);
    uart_puts(UART0, "\n");

    // BUSY bekle
    uart_puts(UART0, "Waiting...");
    int timeout = 100000;
    while ((QSPI->STA & (1 << 1)) && --timeout > 0);
    uart_puts(UART0, "done\n");

    // STA oku (islem sonrasi)
    uart_puts(UART0, "STA post=");
    uart_put_hex32(QSPI->STA);
    uart_puts(UART0, "\n");

    // DR oku
    uint32_t dr_raw = QSPI->DR;
    uart_puts(UART0, "DR raw=");
    uart_put_hex32(dr_raw);
    uart_puts(UART0, "\n");

    uint8_t f_data = (uint8_t)(dr_raw & 0xFF);
    uart_puts(UART0, "Byte=0x");
    uart_put_hex8(f_data);
    uart_puts(UART0, "\n");

    if (f_data == 0xAA)
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    else
        uart_puts(UART0, "QSPI READ ERROR!\n");

    while (1) { __asm__ volatile("nop"); }
}
