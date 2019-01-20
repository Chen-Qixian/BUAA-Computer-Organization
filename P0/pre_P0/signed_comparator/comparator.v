`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:42:50 10/20/2017 
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
	 reg out;
	 wire a [3:0],b [3:0];
	 assign {a[3],a[2],a[1],a[0]} = A;
	 assign {b[3],b[2],b[1],b[0]} = B;
	 assign Out = out;
	 
	 always @* begin
		case ({a[3],b[3]}) 
			2'b00:
				if(a[2] && !b[2]) begin
					out <= 1'b1;
				end
				else begin
					if(a[2] == b[2]) begin
						if(a[1] && !b[1]) begin
							out <= 1'b1;
						end
						else begin
							if (a[1] == b[1]) begin
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
			2'b01:
				out <= 1'b1;
			2'b10:
				out <= 1'b0;
			2'b11:
				
				if(!a[2] && b[2]) begin
					out <= 1'b1;
				end
				else begin
					if(a[2] == b[2]) begin
						if(!a[1] && b[1]) begin
							out <= 1'b1;
						end
						else begin
							if (a[1] == b[1]) begin
								if(!a[0] && b[0]) begin
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
		endcase
	 end
endmodule
