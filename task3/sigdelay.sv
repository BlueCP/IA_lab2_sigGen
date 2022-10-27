module sigdelay
(input logic clk,
 input logic rst,
 input logic wr,
 input logic rd,
 input logic[7:0] offset,
 input logic[7:0] mic_signal,
 output logic[7:0] delayed_signal);

    logic[8:0] write_addr;
    logic[8:0] read_addr;

    counter myCounter(clk, wr, rst, write_addr);
    ram myRam(clk, wr, rd, write_addr, read_addr, mic_signal, delayed_signal);

    always_comb begin
        read_addr = write_addr - {0, {8{offset}}}; // Play back from an earlier address
    end

endmodule
