module ALU_B(
    input ALUSrc,
    input [63:0] readData2_R,
    input [63:0] imm,
    output reg [63:0] aluB
);
    always @(*) begin
        if(ALUSrc == 1'b0) aluB = readData2_R; // rs2
        else aluB = imm; // imm
    end
endmodule