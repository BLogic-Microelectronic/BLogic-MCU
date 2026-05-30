#include "../drivers/blogic_mcu.h"
#include "../drivers/qspi.h"

int main(void) {
    // UART0 baslat
    UART0->CPB = 54;

    // flash.hex dosyasinin ilk adresi 0xAA degerini iceriyor
    uint8_t f_data = qspi_get_flash_byte(0x000000);

    // Eger donanim basariyla okumussa testbencin bekledigi dizeyi bas
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
