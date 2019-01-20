`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:43 11/25/2017
// Design Name:   IM
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/IM_tb.v
// Project Name:  Project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IM_tb;

	// Inputs
	reg [31:0] addr;

	// Outputs
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.addr(addr), 
		.instr(instr)
	);

	initial begin
		addr = 0;
		#10 addr = 4;
      #10 addr = 8;
		#10 addr = 12;		
		

	end
      
endmodule

