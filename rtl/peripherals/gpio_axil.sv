`timescale 1ns / 1ps
 
module gpio_axil (
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
 
    // Fiziksel GPIO Pinleri
    input  logic [15:0] gpio_in_i,     // 16-bit giriş (sabit giriş)
    output logic [15:0] gpio_out_o     // 16-bit çıkış (sabit çıkış)
);
 
    // =========================================================
    // 1. REGISTER ADRESLERİ (TEKNOFEST EK-2 Şartnamesi)
    // =========================================================
    // Offset 0x00: GPIO_IDR — Giriş Veri Yazmacı (Read-Only)
    //   [15:0]  = 16-bit giriş sinyali değeri
    //   [31:16] = her zaman 0
    //
    // Offset 0x04: GPIO_ODR — Çıkış Veri Yazmacı (Read-Write)
    //   [15:0]  = 16-bit çıkış değeri
    //   [31:16] = yazılan değer etkisiz
    localparam logic [4:0] ADDR_IDR = 5'h00;
    localparam logic [4:0] ADDR_ODR = 5'h04;
 
    // Çıkış register
    logic [15:0] gpio_odr;
    assign gpio_out_o = gpio_odr;
 
    // Giriş sinyalini senkronize et (metastability koruması)
    logic [15:0] gpio_in_sync1, gpio_in_sync2;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            gpio_in_sync1 <= 16'd0;
            gpio_in_sync2 <= 16'd0;
        end else begin
            gpio_in_sync1 <= gpio_in_i;
            gpio_in_sync2 <= gpio_in_sync1;
        end
    end
 
    // =========================================================
    // 2. AXI-LITE YAZMA (WRITE) FSM
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
            gpio_odr      <= 16'd0;
        end else begin
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
                    ADDR_ODR: gpio_odr <= s_axi_wdata[15:0];
                    // ADDR_IDR'ye yazma etkisiz (Read-Only)
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
    // 3. AXI-LITE OKUMA (READ) FSM
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
                    ADDR_IDR: s_axi_rdata <= {16'd0, gpio_in_sync2};
                    ADDR_ODR: s_axi_rdata <= {16'd0, gpio_odr};
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end
 
endmodule