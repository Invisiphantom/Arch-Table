module ALU_A (
    input Lui,
    input Auipc,
    input [63:0] readData1_R,
    input [63:0] PCaddress,
    output reg [63:0] aluA
);
    always @(*) begin
        if (Lui == 1'b1) aluA = {64{1'b0}};  // lui [rd=0+imm]
        else if (Auipc == 1'b1) aluA = PCaddress - 4;  // auipc [rd=PC+imm]
        else aluA = readData1_R;  // rs1
    end
endmodule
