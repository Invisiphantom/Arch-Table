module PC (
    input             clk,
    input      [63:0] PCnext,
    output reg [63:0] PCaddress
);

    initial PCaddress = 64'b0;

    always @(posedge clk) begin
        PCaddress <= PCnext;
    end
endmodule
