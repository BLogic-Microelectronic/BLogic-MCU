/* ============================================
   Ostim BLogic Mikroelektronik
   minimal_test.c  -  temel load/store testi
   ============================================ */

#define PASS_VALUE 0xCAFEBABE
#define FAIL_VALUE 0xDEADBEEF

/* volatile: derleyici erisimi atmasin */
volatile unsigned int test_result __attribute__((section(".data")));

int main(void)
{
    int a = 10;
    int b = 20;
    int c;

    c = a + b;

    if (c == 30) {
        test_result = PASS_VALUE;
    } else {
        test_result = FAIL_VALUE;
    }

    /* sonsuz dongu */
    while (1);

    return 0;
}
