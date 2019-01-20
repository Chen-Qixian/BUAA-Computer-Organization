`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:32:01 11/12/2017 
// Design Name: 
// Module Name:    DATAPATH 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DATAPATH(
    input clk,
    input reset,
    input RegDst,
    input AluSrc,
    input MemToReg,
    input beq,
    input bgtz,
    input jal,
    input jr,
    input GPR_Write,
    input DM_Write,
    input LuiExt,
    input SignExt,
    input [2:0] ALUOp,
    output [31:0] Instr
    );
	 
	 wire [31:0] NPC,PC,WriteData,BusA,BusB,Extend32,AluOp2,AluOut,LoadData;
	 wire [4:0] RegWrite;
	 wire zero,greater;
	 
	 PC pc(.clk(clk),.reset(reset),.NPC(NPC),.PC(PC));
	 
	 NPC npc(.PC(PC),.NPC(NPC),.zero(zero),.greater(greater),
				.beq(beq),.bgtz(bgtz),.jal(jal),.jr(jr),.instr_index(Instr[25:0]),  //difference Instruction
				.jr_add(BusA),.offset(Extend32)); 
	 
	 IM im(.addr(PC),.instr(Instr)); // difference
	 
	 GPR gpr(.clk(clk),.reset(reset),.RegA(Instr[25:21]),.RegB(Instr[20:16]),
			   .RegWrite(RegWrite),.WriteEnable(GPR_Write),.shamt(Instr[10:6]),    
				.WriteData(WriteData),.BusA(BusA),.BusB(BusB));
	 
	 EXT ext(.imm16(Instr[15:0]),.SignExt(SignExt),.LuiExt(LuiExt),.Output(Extend32));
	 
	 ALU alu(.Op1(BusA),.Op2(AluOp2),.ALUOp(ALUOp),.Out(AluOut),.zero(zero));
	 
	 DM dm(.clk(clk),.reset(reset),.WriteEnable(DM_Write),.addr(AluOut),.StoreData(BusB),.LoadData(LoadData));
	 
	 assign AluOp2 = (AluSrc)? Extend32 : BusB;
	 assign WriteData = (MemToReg)? LoadData : AluOut;
	 assign RegWrite = (jal)   ? 5'b11111:                       //jal -> Rd = 31
							 (RegDst)? Instr[15:11] : Instr[20:16];    // RegDst == 1 -> Rd, else ->Rt
	 assign greater = (BusA > 0)? 1'b1 : 1'b0;                   //bgtz greater than 0



endmodule
