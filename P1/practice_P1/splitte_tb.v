`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:43:31 11/09/2017
// Design Name:   splitter
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/splitte_tb.v
// Project Name:  practice_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: splitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module splitte_tb;

	// Inputs
	reg [31:0] A;

	// Outputs
	wire [7:0] O1;
	wire [7:0] O2;
	wire [7:0] O3;
	wire [7:0] O4;

	// Instantiate the Unit Under Test (UUT)
	splitter uut (
		.A(A), 
		.O1(O1), 
		.O2(O2), 
		.O3(O3), 
		.O4(O4)
	);

	initial begin
		// Initialize Inputs
		A = 1000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

