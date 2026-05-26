/*
 * BLogic MCU - Minimal Test
 *
 * Bu program UART veya herhangi bir çevre birimi kullanmaz.
 * Sadece bellekte bir değişkene yazıp okuyarak işlemcinin
 * temel load/store komutlarını test eder.
 *
 * Simülasyonda waveform'dan veya Spike trace'den
 * doğru çalıştığını doğrulayabiliriz.
 */

/* İleride UART driver hazır olduğunda buradan mesaj yazacağız */
#define PASS_VALUE 0xCAFEBABE
#define FAIL_VALUE 0xDEADBEEF

/* Volatile: derleyici bu erişimleri optimize edip kaldırmasın */
volatile unsigned int test_result __attribute__((section(".data")));

int main(void)
{
    int a = 10;
    int b = 20;
    int c;

    c = a + b;

    /* Basit bir doğruluk kontrolü */
    if (c == 30) {
        test_result = PASS_VALUE;  /* 0xCAFEBABE görürsek test geçti */
    } else {
        test_result = FAIL_VALUE;  /* 0xDEADBEEF görürsek test başarısız */
    }

    /* Sonsuz döngü - simülasyonu burada durdurabiliriz */
    while (1);

    return 0;
}
