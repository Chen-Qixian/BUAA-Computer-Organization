`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:58:09 10/13/2017
// Design Name:   buffer
// Module Name:   C:/Users/cqx/Desktop/Verilog/counter/buffe_tb.v
// Project Name:  counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buffer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buffe_tb;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	buffer uut (
		.clk(clk), 
		.in(in), 
		.out(out),
		.buff(buff)
	);

	initial begin
		clk = 1;
		in = 0;
		#10;
		in <= 1;
		#10;
		in <= 0;
		#10;
		in <= 1;
	end
	always #5 clk = ~clk;
      
endmodule

