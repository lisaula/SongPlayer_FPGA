`timescale 1ns / 1ps
module Main(
	input clk50Mghz,
	input c,
	output [3:0] data
    );
	 
	reg[14:0] address;
	wire clk_c;
	wire clk_s;
	reg temp;
	assign clk_s = temp;
	CLK_Divider #(.counter_limit(13'hc35))clk(.clk(clk50Mghz),.clk1hz(clk_c));

	Rom_MarioSong rom(address,data);

	always @(posedge clk_s)
	begin
		if(address < 25629)
		begin
			address = address+1;
		end
		else begin
		address =0;
		end
	end

	always @(posedge clk50Mghz)
	begin
		if(c)
		begin
			temp = clk_c;
		end
		else
		begin
			temp = 0;
		end	
	end
	
	initial
	begin
		address =0;
		temp =0;
	end
endmodule
