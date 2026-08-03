// ============================================
// Ostim BLogic Mikroelektronik
// ai_accelerator.sv  -  YZ hizlandirici (Tiny Conv)
// ============================================

`timescale 1ns / 1ps

module ai_accelerator #(
    parameter int CONV_SHIFT = 11,   // conv requant kaydirma
    parameter int FC_SHIFT   = 11    // fc requant kaydirma
) (
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4-Lite slave (CPU CSR)
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

    // AXI4 master (AI SRAM)
    output logic [ 3:0] m_axi_awid,
    output logic [31:0] m_axi_awaddr,
    output logic [ 7:0] m_axi_awlen,
    output logic [ 2:0] m_axi_awsize,
    output logic [ 1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [31:0] m_axi_wdata,
    output logic [ 3:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic [ 3:0] m_axi_bid,
    input  logic [ 1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    output logic [ 3:0] m_axi_arid,
    output logic [31:0] m_axi_araddr,
    output logic [ 7:0] m_axi_arlen,
    output logic [ 2:0] m_axi_arsize,
    output logic [ 1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic [ 3:0] m_axi_rid,
    input  logic [31:0] m_axi_rdata,
    input  logic [ 1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready,

    output logic        busy_o,

    // kesme
    output logic        irq_o
);

    // TFLite quantization parametreleri (extract_weights.py ciktisi)
    localparam logic signed [ 7:0] INPUT_ZP    = -8'sd128;
    localparam logic signed [ 7:0] CONV_OUT_ZP = -8'sd128;
    localparam logic signed [ 7:0] FC_OUT_ZP   =  8'sd14;

    // conv requant, kanal basina (8 filtre)
    localparam logic signed [31:0] M_CONV_Q31 [0:7] = '{
        32'h628A49AF, 32'h5A64A4B7, 32'h7741C64F, 32'h452319CA,
        32'h594FD417, 32'h4CA163E2, 32'h7FEC0835, 32'h68B36BE8
    };
    localparam int SHIFT_CONV [0:7] = '{41, 43, 41, 41, 41, 41, 41, 41};

    // fc requant, tensor basina
    localparam logic signed [31:0] M_FC_Q31 = 32'h732B0C78;
    localparam int                 SHIFT_FC = 42;

    // Bellek haritasi ve model parametreleri
    localparam logic [31:0] AI_SRAM_BASE   = 32'h0003_0000;
    localparam logic [31:0] CONV_OUT_OFF   = 32'h0000_07A8;
    localparam logic [31:0] CONV_W_OFF     = 32'h0000_17A8;
    localparam logic [31:0] CONV_BIAS_OFF  = 32'h0000_1BA8;
    localparam logic [31:0] FC_W_OFF       = 32'h0000_1BC8;
    localparam logic [31:0] FC_BIAS_OFF    = 32'h0000_5A48;
    localparam logic [31:0] DEFAULT_OUT    = 32'h0000_5A58;

    // Tiny Conv parametreleri
    localparam int INPUT_H     = 49;
    localparam int INPUT_W     = 40;
    localparam int KERNEL_H    = 10;
    localparam int KERNEL_W    = 8;
    localparam int NUM_FILTERS = 8;
    localparam int PAD_TOP     = 4;
    localparam int PAD_LEFT    = 3;
    localparam int STRIDE      = 2;
    localparam int CONV_OUT_H  = 25;
    localparam int CONV_OUT_W  = 20;
    localparam int FC_IN       = 4000;   // 25*20*8
    localparam int FC_OUT      = 4;

    // Yerel bellek boyutlari (32-bit word)
    localparam int INPUT_WORDS    = 490;   // 1960B / 4
    localparam int CONV_W_WORDS   = 160;   // 640B / 4
    localparam int CONV_OUT_WORDS = 1000;  // 4000B / 4

    // CSR (AXI4-Lite slave) sinyalleri
    // 0x00 CTRL: [0]=START, [1]=CLEAR_DONE (pulse)
    // 0x04 STATUS: [0]=BUSY, [1]=DONE, [7:4]=RESULT
    // 0x08 DATA_ADDR: giris adresi, 0x0C OUT_ADDR: sonuc adresi
    localparam logic [4:0] CSR_CTRL      = 5'h00;
    localparam logic [4:0] CSR_STATUS    = 5'h04;
    localparam logic [4:0] CSR_DATA_ADDR = 5'h08;
    localparam logic [4:0] CSR_OUT_ADDR  = 5'h0C;

    // FSM ile CSR arasi pulse sinyalleri (tek surucu icin)
    logic        csr_start;          // SW yazinca 1-cycle pulse
    logic        csr_clear_done;     // SW DONE temizler
    logic [31:0] csr_data_addr;
    logic [31:0] csr_out_addr;

    // FSM'in surdugu STATUS sinyalleri
    logic        status_busy;
    logic        status_done;
    logic [ 3:0] status_result;

    // Yerel bellekler
    // input_mem / conv_w_mem: senkron tek port (MAC her cevrimde ikisinden okur).
    // Adresler KOMBINASYONEL surulur ve bir SONRAKI iterasyonu gosterir; boylece
    // veri tam kullanilacagi cevrimde hazir olur -> ek cevrim maliyeti YOK.
    logic        im_we, im_re;
    logic [8:0]  im_waddr, im_raddr;
    logic [31:0] im_wdata, im_rdata;
    logic        cw_we, cw_re;
    logic [7:0]  cw_waddr, cw_raddr;
    logic [31:0] cw_wdata, cw_rdata;

`ifndef ASIC_SRAM_MACRO
    logic [31:0] input_mem  [0:INPUT_WORDS-1];
    logic [31:0] conv_w_mem [0:CONV_W_WORDS-1];
    logic [31:0] im_rdata_q, cw_rdata_q;
    always_ff @(posedge clk_i) begin
        if (im_we) input_mem[im_waddr]  <= im_wdata;
        if (im_re) im_rdata_q           <= input_mem[im_raddr];
        if (cw_we) conv_w_mem[cw_waddr] <= cw_wdata;
        if (cw_re) cw_rdata_q           <= conv_w_mem[cw_raddr];
    end
    assign im_rdata = im_rdata_q;
    assign cw_rdata = cw_rdata_q;
`else
    sky130_sram_2kbyte_1rw1r_32x512_8 u_input_mem (
        .clk0(clk_i), .csb0(!im_we), .web0(1'b0), .wmask0(4'b1111),
        .addr0(im_waddr), .din0(im_wdata), .dout0(),
        .clk1(clk_i), .csb1(!im_re), .addr1(im_raddr), .dout1(im_rdata)
    );
    // 7 koseli varyant: SS/FF STA'si bu banka icin gercek kutuphaneden gelir
    sram_1rw1r_32_256_8_sky130 u_conv_w_mem (
        .clk0(clk_i), .csb0(!cw_we), .web0(1'b0), .wmask0(4'b1111),
        .addr0(cw_waddr), .din0(cw_wdata), .dout0(),
        .clk1(clk_i), .csb1(!cw_re), .addr1(cw_raddr), .dout1(cw_rdata)
    );
`endif


    logic signed [31:0] conv_bias_mem [0:NUM_FILTERS-1];
    // conv_out depolamasi: tek senkron port + byte maskesi.
    // ESKIDEN: 3 kombinasyonel okuma portu (RMW + WCONV drain + FC) vardi,
    // Yosys bunu bellek olarak cikaramayip 32.000 bit flop uretiyordu.
    // Zamanlama iki modda AYNI: adres T'de, veri T+1'de.
    localparam int CO_AW = 10;   // 1000 word -> 10 bit
    logic               co_we, co_re;
    logic [CO_AW-1:0]   co_waddr, co_raddr;
    logic [3:0]         co_wmask;
    logic [31:0]        co_wdata, co_rdata;

`ifndef ASIC_SRAM_MACRO
    logic [31:0] conv_out_mem [0:CONV_OUT_WORDS-1];
    logic [31:0] co_rdata_q;
    always_ff @(posedge clk_i) begin
        if (co_we) begin
            if (co_wmask[0]) conv_out_mem[co_waddr][ 7: 0] <= co_wdata[ 7: 0];
            if (co_wmask[1]) conv_out_mem[co_waddr][15: 8] <= co_wdata[15: 8];
            if (co_wmask[2]) conv_out_mem[co_waddr][23:16] <= co_wdata[23:16];
            if (co_wmask[3]) conv_out_mem[co_waddr][31:24] <= co_wdata[31:24];
        end
        if (co_re) co_rdata_q <= conv_out_mem[co_raddr];
    end
    assign co_rdata = co_rdata_q;
`else
    sram_macro_bank #(.WORDS(1024)) u_conv_out (
        .clk_i(clk_i),
        .we_i(co_we), .waddr_i(co_waddr), .wmask_i(co_wmask), .wdata_i(co_wdata),
        .re_i(co_re), .raddr_i(co_raddr), .rdata_o(co_rdata)
    );
`endif

    // (r,c,f) -> conv_out byte indeksi
    function automatic int conv_out_bidx(input int r, input int c, input int f);
        return r * (CONV_OUT_W * NUM_FILTERS) + c * NUM_FILTERS + f;
    endfunction
    logic signed [31:0] fc_bias_mem [0:FC_OUT-1];
    logic signed [ 7:0] fc_out_mem  [0:FC_OUT-1];

    // MAC birimi
    logic signed [15:0] mac_a;   // input - input_zp 9-bit sigsin diye
    logic signed [ 7:0] mac_b;
    logic signed [31:0] mac_acc;
    logic               mac_clear;
    logic               mac_en;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)
            mac_acc <= 32'sd0;
        else if (mac_clear)
            mac_acc <= 32'sd0;
        else if (mac_en)
            mac_acc <= mac_acc + ($signed(mac_a) * $signed(mac_b));
    end

    // TFLite requant: (acc*M_q31 + round) >>> shift + out_zp, sat.
    // do_relu=1 ise alt sinir out_zp (fused ReLU), degilse -128.
    function automatic logic signed [7:0] tflite_requant(
        input logic signed [31:0] acc,
        input logic signed [31:0] M_q31,
        input int                 right_shift,
        input logic signed [ 7:0] out_zp,
        input logic               do_relu
    );
        logic signed [63:0] prod;
        logic signed [63:0] half;
        logic signed [63:0] rounded64;
        logic signed [31:0] biased;
        logic signed [31:0] zp_ext;
        logic signed [31:0] act_min;

        zp_ext    = {{24{out_zp[7]}}, out_zp};
        prod      = $signed(acc) * $signed(M_q31);
        half      = 64'sd1 <<< (right_shift - 1);
        rounded64 = (prod + half) >>> right_shift;
        biased    = rounded64[31:0] + zp_ext;

        act_min = do_relu ? zp_ext : -32'sd128;
        if      (biased >  32'sd127)  return  8'sd127;
        else if (biased <  act_min)   return act_min[7:0];
        else                          return biased[7:0];
    endfunction

    // Ana FSM durumlari
    typedef enum logic [4:0] {
        ST_IDLE,
        ST_LOAD_CW,        // conv agirlik yukle (160 word)
        ST_LOAD_CW_WAIT,
        ST_LOAD_CB,        // conv bias yukle (8 INT32)
        ST_LOAD_CB_WAIT,
        ST_LOAD_IN,        // input yukle (490 word)
        ST_LOAD_IN_WAIT,
        ST_CONV_INIT,
        ST_CONV_MAC,       // cycle basina 1 MAC
        ST_CONV_DRAIN,     // pipeline bosalt
        ST_CONV_STORE,     // requant + conv_out_mem'e yaz
        ST_WCONV_RD,
        ST_WCONV_RD2,
        ST_WCONV_ISSUE,
        ST_WCONV_WAIT,
        ST_LOAD_FB,
        ST_LOAD_FB_WAIT,
        ST_FC_INIT,
        ST_FC_FETCH_W,     // FC agirlik byte oku
        ST_FC_FETCH_W_WAIT,
        ST_FC_MAC,
        ST_FC_DRAIN,       // pipeline bosalt
        ST_FC_STORE,
        ST_ARGMAX,
        ST_WRITE_RESULT,
        ST_WRITE_WAIT,
        ST_DONE
    } state_t;
    state_t state;

    // Sayaclar
    logic [ 9:0] load_idx;
    logic [ 2:0] f_idx;        // 0..7
    logic [ 4:0] r_idx;        // 0..24
    logic [ 4:0] c_idx;        // 0..19
    logic [ 3:0] kh_idx;       // 0..9
    logic [ 2:0] kw_idx;       // 0..7


    // --- Okuma yolu: bir sonraki (kh,kw) icin adres onceden surulur ---
    int nx_ir, nx_ic, ibx, wbx;
    logic [3:0] nx_kh, nx_kw;
    logic       nx_pad;
    logic [1:0] nx_ib, nx_wb;
    logic [1:0] cur_ib, cur_wb;
    logic       cur_pad;

    always_comb begin
        nx_kh = kh_idx; nx_kw = kw_idx;
        if (state == ST_CONV_INIT) begin
            nx_kh = '0; nx_kw = '0;
        end else if (state == ST_CONV_MAC) begin
            if (kw_idx == KERNEL_W - 1) begin
                nx_kw = '0;
                nx_kh = kh_idx + 1;   // pencere sonunda tasar, okuma zararsiz
            end else begin
                nx_kw = kw_idx + 1;
            end
        end
        nx_ir  = (int'(r_idx) * STRIDE) + int'(nx_kh) - PAD_TOP;
        nx_ic  = (int'(c_idx) * STRIDE) + int'(nx_kw) - PAD_LEFT;
        nx_pad = (nx_ir < 0) || (nx_ir >= INPUT_H) || (nx_ic < 0) || (nx_ic >= INPUT_W);
        ibx    = nx_pad ? 0 : (nx_ir * INPUT_W + nx_ic);
        nx_ib  = ibx[1:0];
        wbx    = (int'(f_idx) * (KERNEL_H * KERNEL_W)) + (int'(nx_kh) * KERNEL_W) + int'(nx_kw);
        nx_wb  = wbx[1:0];
    end

    assign im_re    = (state == ST_CONV_INIT) || (state == ST_CONV_MAC);
    assign cw_re    = im_re;
    assign im_raddr = 9'((ibx >> 2) % INPUT_WORDS);
    assign cw_raddr = 8'((wbx >> 2) % CONV_W_WORDS);

    always_ff @(posedge clk_i) begin
        if (im_re) begin
            cur_ib  <= nx_ib;
            cur_wb  <= nx_wb;
            cur_pad <= nx_pad;
        end
    end
    logic [ 1:0] out_idx;      // 0..3
    logic [11:0] in_idx;       // 0..3999

    // FC satir tabani: out_idx arttikca 4000 eklenir
    logic [31:0] fc_w_row_base;

    // AXI4 master FSM: byte-strobe yazma + word okuma
    typedef enum logic [2:0] {
        MEM_IDLE, MEM_RA, MEM_RD, MEM_WA, MEM_WR_RESP
    } mem_state_t;
    mem_state_t mem_state;

    logic [31:0] mem_addr;        // byte adres
    logic [31:0] mem_wdata_q;     // yazma verisi
    logic [ 3:0] mem_wstrb_q;     // yazma strobu
    logic [31:0] mem_rdata;       // son okunan word
    logic        mem_read_req;
    logic        mem_write_req;
    logic        mem_done;

    // AXI sabit sinyalleri (tek-beat, INCR, 4 byte)
    assign m_axi_awid    = 4'd2;
    assign m_axi_awlen   = 8'd0;
    assign m_axi_awsize  = 3'b010;
    assign m_axi_awburst = 2'b01;
    assign m_axi_wlast   = 1'b1;
    assign m_axi_arid    = 4'd2;
    assign m_axi_arlen   = 8'd0;
    assign m_axi_arsize  = 3'b010;
    assign m_axi_arburst = 2'b01;
    assign m_axi_wstrb   = mem_wstrb_q;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            mem_state     <= MEM_IDLE;
            m_axi_awaddr  <= '0;
            m_axi_awvalid <= 1'b0;
            m_axi_wdata   <= '0;
            m_axi_wvalid  <= 1'b0;
            m_axi_bready  <= 1'b0;
            m_axi_araddr  <= '0;
            m_axi_arvalid <= 1'b0;
            m_axi_rready  <= 1'b0;
            mem_rdata     <= '0;
            mem_done      <= 1'b0;
        end else begin
            mem_done <= 1'b0;
            case (mem_state)
                MEM_IDLE: begin
                    if (mem_read_req) begin
                        m_axi_araddr  <= {mem_addr[31:2], 2'b00};  // word hizala
                        m_axi_arvalid <= 1'b1;
                        mem_state     <= MEM_RA;
                    end else if (mem_write_req) begin
                        m_axi_awaddr  <= {mem_addr[31:2], 2'b00};
                        m_axi_awvalid <= 1'b1;
                        m_axi_wdata   <= mem_wdata_q;
                        m_axi_wvalid  <= 1'b1;
                        mem_state     <= MEM_WA;
                    end
                end
                MEM_RA: begin
                    if (m_axi_arready) begin
                        m_axi_arvalid <= 1'b0;
                        m_axi_rready  <= 1'b1;
                        mem_state     <= MEM_RD;
                    end
                end
                MEM_RD: begin
                    if (m_axi_rvalid) begin
                        mem_rdata    <= m_axi_rdata;
                        m_axi_rready <= 1'b0;
                        mem_done     <= 1'b1;
                        mem_state    <= MEM_IDLE;
                    end
                end
                MEM_WA: begin
                    if (m_axi_awready) m_axi_awvalid <= 1'b0;
                    if (m_axi_wready)  m_axi_wvalid  <= 1'b0;
                    if ((m_axi_awready || !m_axi_awvalid) &&
                        (m_axi_wready  || !m_axi_wvalid)) begin
                        m_axi_bready <= 1'b1;
                        mem_state    <= MEM_WR_RESP;
                    end
                end
                MEM_WR_RESP: begin
                    if (m_axi_bvalid) begin
                        m_axi_bready <= 1'b0;
                        mem_done     <= 1'b1;
                        mem_state    <= MEM_IDLE;
                    end
                end
                default: mem_state <= MEM_IDLE;
            endcase
        end
    end

    // word icinden byte cek
    function automatic logic signed [7:0] get_byte_from_word(
        input logic [31:0] word,
        input logic [ 1:0] byte_off
    );
        case (byte_off)
            2'd0: return $signed(word[ 7: 0]);
            2'd1: return $signed(word[15: 8]);
            2'd2: return $signed(word[23:16]);
            2'd3: return $signed(word[31:24]);
        endcase
    endfunction



    // Ana FSM
    int ir, ic;           // padding hesabi icin gecici
    logic signed [7:0] input_pix, weight_pix, conv_out_pix, fc_w_pix;
    logic signed [7:0] result_byte;
    int idx_tmp;
    int best_idx;
    logic signed [7:0] best_val;

    // --- Yazma yolu: yukleme fazi (zamanlama eskisiyle ayni kenar) ---
    assign im_we    = (state == ST_LOAD_IN_WAIT) && mem_done;
    assign im_waddr = 9'(load_idx);
    assign im_wdata = mem_rdata;
    assign cw_we    = (state == ST_LOAD_CW_WAIT) && mem_done;
    assign cw_waddr = 8'(load_idx);
    assign cw_wdata = mem_rdata;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state          <= ST_IDLE;
            status_busy    <= 1'b0;
            status_done    <= 1'b0;
            status_result  <= 4'd0;
            load_idx       <= '0;
            f_idx          <= '0;
            r_idx          <= '0;
            c_idx          <= '0;
            kh_idx         <= '0;
            kw_idx         <= '0;
            out_idx        <= '0;
            in_idx         <= '0;
            fc_w_row_base  <= '0;
            mac_clear      <= 1'b0;
            mac_en         <= 1'b0;
            mac_a          <= '0;
            mac_b          <= '0;
            mem_read_req   <= 1'b0;
            mem_write_req  <= 1'b0;
            mem_addr       <= '0;
            mem_wdata_q    <= '0;
            mem_wstrb_q    <= 4'b1111;
            co_we          <= 1'b0;
            co_re          <= 1'b0;
            co_waddr       <= '0;
            co_raddr       <= '0;
            co_wmask       <= 4'd0;
            co_wdata       <= '0;
        end else begin
            // pulse'lari varsayilan temizle
            mac_clear     <= 1'b0;
            mac_en        <= 1'b0;
            mem_read_req  <= 1'b0;
            mem_write_req <= 1'b0;
            co_we         <= 1'b0;
            co_re         <= 1'b0;


            // SW DONE temizleme (tek surucu icin burada)
            if (csr_clear_done)
                status_done <= 1'b0;

            case (state)
                ST_IDLE: begin
                    status_busy <= 1'b0;
                    if (csr_start) begin
                        status_busy   <= 1'b1;
                        status_done   <= 1'b0;
                        status_result <= 4'd0;
                        load_idx      <= '0;
                        // conv agirlik yuklemeye basla
                        mem_addr      <= AI_SRAM_BASE + CONV_W_OFF;
                        mem_read_req  <= 1'b1;
                        state         <= ST_LOAD_CW_WAIT;
                    end
                end

                // conv agirlik yukle (160 word)
                ST_LOAD_CW: begin
                    mem_addr     <= AI_SRAM_BASE + CONV_W_OFF + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_CW_WAIT;
                end
                ST_LOAD_CW_WAIT: begin
                    if (mem_done) begin
                        if (load_idx == CONV_W_WORDS - 1) begin
                            load_idx <= '0;
                            state    <= ST_LOAD_CB;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_LOAD_CW;
                        end
                    end
                end

                // conv bias yukle (8 word)
                ST_LOAD_CB: begin
                    mem_addr     <= AI_SRAM_BASE + CONV_BIAS_OFF + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_CB_WAIT;
                end
                ST_LOAD_CB_WAIT: begin
                    if (mem_done) begin
                        conv_bias_mem[load_idx[2:0]] <= $signed(mem_rdata);
                        if (load_idx == NUM_FILTERS - 1) begin
                            load_idx <= '0;
                            state    <= ST_LOAD_IN;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_LOAD_CB;
                        end
                    end
                end

                // input yukle (490 word), csr_data_addr'ten
                ST_LOAD_IN: begin
                    mem_addr     <= csr_data_addr + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_IN_WAIT;
                end
                ST_LOAD_IN_WAIT: begin
                    if (mem_done) begin
                        if (load_idx == INPUT_WORDS - 1) begin
                            load_idx <= '0;
                            // Conv2D basla
                            f_idx    <= '0;
                            r_idx    <= '0;
                            c_idx    <= '0;
                            kh_idx   <= '0;
                            kw_idx   <= '0;
                            state    <= ST_CONV_INIT;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_LOAD_IN;
                        end
                    end
                end

                // Conv2D: yerel bellekten, cycle basina 1 MAC
                ST_CONV_INIT: begin
                    // (f, r, c) icin yeni MAC penceresi; bias STORE'da eklenir
                    mac_clear <= 1'b1;
                    kh_idx <= '0;
                    kw_idx <= '0;
                    state  <= ST_CONV_MAC;
                end

                ST_CONV_MAC: begin
                    // (ir, ic) = (r*2 + kh - PAD_TOP, c*2 + kw - PAD_LEFT)
                    // veri onceki cevrimde adreslendi; offset/pad kayitli
                    input_pix  = cur_pad ? INPUT_ZP
                                         : get_byte_from_word(im_rdata, cur_ib);
                    weight_pix = get_byte_from_word(cw_rdata, cur_wb);
                    // (input - input_zp) * weight, weight_zp=0
                    mac_a  <= 16'($signed(input_pix) - $signed(INPUT_ZP));
                    mac_b  <= weight_pix;
                    mac_en <= 1'b1;

                    // kernel ic dongusu
                    if (kw_idx == KERNEL_W - 1) begin
                        kw_idx <= '0;
                        if (kh_idx == KERNEL_H - 1) begin
                            kh_idx <= '0;
                            state <= ST_CONV_DRAIN;
                        end else begin
                            kh_idx <= kh_idx + 1;
                        end
                    end else begin
                        kw_idx <= kw_idx + 1;
                    end
                end

                ST_CONV_DRAIN: begin
                    // son MAC carpimi bu cycle acc'a girer, 80'i de sayilir
                    state <= ST_CONV_STORE;
                end

                ST_CONV_STORE: begin
                    // bias ekle, kanal basina requant + fused ReLU, conv_out_mem'e yaz
                    result_byte = tflite_requant(
                        mac_acc + conv_bias_mem[f_idx],
                        M_CONV_Q31[f_idx],
                        SHIFT_CONV[f_idx],
                        CONV_OUT_ZP,
                        1'b1
                    );
                    co_we    <= 1'b1;
                    co_waddr  <= CO_AW'(conv_out_bidx(r_idx, c_idx, f_idx) >> 2);
                    co_wmask  <= 4'b0001 << conv_out_bidx(r_idx, c_idx, f_idx) % 4;
                    co_wdata  <= {4{result_byte}};

                    // (f, r, c) ilerlet: f dis, r orta, c ic
                    if (c_idx == CONV_OUT_W - 1) begin
                        c_idx <= '0;
                        if (r_idx == CONV_OUT_H - 1) begin
                            r_idx <= '0;
                            if (f_idx == NUM_FILTERS - 1) begin
                                // conv2d bitti, conv_out'u SRAM'e yaz
                                f_idx    <= '0;
                                load_idx <= '0;
                                state    <= ST_WCONV_RD;
                            end else begin
                                f_idx <= f_idx + 1;
                                state <= ST_CONV_INIT;
                            end
                        end else begin
                            r_idx <= r_idx + 1;
                            state <= ST_CONV_INIT;
                        end
                    end else begin
                        c_idx <= c_idx + 1;
                        state <= ST_CONV_INIT;
                    end
                end

                // conv_out yerel bellegi SRAM'e yaz (1000 word)
                ST_WCONV_RD: begin
                    co_re    <= 1'b1;
                    co_raddr <= CO_AW'(load_idx);
                    state    <= ST_WCONV_RD2;
                end
                // co_re bu cevrimde yuksek; veri ISSUE'da gecerli olur
                ST_WCONV_RD2: begin
                    state    <= ST_WCONV_ISSUE;
                end
                ST_WCONV_ISSUE: begin
                    mem_addr      <= AI_SRAM_BASE + CONV_OUT_OFF + (load_idx << 2);
                    mem_wdata_q   <= co_rdata;
                    mem_wstrb_q   <= 4'b1111;     // tam word
                    mem_write_req <= 1'b1;
                    state         <= ST_WCONV_WAIT;
                end
                ST_WCONV_WAIT: begin
                    if (mem_done) begin
                        if (load_idx == CONV_OUT_WORDS - 1) begin
                            load_idx <= '0;
                            state    <= ST_LOAD_FB;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_WCONV_RD;
                        end
                    end
                end

                // FC bias yukle (4 INT32)
                ST_LOAD_FB: begin
                    mem_addr     <= AI_SRAM_BASE + FC_BIAS_OFF + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_FB_WAIT;
                end
                ST_LOAD_FB_WAIT: begin
                    if (mem_done) begin
                        fc_bias_mem[load_idx[1:0]] <= $signed(mem_rdata);
                        if (load_idx == FC_OUT - 1) begin
                            // FC basla
                            out_idx       <= '0;
                            in_idx        <= '0;
                            fc_w_row_base <= AI_SRAM_BASE + FC_W_OFF;
                            state         <= ST_FC_INIT;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_LOAD_FB;
                        end
                    end
                end

                // FC: 4 x 4000 MAC; conv_out yerelde, fc_w stream
                ST_FC_INIT: begin
                    mac_clear <= 1'b1;
                    in_idx    <= '0;
                    state     <= ST_FC_FETCH_W;
                end

                ST_FC_FETCH_W: begin
                    // FC agirligi oku (word oku, sonra byte cek)
                    mem_addr     <= fc_w_row_base + {20'd0, in_idx};
                    mem_read_req <= 1'b1;
                    co_re        <= 1'b1;              // conv_out okumasi boru hattinda
                    co_raddr     <= CO_AW'(in_idx >> 2);
                    state        <= ST_FC_FETCH_W_WAIT;
                end
                ST_FC_FETCH_W_WAIT: begin
                    if (mem_done) state <= ST_FC_MAC;
                end

                ST_FC_MAC: begin
                    conv_out_pix = get_byte_from_word(co_rdata, in_idx[1:0]);
                    fc_w_pix     = get_byte_from_word(mem_rdata, in_idx[1:0]);
                    // (conv_out - conv_out_zp) * fc_w, fc_w_zp=0
                    mac_a  <= 16'($signed(conv_out_pix) - $signed(CONV_OUT_ZP));
                    mac_b  <= fc_w_pix;
                    mac_en <= 1'b1;

                    if (in_idx == FC_IN - 1) begin
                        state <= ST_FC_DRAIN;
                    end else begin
                        in_idx <= in_idx + 1;
                        state  <= ST_FC_FETCH_W;
                    end
                end

                ST_FC_DRAIN: begin
                    // son MAC bu cycle acc'a girer, 4000'i de sayilir
                    state <= ST_FC_STORE;
                end

                ST_FC_STORE: begin
                    // tensor basina requant, ReLU yok (softmax girisi)
                    fc_out_mem[out_idx] <= tflite_requant(
                        mac_acc + fc_bias_mem[out_idx],
                        M_FC_Q31,
                        SHIFT_FC,
                        FC_OUT_ZP,
                        1'b0
                    );
                    if (out_idx == FC_OUT - 1) begin
                        state <= ST_ARGMAX;
                    end else begin
                        out_idx       <= out_idx + 1;
                        in_idx        <= '0;
                        fc_w_row_base <= fc_w_row_base + FC_IN;  // sonraki satir
                        state         <= ST_FC_INIT;
                    end
                end

                // Argmax (4 INT8 -> 0..3)
                ST_ARGMAX: begin
                    best_idx = 0;
                    best_val = fc_out_mem[0];
                    if (fc_out_mem[1] > best_val) begin best_val = fc_out_mem[1]; best_idx = 1; end
                    if (fc_out_mem[2] > best_val) begin best_val = fc_out_mem[2]; best_idx = 2; end
                    if (fc_out_mem[3] > best_val) begin best_val = fc_out_mem[3]; best_idx = 3; end
                    status_result <= best_idx[3:0];
                    state         <= ST_WRITE_RESULT;
                end

                // sonucu csr_out_addr'a yaz (1 INT32)
                ST_WRITE_RESULT: begin
                    mem_addr      <= csr_out_addr;
                    mem_wdata_q   <= {28'd0, status_result};
                    mem_wstrb_q   <= 4'b1111;
                    mem_write_req <= 1'b1;
                    state         <= ST_WRITE_WAIT;
                end
                ST_WRITE_WAIT: begin
                    if (mem_done) state <= ST_DONE;
                end

                ST_DONE: begin
                    status_busy <= 1'b0;
                    status_done <= 1'b1;
                    state       <= ST_IDLE;
                end

                default: state <= ST_IDLE;
            endcase
        end
    end

    // AXI4-Lite slave: CSR yazma
    logic       aw_en;
    logic [4:0] wr_addr_q;
    assign s_axi_bresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_awready  <= 1'b0;
            s_axi_wready   <= 1'b0;
            s_axi_bvalid   <= 1'b0;
            aw_en          <= 1'b1;
            wr_addr_q      <= '0;
            csr_start      <= 1'b0;
            csr_clear_done <= 1'b0;
            csr_data_addr  <= AI_SRAM_BASE;                 // varsayilan input adresi
            csr_out_addr   <= AI_SRAM_BASE + DEFAULT_OUT;   // varsayilan sonuc adresi
        end else begin
            // pulse'lar varsayilan 0
            csr_start      <= 1'b0;
            csr_clear_done <= 1'b0;

            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                wr_addr_q     <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (wr_addr_q)
                    CSR_CTRL: begin
                        if (s_axi_wdata[0] && !status_busy) csr_start      <= 1'b1;
                        if (s_axi_wdata[1])                 csr_clear_done <= 1'b1;
                    end
                    CSR_DATA_ADDR: csr_data_addr <= s_axi_wdata;
                    CSR_OUT_ADDR:  csr_out_addr  <= s_axi_wdata;
                    default: ;
                endcase
            end

            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid)
                s_axi_bvalid <= 1'b1;
            else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // AXI4-Lite slave: CSR okuma
    assign s_axi_rresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready)
                s_axi_arready <= 1'b1;
            else
                s_axi_arready <= 1'b0;

            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[4:0])
                    CSR_CTRL:      s_axi_rdata <= 32'd0;
                    CSR_STATUS:    s_axi_rdata <= {24'd0, status_result, 2'd0, status_done, status_busy};
                    CSR_DATA_ADDR: s_axi_rdata <= csr_data_addr;
                    CSR_OUT_ADDR:  s_axi_rdata <= csr_out_addr;
                    default:       s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    assign busy_o = status_busy;

    assign irq_o = status_done;

endmodule
