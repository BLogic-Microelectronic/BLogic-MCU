/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

# ============================================
# Ostim BLogic Mikroelektronik
# htif.S  -  HTIF host-target sembolleri
# ============================================

# tohost'a yazinca program durur, TB bu adresi izler.
.section .tohost, "aw", @progbits
.align 6
.globl tohost
tohost:    .word 0
           .word 0           # 64-bit hizalama
.globl fromhost
fromhost:  .word 0
           .word 0
