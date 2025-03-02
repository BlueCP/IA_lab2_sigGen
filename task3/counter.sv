module counter #(parameter WIDTH = 9)
(input logic clk,
 input logic en,
 input logic rst,
 output logic[WIDTH-1:0] count);

    always_ff @(posedge clk) begin
        if (rst)
            count <= {WIDTH{1'b0}};
        else if (en)
            count <= count + {{WIDTH-1{1'b0}}, en};
    end

endmodule
