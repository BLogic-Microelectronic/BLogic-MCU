// ============================================
// Ostim BLogic Mikroelektronik
// uart_loopback.c  -  UART tel-loopback testi
// ============================================
#include "../drivers/blogic_mcu.h"

int main(void) {
    // 115200 baud
    UART0->CPB = 434;

    // tek karakter gonder
    char tx_char = 'B';
    uart_putc(UART0, tx_char);

    // loopback ile geri donen karakteri oku
    char rx_char = uart_getc(UART0);

    if (rx_char == tx_char) {
        uart_puts(UART0, "LOOPBACK SUCCESS\n");
    } else {
        uart_puts(UART0, "LOOPBACK FAILED\n");
    }

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
