`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:17:17 12/27/2017 
// Design Name: 
// Module Name:    COCO 
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
`define CTRL   2'b00
`define PRESET 2'b01
`define COUNT  2'b10
module COCO(
    input clk,
    input reset,
    input [3:2] addr,
    input WE,
    input [31:0] Din,
    output [31:0] Dout,
    output IRQ
    );
	 
	 reg [31:0] ctrl,preset,count;
	 
	 initial begin
		ctrl   = 32'b0;
		preset = 32'b0;
		count  = 32'b0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			ctrl   = 32'b0;
			preset = 32'b0;
			count  = 32'b0;
		end
		else if (WE) begin
			case (addr) 
				`CTRL:
					begin
						ctrl[3:0] = Din[3:0];
						count     = preset;
					end
				`PRESET:
					begin
						preset = Din;
						count  = Din;
					end
				default:
					begin

					end
			endcase
		end
		else begin
			if (ctrl[2:1] == 2'b00) begin
				if(ctrl[0]) begin
					if (count > 0) begin
						count = count - 1;
					end
					else begin
						ctrl[0] = 0;
					end
				end
			end
			else if (ctrl[2:1] == 2'b01) begin
				if	(ctrl[0]) begin
					if (count > 0) begin
						count = count - 1;
					end
					else begin
						count = preset;
					end
				end
			end
		end
	 end
	 
	 assign IRQ  = (count == 0) & ctrl[3];
	 
	 assign Dout = (addr == `CTRL) ? ctrl :
						(addr == `PRESET) ? preset :
						(addr == `COUNT) ? count : 0;


endmodule
