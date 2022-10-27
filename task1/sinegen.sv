module sinegen
(input logic[7:0] incr,
 input logic rst,
 input logic en,
 input logic clk,
 output logic[7:0] dout);
    
    logic[7:0] addr;

    counter myCounter(clk, en, rst, incr, addr);
    rom myRom(clk, addr, dout);

endmodule
