`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:54 11/13/2017 
// Design Name: 
// Module Name:    CONTROLLER 
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
module CONTROLLER(
    input [31:0] instr,
    output RegDst,
    output AluSrc,
    output MemToReg,
    output GPR_Write,
    output DM_Write,
    output beq,
    output bgtz,
    output jal,
    output jr,
    output SignExt,
    output LuiExt,
    output [2:0] ALUOp
    );
	 
	 wire [5:0] Opcode,Func;
	 wire ori,lw,sw,Beq,Bgtz,Jal,Jr,addu,subu,lui,sll;
	 
	 assign Opcode = instr[31:26];
	 assign Func = instr[5:0];
	 assign ori = (Opcode == 6'b001101);
	 assign lw = (Opcode == 6'b100011);
	 assign sw = (Opcode == 6'b101011);
	 assign Beq = (Opcode == 6'b000100);
	 assign Bgtz = (Opcode == 6'b000111);
	 assign Jal = (Opcode == 6'b000011);
	 assign Jr = ((Opcode == 6'b0) && (Func == 6'b001000));
	 assign addu = ((Opcode == 6'b0) && (Func == 6'b100001));
	 assign subu = ((Opcode == 6'b0) && (Func == 6'b100011));
	 assign lui = (Opcode == 6'b001111);
	 assign sll = ((Opcode == 6'b0) && (Func == 6'b0));
	 
	 assign RegDst = addu | subu | sll;
	 assign AluSrc = ori | lw | sw | lui;
	 assign MemToReg = lw;
	 assign GPR_Write = ori | lw | addu | subu | lui | sll;        //capital letter GPR
	 assign DM_Write = sw;
	 assign beq = Beq;
	 assign bgtz = Bgtz;
	 assign jal = Jal;
	 assign jr = Jr;
	 assign SignExt = lw | sw | Beq | Bgtz;                        //capital letter Ext
	 assign LuiExt = lui;
	 assign ALUOp[2] = 0;
	 assign ALUOp[1] = ori;
	 assign ALUOp[0] = subu;


endmodule
