// ============================================
// Ostim BLogic Mikroelektronik
// teknotest_tb_user_code.sv - testbench bellek yukleme
// ============================================
// wrapper t=0'da mem'i sifirliyor, yuklemeyi t=1'e aliyoruz
initial begin
    #1;
    $readmemh("helloworld.mem", dut.u_soc.i_instr_sram.mem);
end
