/* BLogic MCU - M3 teshis firmware'i (flash-boot)
 * Amac: QSPI flash-boot + CPU calisiyor mu UART'tan BAGIMSIZ gormek.
 *   - LED'ler yanip soner  -> CPU flash'tan boot etti = QSPI okuma CALISIYOR
 *   - UART de basarsa       -> UART yolu da calisiyor
 *   - LED yanmaz            -> bootrom cop okudu / CPU calismiyor (daha derin)
 * Not: string "Hello World from BLogic MCU!\n" UART_HELLO ile AYNI ->
 *      data SRAM (data_mem.hex) degismez -> bitstream rebuild gerekmez, sadece reflash.
 */
#include "../drivers/blogic_mcu.h"

int main(void) {
    UART0->CPB = 434;                 /* 50MHz / 115200 */

    while (1) {
        GPIO->ODR = 0x00FF;           /* LED[7:0] YAK */
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
        for (volatile int i = 0; i < 1500000; i++) { __asm__ volatile("nop"); }

        GPIO->ODR = 0x0000;           /* LED[7:0] SONDUR */
        for (volatile int i = 0; i < 1500000; i++) { __asm__ volatile("nop"); }
    }
    return 0;
}
