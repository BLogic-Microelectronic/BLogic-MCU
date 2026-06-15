// ============================================
// Ostim BLogic Mikroelektronik
// qspi_test.c  -  QSPI flash okuma testi
// ============================================
#include "../drivers/blogic_mcu.h"
#include "../drivers/qspi.h"

int main(void) {
    // UART0 baslat
    UART0->CPB = 434;

    // flashin ilk baytini oku, 0xAA bekleniyor
    uint8_t f_data = qspi_get_flash_byte(0x000000);

    // okuma basariliysa beklenen dizeyi bas
    if (f_data == 0xAA) {
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    } else {
        uart_puts(UART0, "QSPI READ ERROR!\n");
    }

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
