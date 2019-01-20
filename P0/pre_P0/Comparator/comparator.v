`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:09 10/20/2017 
// Design Name: 
// Module Name:    comparator 
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
module comparator(
    input [3:0] A,
    input [3:0] B,
    output Out
    );
	 wire a [3:0],b [3:0];
	 reg out;
	 assign {a[3],a[2],a[1],a[0]} = A;
	 assign {b[3],b[2],b[1],b[0]} = B;
	 always @* begin
		if(a[3]&&!b[3]) begin
			out <= 1'b1;
		end
		else begin
			if(a[3] == b[3]) begin
				if(a[2] && !b[2]) begin
					out <= 1'b1;
				end
				else begin
					if(a[2] == b[2]) begin
						if(a[1] && !b[1]) begin
							out <=1'b1;
						end
						else begin
							if(a[1] == b[1]) begin
								if(a[0] && !b[0]) begin
									out <= 1'b1;
								end
								else begin
									out <= 1'b0;
								end
							end
							else begin
								out <= 1'b0;
							end
						end
					end
					else begin
						out <= 1'b0;
					end
				end
			end
			else begin
				out <= 1'b0;
			end
		end
	 end
	 assign Out = out;

endmodule
