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
`define ADD 3'b000
`define SUB 3'b001
`define OR  3'b010
`define AND 3'b011
`define XOR 3'b100

module ALU(
    input [31:0] A,       // input first operand
    input [31:0] B,       // input second operand
    input [2:0] ALUOp,
    output [31:0] ALUOut
    );
	 
	 assign ALUOut = (ALUOp == `ADD) ? A + B :
						  (ALUOp == `SUB) ? A - B :
						  (ALUOp == `OR ) ? A | B : 
						  (ALUOp == `AND) ? A & B :
						  (ALUOp == `XOR) ? A ^ B : 0;
	 

endmodule
