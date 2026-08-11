// ============================================
// Ostim BLogic Mikroelektronik
// boot_flash_hello.c - M3 flash-boot kaniti (boot-real hedefi)
// ============================================
// boot_flow_test_tb protokolu: 'R' gonder -> 'A' bekle -> "Hello World!".
// flash_helloworld.hex'ten (el yapimi asm) tek farki: string GERCEK
// .rodata'da durur ve calisma zamaninda okunur. Veri bolgesi (flash 0x8000)
// bootloader'ca DSRAM'e kopyalanmazsa 12 NUL basar ve TB FAIL der.
#include "../drivers/blogic_mcu.h"

static const char MSG[] = "Hello World!";

int main(void) {
    UART0->CPB = 434;               /* 50 MHz / 115200 */
    uart_putc(UART0, 'R');          /* hazir isareti */
    (void)uart_getc(UART0);         /* TB'nin 'A'sini bekle */
    for (int i = 0; i < (int)sizeof(MSG) - 1; i++)
        uart_putc(UART0, MSG[i]);
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
