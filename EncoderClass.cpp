#include "EncoderClass.h"


EncoderClass::EncoderClass(int pinA, int pinB) {
	PINA_INTERRUPT = pinA;
	PINB_CHECKER = pinB;
	initEncoder();
}

// initializes encoder pins and count
void EncoderClass::initEncoder() {
	pinMode(PINA_INTERRUPT,INPUT);
	pinMode(PINB_CHECKER,INPUT);
	resetCount();
}

// call to get count
long EncoderClass::getCount() {
	return encCount;
}

// reset encCount to 0
void EncoderClass::resetCount() {
	encCount = 0;
}

void EncoderClass::setCount(long newCount) {
	encCount = newCount;
}


void EncoderClass::checkEncoder() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		incrementCount();
	}
	else {
		decrementCount();
	}
}

void EncoderClass::checkEncoderFlipped() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		decrementCount();
	}
	else {
		incrementCount();
	}
}

// call to increment count
void EncoderClass::incrementCount() {
	encCount++;
}

// call to decrement count
void EncoderClass::decrementCount() {
	encCount--;
}
