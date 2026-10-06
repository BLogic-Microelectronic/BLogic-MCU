// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// ai_func_cov.sv - AI accelerator CSR dizi coverage
// Sartname EK-3 functional coverage / EK-1 YZ is akisi
// (bind ile dis gozlem - ai_accelerator.sv degistirilmez)
// ============================================
module ai_func_cov (
    input logic clk_i,
    input logic rst_ni,
    input logic csr_start,
    input logic status_busy,
    input logic status_done
);
    int unsigned n_start, n_busy_r, n_busy_f, n_done_r, n_done_f;
    logic p_st, p_bs, p_dn;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin p_st <= 1'b0; p_bs <= 1'b0; p_dn <= 1'b0; end
        else begin
            p_st <= csr_start; p_bs <= status_busy; p_dn <= status_done;
            if (!p_st && csr_start)   n_start++;
            if (!p_bs && status_busy) n_busy_r++;
            if (p_bs && !status_busy) n_busy_f++;
            if (!p_dn && status_done) n_done_r++;
            if (p_dn && !status_done) n_done_f++;
        end
    end

    final begin
        automatic int hit = 0;
        if (n_start) hit++; if (n_busy_r) hit++; if (n_busy_f) hit++;
        if (n_done_r) hit++; if (n_done_f) hit++;
        $display("[FUNC-COV] AI-CSR (%m): start=%0d busy rise=%0d busy fall=%0d done rise=%0d done fall=%0d; %0d of 5 bins hit",
                 n_start, n_busy_r, n_busy_f, n_done_r, n_done_f, hit);
    end
endmodule

bind ai_accelerator ai_func_cov u_ai_func_cov (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .csr_start(csr_start),
    .status_busy(status_busy), .status_done(status_done)
);
