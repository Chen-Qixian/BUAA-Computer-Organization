`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:20:17 11/12/2017
// Design Name:   ALU
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/ALU_tb.v
// Project Name:  Pre_P4
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
	reg [31:0] Op1;
	reg [31:0] Op2;
	reg [2:0] ALUOp;

	// Outputs
	wire zero;
	wire [31:0] Out;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.Op1(Op1), 
		.Op2(Op2), 
		.ALUOp(ALUOp), 
		.zero(zero), 
		.Out(Out)
	);

	initial begin
		#0;
		Op1 = 16;
		Op2 = 2;
		ALUOp = 0;
		#10;
      ALUOp = 1;
		#10;
		ALUOp = 2;
		#10;
		ALUOp = 3;
		#10;
		Op2 = 16;
		
		// Add stimulus here

	end
      
endmodule

