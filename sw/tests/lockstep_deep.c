// ============================================
// Ostim BLogic Mikroelektronik
// lockstep_deep.c - derin Spike lockstep testi
// ============================================
// Amac: MMIO'suz, deterministik ~3k komutluk RV32IM karisimi
// (mul / gercek divu / load-store / dallanma). Spike ile RTL ayni
// ELF'i kosar; compare_traces.py PC dizisini birebir kiyaslar.
// UART YOK: MMIO erisimi spike'ta trap uretir ve izi bozar.

volatile unsigned int result __attribute__((section(".data")));

int main(void)
{
    unsigned int acc = 0x12345678u;
    unsigned int arr[16];

    for (int i = 0; i < 16; i++)
        arr[i] = acc ^ (0x9E3779B9u * (unsigned)(i + 1));

    for (int i = 0; i < 192; i++) {
        acc = acc * 1664525u + 1013904223u;      /* mul + add   */
        acc ^= acc >> 13;                        /* shift + xor */
        acc += arr[i & 15];                      /* load        */
        if (acc & 1u)
            acc += (unsigned)i * 7u;             /* mul yolu    */
        else
            acc /= ((unsigned)(i & 7u) + 2u);    /* GERCEK divu */
        arr[i & 15] = acc;                       /* store       */
    }

    result = acc;
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
