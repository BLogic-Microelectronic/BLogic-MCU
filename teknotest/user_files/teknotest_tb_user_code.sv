// #1 KRITIK: axi_sram_wrapper kendi initial'inda (t=0) mem'i SIFIRLIYOR.
// #1 ile yuklemeyi t=1'e atiyoruz -> sifirlamadan SONRA calisir, helloworld ezilmez.
initial begin
    #1;
    $readmemh("helloworld.mem", dut.u_soc.i_instr_sram.mem);
end
