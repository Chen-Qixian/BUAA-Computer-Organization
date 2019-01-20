`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:57:22 10/20/2017
// Design Name:   comparator
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P0/signed_comparator/sign_comparator_tb.v
// Project Name:  signed_comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sign_comparator_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire Out;

	// Instantiate the Unit Under Test (UUT)
	comparator uut (
		.A(A), 
		.B(B), 
		.Out(Out)
	);

	initial begin
		#0;
		A = 0;
		B = 0;
		#10;
		A = 4'b0001;
		B = 4'b1110;
		#10;
		A = 4'b1110;
		B = 4'b1011;
		#10;
		A = 4'b1111;
		B = 4'b1110;
		#10
		A = 4'b1111;
		B = 4'b1111;
		#10
		A = 4'b0110;
		B = 4'b0111;
		#10
		A = 4'b1100;
		B = 4'b0010;

	end
      
endmodule

