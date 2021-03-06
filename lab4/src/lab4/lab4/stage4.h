#ifndef STAGE4_H
#define STAGE4_H

struct stage3 : sc_module {
	sc_in<double>  sum;      //input port 1
	sc_in<double>  diff;     //input port 2
	sc_out<double> prod;     //output port 1
	sc_out<double> quot;     //output port 2
	sc_in<bool>    clk;      //clock

	void multdiv();          //method providing functionality

							 //Constructor
	SC_CTOR(stage3) {
		SC_METHOD(multdiv);   //Declare multdiv as SC_METHOD and
		sensitive_pos << clk;   //make it sensitive to positive clock edge. 
	}
};
#endif
