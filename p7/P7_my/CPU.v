`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        Beijing University of Aeronautics and Astronautics
// Engineer:       Chen  Qixian
// 
// Create Date:    20:49:53 12/04/2017 
// Design Name:    Pipelined CPU Supporting Interruption and Error
// Module Name:    CPU 
// Project Name:   Pipelined CPU Supporting Interruption and Error
// Description:    Support instruction set of {add,addu,And,Nor,Or,sub,subu,Xor},
//															 {addi,addiu,andi,lui,ori,xori},
//															 {beq,blez,bltz,bgez,bgtz,bne},
//															 {slt,sltu,slti,sltiu},
//                                            {sll,sllv,sra,srav,srl,srlv},
//                                            {lw,lh,lhu,lb,lbu,sw,sh,sb},
//                                            {jal,jr,j,jalr},
//                                            {mtc0,mfc0,eret}.
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
`define Rs      25:21
`define Rt      20:16
`define Rd      15:11
`define IMM16   15:0
`define SHAMT   10:6
`define INT     5'd0
`define ADEL    5'd4
`define ADES    5'd5
`define RI      5'd10
`define OV      5'd12
`define EXCINIT 5'b0
module CPU(
    input clk,
    input reset,
	 input [31:0] PrRD,
	 input [7:2]  HWInt,
	 output [31:0] PrAddr,
	 output [31:0] PrWD,
	 output        CPUWE
    );
	 // data,pc
	 wire [31:0] SelPCF,in_pcF,pcF,npc,pc4F,pc4D,jr_pcD,pc8D,pc8E,pc8M,pc8W,pcM,pcW;
	 wire [31:0] instrF,instrD,instrE,instrM,instrW;
	 wire [31:0] ext32D,ext32E;
	 wire [31:0] BusAD,BusBD,BusAE,BusBE;
	 wire [31:0] src0W,src1W,WriteDataW;                    // Data for Write Back at W level
	 wire [31:0] ALUOutE,EXOutE,EXOutM,EXOutW;
	 wire [31:0] DMOutM,DataM,DataW,DOutW;
	 wire [31:0] WriteMemoryM;
	 wire [31:0] ForwardValue1,ForwardValue2;   // Select forward value when jal.
	 wire [31:0] hiE,loE;
	 // control signal
	 wire RegDstD,RegDstE,RegDstM,RegDstW;
	 wire RegWriteD,RegWriteE,RegWriteM,RegWriteW;                  // Write Enable
	 wire ALUSrcD,ALUSrcE;
	 wire MemWriteD,MemWriteE,MemWriteM,MemWriteW;
	 wire MemToRegD,MemToRegE,MemToRegM,MemToRegW;
	 wire [1:0] EXTOpD,MDOpE;
	 wire [3:0] ALUOpE;
	 wire [2:0] DMEXTOpW;
	 wire if_beqD,if_bgezD,if_bgtzD,if_blezD,if_bltzD,if_bneD,if_branchD;
	 wire if_jrD,if_jD,if_jalrD,if_jumpD;
	 wire if_jalD,if_jalE,if_jalM,if_jalW,if_jalrM,if_jalrW;
	 wire shift_iE,shift_vE;
	 wire swM,shM,sbM;
	 wire lwM,lhM,lbM,lhuM,lbuM;
	 wire storeM,loadM;
	 wire mdopD;
	 wire startE,mthiE,mtloE,mfhiE,mfloE;

	 // branch control
	 wire PCSrcD;
	 wire zeroD,greatD,lessD;                
	 // instruciton field division at each level
	 wire [4:0] RsD,RsE,RsM;
	 wire [4:0] RtD,RtE,RtM;
	 wire [4:0] RdE,RdM;
	 wire [4:0] WriteRegE,WriteRegM,WriteRegW;
	 // forward signal
	 wire [31:0] MFAD,MFBD,MFAE,ALUAE,MFBE,ALUBE,SRCE,MFBM;
	 wire [31:0] cmpA,cmpB;
	 wire [1:0] ForwardF;
	 wire [1:0] ForwardAD,ForwardBD;
	 wire [1:0] ForwardAE,ForwardBE;
	 wire       ForwardBM;
	 // stall signal
	 wire stall;
	 wire busyE;
	 wire const0=0,const1=1;
	 // exception data & signal
	 wire [31:0] ExcPCM,EPCM,CP0OutM,CP0OutW;
	 wire [4:0] ExcCodeF,ExcCodeD,ExcCodeE,ExcCodeM;
	 wire [4:0] ExcCode_F,ExcCode_D,ExcCode_E;
	 wire if_eretD,mtc0E,mfc0E,mtc0M,eretM,BDM,mfc0W;
	 wire intreq;
	 wire overflowE;
	  
	 // F - level
	 
	 assign pc4F = pcF + 4;
	 assign ExcCodeF = (in_pcF > 32'h4ffff || in_pcF < 32'h3000 || in_pcF[1:0] != 2'b00) ? `ADEL : `EXCINIT;
	 
	 MUX32_2 F_ms_pc (.in0(pc4F),.in1(npc),.sel(PCSrcD),.out(SelPCF));
	 
	 MUX32_3 F_mf_pc (.in0(SelPCF),.in1(MFBM),.in2(MFBE),.sel(ForwardF),.out(in_pcF));   // forward new EPC from M
	 
	 PC F_pc (.clk(clk),.en(!stall | intreq),.reset(reset),.in_pc(in_pcF),.pc(pcF));
	 			  
	 IM F_im (.pc(pcF),.instr(instrF));
	 
	 // F - D Pipeline Register
	 
	 PREG  F_D_IR (.clk(clk),.reset(reset | intreq | if_eretD),.en(!stall),.in(instrF)  ,.out(instrD))   ;  
	 PREG  F_D_PC (.clk(clk),.reset(reset | intreq | if_eretD),.en(!stall),.in(pc4F)    ,.out(pc4D))     ;
	 PREG5 F_D_EC (.clk(clk),.reset(reset | intreq | if_eretD),.en(!stall),.in(ExcCodeF),.out(ExcCode_F));
	 
	 // D - level
	
    assign PCSrcD = (if_beqD && zeroD)  | (if_bgezD && (zeroD || greatD)) 
						| (if_bgtzD&& greatD) | (if_blezD && (zeroD || lessD ))
						| (if_bltzD&& lessD)  | (if_bneD  && !zeroD)
						| if_jalD | if_jrD | if_jD | if_jalrD | if_eretD | intreq;
	 assign pc8D = pc4D + 4;
	 assign RsD = instrD[`Rs];
	 assign RtD = instrD[`Rt];
	 assign jr_pcD = MFAD;     
	 assign cmpA = MFAD;
	 assign if_branchD = if_beqD | if_bgezD | if_bgtzD | if_blezD | if_bltzD | if_bneD;
	 assign if_jumpD   = if_jrD  | if_jalrD ;
	 assign ExcCodeD   = (ExcCode_F != `EXCINIT) ? ExcCode_F :       // priority fix
							   (!RID) ? `RI : `EXCINIT; 
	 
	 GPR D_gpr (.clk(clk),.reset(reset),.WE(RegWriteW),.RA(instrD[`Rs]),.RB(instrD[`Rt]),
				   .RW(WriteRegW),.WD(WriteDataW),.pc(pcW),.BusA(BusAD),.BusB(BusBD));       
				  
	 EXT D_ext (.imm16(instrD[`IMM16]),.EXTOp(EXTOpD),.ext32(ext32D));
	 
	 MUX32_3 D_mf_cmp_a (.in0(BusAD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAD),.out(MFAD));   
	 
	 MUX32_3 D_mf_cmp_b (.in0(BusBD),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBD),.out(MFBD));    
	 
	 MUX32_2 D_ms_cmp_b (.in0(MFBD),.in1(0),.sel(if_bgezD | if_blezD),.out(cmpB));
	 
	 CMP D_cmp (.A(cmpA),.B(cmpB),.equal(zeroD),.great(greatD),.less(lessD));
	 
	 CONTROL D_controller (.instr(instrD)      ,.RegDst(RegDstD)    ,.RegWrite(RegWriteD),
								  .MemWrite(MemWriteD),.MemToReg(MemToRegD),.EXTOp(EXTOpD)      ,
								  .if_beq(if_beqD)    ,.if_bgez(if_bgezD)  ,.if_bgtz(if_bgtzD)  ,
								  .if_blez(if_blezD)  ,.if_bltz(if_bltzD)  ,.if_bne(if_bneD)    ,
								  .if_jal(if_jalD)    ,.if_jr(if_jrD)      ,.if_j(if_jD)        ,
								  .if_jalr(if_jalrD)  ,.if_eret(if_eretD)  ,.mdop(mdopD)        ,
								  .RI(RID)            ,.ALUSrc(ALUSrcD))   ;
								
	 NPC D_npc (.pc4(pc4D),.npc(npc),
				  .if_beq(if_beqD),.if_bgez(if_bgezD),.if_bgtz(if_bgtzD),
				  .if_blez(if_blezD),.if_bltz(if_bltzD),.if_bne(if_bneD),
				  .if_jal(if_jalD),.if_jr(if_jrD),.if_j(if_jD),
				  .if_jalr(if_jalrD),.if_eret(if_eretD),.intreq(intreq),
				  .zero(zeroD),.great(greatD),.less(lessD),
				  .jr_pc(jr_pcD),.offset(ext32D),.epc(EPCM),.instr(instrD));
	  
	 // D - E Pipeline Register
	 
	 PREG  D_E_IR   (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(instrD),.out(instrE));
	 PREG  D_E_PC   (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(pc8D),.out(pc8E));
	 PREG  D_E_BusA (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(MFAD),.out(BusAE));
	 PREG  D_E_BusB (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(MFBD),.out(BusBE));
	 PREG  D_E_Ext  (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(ext32D),.out(ext32E));
	 PREG5 D_E_EC   (.clk(clk),.reset(stall | reset | intreq),.en(const1),.in(ExcCodeD),.out(ExcCode_D));
	 
	 // E - level
	 
	 assign RdE = instrE[`Rd];
	 assign RsE = instrE[`Rs];
	 assign RtE = instrE[`Rt];
	 assign WriteRegE = (if_jalE) ? 5'b11111 : 
							  (RegDstE) ? instrE[`Rd] : instrE[`Rt];
	 assign ExcCodeE  = (ExcCode_D != `EXCINIT) ? ExcCode_D : 
							  (overflowE) ? `OV : `EXCINIT;
	 
	 MUX32_3 E_mf_alu_a (.in0(BusAE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardAE),.out(MFAE));    
	 
	 MUX32_2 E_ms_alu_a (.in0(MFAE),.in1(MFBE),.sel(shift_iE | shift_vE),.out(ALUAE));
	 
	 MUX32_3 E_mf_alu_b (.in0(BusBE),.in1(ForwardValue1),.in2(ForwardValue2),.sel(ForwardBE),.out(MFBE));
	 
	 MUX32_2 E_ms1_alu_b(.in0(MFBE),.in1(ext32E),.sel(ALUSrcE),.out(SRCE));
	 
	 assign ALUBE = (shift_iE) ? {27'b0,instrE[`SHAMT]} : 
						 (shift_vE) ? {27'b0,MFAE[4:0]}      : SRCE;
	 
	 ALU E_alu (.A(ALUAE),.B(ALUBE),.ALUOp(ALUOpE),.ALUOut(ALUOutE),.overflow(overflowE));
	 
	 MD  E_md  (.clk(clk)   ,.reset(reset),.A(MFAE)      ,.B(MFBE)    ,
				   .mthi(mthiE),.mtlo(mtloE) ,.start(startE),.MDOp(MDOpE),
					.busy(busyE),.hi(hiE)     ,.lo(loE)      ,.WD(MFAE)   ,.intreq(intreq))  ;
					
	 assign EXOutE = (mfhiE) ? hiE :                             // EXOut : the result of E level
						  (mfloE) ? loE : ALUOutE;
	 
	 CONTROL E_controller (.instr(instrE)      ,.RegDst(RegDstE)    ,.RegWrite(RegWriteE),
								  .MemWrite(MemWriteE),.MemToReg(MemToRegE),.ALUOp(ALUOpE)      ,
								  .shift_i(shift_iE)  ,.shift_v(shift_vE)  ,.if_jal(if_jalE)    ,
								  .start(startE)      ,.mthi(mthiE)        ,.mtlo(mtloE)        ,
								  .mfhi(mfhiE)        ,.mflo(mfloE)        ,.MDOp(MDOpE)        ,
								  .if_mfc0(mfc0E)     ,.if_mtc0(mtc0E)     ,.ALUSrc(ALUSrcE))   ;
								
	 // E - M Pipeline Register
	 
	 PREG  E_M_IR (.clk(clk),.reset(reset | intreq),.en(const1),.in(instrE),.out(instrM));
	 PREG  E_M_PC (.clk(clk),.reset(reset | intreq),.en(const1),.in(pc8E),.out(pc8M));
	 PREG  E_M_EO (.clk(clk),.reset(reset | intreq),.en(const1),.in(EXOutE),.out(EXOutM));
	 PREG  E_M_WM (.clk(clk),.reset(reset | intreq),.en(const1),.in(MFBE),.out(WriteMemoryM));
	 PREG5 E_M_EC (.clk(clk),.reset(reset | intreq),.en(const1),.in(ExcCodeE),.out(ExcCode_E));
	 
	 // M - level
	 
	 assign pcM = (pc8M == 0) ? 0 : pc8M - 8;
	 assign RdM = instrM[`Rd];
	 assign RsM = instrM[`Rs];
	 assign RtM = instrM[`Rt];
	 assign WriteRegM = (if_jalM) ? 5'b11111:
							  (RegDstM) ? instrM[`Rd] : instrM[`Rt];
	 assign ForwardValue2 = (if_jalM | if_jalrM) ? pc8M : EXOutM;
	 assign loadM    = lwM | lhM | lhuM | lbM | lbuM;
	 assign storeM   = swM | shM | sbM;
	 assign ExcCodeM = (ExcCode_E != `EXCINIT) ? ExcCode_E :
							 (storeM) ? 
								 ((((EXOutM > 32'h2fff & EXOutM < 32'h7f00) 
								   |(EXOutM > 32'h7f07 & EXOutM < 32'h7f10) 
								   | EXOutM > 32'h7f17)  
	                        |((swM & (EXOutM % 4 != 0)) | shM & (EXOutM % 2 != 0))
									|((shM | sbM) & (EXOutM >= 32'h7f00))) ? 
										`ADES : ExcCode_E) :
							 (loadM) ?
								 ((((EXOutM > 32'h2fff & EXOutM < 32'h7f00) 
								   |(EXOutM > 32'h7f0b & EXOutM < 32'h7f10) 
								   | EXOutM > 32'h7f1b)  
	                        |((lwM & (EXOutM % 4 != 0)) | ((lhM | lhuM) & (EXOutM % 2 != 0)))
									|((lhM | lhuM | lbM | lbuM) & (EXOutM >= 32'h7f00))) ? 
										`ADEL : ExcCode_E) :	`EXCINIT;
	 assign ExcPCM = (pcM >= 32'h3000 & pcM <=32'h4fff) ? pcM :
						  (pc8E >= 32'h3000 & pc8E <=32'h4fff) ? (pc8E - 8) : 
						  (pc8D >= 32'h3000 & pc8D <=32'h4fff) ? (pc8D - 8) : 0;  ////////
	 
	 assign WEM    = MemWriteM & (EXOutM >= 32'h0) & (EXOutM <= 32'h2fff) & (ExcCodeM != `ADES);
						 									
	 MUX32_2 M_mf_dm_wd (.in0(WriteMemoryM),.in1(ForwardValue1),.sel(ForwardBM),.out(MFBM));
	 
	 DM M_dm (.clk(clk)     ,.reset(reset),.sw(swM)     ,.sh(shM),.sb(sbM)    ,
	          .WE(WEM),.WD(MFBM)    ,.addr(EXOutM),.pc(pcM),.RD(DMOutM));  
				
	 CP0 M_cp0 (.clk(clk)       ,.reset(reset)   ,.Din(MFBM)        ,.PC(ExcPCM)    ,  /// CP0 new
					.A1(instrM[`Rd]),.A2(instrM[`Rd]),.ExcCode(ExcCodeM),.WE(mtc0M)     ,
					.EXLSet(intreq) ,.EXLClr(eretM)  ,.BDSet(BDM)       ,.intreq(intreq),
					.EPC(EPCM)      ,.DOut(CP0OutM)  ,.HWInt(HWInt))    ;
				
	 CONTROL M_controller (.instr(instrM)      ,.RegDst(RegDstM)     ,.RegWrite(RegWriteM),
								  .MemWrite(MemWriteM),.MemToReg(MemToRegM) ,.if_jal(if_jalM)    ,
								  .if_jalr(if_jalrM)  ,.if_sw(swM)          ,.if_sh(shM)         ,
								  .if_sb(sbM)         ,.if_lw(lwM)          ,.if_lh(lhM)         ,
								  .if_lhu(lhuM)       ,.if_lb(lbM)          ,.if_lbu(lbuM)       ,
								  .if_mfc0(mfc0M)     ,.if_mtc0(mtc0M)      ,.if_eret(eretM))    ;
	 
	 assign PrWD   = MFBM;
	 assign PrAddr = EXOutM;
	 assign CPUWE  = MemWriteM;
	 assign DataM  = (EXOutM >= 32'h0 & EXOutM <= 32'h2fff) ? DMOutM : PrRD; //////choice modify
	 
	 // M - W Pipeline Register
	 
	 PREG  M_W_IR (.clk(clk),.reset(reset | intreq),.en(const1),.in(instrM) ,.out(instrW)) ;
	 PREG  M_W_PC (.clk(clk),.reset(reset | intreq),.en(const1),.in(pc8M)   ,.out(pc8W))   ;
	 PREG  M_W_DO (.clk(clk),.reset(reset | intreq),.en(const1),.in(DataM)  ,.out(DataW))  ;
	 PREG  M_W_AO (.clk(clk),.reset(reset | intreq),.en(const1),.in(EXOutM) ,.out(EXOutW)) ;
	 PREG  M_W_CP (.clk(clk),.reset(reset | intreq),.en(const1),.in(CP0OutM),.out(CP0OutW));
	 
	 // W - level
	 
	 assign pcW = pc8W - 8;
	 
	 assign WriteRegW = (if_jalW) ? 5'b11111 :
							  (RegDstW) ? instrW[`Rd] : instrW[`Rt];
	 assign ForwardValue1 = WriteDataW;
	 
	 DMEXT W_dmext(.A(EXOutW[1:0]),.Din(DataW),.Op(DMEXTOpW),.DOut(DOutW));
	
    MUX32_2 W_ms_pc (.in0(EXOutW),.in1(pc8W),.sel(if_jalW | if_jalrW),.out(src0W));
	 
	 MUX32_2 W_ms_dm (.in0(src0W),.in1(DOutW),.sel(MemToRegW),.out(src1W));

	 MUX32_2 W_ms_cp (.in0(src1W),.in1(CP0OutW),.sel(mfc0W),.out(WriteDataW));

	 CONTROL W_controller (.instr(instrW)      ,.RegWrite(RegWriteW),.RegDst(RegDstW)  ,
								  .MemWrite(MemWriteW),.MemToReg(MemToRegW),.DMEXTOp(DMEXTOpW),
								  .if_jal(if_jalW)    ,.if_jalr(if_jalrW)  ,.if_mfc0(mfc0W)   ,.delay_bd(BDM));
								  
	 // Hazard
	 
	 HAZARD hazard (.D_Rs(RsD),.D_Rt(RtD) ,.D_ALUSrc(ALUSrcD)       ,.D_branch(if_branchD) ,.D_jump(if_jumpD)     ,
						 .D_mdop(mdopD)        ,.E_Rd(RdE)               ,.M_Rd(RdM)            ,
				       .E_Rs(RsE),.E_Rt(RtE) ,.E_WriteEnable(RegWriteE),.E_MemToReg(MemToRegE),.E_WriteReg(WriteRegE),
						 .M_Rs(RsM),.M_Rt(RtM) ,.M_WriteEnable(RegWriteM),.M_MemToReg(MemToRegM),.M_WriteReg(WriteRegM),
						 .W_WriteEnable(RegWriteW),.W_WriteReg(WriteRegW),.ForwardF(ForwardF)   ,.ForwardBM(ForwardBM) ,
						 .ForwardAD(ForwardAD) ,.ForwardBD(ForwardBD)    ,.ForwardAE(ForwardAE) ,.ForwardBE(ForwardBE) ,
						 .Stall(stall)         ,.busy(busyE)             ,.start(startE)        ,.D_eret(if_eretD)     ,
						 .E_mtc0(mtc0E)        ,.E_mfc0(mfc0E)           ,.M_mfc0(mfc0M)        ,.M_mtc0(mtc0M)       );


endmodule
