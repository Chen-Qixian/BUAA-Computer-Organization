`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:19 12/04/2017 
// Design Name: 
// Module Name:    HAZARD 
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
module HAZARD(
    input [4:0] D_Rs,
    input [4:0] D_Rt,
	 input       D_ALUSrc,
    input 		 D_branch,
    input		 D_jump,
	 input       D_eret,
	 input [4:0] E_Rd,
    input [4:0] E_Rs,
    input [4:0] E_Rt,
    input 		 E_WriteEnable,
	 input 		 E_MemToReg,
    input [4:0] E_WriteReg,
	 input       E_mfc0,
	 input       E_mtc0,
	 input [4:0] M_Rd,
    input [4:0] M_Rs,
    input [4:0] M_Rt,
    input 		 M_WriteEnable,
    input [4:0] M_WriteReg,
    input 		 M_MemToReg,
	 input       M_mfc0,
	 input       M_mtc0,
    input 		 W_WriteEnable,
    input [4:0] W_WriteReg,
	 input       busy,
	 input       start,
	 input       D_mdop,
    
	 output [1:0] ForwardF,
	 output [1:0] ForwardAD,
    output [1:0] ForwardBD,
    output [1:0] ForwardAE,
    output [1:0] ForwardBE,
	 output ForwardBM,
    output Stall
    );
	 
	 //Forward
	 
	 assign ForwardF  = (D_eret & E_mtc0 & (E_Rd == 5'd14)) ? 2 : 
							  (D_eret & M_mtc0 & (M_Rd == 5'd14)) ? 1 : 0;
	 
	 assign ForwardAD = (M_WriteEnable & (D_Rs != 0) & (M_WriteReg == D_Rs)) ? 2 :
							  (W_WriteEnable & (D_Rs != 0) & (W_WriteReg == D_Rs)) ? 1 : 0;
	 assign ForwardBD = (M_WriteEnable & (D_Rt != 0) & (M_WriteReg == D_Rt)) ? 2 :
							  (W_WriteEnable & (D_Rt != 0) & (W_WriteReg == D_Rt)) ? 1 : 0;
	 
	 assign ForwardAE = (M_WriteEnable & (E_Rs != 0) & (M_WriteReg == E_Rs)) ? 2 :
							  (W_WriteEnable & (E_Rs != 0) & (W_WriteReg == E_Rs)) ? 1 : 0;
	 
	 assign ForwardBE = (M_WriteEnable & (E_Rt != 0) & (M_WriteReg == E_Rt)) ? 2 :
							  (W_WriteEnable & (E_Rt != 0) & (W_WriteReg == E_Rt)) ? 1 : 0; 
	 
	 assign ForwardBM = (W_WriteEnable & (M_Rt != 0) & (W_WriteReg == M_Rt)) ? 1 : 0;
	 
	 //Stall
				
	 wire Stall_load,Stall_branch,Stall_jump,Stall_md,Stall_mfc0;            
	 
    // update data at M - level    
	 
	 assign Stall_load = (E_MemToReg & ((E_Rt == D_Rs) | (E_Rt == D_Rt & !D_ALUSrc)));   // modify to be faster
	 
	 assign Stall_mfc0 = (E_mfc0     & ((E_Rt == D_Rs) | (E_Rt == D_Rt & !D_ALUSrc)));
	 
	 // use data at D - level while new data has not come
	 
	 assign Stall_branch  = (D_branch & E_WriteEnable & (E_WriteReg != 0) & (E_WriteReg == D_Rs | E_WriteReg == D_Rt)) |
									(D_branch & M_MemToReg    & (M_WriteReg != 0) & (M_WriteReg == D_Rs | M_WriteReg == D_Rt)) |
									(D_branch & M_mfc0        & (M_WriteReg != 0) & (M_WriteReg == D_Rs | M_WriteReg == D_Rt)) ;
						
	 assign Stall_jump    = (D_jump   & E_WriteEnable & (E_WriteReg != 0) & (E_WriteReg == D_Rs)) |
								   (D_jump   & M_MemToReg    & (M_WriteReg != 0) & (M_WriteReg == D_Rs)) |
									(D_jump   & M_mfc0        & (M_WriteReg != 0) & (M_WriteReg == D_Rs)) ;
									
	 assign Stall_md      = ((busy | start) & D_mdop) ;
	 
	 assign Stall = Stall_load | Stall_branch | Stall_jump | Stall_md | Stall_mfc0 ;


endmodule
