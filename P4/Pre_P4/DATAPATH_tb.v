`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:44:31 11/13/2017
// Design Name:   DATAPATH
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/DATAPATH_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DATAPATH
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DATAPATH_tb;

	// Inputs
	reg clk;
	reg reset;
	reg RegDst;
	reg AluSrc;
	reg MemToReg;
	reg beq;
	reg bgtz;
	reg jal;
	reg jr;
	reg GPR_Write;
	reg DM_Write;
	reg LuiExt;
	reg SignExt;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] Instr;

	// Instantiate the Unit Under Test (UUT)
	DATAPATH uut (
		.clk(clk), 
		.reset(reset), 
		.RegDst(RegDst), 
		.AluSrc(AluSrc), 
		.MemToReg(MemToReg), 
		.beq(beq), 
		.bgtz(bgtz), 
		.jal(jal), 
		.jr(jr), 
		.GPR_Write(GPR_Write), 
		.DM_Write(DM_Write), 
		.LuiExt(LuiExt), 
		.SignExt(SignExt), 
		.ALUOp(ALUOp), 
		.Instr(Instr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		RegDst = 0;
		AluSrc = 0;
		MemToReg = 0;
		beq = 0;
		bgtz = 0;
		jal = 0;
		jr = 0;
		GPR_Write = 0;
		DM_Write = 0;
		LuiExt = 0;
		SignExt = 0;
		ALUOp = 0;

		#10;
		AluSrc = 1;
		DM_Write = 1;
		SignExt = 1;

	end
	
	always #5 clk = ~clk;
      
endmodule

