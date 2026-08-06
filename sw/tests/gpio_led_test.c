// ============================================
// Ostim BLogic Mikroelektronik
// gpio_led_test.c  -  GPIO LED testi
// ============================================
#include "../drivers/blogic_mcu.h"

void uart_put_hex(uint32_t val) {
    const char hex[] = "0123456789ABCDEF";
    uart_puts(UART0, "0x");
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(UART0, hex[(val >> i) & 0xF]);
}

int main(void) {
    UART0->CPB = 434;

    uart_puts(UART0, "=== GPIO LED Test ===\n");

    int pass = 1;

    // walking-1
    uart_puts(UART0, "[1] Walking-1...\n");
    for (int i = 0; i < 16; i++) {
        uint32_t pattern = (1 << i);
        GPIO->ODR = pattern;
        volatile uint32_t rb = GPIO->ODR;
        if (rb != pattern) {
            uart_puts(UART0, "  FAIL bit ");
            uart_put_hex(i);
            uart_puts(UART0, "\n");
            pass = 0;
        }
    }
    if (pass) uart_puts(UART0, "  PASS\n");

    // hepsi ac/kapa
    uart_puts(UART0, "[2] All ON/OFF...\n");
    GPIO->ODR = 0x0000FFFF;
    volatile uint32_t v1 = GPIO->ODR;
    GPIO->ODR = 0x00000000;
    volatile uint32_t v2 = GPIO->ODR;
    if (v1 == 0x0000FFFF && v2 == 0x00000000)
        uart_puts(UART0, "  PASS\n");
    else {
        uart_puts(UART0, "  FAIL on=");
        uart_put_hex(v1);
        uart_puts(UART0, " off=");
        uart_put_hex(v2);
        uart_puts(UART0, "\n");
        pass = 0;
    }

    // giris oku
    uart_puts(UART0, "[3] Input: ");
    uart_put_hex(GPIO->IDR);
    uart_puts(UART0, "\n");

    // Sonuc
    // golden dizge YALNIZ basarida: kosulsuz basilirsa FAIL de PASS raporlanir
    if (pass) {
        uart_puts(UART0, ">>> GPIO PASS <<<\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    } else {
        uart_puts(UART0, ">>> GPIO FAIL <<<\n");
    }

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
