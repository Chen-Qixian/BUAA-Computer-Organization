`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:01 12/04/2017 
// Design Name: 
// Module Name:    CONTROL 
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
module CONTROL(
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
    output if_jr,
	 output if_j,
	 output if_bgezal,
	 output if_movz,
	 output if_lwl
    );
	 
	 wire [5:0] OpCode,Func,Func2;
	 wire addu,subu,ori,lui,lw,beq,jal,jr,j,addi,bgezal,movz,lwl;
	 
	 assign OpCode = instr[31:26] ;
	 assign Func = instr[5:0];
	 assign Func2= instr[20:16];

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
	 assign j   = (OpCode == 6'b000010);
	 assign addi= (OpCode == 6'b001000);
	 assign bgezal = ((OpCode == 6'b000001) & (Func2 == 5'b10001));
	 assign movz= ((OpCode == 6'b0) & (Func == 6'b001010));
	 assign lwl = (OpCode == 6'b100010);

// Or Gate	 
	 assign RegDst = addu | subu | movz;
	 assign RegWrite = addu | subu | ori | lui | lw | jal | addi | bgezal | movz | lwl;
	 assign ALUSrc = ori | lui | lw | sw | addi | lwl;
	 assign MemWrite = sw;
	 assign MemToReg = lw | lwl;
	 assign EXTOp[1] = lui;
	 assign EXTOp[0] = lw | sw | beq | addi | lwl;
	 assign ALUOp[2] = 0;
	 assign ALUOp[1] = ori;
	 assign ALUOp[0] = subu;
	 assign if_beq = beq;
	 assign if_jal = jal;
	 assign if_jr  = jr;
	 assign if_j   = j;
	 assign if_bgezal = bgezal;
	 assign if_movz= movz; 
	 assign if_lwl = lwl;

endmodule
