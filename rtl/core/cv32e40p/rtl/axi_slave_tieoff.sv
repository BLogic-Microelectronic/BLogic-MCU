module axi_slave_tieoff #(
    // Crossbar'dan çıkan ID genişliği (AXI_ID_WIDTH + log2(NUM_MASTERS) = 4 + 1 = 5)
    parameter int unsigned AXI_ID_WIDTH = 5 
)(
    input  logic clk_i,
    input  logic rst_ni,
    AXI_BUS.Slave slv
);

    // ============================================================
    // YAZMA (WRITE) KANALI YÖNETİMİ
    // ============================================================
    logic write_req;
    assign write_req = slv.aw_valid && slv.w_valid;
    
    assign slv.aw_ready = slv.b_ready || !slv.b_valid;
    assign slv.w_ready  = slv.b_ready || !slv.b_valid;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.b_valid <= 1'b0;
            slv.b_id    <= '0;
        end else begin
            if (write_req && slv.aw_ready && slv.w_ready) begin
                slv.b_valid <= 1'b1;         
                slv.b_id    <= slv.aw_id;    // Gelen ID'yi aynen geri yansıt
            end else if (slv.b_ready) begin
                slv.b_valid <= 1'b0;         
            end
        end
    end

    assign slv.b_resp = 2'b11; // DECERR (Decode Error)
    assign slv.b_user = '0;

    // ============================================================
    // OKUMA (READ) KANALI YÖNETİMİ
    // ============================================================
    assign slv.ar_ready = slv.r_ready || !slv.r_valid;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.r_valid <= 1'b0;
            slv.r_id    <= '0;
        end else begin
            if (slv.ar_valid && slv.ar_ready) begin
                slv.r_valid <= 1'b1;
                slv.r_id    <= slv.ar_id;    // Gelen ID'yi aynen geri yansıt
            end else if (slv.r_ready) begin
                slv.r_valid <= 1'b0;
            end
        end
    end

    assign slv.r_data = 32'hDEAD_BEEF; // Debug için belirteç
    assign slv.r_resp = 2'b11;         // DECERR
    assign slv.r_last = 1'b1;          
    assign slv.r_user = '0;

endmodule
