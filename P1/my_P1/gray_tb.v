`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:43:28 11/03/2017
// Design Name:   gray
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/my_P1/gray_tb.v
// Project Name:  my_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gray_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire [2:0] Output;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		En = 1;
		
		#30;
		Reset = 1;
		#10;
		Reset = 0;
		#100;
		Reset = 1;
		#10;
		Reset = 0;
		#30;
		En = 0;
		#10;
		En = 1;
	end
	
	always #5 Clk = ~Clk;
      
endmodule

