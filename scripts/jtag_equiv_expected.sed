# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# jtag_equiv_expected.sed  -  "JTAG_DEBUG tanimsiz" normalizasyon kurallari
# ============================================
# Izolasyon kaniti (JTAG teslim cipinin parcasi; ifdef'ler bu kanit icin duruyor).
# scripts/jtag_define_off_equiv.sh bu kurallari, TANIMSIZ
# (define YOK) onislemci ciktisina uygular ve sonucu referans commit'in
# (73d8dcd, imzali kosunun RTL'i) ayni ciktisiyla karsilastirir. Her kural, sentezde SABIT KATLAMA ile yok olan
# bir yapiya karsilik gelir; yeni bir kural eklemek "esdeger" iddiasini
# genisletir, bu yuzden her satirin gerekcesi asagida yazilidir.
#
# 1) JTAG_DEBUG kapaliyken sabit-0/sabit-adres olan DM telleri.
#    Bunlar `else dallarinda uretilir; hicbir yuk surmezler, yalniz
#    asagidaki 2/3 numarali kurallarin kaynagidirlar.
/^    logic        dbg_req;$/d
/^    logic \[31:0\] dm_halt_addr, dm_exc_addr;$/d
/^    assign dbg_req      = 1'b0;$/d
/^    assign dm_halt_addr = 32'h0001_0000;$/d
/^    assign dm_exc_addr  = 32'h0001_0000;$/d
/^    logic sys_rst_n;$/d
/^    assign sys_rst_n = rst_ni;$/d
/^    logic iar_to_dm, ird_from_dm_q;$/d
/^    logic aw_to_dm, ar_to_dm, wr_to_dm_q, rd_to_dm_q;$/d
/^    assign iar_to_dm = 1'b0;$/d
/^    assign ird_from_dm_q = 1'b0;$/d
/^    assign aw_to_dm   = 1'b0;$/d
/^    assign ar_to_dm   = 1'b0;$/d
/^    assign wr_to_dm_q = 1'b0;$/d
/^    assign rd_to_dm_q = 1'b0;$/d
#
# 2) Takma adlar: sys_rst_n = rst_ni (JTAG_DEBUG yokken ndmreset yok),
#    dm_halt_addr/dm_exc_addr = eski sabitler, dbg_req = 1'b0.
s/sys_rst_n/rst_ni/g
s/dm_halt_addr_i(dm_halt_addr)/dm_halt_addr_i(32'h0001_0000)/
s/dm_exception_addr_i(dm_exc_addr)/dm_exception_addr_i(32'h0001_0000)/
s/debug_req_i(dbg_req)/debug_req_i(1'b0)/
#
# 3) Crossbar dekod ifadelerine eklenen "&& !x_to_dm" terimleri: x_to_dm
#    sabit 0 oldugu icin "&& 1" ile ayni, sentezde kaybolur.
s/ && !iar_to_dm//
s/ && !aw_to_dm//
s/ && !ar_to_dm//
s/ && !wr_to_dm_q//
s/ && !rd_to_dm_q//
