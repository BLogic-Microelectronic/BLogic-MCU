`timescale 1ns / 1ps

// ============================================================
// BLogic MCU — YZ Hızlandırıcı (AI Accelerator) — v2
// ============================================================
// TFLite Micro Speech "Tiny Conv" modelini RTL düzeyinde gerçekler.
// Bu sürümde GERÇEK Conv2D ve FC hesabı yapılır; quantization
// tek sabit sağ-kaydırma ile yapılır. Python referansın AYNI sabit
// ofsetleri, AYNI shift değerlerini ve AYNI ReLU/argmax yerini
// kullanması ŞART — yoksa golden test eşleşmez.
//
// Mimari:
//   - AXI4-Lite Slave   : CPU CSR erişimi (CTRL/STATUS/DATA_ADDR/OUT_ADDR)
//   - AXI4 Master       : AI SRAM okuma/yazma (32-bit word, byte wstrb)
//   - Yerel bellekler   : input (1960B) + conv_w (640B) + conv_bias (32B)
//                         + conv_out (4000B) + fc_bias (16B) + fc_out (4B)
//   - Datapath          : INT8 × INT8 → INT32 MAC + ReLU + shift + sat→INT8
//   - Ana FSM           : LOAD → CONV → WRITE_CONV → LOAD_FC → FC → ARGMAX → DONE
//   - Interrupt         : İşlem bitince irq_o
//
// Model (EK-1, TFLite Micro Speech tiny_conv):
//   Giriş : 49 × 40 × 1 INT8 (1960 byte)
//   Conv  : 8 filtre × 10×8×1, stride 2, SAME pad (top=4, left=3)
//           → 25 × 20 × 8 → +bias → ReLU → >>>CONV_SHIFT → INT8 sat
//   FC    : 4000 → 4, +bias → >>>FC_SHIFT → INT8 sat
//   Argmax: 4 INT8 → {0:silence, 1:unknown, 2:yes, 3:no}
//
// AI SRAM düzeni (AI_SRAM_BASE = 0x0003_0000, 30 KB):
//   Bölge          Ofset       Boyut    Açıklama
//   INPUT          0x0000      1960     csr_data_addr; INT8
//   CONV_OUT       0x07A8      4000     Conv ara çıkışı; INT8, HWC [25,20,8]
//   CONV_W         0x17A8       640     8×10×8×1 INT8 (filtre-major)
//   CONV_BIAS      0x1BA8        32     8 × INT32 (little-endian)
//   FC_W           0x1BC8     16000     4 × 4000 INT8 (out-major)
//   FC_BIAS        0x5A48        16     4 × INT32
//   RESULT         csr_out_addr   4     INT32 argmax sınıfı (default 0x5A58)
//
// Conv layout (HWC): conv_out[r*160 + c*8 + f]   (r=0..24, c=0..19, f=0..7)
// Conv weight layout (filtre-major):
//   conv_w[f*80 + kh*8 + kw]   (f=0..7, kh=0..9, kw=0..7)
// FC weight layout (out-major):
//   fc_w[o*4000 + i]           (o=0..3, i=0..3999)
//
// !!! Berkin'in tiny_conv_reference.py'sinin BU layout'a, CONV_SHIFT'e ve
//     FC_SHIFT'e bit-bit uyması gerekir.
// ============================================================

module ai_accelerator #(
    parameter int CONV_SHIFT = 11,   // INT32 acc → INT8 conv requant kaydırma
    parameter int FC_SHIFT   = 11    // INT32 acc → INT8 fc   requant kaydırma
) (
    input  logic        clk_i,
    input  logic        rst_ni,

    // ---- AXI4-Lite Slave (CPU CSR) ----
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

    // ---- AXI4 Master (AI SRAM) ----
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

    // ---- Interrupt ----
    output logic        irq_o
);

    // =========================================================
    // SABİTLER — Bellek haritası ve model parametreleri
    // =========================================================
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
    localparam int FC_IN       = 4000;   // 25 * 20 * 8
    localparam int FC_OUT      = 4;

    // Yerel bellek boyutları (word = 32-bit)
    localparam int INPUT_WORDS    = 490;   // 1960 byte / 4
    localparam int CONV_W_WORDS   = 160;   // 640 byte / 4
    localparam int CONV_OUT_WORDS = 1000;  // 4000 byte / 4

    // =========================================================
    // CSR (AXI4-Lite Slave) sinyalleri
    // =========================================================
    // 0x00 CTRL    : [0]=START (pulse), [1]=CLEAR_DONE (pulse)
    // 0x04 STATUS  : [0]=BUSY, [1]=DONE, [7:4]=RESULT (argmax)
    // 0x08 DATA_ADDR : Giriş veri başlangıç adresi
    // 0x0C OUT_ADDR  : Sonuç (argmax) yazılacak adres
    localparam logic [4:0] CSR_CTRL      = 5'h00;
    localparam logic [4:0] CSR_STATUS    = 5'h04;
    localparam logic [4:0] CSR_DATA_ADDR = 5'h08;
    localparam logic [4:0] CSR_OUT_ADDR  = 5'h0C;

    // FSM ↔ CSR arası pulse sinyaller (tek sürücülü yapmak için)
    logic        csr_start;          // 1-cycle pulse, SW yazınca tetiklenir
    logic        csr_clear_done;     // 1-cycle pulse, SW DONE'u temizler
    logic [31:0] csr_data_addr;
    logic [31:0] csr_out_addr;

    // FSM tarafından sürülen STATUS sinyalleri
    logic        status_busy;
    logic        status_done;
    logic [ 3:0] status_result;

    // =========================================================
    // YEREL BELLEKLER
    // =========================================================
    logic [31:0] input_mem    [0:INPUT_WORDS-1];      // 1960 byte
    logic [31:0] conv_w_mem   [0:CONV_W_WORDS-1];     // 640 byte
    logic signed [31:0] conv_bias_mem [0:NUM_FILTERS-1];  // 8 × INT32
    logic [31:0] conv_out_mem [0:CONV_OUT_WORDS-1];   // 4000 byte
    logic signed [31:0] fc_bias_mem [0:FC_OUT-1];     // 4 × INT32
    logic signed [ 7:0] fc_out_mem  [0:FC_OUT-1];     // 4 × INT8 (saturate)

    // =========================================================
    // MAC BİRİMİ (combinational + acc register)
    // =========================================================
    logic signed [ 7:0] mac_a;
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

    // Requant fonksiyonu: INT32 → INT8 (ReLU + shift + saturate)
    function automatic logic signed [7:0] requant_relu(
        input logic signed [31:0] v,
        input int                 shift
    );
        logic signed [31:0] relu_v;
        logic signed [31:0] shifted;
        relu_v  = (v < 0) ? 32'sd0 : v;
        shifted = relu_v >>> shift;
        if (shifted >  32'sd127)  return  8'sd127;
        else                      return shifted[7:0];
    endfunction

    function automatic logic signed [7:0] requant_no_relu(
        input logic signed [31:0] v,
        input int                 shift
    );
        logic signed [31:0] shifted;
        shifted = v >>> shift;
        if      (shifted >  32'sd127)  return  8'sd127;
        else if (shifted < -32'sd128)  return -8'sd128;
        else                           return shifted[7:0];
    endfunction

    // =========================================================
    // ANA FSM DURUM TANIMI
    // =========================================================
    typedef enum logic [4:0] {
        ST_IDLE,
        // --- Önceden yükleme ---
        ST_LOAD_CW,        // Conv ağırlıklarını yükle (160 word)
        ST_LOAD_CW_WAIT,
        ST_LOAD_CB,        // Conv bias yükle (8 INT32)
        ST_LOAD_CB_WAIT,
        ST_LOAD_IN,        // Input yükle (490 word)
        ST_LOAD_IN_WAIT,
        // --- Conv2D compute (yerel bellekten) ---
        ST_CONV_INIT,      // (f,r,c) için acc=bias[f], (kh,kw)=0
        ST_CONV_MAC,       // 1 MAC / cycle (yerel bellek erişimleri)
        ST_CONV_STORE,     // acc → requant → conv_out_mem[r,c,f]
        // --- Conv çıkışını AI SRAM'e yaz ---
        ST_WCONV_ISSUE,
        ST_WCONV_WAIT,
        // --- FC bias yükle ---
        ST_LOAD_FB,
        ST_LOAD_FB_WAIT,
        // --- FC compute ---
        ST_FC_INIT,        // out_idx için acc=fc_bias[out_idx], in_idx=0
        ST_FC_FETCH_W,     // FC ağırlık byte oku
        ST_FC_FETCH_W_WAIT,
        ST_FC_MAC,
        ST_FC_STORE,       // 4000 MAC bitince fc_out_mem[out_idx]
        // --- Argmax + sonuç yaz ---
        ST_ARGMAX,
        ST_WRITE_RESULT,
        ST_WRITE_WAIT,
        ST_DONE
    } state_t;
    state_t state;

    // Sayaçlar
    logic [ 9:0] load_idx;     // 0..489 (input), 0..159 (cw), 0..999 (conv_out)
    logic [ 2:0] f_idx;        // 0..7
    logic [ 4:0] r_idx;        // 0..24
    logic [ 4:0] c_idx;        // 0..19
    logic [ 3:0] kh_idx;       // 0..9
    logic [ 2:0] kw_idx;       // 0..7
    logic [ 1:0] out_idx;      // 0..3
    logic [11:0] in_idx;       // 0..3999

    // FC row base: out_idx değiştikçe sırayla 4000 eklenir
    logic [31:0] fc_w_row_base;

    // =========================================================
    // AXI4 MASTER FSM — byte-strobed yazma + word okuma
    // =========================================================
    typedef enum logic [2:0] {
        MEM_IDLE, MEM_RA, MEM_RD, MEM_WA, MEM_WR_RESP
    } mem_state_t;
    mem_state_t mem_state;

    logic [31:0] mem_addr;        // Byte adres (yazma için tam adres, okuma için word-align önerilir)
    logic [31:0] mem_wdata_q;     // Yazma verisi (4-byte hizalanmış word)
    logic [ 3:0] mem_wstrb_q;     // Yazma strobu
    logic [31:0] mem_rdata;       // Son okuma sonucu (32-bit word)
    logic        mem_read_req;
    logic        mem_write_req;
    logic        mem_done;

    // AXI sabit sinyaller (tek-beat, INCR, 4 byte)
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
                        m_axi_araddr  <= {mem_addr[31:2], 2'b00};  // word-align
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

    // =========================================================
    // YARDIMCI: byte indeksinden (input/conv_w/conv_out_mem) byte çek
    // =========================================================
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

    // input_mem'den (ir, ic) konumundaki byte (padding kontrolü ile)
    function automatic logic signed [7:0] read_input_pixel(
        input int ir, input int ic
    );
        int byte_idx;
        if (ir < 0 || ir >= INPUT_H || ic < 0 || ic >= INPUT_W)
            return 8'sd0;            // SAME padding: dış kenar = 0
        byte_idx = ir * INPUT_W + ic;
        return get_byte_from_word(
            input_mem[byte_idx >> 2],
            byte_idx[1:0]
        );
    endfunction

    // conv_w_mem'den (f, kh, kw) ağırlık byte'ı
    function automatic logic signed [7:0] read_conv_weight(
        input int f, input int kh, input int kw
    );
        int byte_idx;
        byte_idx = f * (KERNEL_H * KERNEL_W) + kh * KERNEL_W + kw;
        return get_byte_from_word(
            conv_w_mem[byte_idx >> 2],
            byte_idx[1:0]
        );
    endfunction

    // conv_out_mem'e byte yaz (lokal RMW)
    task automatic write_conv_out_byte(
        input int                 r,
        input int                 c,
        input int                 f,
        input logic signed [7:0]  val
    );
        int byte_idx;
        int word_idx;
        logic [1:0] byte_off;
        logic [31:0] w;
        byte_idx = r * (CONV_OUT_W * NUM_FILTERS) + c * NUM_FILTERS + f;
        word_idx = byte_idx >> 2;
        byte_off = byte_idx[1:0];
        w        = conv_out_mem[word_idx];
        case (byte_off)
            2'd0: w[ 7: 0] = val;
            2'd1: w[15: 8] = val;
            2'd2: w[23:16] = val;
            2'd3: w[31:24] = val;
        endcase
        conv_out_mem[word_idx] = w;
    endtask

    // conv_out_mem'den byte oku (FC compute için)
    function automatic logic signed [7:0] read_conv_out_byte(
        input int i
    );
        return get_byte_from_word(
            conv_out_mem[i >> 2],
            i[1:0]
        );
    endfunction

    // =========================================================
    // ANA FSM
    // =========================================================
    int ir, ic;           // padding hesabı için iterler (combinational geçici)
    logic signed [7:0] input_pix, weight_pix, conv_out_pix, fc_w_pix;
    logic signed [7:0] result_byte;
    int idx_tmp;
    int best_idx;
    logic signed [7:0] best_val;

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
        end else begin
            // Varsayılan pulse temizlikleri
            mac_clear     <= 1'b0;
            mac_en        <= 1'b0;
            mem_read_req  <= 1'b0;
            mem_write_req <= 1'b0;


            // SW DONE temizleme (tek sürücülü kalsın diye burada)
            if (csr_clear_done)
                status_done <= 1'b0;

            case (state)
                // ----------------------------------------------------
                ST_IDLE: begin
                    status_busy <= 1'b0;
                    if (csr_start) begin
                        status_busy   <= 1'b1;
                        status_done   <= 1'b0;
                        status_result <= 4'd0;
                        load_idx      <= '0;
                        // Conv ağırlıklarını yüklemeye başla
                        mem_addr      <= AI_SRAM_BASE + CONV_W_OFF;
                        mem_read_req  <= 1'b1;
                        state         <= ST_LOAD_CW_WAIT;
                    end
                end

                // ----------------------------------------------------
                // 1) Conv ağırlıklarını yükle (160 word)
                // ----------------------------------------------------
                ST_LOAD_CW: begin
                    mem_addr     <= AI_SRAM_BASE + CONV_W_OFF + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_CW_WAIT;
                end
                ST_LOAD_CW_WAIT: begin
                    if (mem_done) begin
                        conv_w_mem[load_idx] <= mem_rdata;
                        if (load_idx == CONV_W_WORDS - 1) begin
                            load_idx <= '0;
                            state    <= ST_LOAD_CB;
                        end else begin
                            load_idx <= load_idx + 1;
                            state    <= ST_LOAD_CW;
                        end
                    end
                end

                // ----------------------------------------------------
                // 2) Conv bias yükle (8 INT32 = 8 word)
                // ----------------------------------------------------
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

                // ----------------------------------------------------
                // 3) Input yükle (490 word) — SW'in verdiği csr_data_addr'ten
                // ----------------------------------------------------
                ST_LOAD_IN: begin
                    mem_addr     <= csr_data_addr + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_IN_WAIT;
                end
                ST_LOAD_IN_WAIT: begin
                    if (mem_done) begin
                        input_mem[load_idx] <= mem_rdata;
                        if (load_idx == INPUT_WORDS - 1) begin
                            load_idx <= '0;
                            // Conv2D başlat
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

                // ----------------------------------------------------
                // 4) Conv2D — yerel bellekten, 1 MAC/cycle
                // ----------------------------------------------------
                ST_CONV_INIT: begin
                    // (f, r, c) için yeni MAC penceresi
                    mac_clear <= 1'b1;
                    // bir cycle sonra MAC'e başla; bias'ı en sonda STORE'da ekleyeceğiz
                    kh_idx <= '0;
                    kw_idx <= '0;
                    state  <= ST_CONV_MAC;
                end

                ST_CONV_MAC: begin
                    // (ir, ic) = (r*2 + kh - PAD_TOP, c*2 + kw - PAD_LEFT)
                    ir = (r_idx * STRIDE) + kh_idx - PAD_TOP;
                    ic = (c_idx * STRIDE) + kw_idx - PAD_LEFT;
                    input_pix  = read_input_pixel(ir, ic);
                    weight_pix = read_conv_weight(f_idx, kh_idx, kw_idx);
                    mac_a  <= input_pix;
                    mac_b  <= weight_pix;
                    mac_en <= 1'b1;

                    // Kernel iç döngüsünü ilerlet
                    if (kw_idx == KERNEL_W - 1) begin
                        kw_idx <= '0;
                        if (kh_idx == KERNEL_H - 1) begin
                            kh_idx <= '0;
                            // Pencere bitti → STORE'a (bias eklenip yazılacak)
                            state <= ST_CONV_STORE;
                        end else begin
                            kh_idx <= kh_idx + 1;
                        end
                    end else begin
                        kw_idx <= kw_idx + 1;
                    end
                end

                ST_CONV_STORE: begin
                    // mac_en'in son MAC'i acc'a yazması için 1 cycle bekledik
                    // (state geçişi cycle aldı; acc artık güncel)
                    // Bias ekle, ReLU+shift+sat, yerel conv_out_mem'e yaz
                    result_byte = requant_relu(
                        mac_acc + conv_bias_mem[f_idx],
                        CONV_SHIFT
                    );
                    write_conv_out_byte(r_idx, c_idx, f_idx, result_byte);

                    // (f, r, c) ilerlet — düzen: f outer, r mid, c inner
                    if (c_idx == CONV_OUT_W - 1) begin
                        c_idx <= '0;
                        if (r_idx == CONV_OUT_H - 1) begin
                            r_idx <= '0;
                            if (f_idx == NUM_FILTERS - 1) begin
                                // Tüm conv2d bitti → conv_out'u AI SRAM'e yaz
                                f_idx    <= '0;
                                load_idx <= '0;
                                state    <= ST_WCONV_ISSUE;
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

                // ----------------------------------------------------
                // 5) conv_out yerel belleği AI SRAM'e yaz (1000 word)
                //    (Berkin'in testbench'i golden conv_out_*.hex ile karşılaştırır)
                // ----------------------------------------------------
                ST_WCONV_ISSUE: begin
                    mem_addr      <= AI_SRAM_BASE + CONV_OUT_OFF + (load_idx << 2);
                    mem_wdata_q   <= conv_out_mem[load_idx];
                    mem_wstrb_q   <= 4'b1111;     // tam word yazımı
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
                            state    <= ST_WCONV_ISSUE;
                        end
                    end
                end

                // ----------------------------------------------------
                // 6) FC bias yükle (4 INT32)
                // ----------------------------------------------------
                ST_LOAD_FB: begin
                    mem_addr     <= AI_SRAM_BASE + FC_BIAS_OFF + (load_idx << 2);
                    mem_read_req <= 1'b1;
                    state        <= ST_LOAD_FB_WAIT;
                end
                ST_LOAD_FB_WAIT: begin
                    if (mem_done) begin
                        fc_bias_mem[load_idx[1:0]] <= $signed(mem_rdata);
                        if (load_idx == FC_OUT - 1) begin
                            // FC compute başlat
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

                // ----------------------------------------------------
                // 7) FC: 4 × 4000 MAC. conv_out yerelde, fc_w stream.
                // ----------------------------------------------------
                ST_FC_INIT: begin
                    mac_clear <= 1'b1;
                    in_idx    <= '0;
                    state     <= ST_FC_FETCH_W;
                end

                ST_FC_FETCH_W: begin
                    // FC ağırlığını oku (byte-precise adres → 32-bit oku, byte çek)
                    mem_addr     <= fc_w_row_base + {20'd0, in_idx};
                    mem_read_req <= 1'b1;
                    state        <= ST_FC_FETCH_W_WAIT;
                end
                ST_FC_FETCH_W_WAIT: begin
                    if (mem_done) state <= ST_FC_MAC;
                end

                ST_FC_MAC: begin
                    // conv_out_mem yerelden, fc_w son okunan word'ten byte çek
                    conv_out_pix = read_conv_out_byte(in_idx);
                    fc_w_pix     = get_byte_from_word(mem_rdata, in_idx[1:0]);
                    mac_a  <= conv_out_pix;
                    mac_b  <= fc_w_pix;
                    mac_en <= 1'b1;

                    if (in_idx == FC_IN - 1) begin
                        state <= ST_FC_STORE;
                    end else begin
                        in_idx <= in_idx + 1;
                        state  <= ST_FC_FETCH_W;
                    end
                end

                ST_FC_STORE: begin
                    // Son MAC'in acc'a yansıması için 1 cycle bekledik
                    fc_out_mem[out_idx] <= requant_no_relu(
                        mac_acc + fc_bias_mem[out_idx],
                        FC_SHIFT
                    );
                    if (out_idx == FC_OUT - 1) begin
                        state <= ST_ARGMAX;
                    end else begin
                        out_idx       <= out_idx + 1;
                        in_idx        <= '0;
                        fc_w_row_base <= fc_w_row_base + FC_IN;  // bir sonraki satır
                        state         <= ST_FC_INIT;
                    end
                end

                // ----------------------------------------------------
                // 8) Argmax (4 INT8 → 0..3)
                // ----------------------------------------------------
                ST_ARGMAX: begin
                    best_idx = 0;
                    best_val = fc_out_mem[0];
                    if (fc_out_mem[1] > best_val) begin best_val = fc_out_mem[1]; best_idx = 1; end
                    if (fc_out_mem[2] > best_val) begin best_val = fc_out_mem[2]; best_idx = 2; end
                    if (fc_out_mem[3] > best_val) begin best_val = fc_out_mem[3]; best_idx = 3; end
                    status_result <= best_idx[3:0];
                    state         <= ST_WRITE_RESULT;
                end

                // ----------------------------------------------------
                // 9) Sonucu csr_out_addr'a yaz (1 INT32)
                // ----------------------------------------------------
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

                // ----------------------------------------------------
                ST_DONE: begin
                    status_busy <= 1'b0;
                    status_done <= 1'b1;
                    state       <= ST_IDLE;
                end

                default: state <= ST_IDLE;
            endcase
        end
    end

    // =========================================================
    // AXI4-LITE SLAVE — CSR YAZMA
    // =========================================================
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
            csr_data_addr  <= AI_SRAM_BASE;                 // varsayılan input adresi
            csr_out_addr   <= AI_SRAM_BASE + DEFAULT_OUT;   // varsayılan sonuç adresi
        end else begin
            // pulse'lar varsayılan 0
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

    // =========================================================
    // AXI4-LITE SLAVE — CSR OKUMA
    // =========================================================
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