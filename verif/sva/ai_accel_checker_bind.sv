// ============================================
// Ostim BLogic Mikroelektronik
// ai_accel_checker_bind.sv - AI protokol checker bind (arsiv)
// ============================================
// Icerik soc_protocol_bind.sv'ye tasindi. Bu dosya referans icin
// duruyor, derleme listesinde degil.

    // AI Hizlandirici AXI-Lite Slave (CSR arayuzu)
    axi_lite_protocol_checker #(.INTF_NAME("AI_CSR")) i_chk_ai_csr (
        .clk     (clk_i),
        .rst_n   (rst_ni),
        // periph decoder'dan gelen ai sinyalleri
        .awvalid (ai_awvalid),  .awready (ai_awready),  .awaddr (ai_awaddr),
        .wvalid  (ai_wvalid),   .wready  (ai_wready),   .wdata  (ai_wdata),   .wstrb (ai_wstrb),
        .bvalid  (ai_bvalid),   .bready  (ai_bready),   .bresp  (ai_bresp),
        .arvalid (ai_arvalid),  .arready (ai_arready),  .araddr (ai_araddr),
        .rvalid  (ai_rvalid),   .rready  (ai_rready),   .rdata  (ai_rdata),   .rresp (ai_rresp)
    );

    // AI Hizlandirici AXI4 Master (SRAM erisim arayuzu)
    axi4_protocol_checker #(
        .INTF_NAME  ("AI_AXI4_MST"),
        .ID_WIDTH   (4),
        .ADDR_WIDTH (32),
        .DATA_WIDTH (32)
    ) i_chk_ai_master (
        .clk     (clk_i),
        .rst_n   (rst_ni),
        // i_ai_accel cikis sinyalleri
        .awid    (i_ai_accel.m_axi_awid),
        .awaddr  (i_ai_accel.m_axi_awaddr),
        .awlen   (i_ai_accel.m_axi_awlen),
        .awsize  (i_ai_accel.m_axi_awsize),
        .awburst (i_ai_accel.m_axi_awburst),
        .awvalid (i_ai_accel.m_axi_awvalid),
        .awready (i_ai_accel.m_axi_awready),
        .wdata   (i_ai_accel.m_axi_wdata),
        .wstrb   (i_ai_accel.m_axi_wstrb),
        .wlast   (i_ai_accel.m_axi_wlast),
        .wvalid  (i_ai_accel.m_axi_wvalid),
        .wready  (i_ai_accel.m_axi_wready),
        .bid     (i_ai_accel.m_axi_bid),
        .bresp   (i_ai_accel.m_axi_bresp),
        .bvalid  (i_ai_accel.m_axi_bvalid),
        .bready  (i_ai_accel.m_axi_bready),
        .arid    (i_ai_accel.m_axi_arid),
        .araddr  (i_ai_accel.m_axi_araddr),
        .arlen   (i_ai_accel.m_axi_arlen),
        .arsize  (i_ai_accel.m_axi_arsize),
        .arburst (i_ai_accel.m_axi_arburst),
        .arvalid (i_ai_accel.m_axi_arvalid),
        .arready (i_ai_accel.m_axi_arready),
        .rid     (i_ai_accel.m_axi_rid),
        .rdata   (i_ai_accel.m_axi_rdata),
        .rresp   (i_ai_accel.m_axi_rresp),
        .rlast   (i_ai_accel.m_axi_rlast),
        .rvalid  (i_ai_accel.m_axi_rvalid),
        .rready  (i_ai_accel.m_axi_rready)
    );
