// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// uart_func_cov.sv - UART functional coverage + CFG[0] auto-clear kaniti
// Sartname EK-3 (functional coverage) / EK-2 v1.3 (auto-clear)
// ============================================
module uart_func_cov (
    input logic        clk_i,
    input logic        rst_ni,
    input logic [31:0] cpb,
    input logic [1:0]  stp,
    input logic        cfg_tx_en,
    input logic        tx_done_set,
    input logic        wr_cfg_hit,
    input logic [31:0] wr_cfg_data,
    input logic        tx_busy
);
    int unsigned cpb_434, cpb_50, cpb_5208, cpb_other;
    int unsigned stp_cnt[4];
    int unsigned tx_starts, ac_checks, ac_fails;
    logic prev_done, prev_wrhit, prev_wrd0, prev_busy;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            prev_done <= 1'b0; prev_wrhit <= 1'b0;
            prev_wrd0 <= 1'b0; prev_busy  <= 1'b0;
        end else begin
            prev_done  <= tx_done_set;
            prev_wrhit <= wr_cfg_hit;
            prev_wrd0  <= wr_cfg_data[0];
            prev_busy  <= tx_busy;

            // TX baslangicinda aktif konfigurasyonu binle
            if (!prev_busy && tx_busy) begin
                tx_starts++;
                case (cpb)
                    32'd434:  cpb_434++;
                    32'd50:   cpb_50++;
                    32'd5208: cpb_5208++;
                    default:  cpb_other++;
                endcase
                stp_cnt[stp]++;
            end

            // auto-clear kaniti: done'dan 1 cevrim sonra, SW ayni anda '1' yazmadiysa 0
            if (prev_done && !(prev_wrhit && prev_wrd0)) begin
                ac_checks++;
                if (cfg_tx_en !== 1'b0) begin
                    ac_fails++;
                    $error("[FUNC-COV][UART] auto-clear ihlali: tx_done sonrasi CFG[0]=%b", cfg_tx_en);
                end
            end
        end
    end

    final begin
        automatic int hit = 0;
        if (cpb_434) hit++; if (cpb_50) hit++; if (cpb_5208) hit++;
        if (stp_cnt[0]) hit++; if (stp_cnt[1]) hit++;
        if (stp_cnt[2]) hit++; if (stp_cnt[3]) hit++;
        $display("=== [FUNC-COV] UART (%m) ===");
        $display("  TX start    : %0d", tx_starts);
        $display("  CPB binleri : 434=%0d 50=%0d 5208=%0d diger=%0d", cpb_434, cpb_50, cpb_5208, cpb_other);
        $display("  STP binleri : 00=%0d 01=%0d 10=%0d 11=%0d", stp_cnt[0], stp_cnt[1], stp_cnt[2], stp_cnt[3]);
        $display("  auto-clear  : %0d kontrol, %0d ihlal", ac_checks, ac_fails);
        $display("  bin kapsami : %0d/7", hit);
    end
endmodule

bind uart_axil uart_func_cov u_uart_func_cov (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .cpb(uart_cpb), .stp(uart_stp[1:0]),
    .cfg_tx_en(cfg_tx_en), .tx_done_set(tx_done_set),
    .wr_cfg_hit(wr_cfg_hit), .wr_cfg_data(wr_cfg_data),
    .tx_busy(tx_busy)
);
