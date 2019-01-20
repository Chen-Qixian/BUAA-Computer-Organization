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
`define MULTU 3'b000
`define MULT  3'b001
`define DIVU  3'b010
`define DIV   3'b011
`define MADD  3'b100
`define MSUB  3'b101
`define MADDU 3'b110
`define MSUBU 3'b111
module MD(
    input [31:0] A,
    input [31:0] B,
	 input [31:0] WD,
	 input mthi,
	 input mtlo,
    input clk,
    input reset,
    input start,
    input [2:0] MDOp,
    output reg busy,
    output reg [31:0] hi,
	 output reg [31:0] lo
    );
	 
	 integer cnt;
	 reg [63:0] prod,temp;
	 
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
				 `MADD:
					begin
						cnt = 4;
						prod= $signed(A) * $signed(B);
						temp= {hi,lo} + prod;
                  {hi,lo} = temp;						
					end
				 `MSUB:
					begin
						cnt = 4;
						prod= $signed(A) * $signed(B);
						temp= {hi,lo} - prod;
                  {hi,lo} = temp;
					end
				 `MADDU:
					begin
						cnt = 4;
						prod= A * B;
						temp= {hi,lo} + prod;
                  {hi,lo} = temp;
					end
				 `MSUBU:
					begin
						cnt = 4;
						prod= A * B;
						temp= {hi,lo} + prod;
                  {hi,lo} = temp;
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
