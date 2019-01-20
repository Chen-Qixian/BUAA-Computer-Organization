`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Beijing University of Aeronautics and Astronautics
// Engineer:       Chen  Qixian
// 
// Create Date:    20:49:53 12/04/2017 
// Design Name:    Pipelined CPU
// Module Name:    mips 
// Project Name:   Pipelined CPU
// Description:    Support instruction set of {add,addu,And,Nor,Or,sub,subu,Xor},
//															 {addi,addiu,andi,lui,ori,xori},
//															 {beq,blez,bltz,bgez,bgtz,bne},
//															 {slt,sltu,slti,sltiu},
//                                            {sll,sllv,sra,srav,srl,srlv},
//                                            {lw,lh,lhu,lb,lbu,sw,sh,sb},
//                                            {jal,jr,j,jalr}.
// Revision 0.01 - File Created
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
	 wire [31:0] ALUOutE,EXOutE,EXOutM,EXOutW;
	 wire [31:0] DMOutM,DMOutW,DOutW;
	 wire [31:0] WriteMemoryM;
	 wire [31:0] ForwardValue1,ForwardValue2;   // Select forward value when jal.
	 wire [31:0] hiE,loE;
	 // control signal
	 wire RegDstD,RegDstE,RegDstM,RegDstW;
	 wire RegWriteD,RegWriteE,RegWriteM,RegWriteW;
    wire RWE,RWM,RWW;                         	   // Write Enable
	 wire ALUSrcD,ALUSrcE;
	 wire MemWriteD,MemWriteE,MemWriteM,MemWriteW;
	 wire MemToRegD,MemToRegE,MemToRegM,MemToRegW;
	 wire [1:0] EXTOpD;
	 wire [3:0] ALUOpE;
	 wire [2:0] DMEXTOpW,MDOpE;
	 wire if_beqD,if_bgezD,if_bgtzD,if_blezD,if_bltzD,if_bneD,if_branchD;
	 wire if_jrD,if_jD,if_jalrD,if_jumpD;
	 wire if_jalD,if_jalE,if_jalM,if_jalW,if_jalrM,if_jalrW;
	 wire shift_iE,shift_vE;
	 wire swM,shM,sbM;
	 wire mdopD;
	 wire startE,mthiE,mtloE,mfhiE,mfloE;

	 // branch control
	 wire PCSrcD;
	 wire zeroD,greatD,lessD;                
	 // instruciton field division at each level
	 wire [4:0] RsD,RsE,RsM;
	 wire [4:0] RtD,RtE,RtM;
	 wire [4:0] WriteRegE,WriteRegM,WriteRegW;
	 // forward signal
	 wire [31:0] MFAD,MFBD,MFAE,ALUAE,MFBE,ALUBE,SRCE,MFBM,MFBW;
	 wire [31:0] cmpA,cmpB;
	 wire [1:0] ForwardAD,ForwardBD;
	 wire [1:0] ForwardAE,ForwardBE;
	 wire       ForwardBM;
	 // stall signal
	 wire stall;
	 wire busyE;
	 wire const0=0,const1=1;
	  
	 // F - level
	 
	 assign pc4F = pcF + 4;
	 
	 MUX32_2 F_mpcin (.in0(pc4F),.in1(npc),.sel(PCSrcD),.out(in_pcF));
	 
	 PC F_pc (.clk(clk),.en(!stall),.reset(reset),.in_pc(in_pcF),.pc(pcF));
	 			  
	 IM F_im (.pc(pcF),.instr(instrF));
	 
	 // F - D Pipeline Register
	 
	 PREG F_D_IR (.clk(clk),.reset(reset),.en(!stall),.in(instrF),.out(instrD)); 
	 PREG F_D_PC (.clk(clk),.reset(reset),.en(!stall),.in(pc4F),.out(pc4D));
	 
	 // D - level
	
    assign PCSrcD = (if_beqD && zeroD) | (if_bgezD && (zeroD || greatD)) 
						| (if_bgtzD&& greatD) | (if_blezD && (zeroD || lessD))
						| (if_bltzD&& lessD) | (if_bneD && !zeroD)
						| if_jalD | if_jrD | if_jD | if_jalrD;
	 assign pc8D = pc4D + 4;
	 assign RsD = instrD[`Rs];
	 assign RtD = instrD[`Rt];
	 assign jr_pcD = MFAD;     // input change !
	 assign cmpA = MFAD;
	 assign if_branchD = if_beqD | if_bgezD | if_bgtzD | if_blezD | if_bltzD | if_bneD;
	 assign if_jumpD = if_jrD | if_jalrD;
	 
	 GPR D_gpr (.clk(clk),.reset(reset),.WE(RegWriteW),.RA(instrD[`Rs]),.RB(instrD[`Rt]),
				   .RW(WriteRegW),.WD(WriteDataW),.pc(pcW),.BusA(BusAD),.BusB(BusBD));      
				  
	 EXT D_ext (.imm16(instrD[`IMM16]),.EXTOp(EXTOpD),.ext32(ext32D));
	 
	 MUX32_3 D_mf_cmp_a (.in0(BusAD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAD),.out(MFAD)); 
	 
	 MUX32_3 D_mf_cmp_b (.in0(BusBD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBD),.out(MFBD));    
	 
	 MUX32_2 D_ms_cmp_b (.in0(MFBD),.in1(0),.sel(if_bgezD | if_blezD),.out(cmpB));
	 
	 CMP D_cmp (.A(cmpA),.B(cmpB),.equal(zeroD),.great(greatD),.less(lessD));
	 
	 CONTROL D_controller (.instr(instrD),.RegDst(RegDstD),.RegWrite(RegWriteD),.ALUSrc(ALUSrcD),
								  .MemWrite(MemWriteD),.MemToReg(MemToRegD),.EXTOp(EXTOpD),
								  .if_beq(if_beqD),.if_bgez(if_bgezD),.if_bgtz(if_bgtzD),
								  .if_blez(if_blezD),.if_bltz(if_bltzD),.if_bne(if_bneD),
								  .if_jal(if_jalD),.if_jr(if_jrD),.if_j(if_jD),.if_jalr(if_jalrD),
								  .mdop(mdopD));           // mdop is the current instruction related to md.
								
	 NPC D_npc (.pc4(pc4D),.npc(npc),
				  .if_beq(if_beqD),.if_bgez(if_bgezD),.if_bgtz(if_bgtzD),
				  .if_blez(if_blezD),.if_bltz(if_bltzD),.if_bne(if_bneD),
				  .if_jal(if_jalD),.if_jr(if_jrD),.if_j(if_jD),.if_jalr(if_jalrD),
				  .zero(zeroD),.great(greatD),.less(lessD),
				  .jr_pc(jr_pcD),.offset(ext32D),.instr(instrD));
	  
	 // D - E Pipeline Register
	 
	 PREG D_E_IR (.clk(clk),.reset(stall|reset),.en(const1),.in(instrD),.out(instrE));
	 PREG D_E_PC (.clk(clk),.reset(stall|reset),.en(const1),.in(pc8D),.out(pc8E));
	 PREG D_E_BusA (.clk(clk),.reset(stall|reset),.en(const1),.in(MFAD),.out(BusAE));
	 PREG D_E_BusB (.clk(clk),.reset(stall|reset),.en(const1),.in(MFBD),.out(BusBE));
	 PREG D_E_Ext  (.clk(clk),.reset(stall|reset),.en(const1),.in(ext32D),.out(ext32E));
	 
	 // E - level
	 
	 assign RsE = instrE[`Rs];
	 assign RtE = instrE[`Rt];
	 assign RegWriteE = (if_movzE) ? (MFBE == 0) : RWE;												
	 assign WriteRegE = (if_jalE) ? 5'b11111 : 
							  (RegDstE) ? instrE[`Rd] : instrE[`Rt];
	 
	 MUX32_3 E_mf_alu_a (.in0(BusAE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAE),.out(MFAE));  
	 
	 MUX32_2 E_ms_alu_a (.in0(MFAE),.in1(MFBE),.sel(shift_iE | shift_vE),.out(ALUAE));
	 
	 MUX32_3 E_mf_alu_b (.in0(BusBE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBE),.out(MFBE));
	 
	 MUX32_2 E_ms1_alu_b(.in0(MFBE),.in1(ext32E),.sel(ALUSrcE),.out(SRCE));
	 
	 assign ALUBE = (shift_iE) ? {27'b0,instrE[`SHAMT]} : 
						 (shift_vE) ? {27'b0,MFAE[4:0]} : SRCE;
	 
	 ALU E_alu (.A(ALUAE),.B(ALUBE),.ALUOp(ALUOpE),.ALUOut(ALUOutE));
	 
	 MD  E_md  (.clk(clk),.reset(reset),.A(MFAE),.B(MFBE),.WD(MFAE),
				   .mthi(mthiE),.mtlo(mtloE),.start(startE),.MDOp(MDOpE),  // MDOp is the op sel of MD.
					.busy(busyE),.hi(hiE),.lo(loE));
					
	 assign EXOutE = (mfhiE) ? hiE :                             // the result of E level
						  (mfloE) ? loE : ALUOutE;
	 
	 CONTROL E_controller (.instr(instrE),.RegDst(RegDstE),.RegWrite(RWE),.ALUSrc(ALUSrcE),
								  .MemWrite(MemWriteE),.MemToReg(MemToRegE),.ALUOp(ALUOpE),
								  .shift_i(shift_iE),.shift_v(shift_vE),.if_jal(if_jalE),.if_movz(if_movzE),
								  .start(startE),.mthi(mthiE),.mtlo(mtloE),.mfhi(mfhiE),.mflo(mfloE),.MDOp(MDOpE));
								
	 // E - M Pipeline Register
	 
	 PREG E_M_IR (.clk(clk),.reset(reset),.en(const1),.in(instrE),.out(instrM));
	 PREG E_M_PC (.clk(clk),.reset(reset),.en(const1),.in(pc8E),.out(pc8M));
	 PREG E_M_EO (.clk(clk),.reset(reset),.en(const1),.in(EXOutE),.out(EXOutM));
	 PREG E_M_WM (.clk(clk),.reset(reset),.en(const1),.in(MFBE),.out(WriteMemoryM));
	 
	 // M - level
	 
	 assign pcM = pc8M - 8;
	 assign RsM = instrM[`Rs];
	 assign RtM = instrM[`Rt];
	 assign RegWriteM = (if_movzM)? (MFBM == 0) : RWM;
	 assign WriteRegM = (if_jalM) ? 5'b11111:
							  (RegDstM) ? instrM[`Rd] : instrM[`Rt];
	 assign ForwardValue2 = (if_jalM | if_jalrM) ? pc8M : EXOutM;
	 
	 MUX32_2 M_mf_dm_wd (.in0(WriteMemoryM),.in1(ForwardValue1),.sel(ForwardBM),.out(MFBM));
	 
	 DM M_dm(.clk(clk),.reset(reset),.sw(swM),.sh(shM),.sb(sbM),
	         .WE(MemWriteM),.WD(MFBM),.addr(EXOutM),.pc(pcM),.RD(DMOutM));  //pc
				
	 CONTROL M_controller (.instr(instrM),.RegDst(RegDstM),.RegWrite(RWM),
								  .MemWrite(MemWriteM),.MemToReg(MemToRegM),.if_jal(if_jalM),
								  .if_jalr(if_jalrM),.if_sw(swM),.if_sh(shM),.if_sb(sbM),.if_movz(if_movzM));
	 
	 // M - W Pipeline Register
	 
	 PREG M_W_IR (.clk(clk),.reset(reset),.en(const1),.in(instrM),.out(instrW));
	 PREG M_W_PC (.clk(clk),.reset(reset),.en(const1),.in(pc8M),.out(pc8W));
	 PREG M_W_DO (.clk(clk),.reset(reset),.en(const1),.in(DMOutM),.out(DMOutW));
	 PREG M_W_AO (.clk(clk),.reset(reset),.en(const1),.in(EXOutM),.out(EXOutW));
	 PREG M_W_RT (.clk(clk),.reset(reset),.en(const1),.in(MFBM),.out(MFBW));
	 
	 // W - level
	 
	 assign pcW = pc8W - 8;
	 assign RegWriteW = (if_movzW) ? (MFBW == 0) : RWW;
	 assign WriteRegW = (if_jalW) ? 5'b11111 :
							  (RegDstW) ? instrW[`Rd] : instrW[`Rt];
	 assign ForwardValue1 = WriteDataW;
	 
	 DMEXT W_dmext(.A(EXOutW[1:0]),.Din(DMOutW),.Op(DMEXTOpW),.DOut(DOutW));
	
    MUX32_2 W_ms_pc (.in0(EXOutW),.in1(pc8W),.sel(if_jalW | if_jalrW),.out(srcW));
	 
	 MUX32_2 W_ms_wb (.in0(srcW),.in1(DOutW),.sel(MemToRegW),.out(WriteDataW));	

	 CONTROL W_controller (.instr(instrW),.RegWrite(RWW),.RegDst(RegDstW),
								  .MemWrite(MemWriteW),.MemToReg(MemToRegW),.DMEXTOp(DMEXTOpW),
								  .if_jal(if_jalW),.if_jalr(if_jalrW),.if_movz(if_movzW));
								  
	 // Hazard
	 
	 HAZARD hazard (.D_Rs(RsD),.D_Rt(RtD),.D_ALUSrc(ALUSrcD),.D_branch(if_branchD),.D_jump(if_jumpD),.D_mdop(mdopD),
				       .E_Rs(RsE),.E_Rt(RtE),.E_WriteEnable(RegWriteE),.E_MemToReg(MemToRegE),.E_WriteReg(WriteRegE),
						 .M_Rs(RsM),.M_Rt(RtM),.M_WriteEnable(RegWriteM),.M_MemToReg(MemToRegM),.M_WriteReg(WriteRegM),
						 .W_WriteEnable(RegWriteW),.W_WriteReg(WriteRegW),.ForwardBM(ForwardBM),
						 .ForwardAD(ForwardAD),.ForwardBD(ForwardBD),.ForwardAE(ForwardAE),.ForwardBE(ForwardBE),
						 .Stall(stall),.busy(busyE),.start(startE));


endmodule
