`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:56 12/04/2017 
// Design Name: 
// Module Name:    EXT 
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
`define ZERO 2'b00
`define SIGN 2'b01
`define LUI  2'b10
module EXT(
    input [15:0] imm16,
    input [1:0] EXTOp,    // capital letter EXTOp
    output [31:0] ext32
    );
	 
	 assign ext32 = (EXTOp == `ZERO) ? {16'b0,imm16} :
						 (EXTOp == `SIGN) ? ((imm16[15] == 1) ? {16'hffff,imm16} : {16'b0,imm16}) :
						 (EXTOp == `LUI ) ? {imm16,16'b0} : 0;

endmodule
