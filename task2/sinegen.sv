module sinegen
(input logic[7:0] incr,
 input logic[7:0] offset,
 input logic rst,
 input logic en,
 input logic clk,
 output logic[7:0] dout1,
 output logic[7:0] dout2);
    
    logic[7:0] addr1;
    logic[7:0] addr2;

    always_comb begin
        addr2 = addr1 + offset;
    end

    counter myCounter(clk, en, rst, incr, addr1);
    rom myRom(clk, addr1, addr2, dout1, dout2);

endmodule
