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
    output if_beq,
    output if_jal,
    output if_jr
    );
	 
	 wire [5:0] OpCode,Func;
	 wire addu,subu,ori,lui,lw,sw,beq,jal,jr;
	 
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

// Or Gate	 
	 assign RegDst = addu | subu;
	 assign RegWrite = addu | subu | ori | lui | lw | jal;
	 assign ALUSrc = ori | lui | lw | sw;
	 assign MemWrite = sw;
	 assign MemToReg = lw;
	 assign EXTOp[1] = lui;
	 assign EXTOp[0] = lw | sw | beq;
	 assign ALUOp[2] = 0;
	 assign ALUOp[1] = ori;
	 assign ALUOp[0] = subu;
	 assign if_beq = beq;
	 assign if_jal = jal;
	 assign if_jr  = jr;
	 

endmodule
