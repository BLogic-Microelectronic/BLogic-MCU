// ============================================
// Ostim BLogic Mikroelektronik
// periph_decoder.sv  -  Çevre birimi adres çözücü
// ============================================
`timescale 1ns / 1ps

module periph_decoder (
    input  logic        clk_i,
    input  logic        rst_ni,

    // Köprüden gelen AXI4-Lite
    input  logic [31:0] s_awaddr,
    input  logic        s_awvalid,
    output logic        s_awready,
    input  logic [31:0] s_wdata,
    input  logic [ 3:0] s_wstrb,
    input  logic        s_wvalid,
    output logic        s_wready,
    output logic [ 1:0] s_bresp,
    output logic        s_bvalid,
    input  logic        s_bready,
    input  logic [31:0] s_araddr,
    input  logic        s_arvalid,
    output logic        s_arready,
    output logic [31:0] s_rdata,
    output logic [ 1:0] s_rresp,
    output logic        s_rvalid,
    input  logic        s_rready,

    // UART_0 (0x0)
    output logic [31:0] uart_awaddr,  output logic uart_awvalid, input  logic uart_awready,
    output logic [31:0] uart_wdata,   output logic [3:0] uart_wstrb, output logic uart_wvalid,  input  logic uart_wready,
    input  logic [ 1:0] uart_bresp,   input  logic uart_bvalid,  output logic uart_bready,
    output logic [31:0] uart_araddr,  output logic uart_arvalid, input  logic uart_arready,
    input  logic [31:0] uart_rdata,   input  logic [1:0] uart_rresp, input  logic uart_rvalid,  output logic uart_rready,

    // GPIO (0x1)
    output logic [31:0] gpio_awaddr,  output logic gpio_awvalid, input  logic gpio_awready,
    output logic [31:0] gpio_wdata,   output logic [3:0] gpio_wstrb, output logic gpio_wvalid,  input  logic gpio_wready,
    input  logic [ 1:0] gpio_bresp,   input  logic gpio_bvalid,  output logic gpio_bready,
    output logic [31:0] gpio_araddr,  output logic gpio_arvalid, input  logic gpio_arready,
    input  logic [31:0] gpio_rdata,   input  logic [1:0] gpio_rresp, input  logic gpio_rvalid,  output logic gpio_rready,

    // Timer (0x2)
    output logic [31:0] timer_awaddr, output logic timer_awvalid, input  logic timer_awready,
    output logic [31:0] timer_wdata,  output logic [3:0] timer_wstrb, output logic timer_wvalid,  input  logic timer_wready,
    input  logic [ 1:0] timer_bresp,  input  logic timer_bvalid,  output logic timer_bready,
    output logic [31:0] timer_araddr, output logic timer_arvalid, input  logic timer_arready,
    input  logic [31:0] timer_rdata,  input  logic [1:0] timer_rresp, input  logic timer_rvalid,  output logic timer_rready,

    // UART_1 / YZ stream (0x3)
    output logic [31:0] uart1_awaddr, output logic uart1_awvalid, input  logic uart1_awready,
    output logic [31:0] uart1_wdata,  output logic [3:0] uart1_wstrb, output logic uart1_wvalid,  input  logic uart1_wready,
    input  logic [ 1:0] uart1_bresp,  input  logic uart1_bvalid,  output logic uart1_bready,
    output logic [31:0] uart1_araddr, output logic uart1_arvalid, input  logic uart1_arready,
    input  logic [31:0] uart1_rdata,  input  logic [1:0] uart1_rresp, input  logic uart1_rvalid,  output logic uart1_rready,

    // I2C (0x4)
    output logic [31:0] i2c_awaddr,   output logic i2c_awvalid,  input  logic i2c_awready,
    output logic [31:0] i2c_wdata,    output logic [3:0] i2c_wstrb, output logic i2c_wvalid,   input  logic i2c_wready,
    input  logic [ 1:0] i2c_bresp,    input  logic i2c_bvalid,   output logic i2c_bready,
    output logic [31:0] i2c_araddr,   output logic i2c_arvalid,  input  logic i2c_arready,
    input  logic [31:0] i2c_rdata,    input  logic [1:0] i2c_rresp,  input  logic i2c_rvalid,   output logic i2c_rready,

    // QSPI (0x5)
    output logic [31:0] qspi_awaddr,  output logic qspi_awvalid, input  logic qspi_awready,
    output logic [31:0] qspi_wdata,   output logic [3:0] qspi_wstrb, output logic qspi_wvalid,  input  logic qspi_wready,
    input  logic [ 1:0] qspi_bresp,   input  logic qspi_bvalid,  output logic qspi_bready,
    output logic [31:0] qspi_araddr,  output logic qspi_arvalid, input  logic qspi_arready,
    input  logic [31:0] qspi_rdata,   input  logic [1:0] qspi_rresp, input  logic qspi_rvalid,  output logic qspi_rready,

    // AI Accelerator CSR (0x6)
    output logic [31:0] ai_awaddr,  output logic ai_awvalid, input  logic ai_awready,
    output logic [31:0] ai_wdata,   output logic [3:0] ai_wstrb, output logic ai_wvalid,  input  logic ai_wready,
    input  logic [ 1:0] ai_bresp,   input  logic ai_bvalid,  output logic ai_bready,
    output logic [31:0] ai_araddr,  output logic ai_arvalid, input  logic ai_arready,
    input  logic [31:0] ai_rdata,   input  logic [1:0] ai_rresp, input  logic ai_rvalid,  output logic ai_rready
);

    wire [3:0] aw_sel = s_awaddr[11:8];
    wire [3:0] ar_sel = s_araddr[11:8];

    wire aw_valid_addr = (aw_sel == 4'h0) || (aw_sel == 4'h1) || (aw_sel == 4'h2)
                      || (aw_sel == 4'h3) || (aw_sel == 4'h4) || (aw_sel == 4'h5) || (aw_sel == 4'h6);
    wire ar_valid_addr = (ar_sel == 4'h0) || (ar_sel == 4'h1) || (ar_sel == 4'h2)
                      || (ar_sel == 4'h3) || (ar_sel == 4'h4) || (ar_sel == 4'h5) || (ar_sel == 4'h6);

    logic [3:0] wr_sel_q, rd_sel_q;
    logic       err_aw_pending, err_ar_pending;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            wr_sel_q       <= 4'd0;
            rd_sel_q       <= 4'd0;
            err_aw_pending <= 1'b0;
            err_ar_pending <= 1'b0;
        end else begin
            if (s_awvalid && s_awready) begin
                wr_sel_q <= aw_sel;
                if (!aw_valid_addr) err_aw_pending <= 1'b1;
            end else if (s_bvalid && s_bready) begin
                err_aw_pending <= 1'b0;
            end
            if (s_arvalid && s_arready) begin
                rd_sel_q <= ar_sel;
                if (!ar_valid_addr) err_ar_pending <= 1'b1;
            end else if (s_rvalid && s_rready) begin
                err_ar_pending <= 1'b0;
            end
        end
    end

    // Broadcast
    assign uart_awaddr  = s_awaddr; assign gpio_awaddr  = s_awaddr;
    assign timer_awaddr = s_awaddr; assign qspi_awaddr  = s_awaddr;
    assign ai_awaddr    = s_awaddr; assign i2c_awaddr   = s_awaddr;
    assign uart1_awaddr = s_awaddr;

    assign uart_wdata   = s_wdata;  assign gpio_wdata   = s_wdata;
    assign timer_wdata  = s_wdata;  assign qspi_wdata   = s_wdata;
    assign ai_wdata     = s_wdata;  assign i2c_wdata    = s_wdata;
    assign uart1_wdata  = s_wdata;

    assign uart_wstrb   = s_wstrb;  assign gpio_wstrb   = s_wstrb;
    assign timer_wstrb  = s_wstrb;  assign qspi_wstrb   = s_wstrb;
    assign ai_wstrb     = s_wstrb;  assign i2c_wstrb    = s_wstrb;
    assign uart1_wstrb  = s_wstrb;

    assign uart_araddr  = s_araddr; assign gpio_araddr  = s_araddr;
    assign timer_araddr = s_araddr; assign qspi_araddr  = s_araddr;
    assign ai_araddr    = s_araddr; assign i2c_araddr   = s_araddr;
    assign uart1_araddr = s_araddr;

    // AW valid
    assign uart_awvalid  = s_awvalid && (aw_sel == 4'h0);
    assign gpio_awvalid  = s_awvalid && (aw_sel == 4'h1);
    assign timer_awvalid = s_awvalid && (aw_sel == 4'h2);
    assign uart1_awvalid = s_awvalid && (aw_sel == 4'h3);
    assign i2c_awvalid   = s_awvalid && (aw_sel == 4'h4);
    assign qspi_awvalid  = s_awvalid && (aw_sel == 4'h5);
    assign ai_awvalid    = s_awvalid && (aw_sel == 4'h6);

    // W valid
    assign uart_wvalid   = s_wvalid && (aw_sel == 4'h0);
    assign gpio_wvalid   = s_wvalid && (aw_sel == 4'h1);
    assign timer_wvalid  = s_wvalid && (aw_sel == 4'h2);
    assign uart1_wvalid  = s_wvalid && (aw_sel == 4'h3);
    assign i2c_wvalid    = s_wvalid && (aw_sel == 4'h4);
    assign qspi_wvalid   = s_wvalid && (aw_sel == 4'h5);
    assign ai_wvalid     = s_wvalid && (aw_sel == 4'h6);

    // AR valid
    assign uart_arvalid  = s_arvalid && (ar_sel == 4'h0);
    assign gpio_arvalid  = s_arvalid && (ar_sel == 4'h1);
    assign timer_arvalid = s_arvalid && (ar_sel == 4'h2);
    assign uart1_arvalid = s_arvalid && (ar_sel == 4'h3);
    assign i2c_arvalid   = s_arvalid && (ar_sel == 4'h4);
    assign qspi_arvalid  = s_arvalid && (ar_sel == 4'h5);
    assign ai_arvalid    = s_arvalid && (ar_sel == 4'h6);

    // AW ready
    assign s_awready = (aw_sel == 4'h0) ? uart_awready  :
                       (aw_sel == 4'h1) ? gpio_awready  :
                       (aw_sel == 4'h2) ? timer_awready :
                       (aw_sel == 4'h3) ? uart1_awready :
                       (aw_sel == 4'h4) ? i2c_awready   :
                       (aw_sel == 4'h5) ? qspi_awready  :
                       (aw_sel == 4'h6) ? ai_awready    : 1'b1;

    // W ready
    assign s_wready  = (aw_sel == 4'h0) ? uart_wready  :
                       (aw_sel == 4'h1) ? gpio_wready  :
                       (aw_sel == 4'h2) ? timer_wready :
                       (aw_sel == 4'h3) ? uart1_wready :
                       (aw_sel == 4'h4) ? i2c_wready   :
                       (aw_sel == 4'h5) ? qspi_wready  :
                       (aw_sel == 4'h6) ? ai_wready    : 1'b1;

    // AR ready
    assign s_arready = (ar_sel == 4'h0) ? uart_arready  :
                       (ar_sel == 4'h1) ? gpio_arready  :
                       (ar_sel == 4'h2) ? timer_arready :
                       (ar_sel == 4'h3) ? uart1_arready :
                       (ar_sel == 4'h4) ? i2c_arready   :
                       (ar_sel == 4'h5) ? qspi_arready  :
                       (ar_sel == 4'h6) ? ai_arready    : 1'b1;

    // B response mux
    assign s_bresp  = (wr_sel_q == 4'h0) ? uart_bresp  :
                      (wr_sel_q == 4'h1) ? gpio_bresp  :
                      (wr_sel_q == 4'h2) ? timer_bresp :
                      (wr_sel_q == 4'h3) ? uart1_bresp :
                      (wr_sel_q == 4'h4) ? i2c_bresp   :
                      (wr_sel_q == 4'h5) ? qspi_bresp  :
                      (wr_sel_q == 4'h6) ? ai_bresp    : 2'b11;

    assign s_bvalid = (wr_sel_q == 4'h0) ? uart_bvalid  :
                      (wr_sel_q == 4'h1) ? gpio_bvalid  :
                      (wr_sel_q == 4'h2) ? timer_bvalid :
                      (wr_sel_q == 4'h3) ? uart1_bvalid :
                      (wr_sel_q == 4'h4) ? i2c_bvalid   :
                      (wr_sel_q == 4'h5) ? qspi_bvalid  :
                      (wr_sel_q == 4'h6) ? ai_bvalid    : err_aw_pending;

    assign uart_bready  = s_bready && (wr_sel_q == 4'h0);
    assign gpio_bready  = s_bready && (wr_sel_q == 4'h1);
    assign timer_bready = s_bready && (wr_sel_q == 4'h2);
    assign uart1_bready = s_bready && (wr_sel_q == 4'h3);
    assign i2c_bready   = s_bready && (wr_sel_q == 4'h4);
    assign qspi_bready  = s_bready && (wr_sel_q == 4'h5);
    assign ai_bready    = s_bready && (wr_sel_q == 4'h6);

    // R response mux
    assign s_rdata  = (rd_sel_q == 4'h0) ? uart_rdata  :
                      (rd_sel_q == 4'h1) ? gpio_rdata  :
                      (rd_sel_q == 4'h2) ? timer_rdata :
                      (rd_sel_q == 4'h3) ? uart1_rdata :
                      (rd_sel_q == 4'h4) ? i2c_rdata   :
                      (rd_sel_q == 4'h5) ? qspi_rdata  :
                      (rd_sel_q == 4'h6) ? ai_rdata    : 32'hDEADBEEF;

    assign s_rresp  = (rd_sel_q == 4'h0) ? uart_rresp  :
                      (rd_sel_q == 4'h1) ? gpio_rresp  :
                      (rd_sel_q == 4'h2) ? timer_rresp :
                      (rd_sel_q == 4'h3) ? uart1_rresp :
                      (rd_sel_q == 4'h4) ? i2c_rresp   :
                      (rd_sel_q == 4'h5) ? qspi_rresp  :
                      (rd_sel_q == 4'h6) ? ai_rresp    : 2'b11;

    assign s_rvalid = (rd_sel_q == 4'h0) ? uart_rvalid  :
                      (rd_sel_q == 4'h1) ? gpio_rvalid  :
                      (rd_sel_q == 4'h2) ? timer_rvalid :
                      (rd_sel_q == 4'h3) ? uart1_rvalid :
                      (rd_sel_q == 4'h4) ? i2c_rvalid   :
                      (rd_sel_q == 4'h5) ? qspi_rvalid  :
                      (rd_sel_q == 4'h6) ? ai_rvalid    : err_ar_pending;

    assign uart_rready  = s_rready && (rd_sel_q == 4'h0);
    assign gpio_rready  = s_rready && (rd_sel_q == 4'h1);
    assign timer_rready = s_rready && (rd_sel_q == 4'h2);
    assign uart1_rready = s_rready && (rd_sel_q == 4'h3);
    assign i2c_rready   = s_rready && (rd_sel_q == 4'h4);
    assign qspi_rready  = s_rready && (rd_sel_q == 4'h5);
    assign ai_rready    = s_rready && (rd_sel_q == 4'h6);

endmodule