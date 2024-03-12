module RegWrite (
    input MemRead,  // Store
    input Jump,     // jal
    input JumpReg,  // jalr
    input [63:0] aluResult,
    input [63:0] readData_M,
    input [63:0] PCincre,
    output reg [63:0] writeData_R
);

    always @(*) begin
        if (Jump | JumpReg) writeData_R = PCincre;
        else if (MemRead) writeData_R = readData_M;
        else writeData_R = aluResult;
    end
endmodule
