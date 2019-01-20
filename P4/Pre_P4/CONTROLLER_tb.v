`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:40:28 11/13/2017
// Design Name:   CONTROLLER
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/CONTROLLER_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CONTROLLER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CONTROLLER_tb;

	// Inputs
	reg [31:0] instr;

	// Outputs
	wire RegDst;
	wire AluSrc;
	wire MemToReg;
	wire GPR_Write;
	wire DM_Write;
	wire beq;
	wire bgtz;
	wire jal;
	wire jr;
	wire SignExt;
	wire LuiExt;
	wire [2:0] ALUOp;

	// Instantiate the Unit Under Test (UUT)
	CONTROLLER uut (
		.instr(instr), 
		.RegDst(RegDst), 
		.AluSrc(AluSrc), 
		.MemToReg(MemToReg), 
		.GPR_Write(GPR_Write), 
		.DM_Write(DM_Write), 
		.beq(beq), 
		.bgtz(bgtz), 
		.jal(jal), 
		.jr(jr), 
		.SignExt(SignExt), 
		.LuiExt(LuiExt), 
		.ALUOp(ALUOp)
	);

	initial begin
		#0  instr = 32'h3404007b;
		#10 instr = 32'h3c06007b;
		#10 instr = 32'h00868021;
		#10 instr = 32'had050004;
		#10 instr = 32'h8d040008;
		#10 instr = 32'h10850001;

	end
      
endmodule

