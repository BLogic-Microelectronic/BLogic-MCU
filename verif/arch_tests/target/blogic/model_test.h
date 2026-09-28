/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// model_test.h  -  RISC-V uyumluluk testi makrolari
// ============================================
#ifndef _COMPLIANCE_TEST_H
#define _COMPLIANCE_TEST_H

#define RVMODEL_BOOT                                            \
    .section .text.init;                                        \
    .globl _start;                                              \
_start:                                                         \
    la sp, _stack_top;

#define RVMODEL_HALT                                            \
    la t0, tohost;                                              \
    li t1, 1;                                                   \
    sw t1, 0(t0);                                               \
    1: j 1b;

#define RVMODEL_DATA_BEGIN                                      \
    .align 4;                                                   \
    .global begin_signature;                                    \
    begin_signature:

#define RVMODEL_DATA_END                                        \
    .align 4;                                                   \
    .global end_signature;                                      \
    end_signature:

#define RVMODEL_DATA_SECTION                                    \
    .pushsection .tohost, "aw", @progbits;                     \
    .align 4;                                                   \
    .global tohost;                                             \
    tohost: .word 0;                                            \
    .global fromhost;                                           \
    fromhost: .word 0;                                          \
    .popsection;

#define RVMODEL_IO_INIT
#define RVMODEL_IO_WRITE_STR(_R, _STR)
#define RVMODEL_IO_CHECK()
#define RVMODEL_IO_ASSERT_GPR_EQ(_SP, _R, _I)
#define RVMODEL_IO_ASSERT_SFPR_EQ(_F, _R, _I)
#define RVMODEL_IO_ASSERT_DFPR_EQ(_D, _R, _I)
#define RVMODEL_SET_MSW_INT
#define RVMODEL_CLEAR_MSW_INT
#define RVMODEL_CLEAR_MTIMER_INT
#define RVMODEL_CLEAR_MEXT_INT

#endif
