`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:       Beijing University of Aeronautics and Astronautics
// Engineer:      Chen Qixian
// 
// Create Date:    10:55:22 11/13/2017 
// Design Name:    MIPS Monocyclic CPU 
// Module Name:    mips 
// Project Name:   Project # 4
// Target Devices: Null
// Tool versions:  Null
// Description:    Support Instructions {ori,lw,sw,lui,addu,subu,sll,beq,bgtz,jal,jr}
//
// Dependencies:   Null
//
// Revision:       Instructions {ori,lw,sw,lui,addu,subu,sll,beq,bgtz} have passed test.
// Revision 0.01 - File Created
// Additional Comments:         {jal,jr} remain to be tested.
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset
    );
	 
	 wire [31:0] instr;
	 wire RegDst,AluSrc,MemToReg,GPR_Write,DM_Write,beq,bgtz,jal,jr,SignExt,LuiExt;
	 wire [2:0] ALUOp;
	 
	 DATAPATH datapath(.clk(clk),.reset(reset),.Instr(instr),.RegDst(RegDst),.AluSrc(AluSrc),
	                   .MemToReg(MemToReg),.GPR_Write(GPR_Write),.DM_Write(DM_Write),.beq(beq),
							 .bgtz(bgtz),.jal(jal),.jr(jr),.SignExt(SignExt),.LuiExt(LuiExt),.ALUOp(ALUOp));
	 
	 CONTROLLER controller(.instr(instr),.RegDst(RegDst),.AluSrc(AluSrc),.MemToReg(MemToReg),
								  .GPR_Write(GPR_Write),.DM_Write(DM_Write),.beq(beq),.bgtz(bgtz),
								  .jal(jal),.jr(jr),.SignExt(SignExt),.LuiExt(LuiExt),.ALUOp(ALUOp));


endmodule
