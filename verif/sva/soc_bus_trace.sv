// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// soc_bus_trace.sv - register access log of every SoC-level simulation
// ============================================
// Bound into soc_top (simulation only), so every testbench that builds the SoC
// gets the same log without changes of its own:
//
//   bus_trace.log    every transfer on the peripheral AXI-Lite bus (output of
//                    the AXI4-to-AXI-Lite bridge, input of the peripheral
//                    decoder) with the register name, whichever master issued
//                    it (CPU or the debug module's system bus access).
//                    The summary at the end also counts the CPU data-port
//                    accesses per memory region.
//   bus_summary.tsv  the same summary for scripts/test_report.py.
//   mem_trace.log    only with +MEM_TRACE=1: every CPU load and store.
//
// Plusargs: +LOGDIR=<dir> (the directory of the files; default: current
// directory), +BUS_TRACE=0 (no log), +MEM_TRACE=1 (memory trace).
module soc_bus_trace (
    input logic        clk_i,
    input logic        rst_ni,
    // peripheral AXI-Lite bus
    input logic [31:0] lite_awaddr,
    input logic        lite_awvalid, lite_awready,
    input logic [31:0] lite_wdata,
    input logic [ 3:0] lite_wstrb,
    input logic        lite_wvalid, lite_wready,
    input logic [ 1:0] lite_bresp,
    input logic        lite_bvalid, lite_bready,
    input logic [31:0] lite_araddr,
    input logic        lite_arvalid, lite_arready,
    input logic [31:0] lite_rdata,
    input logic [ 1:0] lite_rresp,
    input logic        lite_rvalid, lite_rready,
    // CPU data port (OBI)
    input logic        data_req, data_gnt, data_rvalid, data_we,
    input logic [ 3:0] data_be,
    input logic [31:0] data_addr, data_wdata, data_rdata
);
    import tb_log_pkg::*;

    BusLog           log_h;
    bit              on, mem_on;
    int              mem_fd;
    longint unsigned cyc;
    bit              aw_seen, w_seen, ar_seen;
    logic [31:0]     aw_a, w_d, ar_a;
    logic [ 3:0]     w_s;
    logic [31:0]     rd_pending[$];
    longint unsigned mem_rd[string], mem_wr[string];

    initial begin
        string dir;
        int    v;
        dir = "";
        void'($value$plusargs("LOGDIR=%s", dir));
        on = 1;
        if ($value$plusargs("BUS_TRACE=%d", v) && v == 0) on = 0;
        mem_on = $value$plusargs("MEM_TRACE=%d", v) && v != 0;
        if (on)
            log_h = new(dir, "peripheral register accesses of this simulation",
                        "CPU data port / debug module -> AXI4 crossbar -> AXI4-to-AXI-Lite bridge -> peripheral decoder -> UART0, GPIO, TIMER, UART1, I2C, QSPI, AI",
                        "cycle");
        if (on && mem_on) begin
            mem_fd = $fopen({dir == "" ? "" : {dir, "/"}, "mem_trace.log"}, "w");
            if (mem_fd != 0) $fdisplay(mem_fd, "#        cycle  access  address     data        byte enables  region");
        end
    end

    always @(posedge clk_i) begin
        if (!rst_ni) begin
            aw_seen <= 0; w_seen <= 0; ar_seen <= 0;
        end else if (on) begin
            // peripheral bus: a write completes on B, a read on R
            if (lite_awvalid && lite_awready) begin aw_seen = 1; aw_a = lite_awaddr; end
            if (lite_wvalid && lite_wready)   begin w_seen = 1; w_d = lite_wdata; w_s = lite_wstrb; end
            if (lite_bvalid && lite_bready && aw_seen && w_seen) begin
                log_h.access(cyc, 1'b1, aw_a, "", w_d, w_s, lite_bresp);
                aw_seen = 0; w_seen = 0;
            end
            if (lite_arvalid && lite_arready) begin ar_seen = 1; ar_a = lite_araddr; end
            if (lite_rvalid && lite_rready && ar_seen) begin
                log_h.access(cyc, 1'b0, ar_a, "", lite_rdata, 4'hF, lite_rresp);
                ar_seen = 0;
            end
            // CPU data port: count per region; detail only with +MEM_TRACE=1
            if (data_req && data_gnt) begin
                string r;
                r = soc_region_name(data_addr);
                if (data_we) begin
                    if (!mem_wr.exists(r)) mem_wr[r] = 0;
                    mem_wr[r]++;
                    if (mem_fd != 0) $fdisplay(mem_fd, "%s  write  %s  %s  0x%h           %s",
                                               lpad($sformatf("%0d", cyc), 14), hex32(data_addr), hex32(data_wdata), data_be, r);
                end else begin
                    if (!mem_rd.exists(r)) mem_rd[r] = 0;
                    mem_rd[r]++;
                    if (mem_fd != 0) rd_pending.push_back(data_addr);
                end
            end
            if (data_rvalid && mem_fd != 0 && rd_pending.size() != 0) begin
                logic [31:0] a;
                a = rd_pending.pop_front();
                $fdisplay(mem_fd, "%s  read   %s  %s                %s",
                          lpad($sformatf("%0d", cyc), 14), hex32(a), hex32(data_rdata), soc_region_name(a));
            end
        end
        cyc <= cyc + 1;
    end

    final begin
        if (on) begin
            string regions[$];
            regions = '{"boot ROM (0x0000_0000)", "instruction SRAM (0x0001_0000)", "data SRAM (0x0002_0000)",
                        "AI SRAM (0x0003_0000)", "debug module (0x0004_0000)", "peripherals (0x4000_0000)", "unmapped"};
            log_h.summary_line("", "");
            log_h.summary_line("CPU data-port accesses (loads and stores) per memory region:", "");
            foreach (regions[i]) begin
                longint unsigned nr, nw;
                nr = mem_rd.exists(regions[i]) ? mem_rd[regions[i]] : 0;
                nw = mem_wr.exists(regions[i]) ? mem_wr[regions[i]] : 0;
                if (nr != 0 || nw != 0)
                    log_h.summary_line({"  ", rpad(regions[i], 32), lpad($sformatf("%0d", nr), 10), " reads ", lpad($sformatf("%0d", nw), 10), " writes"},
                                       $sformatf("mem\t%s\t%0d\t%0d", regions[i], nr, nw));
            end
            log_h.summary_line($sformatf("Simulated cycles: %0d", cyc), $sformatf("cycles\t%0d", cyc));
            log_h.close();
        end
        if (mem_fd != 0) $fclose(mem_fd);
    end
endmodule

bind soc_top soc_bus_trace u_soc_bus_trace (
    .clk_i(clk_i), .rst_ni(sys_rst_n),
    .lite_awaddr(lite_awaddr), .lite_awvalid(lite_awvalid), .lite_awready(lite_awready),
    .lite_wdata(lite_wdata), .lite_wstrb(lite_wstrb), .lite_wvalid(lite_wvalid), .lite_wready(lite_wready),
    .lite_bresp(lite_bresp), .lite_bvalid(lite_bvalid), .lite_bready(lite_bready),
    .lite_araddr(lite_araddr), .lite_arvalid(lite_arvalid), .lite_arready(lite_arready),
    .lite_rdata(lite_rdata), .lite_rresp(lite_rresp), .lite_rvalid(lite_rvalid), .lite_rready(lite_rready),
    .data_req(data_req), .data_gnt(data_gnt), .data_rvalid(data_rvalid), .data_we(data_we),
    .data_be(data_be), .data_addr(data_addr), .data_wdata(data_wdata), .data_rdata(data_rdata)
);
