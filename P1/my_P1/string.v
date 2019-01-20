`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:53:30 11/03/2017 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	 
	 reg o;
	 
	 reg [1:0] state=0;
	 
	 initial begin
		o = 0;
	 end
	 
	 assign out = o;
	 
	 always @(posedge clk,posedge clr) begin
		if (clr) begin
			state <= 0;
			o <= 0;
		end
		else begin
			case (state)
				0:
					begin
						if (in >= "0" && in <= "9") begin
							state <= 1;
							o <= 1;
						end
						else begin
							state <= 3;
							o <= 0;
						end
					end
				1:
					begin
						if (in >= "0" && in <= "9") begin
							state <= 3;
							o <= 0;
						end				
						else if (in == "+" || in == "*") begin
							state <= 2;
							o <= 0;
						end
						else begin
							state <= 3;
							o <= 0;
						end
					end
				2:
					begin
						if (in >= "0" && in <= "9") begin
							state <= 1;
							o <= 1;
						end
						else if (in == "+" ||in == "*") begin
							state <=3;
							o <= 0;
						end
					end
				3:
					begin
						state <= 3;
						o <= 0;
					end
			endcase
		end
	 end


endmodule
