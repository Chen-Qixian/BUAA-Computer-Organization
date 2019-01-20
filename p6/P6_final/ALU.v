`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:40 12/04/2017 
// Design Name: 
// Module Name:    ALU 
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
`define ADD 4'b0000
`define SUB 4'b0001
`define OR  4'b0010
`define AND 4'b0011
`define XOR 4'b0100
`define NOR 4'b0101
`define SLT 4'b0110
`define SLTU 4'b0111
`define SLL 4'b1000
`define SRL 4'b1001
`define SRA 4'b1010

module ALU(
    input [31:0] A,       // input first operand
    input [31:0] B,       // input second operand
    input [3:0] ALUOp,
    output [31:0] ALUOut
    );
	 
	 wire signed [31:0]C = A;
	 wire signed [31:0]D = B;
	 
	 assign ALUOut = (ALUOp == `ADD) ? A + B :
						  (ALUOp == `SUB) ? A - B :
						  (ALUOp == `OR ) ? A | B : 
						  (ALUOp == `AND) ? A & B :
						  (ALUOp == `XOR) ? A ^ B : 
						  (ALUOp == `NOR) ? (~(A | B)): 
						  (ALUOp == `SLT) ? ((C < D) ? 32'h0000_0001 : 32'b0) :
						  (ALUOp == `SLTU)? ((A < B) ? 32'h0000_0001 : 32'b0) : 
						  (ALUOp == `SLL) ? A <<B :
						  (ALUOp == `SRL) ? A >>B :
						  (ALUOp == `SRA) ? $signed($signed(A)>>>B) : 32'b0;
	 

endmodule
