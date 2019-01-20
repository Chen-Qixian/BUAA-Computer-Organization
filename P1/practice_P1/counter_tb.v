`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:14:57 11/09/2017
// Design Name:   counter
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/counter_tb.v
// Project Name:  practice_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg En;
	reg Slt;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Slt(Slt), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		#0;
		Clk = 0;
		Reset = 0;
		En = 1;
		Slt = 0;
		#10;
		Slt = 1;
		
	end
	
	always #5 Clk = ~Clk;
      
endmodule

