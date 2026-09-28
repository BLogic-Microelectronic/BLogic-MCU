// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// teknotest_tb_user_code.sv - testbench bellek yukleme
// ============================================
// wrapper t=0'da mem'i sifirliyor, yuklemeyi t=1'e aliyoruz
initial begin
    #1;
    $readmemh("helloworld.mem", dut.u_soc.i_instr_sram.mem);
end
