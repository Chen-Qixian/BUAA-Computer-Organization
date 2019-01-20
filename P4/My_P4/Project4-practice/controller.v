`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:12 11/25/2017 
// Design Name: 
// Module Name:    controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CONTROLLER(
    input [31:0] instr,
    output RegDst,
    output RegWrite,
    output ALUSrc,
    output MemWrite,
    output MemToReg,
    output [1:0] EXTOp,
    output [2:0] ALUOp,
	 output [2:0] DMEXTOp,
    output if_beq,
    output if_jal,
    output if_jr,
	 output if_sll,
	 output if_slt,
	 output if_sra,
	 output sw,
	 output sh,
	 output sb
    );
	 
	 wire [5:0] OpCode,Func;
	 wire addu,subu,ori,lui,lw,beq,jal,jr,sll,slt,lh,lhu,lb,lbu,sra,sltiu;
	 
	 assign OpCode = instr[31:26] ;
	 assign Func = instr[5:0];

// And Gate	 
	 assign addu = ((OpCode == 6'b0) & (Func == 6'b100001));
	 assign subu = ((OpCode == 6'b0) & (Func == 6'b100011));
	 assign ori = (OpCode == 6'b001101);
	 assign lui = (OpCode == 6'b001111);
	 assign lw  = (OpCode == 6'b100011);
	 assign sw  = (OpCode == 6'b101011);
	 assign beq = (OpCode == 6'b000100);
	 assign jal = (OpCode == 6'b000011);
	 assign jr  = ((OpCode == 6'b0) & (Func == 6'b001000));
	 assign sll = ((OpCode == 6'b0) & (Func == 6'b0));
	 assign slt = ((OpCode == 6'b0) & (Func == 6'b101010));
	 assign lh  = (OpCode == 6'b100001);
	 assign lhu = (OpCode == 6'b100101);
	 assign lb  = (OpCode == 6'b100000);
	 assign lbu = (OpCode == 6'b100100);
	 assign sh  = (OpCode == 6'b101001);
	 assign sb  = (OpCode == 6'b101000);
	 assign sra = ((OpCode == 6'b0) & (Func == 6'b000011));
	 assign sltiu = (OpCode == 6'b001011);

// Or Gate	 
	 assign RegDst = addu | subu | sll | slt | sra;
	 assign RegWrite = addu | subu | ori | lui | lw | jal | sll | slt | lh | lb | lhu | lbu | sra | sltiu;
	 assign ALUSrc = ori | lui | lw | sw | lh | lhu | lb | lbu | sh | sb | sltiu;
	 assign MemWrite = sw | sb | sh;
	 assign MemToReg = lw | lh | lhu | lb | lbu;
	 assign EXTOp[1] = lui;
	 assign EXTOp[0] = lw | sw | beq | lh | lhu | lb | lbu | sh | sb | sltiu;
	 assign ALUOp[2] = 0;
	 assign ALUOp[1] = ori;
	 assign ALUOp[0] = subu;
	 assign DMEXTOp[2] = lh;
	 assign DMEXTOp[1] = lhu | lb;
	 assign DMEXTOp[0] = lhu | lbu;
	 assign if_beq = beq;
	 assign if_jal = jal;
	 assign if_jr  = jr;
	 assign if_sll = sll;
	 assign if_slt = slt | sltiu;
	 assign if_sra = sra;

endmodule
