`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:35:21 11/09/2017
// Design Name:   id_fsm
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/fsm_tb.v
// Project Name:  practice_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm_tb;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		#0;
		char = 0;
		clk = 0;
		#10;
		char = "A";
		#10 char = "a";
		#10 char = "0";
		#10 char = "9";
		#10 char = "$";
		#10 char = "u";
		#10 char = "5";
	end
	
	always #5 clk = ~clk;
      
endmodule

