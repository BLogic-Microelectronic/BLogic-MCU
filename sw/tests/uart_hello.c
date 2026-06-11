#include "../drivers/blogic_mcu.h"

int main(void) {
    /* TEŞHİS DOĞRULTUSUNDA GÜNCELLENDİ:
       EK-2: CPB = clk/baud -> 50MHz/115200 = 434 (donanim prescale = 434>>3 = 54) */
    #ifndef CPB_VAL
#define CPB_VAL 434
#endif
    UART0->CPB = CPB_VAL;

    /* Mesajı gönder */
    uart_puts(UART0, "Hello World from BLogic MCU!\n");

    /* Simülasyonun kapanmaması için sonsuz döngü */
    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
