`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:15 11/25/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input clk,
    input reset,
    input WE,	 				 //Memory Write Enable
	 input sw,
	 input sh,
	 input sb,
    input [31:0] WD,        //data of writing memory :from gpr[rt] or part of gpr[rt](sb,sh)
    input [31:0] addr,
	 input [31:0] pc,
    output [31:0] RD
    );
	 
	 reg [31:0] dm [1023:0];
//	 wire [31:0] half1,half2,byte1,byte2,byte3,byte4;

	 integer i;
	 
	 assign RD = dm[addr[11:2]];
	 
	 initial begin
		for(i = 0;i < 1024;i = i + 1) begin
			dm[i] = 0;
		end
	 end
	 
	 always @ (posedge clk) begin
		if(reset) begin
			for(i = 0;i < 1024;i = i + 1) begin
				dm[i] = 0;
			end
		end		
		else begin
			if(WE) begin
				if (sw) begin
					dm[addr[11:2]] = WD;
				end
				else if (sh) begin
					if (addr[1]) begin
						dm[addr[11:2]][31:16] = WD[15:0]; 
					end
					else begin
						dm[addr[11:2]][15:0]  = WD[15:0];
					end
				end
				else if (sb) begin
					case (addr[1:0]) 
						2'b00:
							begin
								dm[addr[11:2]][7:0]   = WD[7:0];
							end
						2'b01:
							begin
								dm[addr[11:2]][15:8]  = WD[7:0];
							end
						2'b10:
							begin
								dm[addr[11:2]][23:16] = WD[7:0];
							end
						2'b11:
							begin
								dm[addr[11:2]][31:24] = WD[7:0];
							end
						default:
							dm[addr[11:2]] = 0;
					endcase	
				end
				$display("@%h: *%h <= %h",pc,addr,WD);
			end
		end
	 end
	 

endmodule
