#include "../drivers/blogic_mcu.h"

int main(void) {
    // 115200 Baud ayarla
    UART0->CPB = 434;

    // Adım 1: TX üzerinden bir karakter gönder ('B')
    char tx_char = 'B';
    uart_putc(UART0, tx_char);

    // Adım 2: Tel-Loopback sayesinde RX pinine geri dönen karakteri donanımdan oku
    char rx_char = uart_getc(UART0);

    // Adım 3: Gelen karakteri doğrula
    if (rx_char == tx_char) {
        // Karakterler eşleştiyse testbench'e BAŞARILI mesajı yolla
        uart_puts(UART0, "LOOPBACK SUCCESS\n");
    } else {
        uart_puts(UART0, "LOOPBACK FAILED\n");
    }

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
