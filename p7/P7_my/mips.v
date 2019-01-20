`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:46 12/27/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 
	 wire [31:0] PrRD,PrAddr,PrWD,Dout0,Dout1,DEV0_WD,DEV1_WD;
	 wire [5:0]  HWInt;
	 wire [3:2]  addr;
	 wire        CPUWE,IRQ0,IRQ1,WE0,WE1;
	 
	 CPU cpu       (.clk(clk)        ,.reset(reset)   ,.PrRD(PrRD)    ,.HWInt(HWInt)  ,
						 .PrAddr(PrAddr)  ,.PrWD(PrWD)     ,.CPUWE(CPUWE)  );
	 
	 BRIDGE bridge (.PrAddr(PrAddr)  ,.PrWD(PrWD)     ,.DEV0_RD(Dout0),.DEV1_RD(Dout1),
						 .IRQ0(IRQ0)      ,.IRQ1(IRQ1)     ,.CPUWE(CPUWE)  ,.DEV_Addr(addr),
						 .PrRD(PrRD)      ,.HWInt(HWInt)   ,.WEDEV0(WE0)   ,.WEDEV1(WE1)   ,
						 .DEV0_WD(DEV0_WD),.DEV1_WD(DEV1_WD));
	 
	 COCO coco0    (.clk(clk)        ,.reset(reset)   ,.addr(addr)    ,.WE(WE0)       ,
					    .Din(DEV0_WD)    ,.Dout(Dout0)    ,.IRQ(IRQ0)     );
	 
	 COCO coco1    (.clk(clk)        ,.reset(reset)   ,.addr(addr)    ,.WE(WE1)       ,
						 .Din(DEV1_WD)    ,.Dout(Dout1)    ,.IRQ(IRQ1)     );


endmodule
