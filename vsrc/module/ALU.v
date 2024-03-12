module ALU (
    input      [ 3:0] aluControl,
    input      [63:0] aluA,
    input      [63:0] aluB,
    output reg [63:0] aluResult,
    output            zero,
    output            s_less,
    output            u_less
);

    assign zero   = (aluResult == {64{1'b0}});
    assign s_less = ($signed(aluA) < $signed(aluB));
    assign u_less = (aluA < aluB);

    always @(*) begin
        case (aluControl)
            4'b0010: aluResult = aluA + aluB;  // add
            4'b0110: aluResult = aluA - aluB;  // sub
            4'b0111: aluResult = aluA ^ aluB;  // xor
            4'b0001: aluResult = aluA | aluB;  // or
            4'b0000: aluResult = aluA & aluB;  // and
            4'b0011: aluResult = aluA << aluB[5:0];  // sll imm[5:0]
            4'b1000: aluResult = aluA >> aluB[5:0];  // srl imm[5:0]
            4'b1010: aluResult = aluA >>> aluB[5:0];  // sra imm[5:0]
            4'b0100: aluResult = {63'b0, s_less};  // slt
            4'b0101: aluResult = {63'b0, u_less};  // sltu
            default: aluResult = {64{1'bx}};
        endcase
    end
endmodule
