// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// qspi_func_cov.sv - QSPI functional coverage (komut x veri modu)
// Sartname EK-3 functional coverage / EK-2 QSPI komut seti
// ============================================
module qspi_func_cov (
    input logic       clk_i,
    input logic       rst_ni,
    input logic       cmd_start,
    input logic [7:0] ccr_instr,
    input logic [1:0] ccr_data_mode
);
    int unsigned i_read, i_dor, i_qor, i_read4b, i_other;
    int unsigned m_x1, m_x2, m_x4, m_none;
    int unsigned txns;
    logic prev_start;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) prev_start <= 1'b0;
        else begin
            prev_start <= cmd_start;
            if (!prev_start && cmd_start) begin
                txns++;
                case (ccr_instr)
                    8'h03:   i_read++;
                    8'h3B:   i_dor++;
                    8'h6B:   i_qor++;
                    8'h13:   i_read4b++;
                    default: i_other++;
                endcase
                case (ccr_data_mode)
                    2'b01:   m_x1++;
                    2'b10:   m_x2++;
                    2'b11:   m_x4++;
                    default: m_none++;
                endcase
            end
        end
    end

    final begin
        automatic int hit = 0;
        if (i_read) hit++; if (i_dor) hit++; if (i_qor) hit++; if (i_read4b) hit++;
        if (m_x1) hit++; if (m_x2) hit++; if (m_x4) hit++;
        $display("=== [FUNC-COV] QSPI (%m) ===");
        $display("  transaction : %0d", txns);
        $display("  instr binleri: READ=%0d DOR=%0d QOR=%0d READ4B=%0d diger=%0d",
                 i_read, i_dor, i_qor, i_read4b, i_other);
        $display("  mod binleri  : x1=%0d x2=%0d x4=%0d veri-yok=%0d", m_x1, m_x2, m_x4, m_none);
        $display("  bin kapsami  : %0d/7", hit);
    end
endmodule

bind qspi_master_axil qspi_func_cov u_qspi_func_cov (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .cmd_start(cmd_start),
    .ccr_instr(ccr_instr), .ccr_data_mode(ccr_data_mode)
);
