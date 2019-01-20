`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:18:02 10/13/2017
// Design Name:   id_fsm
// Module Name:   C:/Users/cqx/Desktop/Verilog/identify/id_tb.v
// Project Name:  identify
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

module id_tb;

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
		char = "a";
		#10;
		char = "b";
		#10;
		char = "c";
		#10;
		char = "d";
		#10;
		char = "1";
		#10;
		char = "2";
		#10;
		char = "!";
		#10;
		char = "0";
		#10;
		char = "d";
		#10;
		char = "2";

	end
	
	always #5 clk = ~clk;
      
endmodule

