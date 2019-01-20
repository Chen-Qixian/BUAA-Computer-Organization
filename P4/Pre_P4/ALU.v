`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:10:03 11/12/2017 
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
module ALU(
    input [31:0] Op1,
    input [31:0] Op2,
    input [2:0] ALUOp,
    output zero,
    output [31:0] Out
    );
	 
	 assign Out = (ALUOp == `ADD)? Op1 + Op2 :
					  (ALUOp == `SUB)? Op1 - Op2 :
					  (ALUOp == `OR )? Op1 | Op2 :
					  (ALUOp == `AND)? Op1 & Op2 : 0;
	 assign zero = (Op1 == Op2)? 1 : 0;
	 
	 


endmodule
