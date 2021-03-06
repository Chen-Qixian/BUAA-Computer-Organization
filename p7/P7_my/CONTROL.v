`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:01 12/04/2017 
// Design Name: 
// Module Name:    CONTROL 
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
module CONTROL(
    input [31:0] instr,
    output RegDst,
    output RegWrite,
    output ALUSrc,
    output MemWrite,
    output MemToReg,
    output [1:0] EXTOp,
    output [3:0] ALUOp,
	 output [2:0] DMEXTOp,
    output if_beq,
	 output if_bgez,
	 output if_bgtz,
	 output if_blez,
	 output if_bltz,
	 output if_bne,
    output if_jal,
    output if_jr,
	 output if_j,
	 output if_jalr,
	 output if_sw,
	 output if_sh,
	 output if_sb,
	 output if_lw,
	 output if_lh,
	 output if_lhu,
	 output if_lb,
	 output if_lbu,
	 output if_mtc0,
	 output if_mfc0,
	 output if_eret,
	 output shift_i,
	 output shift_v,
	 output start,
	 output mthi,
	 output mtlo,
	 output mfhi,
	 output mflo,
	 output mdop,
	 output [1:0] MDOp,
	 output delay_bd,
	 output RI
    );
	 
	 wire [5:0] OpCode,Func,Func2,Func3;
	 wire add,addu,And,Nor,Or,sub,subu,Xor;
	 wire addi,addiu,andi,lui,ori,xori;
	 wire beq,blez,bltz,bgez,bgtz,bne;
	 wire jal,jr,j,jalr;
	 wire slt,sltu,slti,sltiu;
	 wire sll,sllv,sra,srav,srl,srlv;
	 wire lw,lh,lhu,lb,lbu;
	 wire sw,sh,sb;
	 wire multu,mult,divu,div;
	 wire mfc0,mtc0,eret;

	 assign OpCode = instr[31:26];
	 assign Func3  = instr[25:21];
	 assign Func2  = instr[20:16];
	 assign Func   = instr[5:0];

// And Gate	
    assign add  = ((OpCode == 6'b0) & (Func == 6'b100000)); 
	 assign addu = ((OpCode == 6'b0) & (Func == 6'b100001));
	 assign And  = ((OpCode == 6'b0) & (Func == 6'b100100));
	 assign Nor  = ((OpCode == 6'b0) & (Func == 6'b100111));
	 assign Or   = ((OpCode == 6'b0) & (Func == 6'b100101));
	 assign sub  = ((OpCode == 6'b0) & (Func == 6'b100010));
	 assign subu = ((OpCode == 6'b0) & (Func == 6'b100011));
	 assign Xor  = ((OpCode == 6'b0) & (Func == 6'b100110));
	 
	 assign addi = (OpCode == 6'b001000);
	 assign addiu= (OpCode == 6'b001001);
	 assign andi = (OpCode == 6'b001100);
	 assign lui  = (OpCode == 6'b001111);
	 assign ori  = (OpCode == 6'b001101);
	 assign xori = (OpCode == 6'b001110);
	 
	 assign beq  =  (OpCode == 6'b000100);
	 assign bgez = ((OpCode == 6'b000001) & (Func2 == 5'b00001));
	 assign bgtz =  (OpCode == 6'b000111);
	 assign blez =  (OpCode == 6'b000110);
	 assign bltz = ((OpCode == 6'b000001) & (Func2 == 5'b00000));
	 assign bne  =  (OpCode == 6'b000101);
	 
	 assign j   = (OpCode == 6'b000010);
	 assign jal = (OpCode == 6'b000011);
	 assign jr  = ((OpCode == 6'b0) & (Func == 6'b001000));
	 assign jalr= ((OpCode == 6'b0) & (Func == 6'b001001));
	 
	 assign slt  = ((OpCode == 6'b0) & (Func == 6'b101010));
	 assign sltu = ((OpCode == 6'b0) & (Func == 6'b101011));
	 assign slti = (OpCode == 6'b001010);
	 assign sltiu= (OpCode == 6'b001011);
	 
	 assign sll  = ((OpCode == 6'b0) & (Func == 6'b000000));
	 assign sllv = ((OpCode == 6'b0) & (Func == 6'b000100));
	 assign sra  = ((OpCode == 6'b0) & (Func == 6'b000011));
	 assign srav = ((OpCode == 6'b0) & (Func == 6'b000111));
	 assign srl  = ((OpCode == 6'b0) & (Func == 6'b000010));
	 assign srlv = ((OpCode == 6'b0) & (Func == 6'b000110));
	 
	 assign lw  = (OpCode == 6'b100011);
	 assign lh  = (OpCode == 6'b100001);
	 assign lhu = (OpCode == 6'b100101);
	 assign lb  = (OpCode == 6'b100000);
	 assign lbu = (OpCode == 6'b100100);
	 
	 assign sw  = (OpCode == 6'b101011);
	 assign sh  = (OpCode == 6'b101001);
	 assign sb  = (OpCode == 6'b101000);
	 
	 assign multu = ((OpCode == 6'b0) & (Func == 6'b011001));
	 assign mult  = ((OpCode == 6'b0) & (Func == 6'b011000));
	 assign divu  = ((OpCode == 6'b0) & (Func == 6'b011011));
	 assign div   = ((OpCode == 6'b0) & (Func == 6'b011010));
	 
	 assign mfhi  = ((OpCode == 6'b0) & (Func == 6'b010000));
	 assign mflo  = ((OpCode == 6'b0) & (Func == 6'b010010));
	 assign mthi  = ((OpCode == 6'b0) & (Func == 6'b010001));
	 assign mtlo  = ((OpCode == 6'b0) & (Func == 6'b010011));
	 
	 assign mfc0  = ((OpCode == 6'b010000) & (Func3 == 5'b00000));
	 assign mtc0  = ((OpCode == 6'b010000) & (Func3 == 5'b00100));
	 assign eret  = ((OpCode == 6'b010000) & (Func == 6'b011000));

// Or Gate	 
	 assign RegDst   = add  | addu | And | Nor  | Or  | sub | subu | Xor | jalr 
						  | slt  | sltu | sll |sllv  |sra  | srl | srav |srlv | mfhi | mflo;
	 assign RegWrite = add  | addu | And | Nor  | Or  | sub | subu | Xor 
						  | addi | addiu| andi| lui  | ori | xori 
						  | jal  | jalr | slt | sltu | slti| sltiu
						  | sll  | sllv | sra | srav | srl | srlv
						  | lw   | lh   | lhu | lb   | lbu | mfhi | mflo | mfc0;
	 assign ALUSrc   = addi | addiu|andi | lui  | ori | xori 
						  | lw   | lh   | lhu | lb   | lbu 
						  | sw   | sh   | sb  |slti  | sltiu;
	 assign MemWrite = sw   | sh   | sb;
	 assign MemToReg = lw   | lh   | lhu | lb   | lbu;
	 
	 assign EXTOp[1] = lui;
	 assign EXTOp[0] = addi| addiu 
						  | beq | bgez | bgtz| blez | bltz | bne
					     | sw  | sh   | sb  | slti | sltiu
						  | lw  | lh   | lhu | lb   | lbu;
	 assign ALUOp[3] = sll | sllv | sra | srav | srl  | srlv  | add   | sub  | addi;
	 assign ALUOp[2] = Nor | Xor  | xori| slt  | slti | sltiu | sltu  | sub  ;
	 assign ALUOp[1] = And | Or   | andi| ori  | slt  | slti  | sltiu | sltu | sra | srav | add | addi;
	 assign ALUOp[0] = And | Nor  | subu| andi | sltiu| sltu  | srl   | srlv | add | addi;
	 assign DMEXTOp[2] = lh;
	 assign DMEXTOp[1] = lhu | lb;
	 assign DMEXTOp[0] = lhu | lbu;
	 
	 assign if_beq   = beq;
	 assign if_bgez  = bgez;
	 assign if_bgtz  = bgtz;
	 assign if_blez  = blez;
	 assign if_bltz  = bltz;
	 assign if_bne   = bne;
	 assign if_jal   = jal;
	 assign if_jr    = jr;
	 assign if_j     = j;
	 assign if_jalr  = jalr;
	 assign if_sw    = sw;
	 assign if_sh    = sh;
	 assign if_sb    = sb;
	 assign if_lw    = lw;
	 assign if_lh    = lh;
	 assign if_lhu   = lhu;
	 assign if_lb    = lb;
	 assign if_lbu   = lbu;
	 
	 assign shift_i  = sll  | srl  | sra;
	 assign shift_v  = sllv | srlv | srav;
	 
	 assign start    = multu| mult | divu | div;
	 assign mdop     = multu| mult | divu | div | mtlo | mthi | mflo | mfhi;
	 assign MDOp[1]  = divu | div;
	 assign MDOp[0]  = mult | div;
	 
	 assign if_eret  = eret;
    assign if_mtc0  = mtc0;
    assign if_mfc0  = mfc0;
	 
	 assign delay_bd = beq  | bgez | bgtz | blez | bltz | bne  | jal  | jr   | j    | jalr;
	 assign RI       = add  | addu | And  | Nor  | Or   | sub  | subu | Xor  | addi | addiu
	                 | andi | lui  | ori  | xori | beq  | blez | bltz | bgez | bgtz | bne
						  | jal  | jr   | j    | jalr | slt  | sltu | slti | sltiu| sll  | sllv
						  | sra  | srav | srl  | srlv | lw   | lh   | lhu  | lb   | lbu  | sw
						  | sh   | sb   | multu| mult | divu | div  | mfhi | mflo | mthi | mtlo
						  | mfc0 | mtc0 | eret;
	 

endmodule
