// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// tb_log_pkg.sv - register access and check log shared by all testbenches
// ============================================
// Every testbench writes the same two files into its log directory:
//
//   bus_trace.log    one line per register access (time, read/write, address,
//                    register name, data), the checks the test made with their
//                    result, and at the end a table of all registers touched.
//                    Consecutive identical accesses (polling loops) are folded
//                    into one line with a repeat count.
//   bus_summary.tsv  the same table and the check list in tab-separated form;
//                    scripts/test_report.py reads it to write report.txt.
//
// Simulation only, never synthesised. The RTL is not changed by any of this.
package tb_log_pkg;

    // Padding helpers. Verilator 5.052 carries a '-' (left-justify) flag over to
    // the following specifiers of the same format string, so no '-' is used.
    function automatic string rpad(string s, int w);
        string r;
        r = s;
        while (r.len() < w) r = {r, " "};
        return r;
    endfunction
    function automatic string lpad(string s, int w);
        string r;
        r = s;
        while (r.len() < w) r = {" ", r};
        return r;
    endfunction
    function automatic string hex32(logic [31:0] v);
        return $sformatf("0x%08h", v);
    endfunction

    // Register names of the SoC peripheral map (sw/drivers/blogic_mcu.h)
    function automatic string soc_reg_name(logic [31:0] a);
        string blk; int unsigned off; int unsigned idx;
        string regs[$];
        off = {24'd0, a[7:0]};
        case (a[31:8])
            24'h400000: begin blk = "UART0"; regs = '{"CPB", "STP", "RDR", "TDR", "CFG"}; end
            24'h400001: begin blk = "GPIO";  regs = '{"IDR", "ODR"}; end
            24'h400002: begin blk = "TIMER"; regs = '{"PRE", "ARE", "CLR", "ENA", "MOD", "CNT", "EVN", "EVC"}; end
            24'h400003: begin blk = "UART1"; regs = '{"CPB", "STP", "RDR", "TDR", "CFG",
                                                      "STRM_ADDR", "STRM_LEN", "STRM_CTRL", "STRM_STAT"}; end
            24'h400004: begin blk = "I2C";   regs = '{"NBY", "ADR", "RDR", "TDR", "CFG"}; end
            24'h400005: begin blk = "QSPI";  regs = '{"CCR", "ADR", "DR", "STA", "FCR"}; end
            24'h400006: begin blk = "AI";    regs = '{"CTRL", "STATUS", "DATA_ADDR", "OUT_ADDR"}; end
            default:    return $sformatf("unmapped 0x%08h", a);
        endcase
        idx = off / 4;
        if (off % 4 == 0 && idx < regs.size()) return {blk, ".", regs[idx]};
        return $sformatf("%s+0x%02h", blk, off);
    endfunction

    // Memory region of a CPU data access (address map in docs/DOCUMENTATION.md)
    function automatic string soc_region_name(logic [31:0] a);
        if (a[31:28] == 4'h4)                   return "peripherals (0x4000_0000)";
        if (a[31:20] == 12'h000) begin
            case (a[19:16])
                4'h0: return "boot ROM (0x0000_0000)";
                4'h1: return "instruction SRAM (0x0001_0000)";
                4'h2: return "data SRAM (0x0002_0000)";
                4'h3: return "AI SRAM (0x0003_0000)";
                4'h4: return "debug module (0x0004_0000)";
                default: ;
            endcase
        end
        return "unmapped";
    endfunction

    class BusLog;
        int     fd;
        string  path;
        string  tsv_path;
        string  time_unit;
        longint unsigned total;
        // per register: reads, writes, first/last time, last written and last read value
        longint unsigned n_rd[string], n_wr[string], t_first[string], t_last[string];
        logic [31:0]     v_wr[string], v_rd[string];
        string           order[$];
        // checks made by the test
        string           chk_name[$];
        bit              chk_ok[$];
        string           chk_detail[$];
        // extra summary lines (for example memory traffic), log text and tsv row
        string           extra_txt[$], extra_tsv[$];
        // folding of identical consecutive accesses
        bit              have_last;
        bit              last_w;
        logic [31:0]     last_a, last_d;
        logic [3:0]      last_s;
        logic [1:0]      last_r;
        longint unsigned reps, last_t;

        // dir: directory of the log files ("" = current directory)
        function new(string dir, string title, string bus, string unit);
            string pre;
            pre       = (dir == "") ? "" : {dir, "/"};
            path      = {pre, "bus_trace.log"};
            tsv_path  = {pre, "bus_summary.tsv"};
            time_unit = unit;
            fd = $fopen(path, "w");
            if (fd == 0) $display("[LOG] WARNING: cannot write %s", path);
            else begin
                $fdisplay(fd, "# BLogic MCU: %s", title);
                $fdisplay(fd, "# Bus: %s", bus);
                $fdisplay(fd, "# Register names follow sw/drivers/blogic_mcu.h. The data of a read is the value the bus returned.");
                $fdisplay(fd, "# Lines starting with CHECK are the comparisons the test made, with their result.");
                $fdisplay(fd, "#");
                $fdisplay(fd, "# %12s  access  address     register         data", unit);
            end
        endfunction

        function void flush_reps();
            if (reps > 0 && fd != 0)
                $fdisplay(fd, "              ... the access above repeated %0d more times, last at %s %0d",
                          reps, time_unit, last_t);
            reps = 0;
        endfunction

        // One completed bus transfer. name = "" looks the name up in the SoC map.
        function void access(longint unsigned t, bit is_write, logic [31:0] addr, string name,
                             logic [31:0] data, logic [3:0] strb = 4'hF, logic [1:0] resp = 2'b00);
            string n, line, extra;
            n = (name == "") ? soc_reg_name(addr) : name;
            total++;
            if (!n_rd.exists(n)) begin
                n_rd[n] = 0; n_wr[n] = 0; t_first[n] = t; v_wr[n] = 'x; v_rd[n] = 'x;
                order.push_back(n);
            end
            t_last[n] = t;
            if (is_write) begin n_wr[n]++; v_wr[n] = data; end
            else          begin n_rd[n]++; v_rd[n] = data; end
            if (fd == 0) return;
            if (have_last && is_write == last_w && addr == last_a && data == last_d
                && strb == last_s && resp == last_r) begin
                reps++; last_t = t; return;
            end
            flush_reps();
            extra = "";
            if ((n == "UART0.TDR" || n == "UART0.RDR" || n == "UART1.TDR" || n == "UART1.RDR")) begin
                if (data[7:0] >= 8'h20 && data[7:0] < 8'h7F) extra = $sformatf("  '%c'", data[7:0]);
                else if (data[7:0] == 8'h0A)                 extra = "  '\\n'";
                else if (data[7:0] == 8'h0D)                 extra = "  '\\r'";
            end
            if (is_write && strb != 4'hF) extra = {extra, $sformatf("  byte enables 0x%h", strb)};
            if (resp == 2'b10) extra = {extra, "  SLVERR response"};
            if (resp == 2'b11) extra = {extra, "  DECERR response (no peripheral at this address)"};
            line = {lpad($sformatf("%0d", t), 14), "  ", is_write ? "write" : "read ", "  ",
                    hex32(addr), "  ", rpad(n, 16), " ", hex32(data), extra};
            $fdisplay(fd, "%s", line);
            have_last = 1; last_w = is_write; last_a = addr; last_d = data;
            last_s = strb; last_r = resp; last_t = t;
        endfunction

        // A comparison made by the test; written to the log and kept for the summary.
        function void check(longint unsigned t, string what, bit ok, string detail = "");
            chk_name.push_back(what); chk_ok.push_back(ok); chk_detail.push_back(detail);
            if (fd == 0) return;
            flush_reps(); have_last = 0;
            $fdisplay(fd, "%14d  CHECK %s: %s%s", t, ok ? "PASS" : "FAIL", what,
                      detail == "" ? "" : {"  (", detail, ")"});
        endfunction

        // A failed check just before $fatal: records it and closes the files,
        // because final blocks do not run after $fatal.
        function void fail(longint unsigned t, string what, string detail = "");
            check(t, what, 1'b0, detail);
            close();
        endfunction

        // Records a check; if it failed, closes the files and stops the simulation.
        function void require(longint unsigned t, bit ok, string what, string detail = "");
            if (ok) check(t, what, 1'b1, detail);
            else begin
                fail(t, what, detail);
                $fatal(1, "CHECK FAILED: %s%s", what, detail == "" ? "" : {" (", detail, ")"});
            end
        endfunction

        // Free text, for example the start of a test step.
        function void note(longint unsigned t, string s);
            if (fd == 0) return;
            flush_reps(); have_last = 0;
            $fdisplay(fd, "%14d  ---- %s", t, s);
        endfunction

        function void summary_line(string txt, string tsv);
            extra_txt.push_back(txt); extra_tsv.push_back(tsv);
        endfunction

        function void close();
            int tf, npass;
            string v1, v2;
            if (fd == 0) return;
            flush_reps();
            npass = 0;
            foreach (chk_ok[i]) if (chk_ok[i]) npass++;
            $fdisplay(fd, "#");
            $fdisplay(fd, "# Summary: %0d register accesses to %0d registers, %0d checks (%0d passed, %0d failed)",
                      total, order.size(), chk_ok.size(), npass, chk_ok.size() - npass);
            $fdisplay(fd, "#   %s %s %s   %s   %s", rpad("register", 18), lpad("reads", 9),
                      lpad("writes", 9), rpad("last write", 10), "last read");
            foreach (order[i]) begin
                v1 = (n_wr[order[i]] != 0) ? $sformatf("0x%08h", v_wr[order[i]]) : "-";
                v2 = (n_rd[order[i]] != 0) ? $sformatf("0x%08h", v_rd[order[i]]) : "-";
                $fdisplay(fd, "#   %s %s %s   %s   %s", rpad(order[i], 18),
                          lpad($sformatf("%0d", n_rd[order[i]]), 9),
                          lpad($sformatf("%0d", n_wr[order[i]]), 9), rpad(v1, 10), v2);
            end
            foreach (extra_txt[i]) $fdisplay(fd, "%s", extra_txt[i] == "" ? "#" : {"#   ", extra_txt[i]});
            $fclose(fd); fd = 0;
            tf = $fopen(tsv_path, "w");
            if (tf == 0) return;
            $fdisplay(tf, "# kind\tname\treads\twrites\tfirst\tlast\tlast_write\tlast_read");
            foreach (order[i]) begin
                v1 = (n_wr[order[i]] != 0) ? $sformatf("0x%08h", v_wr[order[i]]) : "-";
                v2 = (n_rd[order[i]] != 0) ? $sformatf("0x%08h", v_rd[order[i]]) : "-";
                $fdisplay(tf, "reg\t%s\t%0d\t%0d\t%0d\t%0d\t%s\t%s", order[i], n_rd[order[i]],
                          n_wr[order[i]], t_first[order[i]], t_last[order[i]], v1, v2);
            end
            foreach (chk_name[i])
                $fdisplay(tf, "check\t%s\t%s\t%s", chk_name[i], chk_ok[i] ? "PASS" : "FAIL", chk_detail[i]);
            foreach (extra_tsv[i]) if (extra_tsv[i] != "") $fdisplay(tf, "%s", extra_tsv[i]);
            $fdisplay(tf, "unit\t%s", time_unit);
            $fclose(tf);
        endfunction
    endclass

endpackage
