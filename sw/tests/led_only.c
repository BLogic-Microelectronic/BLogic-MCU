/* BLogic MCU - SAF LED blink teshis firmware'i (SRAM-boot, QSPI baypas)
 * String/rodata YOK -> data SRAM'e bagimli degil. Sadece sunlari test eder:
 *   saat + reset + CPU + GPIO peripheral + LED pinleri.
 * Bu blink ederse CPU'nun temel yolu calisiyor; sorun QSPI boot'ta demektir.
 */
#include "../drivers/blogic_mcu.h"

int main(void) {
    while (1) {
        GPIO->ODR = 0x00FF;
        for (volatile int i = 0; i < 2000000; i++) { __asm__ volatile("nop"); }
        GPIO->ODR = 0x0000;
        for (volatile int i = 0; i < 2000000; i++) { __asm__ volatile("nop"); }
    }
    return 0;
}
