#include "Encoder.h"

Encoder::Encoder(int pinA, int pinB) {
	PINA_INTERRUPT = pinA;
	PINB_CHECKER = pinB;
	initEncoder();
}

// initializes encoder pins and count
void Encoder::initEncoder() {
	pinMode(PINA_INTERRUPT,INPUT);
	pinMode(PINB_CHECKER,INPUT);
	resetCount();
}

// call to get count
long Encoder::getCount() {
	return encCount;
}

// reset encCount to 0
void Encoder::resetCount() {
	encCount = 0;
}

void Encoder::setCount(long newCount) {
	encCount = newCount;
}


void Encoder::checkEncoder() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		incrementCount();
	}
	else {
		decrementCount();
	}
}

void Encoder::checkEncoderFlipped() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		decrementCount();
	}
	else {
		incrementCount();
	}
}

// call to increment count
void Encoder::incrementCount() {
	encCount++;
}

// call to decrement count
void Encoder::decrementCount() {
	encCount--;
}
