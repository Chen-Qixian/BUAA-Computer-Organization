`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:22:14 11/12/2017
// Design Name:   EXT
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/EXT_tb.v
// Project Name:  Pre_P4
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
	reg SignExt;
	reg LuiExt;

	// Outputs
	wire [31:0] Output;

	// Instantiate the Unit Under Test (UUT)
	EXT uut (
		.imm16(imm16), 
		.SignExt(SignExt), 
		.LuiExt(LuiExt), 
		.Output(Output)
	);

	initial begin
		#0;
		imm16 = 16'h819a;
		SignExt = 0;
		LuiExt = 0;
		#20;
		SignExt = 1;
		#20;
		SignExt = 0;
		LuiExt = 1;
		#20;
		imm16 = 16'h719a;
		LuiExt = 0;
		SignExt = 1;

	end
      
endmodule

