// ============================================
// Ostim BLogic Mikroelektronik
// obi_to_axi.sv  -  OBI'den AXI4'e kopru
// ============================================
module obi_to_axi #(
    parameter int unsigned AXI_ID = 0
)(
    input  logic clk_i,
    input  logic rst_ni,

    // OBI slave (islemciden gelen)
    input  logic        obi_req_i,
    output logic        obi_gnt_o,
    input  logic [31:0] obi_addr_i,
    input  logic        obi_we_i,
    input  logic [ 3:0] obi_be_i,
    input  logic [31:0] obi_wdata_i,
    output logic        obi_rvalid_o,
    output logic [31:0] obi_rdata_o,

    // AXI4 master (crossbar'a giden)
    AXI_BUS.Master      axi_mst
);

    // FSM durumlari
    typedef enum logic [2:0] {
        IDLE,
        WAIT_AW_W,   // AW ve W ikisi de bekliyor
        WAIT_AW,     // sadece AW bekliyor
        WAIT_W,      // sadece W bekliyor
        WAIT_B,      // yazma yaniti bekle
        WAIT_R       // okuma verisi bekle
    } state_t;
    state_t state_q, state_d;

    // grant aninda yakalanan adres/veri/kontrol; CPU sonra portu degistirse de bozulmaz
    logic [31:0] addr_q;
    logic [31:0] wdata_q;
    logic [ 3:0] be_q;
    logic        we_q;

    // AW ve W ayri ayri kabul edildi mi
    logic aw_done_q, aw_done_d;
    logic  w_done_q,  w_done_d;

    // OBI request'ini register'a al
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            addr_q  <= '0;
            wdata_q <= '0;
            be_q    <= '0;
            we_q    <= 1'b0;
        end else if (obi_req_i && (obi_gnt_o || state_q == IDLE)) begin
            addr_q  <= obi_addr_i;
            wdata_q <= obi_wdata_i;
            be_q    <= obi_be_i;
            we_q    <= obi_we_i;
        end
    end

    // AW/W done flag register
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            aw_done_q <= 1'b0;
            w_done_q  <= 1'b0;
        end else begin
            aw_done_q <= aw_done_d;
            w_done_q  <= w_done_d;
        end
    end

    // AXI sabit atamalari (tek beat, 32-bit, burst yok)
    assign axi_mst.aw_id     = AXI_ID;
    assign axi_mst.aw_len    = 8'd0;     // 1 beat
    assign axi_mst.aw_size   = 3'b010;   // 4 byte
    assign axi_mst.aw_burst  = 2'b01;    // INCR
    assign axi_mst.aw_lock   = 1'b0;
    assign axi_mst.aw_cache  = 4'b0000;
    assign axi_mst.aw_prot   = 3'b000;
    assign axi_mst.aw_qos    = 4'b0000;
    assign axi_mst.aw_region = 4'b0000;
    assign axi_mst.aw_user   = '0;
    assign axi_mst.aw_atop   = '0;       // atomik yok

    assign axi_mst.ar_id     = AXI_ID;
    assign axi_mst.ar_len    = 8'd0;
    assign axi_mst.ar_size   = 3'b010;
    assign axi_mst.ar_burst  = 2'b01;
    assign axi_mst.ar_lock   = 1'b0;
    assign axi_mst.ar_cache  = 4'b0000;
    assign axi_mst.ar_prot   = 3'b000;
    assign axi_mst.ar_qos    = 4'b0000;
    assign axi_mst.ar_region = 4'b0000;
    assign axi_mst.ar_user   = '0;

    assign axi_mst.w_last    = 1'b1;     // tek beat, hep son
    assign axi_mst.w_user    = '0;

    // Ana FSM (kombinasyonel)
    always_comb begin
        // varsayilan cikislar
        state_d          = state_q;
        obi_gnt_o        = 1'b0;
        obi_rvalid_o     = 1'b0;
        obi_rdata_o      = axi_mst.r_data;

        axi_mst.aw_valid = 1'b0;
        axi_mst.aw_addr  = addr_q;

        axi_mst.w_valid  = 1'b0;
        axi_mst.w_data   = wdata_q;
        axi_mst.w_strb   = be_q;

        axi_mst.b_ready  = 1'b0;

        axi_mst.ar_valid = 1'b0;
        axi_mst.ar_addr  = addr_q;

        axi_mst.r_ready  = 1'b0;

        aw_done_d        = aw_done_q;
        w_done_d         = w_done_q;

        case (state_q)
            // yeni OBI istegi bekle
            IDLE: begin
                // adres/veri henuz register'da degil, portu kullan
                axi_mst.aw_addr = obi_addr_i;
                axi_mst.ar_addr = obi_addr_i;
                axi_mst.w_data  = obi_wdata_i;
                axi_mst.w_strb  = obi_be_i;

                aw_done_d = 1'b0;
                w_done_d  = 1'b0;

                if (obi_req_i) begin
                    if (obi_we_i) begin
                        // yazma
                        axi_mst.aw_valid = 1'b1;
                        axi_mst.w_valid  = 1'b1;

                        if (axi_mst.aw_ready && axi_mst.w_ready) begin
                            obi_gnt_o = 1'b1;
                            state_d   = WAIT_B;
                        end else if (axi_mst.aw_ready) begin
                            obi_gnt_o = 1'b1;
                            aw_done_d = 1'b1;
                            state_d   = WAIT_W;
                        end else if (axi_mst.w_ready) begin
                            obi_gnt_o = 1'b1;
                            w_done_d  = 1'b1;
                            state_d   = WAIT_AW;
                        end else begin
                            // ikisi de kabul edilmedi, grant yok
                            state_d   = WAIT_AW_W;
                        end

                    end else begin
                        // okuma
                        axi_mst.ar_valid = 1'b1;

                        if (axi_mst.ar_ready) begin
                            obi_gnt_o = 1'b1;
                            state_d   = WAIT_R;
                        end
                    end
                end
            end

            // hem AW hem W onayi bekle
            WAIT_AW_W: begin
                axi_mst.aw_valid = 1'b1;
                axi_mst.w_valid  = 1'b1;

                if (axi_mst.aw_ready && axi_mst.w_ready) begin
                    obi_gnt_o = 1'b1;
                    state_d   = WAIT_B;
                end else if (axi_mst.aw_ready) begin
                    obi_gnt_o = 1'b1;
                    aw_done_d = 1'b1;
                    state_d   = WAIT_W;
                end else if (axi_mst.w_ready) begin
                    obi_gnt_o = 1'b1;
                    w_done_d  = 1'b1;
                    state_d   = WAIT_AW;
                end
            end

            // sadece AW onayi bekle (W zaten gitti)
            WAIT_AW: begin
                axi_mst.aw_valid = 1'b1;
                if (axi_mst.aw_ready) begin
                    state_d = WAIT_B;
                end
            end

            // sadece W onayi bekle (AW zaten gitti)
            WAIT_W: begin
                axi_mst.w_valid = 1'b1;
                if (axi_mst.w_ready) begin
                    state_d = WAIT_B;
                end
            end

            // yazma yaniti bekle
            WAIT_B: begin
                axi_mst.b_ready = 1'b1;
                if (axi_mst.b_valid) begin
                    obi_rvalid_o = 1'b1;  // OBI yazma yaniti
                    state_d      = IDLE;
                end
            end

            // okuma verisi bekle
            WAIT_R: begin
                axi_mst.r_ready = 1'b1;
                if (axi_mst.r_valid) begin
                    obi_rvalid_o = 1'b1;
                    obi_rdata_o  = axi_mst.r_data;
                    state_d      = IDLE;
                end
            end

            default: state_d = IDLE;
        endcase
    end

    // FSM state register
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= IDLE;
        end else begin
            state_q <= state_d;
        end
    end

    // simulasyon assertion'lari
    `ifndef SYNTHESIS
    // valid, ready gelmeden dusmemeli
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.aw_valid && !axi_mst.aw_ready |=> axi_mst.aw_valid
    ) else $error("[OBI2AXI] AW valid prematurely deasserted!");

    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.ar_valid && !axi_mst.ar_ready |=> axi_mst.ar_valid
    ) else $error("[OBI2AXI] AR valid prematurely deasserted!");

    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.w_valid && !axi_mst.w_ready |=> axi_mst.w_valid
    ) else $error("[OBI2AXI] W valid prematurely deasserted!");
    `endif

endmodule
