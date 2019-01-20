`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:12:02 12/04/2017
// Design Name:   ALU
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/p5/My_P5/ALU_tb.v
// Project Name:  My_P5
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

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.ALUOut(ALUOut)
	);

	initial begin
		// Initialize Inputs
		A = 6'b110110;
		B = 6'b011101;
		ALUOp = 3'b100;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

