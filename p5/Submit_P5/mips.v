`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:53 12/04/2017 
// Design Name: 
// Module Name:    mips 
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
`define Rs 25:21
`define Rt 20:16
`define Rd 15:11
`define IMM16 15:0
`define SHAMT 10:6
module mips(
    input clk,
    input reset
    );
	 // data,pc
	 wire [31:0] in_pcF,pcF,npc,pc4F,pc4D,jr_pcD,pc8D,pc8E,pc8M,pc8W,pcM,pcW;
	 wire [31:0] instrF,instrD,instrE,instrM,instrW;
	 wire [31:0] ext32D,ext32E;
	 wire [31:0] BusAD,BusBD,BusAE,BusBE;
	 wire [31:0] srcW,WriteDataW;                    // Data for Write Back at W level
	 wire [31:0] ALUOutE,ALUOutM,ALUOutW;
	 wire [31:0] DMOutM,DMOutW;
	 wire [31:0] WriteMemoryM;
	 wire [31:0] ForwardValue1,ForwardValue2;   // Select forward value when jal.
	 // control signal
	 wire RegDstD,RegDstE,RegDstM,RegDstW;
	 wire RegWriteD,RegWriteE,RegWriteM,RegWriteW;                  // Write Enable
	 wire ALUSrcD,ALUSrcE;
	 wire MemWriteD,MemWriteE,MemWriteM,MemWriteW;
	 wire MemToRegD,MemToRegE,MemToRegM,MemToRegW;
	 wire [1:0] EXTOpD;
	 wire [2:0] ALUOpE;
	 wire if_beqD,if_jrD,if_jD;
	 wire if_jalD,if_jalE,if_jalM,if_jalW;

	 // branch control
	 wire PCSrcD;
	 wire zeroD;                
	 // instruciton field division at each level
	 wire [4:0] RsD,RsE,RsM;
	 wire [4:0] RtD,RtE,RtM;
	 wire [4:0] WriteRegE,WriteRegM,WriteRegW;
	 // forward signal
	 wire [31:0] MFAD,MFBD,ALUAE,MFBE,ALUBE,MFBM;
	 wire [1:0] ForwardAD,ForwardBD;
	 wire [1:0] ForwardAE,ForwardBE;
	 wire       ForwardBM;
	 // stall signal
	 wire stall;
	 wire const0=0,const1=1;
	  
	 // F - level
	 
	 assign pc4F = pcF + 4;
	 
	 MUX32_2 F_mpcin (.in0(pc4F),.in1(npc),.sel(PCSrcD),.out(in_pcF));
	 
	 PC F_pc (.clk(clk),.en(!stall),.reset(reset),.in_pc(in_pcF),.pc(pcF));
	 			  
	 IM F_im (.pc(pcF),.instr(instrF));
	 
	 // F - D Pipeline Register
	 
	 PREG F_D_IR (.clk(clk),.reset(reset),.en(!stall),.in(instrF),.out(instrD));  // reset?
	 PREG F_D_PC (.clk(clk),.reset(reset),.en(!stall),.in(pc4F),.out(pc4D));
	 
	 // D - level
	
    assign PCSrcD = (if_beqD && zeroD) | if_jalD | if_jrD | if_jD;
	 assign pc8D = pc4D + 4;
	 assign RsD = instrD[`Rs];
	 assign RtD = instrD[`Rt];
	 assign jr_pcD = MFAD;     // input change !
	 
	 GPR D_gpr (.clk(clk),.reset(reset),.WE(RegWriteW),.RA(instrD[`Rs]),.RB(instrD[`Rt]),
				  .RW(WriteRegW),.WD(WriteDataW),.pc(pcW),.BusA(BusAD),.BusB(BusBD));       // pc need to be fixed
				  
	 EXT D_ext (.imm16(instrD[`IMM16]),.EXTOp(EXTOpD),.ext32(ext32D));
	 
	 MUX32_3 D_mf_cmp_a (.in0(BusAD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAD),.out(MFAD));   // in1  jal?
	 
	 MUX32_3 D_mf_cmp_b (.in0(BusBD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBD),.out(MFBD));    // forward from W ?
	 
	 CMP D_cmp (.A(MFAD),.B(MFBD),.equal(zeroD));
	 
	 CONTROL D_controller (.instr(instrD),.RegDst(RegDstD),.RegWrite(RegWriteD),.ALUSrc(ALUSrcD),
								  .MemWrite(MemWriteD),.MemToReg(MemToRegD),.EXTOp(EXTOpD),
								  .if_beq(if_beqD),.if_jal(if_jalD),.if_jr(if_jrD),.if_j(if_jD));
								
	 NPC D_npc (.pc4(pc4D),.npc(npc),
				  .if_beq(if_beqD),.if_jal(if_jalD),.if_jr(if_jrD),.if_j(if_jD),
				  .zero(zeroD),.jr_pc(jr_pcD),.offset(ext32D),.instr(instrD));
	  
	 // D - E Pipeline Register
	 
	 PREG D_E_IR (.clk(clk),.reset(stall|reset),.en(const1),.in(instrD),.out(instrE));
	 PREG D_E_PC (.clk(clk),.reset(stall|reset),.en(const1),.in(pc8D),.out(pc8E));
	 PREG D_E_BusA (.clk(clk),.reset(stall|reset),.en(const1),.in(MFAD),.out(BusAE));
	 PREG D_E_BusB (.clk(clk),.reset(stall|reset),.en(const1),.in(MFBD),.out(BusBE));
	 PREG D_E_Ext  (.clk(clk),.reset(stall|reset),.en(const1),.in(ext32D),.out(ext32E));
	 
	 // E - level
	 
	 assign RsE = instrE[`Rs];
	 assign RtE = instrE[`Rt];
	 assign WriteRegE = (if_jalE) ? 5'b11111 : 
							  (RegDstE) ? instrE[`Rd] : instrE[`Rt];
	 
	 MUX32_3 E_mf_alu_a (.in0(BusAE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAE),.out(ALUAE));     // jal?
	 
	 MUX32_3 E_mf_alu_b (.in0(BusBE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBE),.out(MFBE));
	 
	 MUX32_2 E_ms_alu_b (.in0(MFBE),.in1(ext32E),.sel(ALUSrcE),.out(ALUBE));
	 
	 ALU E_alu (.A(ALUAE),.B(ALUBE),.ALUOp(ALUOpE),.ALUOut(ALUOutE));
	 
	 CONTROL E_controller (.instr(instrE),.RegDst(RegDstE),.RegWrite(RegWriteE),.ALUSrc(ALUSrcE),
								  .MemWrite(MemWriteE),.MemToReg(MemToRegE),.ALUOp(ALUOpE),.if_jal(if_jalE));
								
	 // E - M Pipeline Register
	 
	 PREG E_M_IR (.clk(clk),.reset(reset),.en(const1),.in(instrE),.out(instrM));
	 PREG E_M_PC (.clk(clk),.reset(reset),.en(const1),.in(pc8E),.out(pc8M));
	 PREG E_M_AO (.clk(clk),.reset(reset),.en(const1),.in(ALUOutE),.out(ALUOutM));
	 PREG E_M_WM (.clk(clk),.reset(reset),.en(const1),.in(MFBE),.out(WriteMemoryM));
	 
	 // M - level
	 
	 assign pcM = pc8M - 8;
	 assign RsM = instrM[`Rs];
	 assign RtM = instrM[`Rt];
	 assign WriteRegM = (if_jalM) ? 5'b11111:
							  (RegDstM) ? instrM[`Rd] : instrM[`Rt];
	 assign ForwardValue2 = (if_jalM) ? pc8M : ALUOutM;
	 
	 MUX32_2 M_mf_dm_wd (.in0(WriteMemoryM),.in1(ForwardValue1),.sel(ForwardBM),.out(MFBM));
	 
	 DM M_dm(.clk(clk),.reset(reset),
	         .WE(MemWriteM),.WD(MFBM),.addr(ALUOutM),.pc(pcM),.RD(DMOutM));  //pc
				
	 CONTROL M_controller (.instr(instrM),.RegDst(RegDstM),.RegWrite(RegWriteM),
								  .MemWrite(MemWriteM),.MemToReg(MemToRegM),.if_jal(if_jalM));
	 
	 // M - W Pipeline Register
	 
	 PREG M_W_IR (.clk(clk),.reset(reset),.en(const1),.in(instrM),.out(instrW));
	 PREG M_W_PC (.clk(clk),.reset(reset),.en(const1),.in(pc8M),.out(pc8W));
	 PREG M_W_DO (.clk(clk),.reset(reset),.en(const1),.in(DMOutM),.out(DMOutW));
	 PREG M_W_AO (.clk(clk),.reset(reset),.en(const1),.in(ALUOutM),.out(ALUOutW));
	 
	 // W - level
	 
	 assign pcW = pc8W - 8;
	 assign WriteRegW = (if_jalW) ? 5'b11111 :
							  (RegDstW) ? instrW[`Rd] : instrW[`Rt];
	 assign ForwardValue1 = WriteDataW;
	
    MUX32_2 W_ms_pc (.in0(ALUOutW),.in1(pc8W),.sel(if_jalW),.out(srcW));
	 
	 MUX32_2 W_ms_wb (.in0(srcW),.in1(DMOutW),.sel(MemToRegW),.out(WriteDataW));	

	 CONTROL W_controller (.instr(instrW),.RegWrite(RegWriteW),.RegDst(RegDstW),
								  .MemWrite(MemWriteW),.MemToReg(MemToRegW),.if_jal(if_jalW));
								  
	 // Hazard
	 
	 HAZARD hazard (.D_Rs(RsD),.D_Rt(RtD),.D_ALUSrc(ALUSrcD),.D_beq(if_beqD),.D_jr(if_jrD),
				       .E_Rs(RsE),.E_Rt(RtE),.E_WriteEnable(RegWriteE),.E_MemToReg(MemToRegE),.E_WriteReg(WriteRegE),
						 .M_Rs(RsM),.M_Rt(RtM),.M_WriteEnable(RegWriteM),.M_MemToReg(MemToRegM),.M_WriteReg(WriteRegM),
						 .W_WriteEnable(RegWriteW),.W_WriteReg(WriteRegW),.ForwardBM(ForwardBM),
						 .ForwardAD(ForwardAD),.ForwardBD(ForwardBD),.ForwardAE(ForwardAE),.ForwardBE(ForwardBE),
						 .Stall(stall));


endmodule
