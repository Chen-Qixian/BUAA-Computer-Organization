`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:20:55 11/04/2017
// Design Name:   string
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/my_P1/string_tb.v
// Project Name:  my_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module string_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		clk = 0;
		clr = 0;
		in = "1";
		#10;
		in = "+";
		#10;
		in = "3";
		#10;
		in = "*";
		#10;
		in = "9";
		#30;
		clr = 1;
		#10;
		clr = 0;
		in = "1";
		#10;
		in = "*";
		#10;
		in = "9";
		#10;
		in = "+";
		#10;
		in = "8";
		#30;
		in = "+";
		#10;
		in = "0";
		

	end
   
	always #5 clk = ~clk;
endmodule

