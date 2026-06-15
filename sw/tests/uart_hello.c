// ============================================
// Ostim BLogic Mikroelektronik
// uart_hello.c  -  UART hello world testi
// ============================================
#include "../drivers/blogic_mcu.h"

int main(void) {
    /* CPB = clk/baud -> 50MHz/115200 = 434 */
    #ifndef CPB_VAL
#define CPB_VAL 434
#endif
    UART0->CPB = CPB_VAL;

    uart_puts(UART0, "Hello World from BLogic MCU!\n");

    /* sonsuz dongu */
    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
