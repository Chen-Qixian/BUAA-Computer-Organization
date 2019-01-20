`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:52:34 12/17/2017 
// Design Name: 
// Module Name:    MD 
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
`define MULTU 2'b00
`define MULT  2'b01
`define DIVU  2'b10
`define DIV   2'b11
module MD(
    input [31:0] A,
    input [31:0] B,
	 input [31:0] WD,
	 input mthi,
	 input mtlo,
    input clk,
    input reset,
    input start,
    input [1:0] MDOp,
    output reg busy,
    output reg [31:0] hi,
	 output reg [31:0] lo
    );
	 
	 integer cnt;
	 reg [63:0] prod;
	 
	 initial begin
		cnt = 0;
		hi  = 0;
		lo  = 0;
		busy= 0;
	 end
	 
	 always @(posedge clk) begin
		if(reset) begin
			hi = 0;
			lo = 0;
			cnt = 0;
    		busy = 0;
		end
		
		else if(start) begin
			case (MDOp)
				`MULTU:
					begin
						cnt = 4;
						prod= A * B;
						hi  = prod[63:32];
						lo  = prod[31:0] ;
					end
				`MULT:
					begin
						cnt = 4;
						prod= $signed(A) * $signed(B);
						hi  = prod[63:32];
						lo  = prod[31:0] ;
					end
				`DIVU:
					begin
						cnt = 9;
						hi  = A % B;
						lo  = A / B;
					end
				`DIV:
					begin
						cnt = 9;
						hi  = $signed(A) % $signed(B);
						lo  = $signed(A) / $signed(B);
					end
				 default:
					begin
						hi = 0;
						lo = 0;
						cnt = 0;
						busy = 0;
					end
			endcase
			busy = 1;
		end
		
		else if(mthi) begin
			hi = WD;
		end
		
		else if(mtlo) begin
			lo = WD;
		end
		
	   if(cnt > 0) begin
			cnt = cnt - 1;	
		end
		else begin
			busy = 0;
		end
	 end


endmodule
