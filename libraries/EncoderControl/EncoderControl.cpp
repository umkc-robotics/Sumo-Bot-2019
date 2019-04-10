#include "EncoderControl.h"

//Encoder Object to Access Functions
EncoderControl::Encoder(){}
EncoderControl::Encoder(int pinA, int pinB){
	int FL_EncA = pinA;
	int FL_EncB = pinB;
}

void EncoderControl::checkEncoder() {
	if (digitalRead(FL_EncA) == digitalRead(FL_EncB)) {
		incrementCount();
	}
	else {
		decrementCount();
	}
}
// call to increment count
void EncoderControl::incrementCount() {
	encCount++;
}

// call to decrement count
void EncoderControl::decrementCount() {
	encCount--;
}
int EncoderControl::getCount(){
	return encCount;
}