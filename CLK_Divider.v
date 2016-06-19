`timescale 1ns / 1ps
module CLK_Divider(
	 input clk,
	 output clk1hz
    );
	reg [11:0] counter;
	reg clk1hz_buff;
	parameter 
	counter_limit = 13'hc35;

	assign clk1hz = clk1hz_buff;

	always @(posedge clk)
	begin 

	counter = counter +1;

	if(counter == (counter_limit/2))
	begin
		clk1hz_buff = !clk1hz_buff;
		counter = 12'h0;
	end
	end
	
	initial
	begin
		counter =0;
		clk1hz_buff =0;
	end

endmodule
