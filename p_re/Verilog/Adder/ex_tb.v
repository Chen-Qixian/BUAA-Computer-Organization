`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:05:27 10/12/2017
// Design Name:   ex
// Module Name:   C:/Users/cqx/Desktop/Verilog/Adder/ex_tb.v
// Project Name:  Adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ex
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ex_tb;

	// Outputs
	wire A;
	wire B;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	ex uut (
		.A(A), 
		.B(B), 
		.C(C)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

