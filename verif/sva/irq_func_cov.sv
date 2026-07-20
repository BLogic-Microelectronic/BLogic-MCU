// ============================================
// Ostim BLogic Mikroelektronik
// irq_func_cov.sv - SoC IRQ hatlari functional coverage
// Sartname EK-3 functional coverage / kesme altyapisi isteri
// ============================================
module irq_func_cov (
    input logic clk_i,
    input logic rst_ni,
    input logic timer_irq,
    input logic ai_irq,
    input logic strm_irq
);
    int unsigned n_timer, n_ai, n_strm;
    logic p_t, p_a, p_s;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin p_t <= 1'b0; p_a <= 1'b0; p_s <= 1'b0; end
        else begin
            p_t <= timer_irq; p_a <= ai_irq; p_s <= strm_irq;
            if (!p_t && timer_irq) n_timer++;
            if (!p_a && ai_irq)    n_ai++;
            if (!p_s && strm_irq)  n_strm++;
        end
    end

    final begin
        automatic int hit = 0;
        if (n_timer) hit++; if (n_ai) hit++; if (n_strm) hit++;
        $display("=== [FUNC-COV] IRQ (%m) ===");
        $display("  yukselme sayisi: timer(irq16)=%0d ai(irq17)=%0d strm(irq18)=%0d",
                 n_timer, n_ai, n_strm);
        $display("  bin kapsami    : %0d/3", hit);
    end
endmodule

bind soc_top irq_func_cov u_irq_func_cov (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .timer_irq(timer_irq), .ai_irq(ai_irq), .strm_irq(strm_irq)
);
