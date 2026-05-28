#include "../drivers/blogic_mcu.h"

int main(void) {
    /* TEŞHİS DOĞRULTUSUNDA GÜNCELLENDİ:
       Alex Forencich UART çekirdeği için 115200 Baud prescale değeri = 54 */
    #ifndef CPB_VAL
#define CPB_VAL 54
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
