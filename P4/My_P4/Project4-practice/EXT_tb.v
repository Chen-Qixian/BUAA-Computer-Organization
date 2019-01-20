`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:03:12 11/26/2017
// Design Name:   EXT
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/EXT_tb.v
// Project Name:  Project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EXT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EXT_tb;

	// Inputs
	reg [15:0] imm16;
	reg [1:0] EXTOp;

	// Outputs
	wire [31:0] ext32;

	// Instantiate the Unit Under Test (UUT)
	EXT uut (
		.imm16(imm16), 
		.EXTOp(EXTOp), 
		.ext32(ext32)
	);

	initial begin
		#0;
		imm16 = 16'h011c;
		EXTOp = 0;
		#10;
		imm16 = 16'h82ca;
		#10;
		EXTOp = 1;
		#10;
		imm16 = 16'h729e;
		#10;
		EXTOp = 2;
		
		
	end
      
endmodule

