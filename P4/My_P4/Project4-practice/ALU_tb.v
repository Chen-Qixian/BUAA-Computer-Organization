`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:56:32 11/25/2017
// Design Name:   ALU
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/ALU_tb.v
// Project Name:  Project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] ALUOut;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.ALUOut(ALUOut), 
		.zero(zero)
	);

	initial begin
		A = 100;
		B = 5;
		ALUOp = 0;
		#10;
		ALUOp = 1;
		#10;
		A = 5;
		B = 1;
		ALUOp = 2;
		#10;
		B = 5;
        
		// Add stimulus here

	end
      
endmodule

