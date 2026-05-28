`timescale 1ns / 1ps
 
module timer_axil (
    input  logic        clk_i,
    input  logic        rst_ni,
 
    // AXI4-Lite Slave Arayüzü
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic [ 3:0] s_axi_wstrb,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic [ 1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
 
    input  logic [31:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [31:0] s_axi_rdata,
    output logic [ 1:0] s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,
 
    // Timer interrupt çıkışı (opsiyonel, CPU'ya bağlanabilir)
    output logic        timer_irq_o
);
 
    // =========================================================
    // 1. REGISTER ADRESLERİ (TEKNOFEST EK-2 Şartnamesi)
    // =========================================================
    localparam logic [4:0] ADDR_PRE = 5'h00;  // Prescaler
    localparam logic [4:0] ADDR_ARE = 5'h04;  // Auto-reload
    localparam logic [4:0] ADDR_CLR = 5'h08;  // Clear
    localparam logic [4:0] ADDR_ENA = 5'h0C;  // Enable
    localparam logic [4:0] ADDR_MOD = 5'h10;  // Mode (up/down)
    localparam logic [4:0] ADDR_CNT = 5'h14;  // Counter (RO)
    localparam logic [4:0] ADDR_EVN = 5'h18;  // Event counter (RO)
    localparam logic [4:0] ADDR_EVC = 5'h1C;  // Event clear
 
    // =========================================================
    // 2. TIMER REGISTER'LARI
    // =========================================================
    logic [31:0] tim_pre;   // Prescaler değeri
    logic [31:0] tim_are;   // Auto-reload değeri
    logic        tim_ena;   // Enable (bit 0)
    logic        tim_mod;   // Mode: 1=yukarı, 0=aşağı
    logic [31:0] tim_cnt;   // Sayaç (RO)
    logic [31:0] tim_evn;   // Event sayacı (RO)
 
    // Prescaler sayacı (dahili)
    logic [31:0] prescale_cnt;
 
    // Clear ve event clear sinyalleri (yazma FSM'den)
    logic wr_clr_hit;
    logic wr_evc_hit;
 
    // Timer interrupt: event oluştuğunda pulse
    assign timer_irq_o = (tim_cnt == tim_are) && tim_ena;
 
    // =========================================================
    // 3. TIMER SAYAÇ MANTIĞI
    // =========================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            tim_cnt      <= 32'd0;
            tim_evn      <= 32'd0;
            prescale_cnt <= 32'd0;
        end else begin
            // Clear komutu
            if (wr_clr_hit) begin
                tim_cnt      <= 32'd0;
                prescale_cnt <= 32'd0;
            end
            // Event clear komutu
            else if (wr_evc_hit) begin
                tim_evn <= 32'd0;
            end
            // Normal çalışma
            else if (tim_ena) begin
                // Prescaler: her (tim_pre+1) cycle'da bir sayacı güncelle
                if (prescale_cnt >= tim_pre) begin
                    prescale_cnt <= 32'd0;
 
                    // Auto-reload: sayaç hedefe ulaştığında sıfırla + event artır
                    if (tim_cnt == tim_are) begin
                        tim_cnt <= 32'd0;
                        tim_evn <= tim_evn + 1;
                    end else begin
                        // Yukarı/aşağı sayma
                        if (tim_mod)
                            tim_cnt <= tim_cnt + 1;
                        else
                            tim_cnt <= tim_cnt - 1;
                    end
                end else begin
                    prescale_cnt <= prescale_cnt + 1;
                end
            end
            // tim_ena=0 iken TIM_CLR=1 olursa sıfırla
            else if (wr_clr_hit) begin
                tim_cnt      <= 32'd0;
                prescale_cnt <= 32'd0;
            end
        end
    end
 
    // =========================================================
    // 4. AXI-LITE YAZMA (WRITE) FSM
    // =========================================================
    logic aw_en;
    logic [4:0] write_addr;
 
    assign s_axi_bresp = 2'b00;
 
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            aw_en         <= 1'b1;
            write_addr    <= 5'd0;
            tim_pre       <= 32'd0;
            tim_are       <= 32'hFFFFFFFF;
            tim_ena       <= 1'b0;
            tim_mod       <= 1'b1;  // Varsayılan: yukarı sayma
            wr_clr_hit    <= 1'b0;
            wr_evc_hit    <= 1'b0;
        end else begin
            // Varsayılan: pulse sinyallerini temizle
            wr_clr_hit <= 1'b0;
            wr_evc_hit <= 1'b0;
 
            // Adres + Veri Yakalama
            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end
 
            // Veri Yazma
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (write_addr)
                    ADDR_PRE: tim_pre <= s_axi_wdata;
                    ADDR_ARE: tim_are <= s_axi_wdata;
                    ADDR_CLR: if (s_axi_wdata[0]) wr_clr_hit <= 1'b1;
                    ADDR_ENA: tim_ena <= s_axi_wdata[0];
                    ADDR_MOD: tim_mod <= s_axi_wdata[0];
                    ADDR_EVC: if (s_axi_wdata[0]) wr_evc_hit <= 1'b1;
                    // TIM_CNT ve TIM_EVN Read-Only, yazma etkisiz
                    default: ;
                endcase
            end
 
            // Yanıt Gönderme
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end
 
    // =========================================================
    // 5. AXI-LITE OKUMA (READ) FSM
    // =========================================================
    assign s_axi_rresp = 2'b00;
 
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= 32'd0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready) begin
                s_axi_arready <= 1'b1;
            end else begin
                s_axi_arready <= 1'b0;
            end
 
            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[4:0])
                    ADDR_PRE: s_axi_rdata <= tim_pre;
                    ADDR_ARE: s_axi_rdata <= tim_are;
                    ADDR_CLR: s_axi_rdata <= 32'd0;
                    ADDR_ENA: s_axi_rdata <= {31'd0, tim_ena};
                    ADDR_MOD: s_axi_rdata <= {31'd0, tim_mod};
                    ADDR_CNT: s_axi_rdata <= tim_cnt;
                    ADDR_EVN: s_axi_rdata <= tim_evn;
                    ADDR_EVC: s_axi_rdata <= 32'd0;
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end
 
endmodule