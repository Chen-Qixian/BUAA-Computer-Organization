`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:34:02 11/16/2017
// Design Name:   GRAY2
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/GRAY2_tb.v
// Project Name:  practice_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRAY2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GRAY2_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire Overflow;
	wire [2:0] Output;

	// Instantiate the Unit Under Test (UUT)
	GRAY2 uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Overflow(Overflow), 
		.Output(Output)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

