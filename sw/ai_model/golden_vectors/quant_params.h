/* Otomatik uretildi — extract_weights_v2.py */
#ifndef QUANT_PARAMS_H
#define QUANT_PARAMS_H
#ifdef __riscv
/* yalin metal: toolchain'de newlib basligi yok; ilp32 */
# ifndef BLOGIC_MCU_H
typedef signed int int32_t;
# endif
#else
# include <stdint.h>
#endif

#define INPUT_ZP    (-128)
#define CONV_OUT_ZP (-128)
#define FC_OUT_ZP   (14)

static const int32_t M_CONV_Q31[8] = {
    (int32_t)0x628A49AF, (int32_t)0x5A64A4B7, (int32_t)0x7741C64F, (int32_t)0x452319CA, (int32_t)0x594FD417, (int32_t)0x4CA163E2, (int32_t)0x7FEC0835, (int32_t)0x68B36BE8
};

static const int32_t SHIFT_CONV[8] = {
    41, 43, 41, 41, 41, 41, 41, 41
};

#define M_FC_Q31   ((int32_t)0x732B0C78)
#define SHIFT_FC   (42)

#endif
