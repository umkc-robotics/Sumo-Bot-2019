#include "EncoderClass.cpp"


ScrapEncoder::ScrapEncoder(int pinA, int pinB) {
	PINA_INTERRUPT = pinA;
	PINB_CHECKER = pinB;
	initEncoder();
}

// initializes encoder pins and count
void ScrapEncoder::initEncoder() {
	pinMode(PINA_INTERRUPT,INPUT);
	pinMode(PINB_CHECKER,INPUT);
	resetCount();
}

// call to get count
long ScrapEncoder::getCount() {
	return encCount;
}

// reset encCount to 0
void ScrapEncoder::resetCount() {
	encCount = 0;
}

void ScrapEncoder::setCount(long newCount) {
	encCount = newCount;
}


void ScrapEncoder::checkEncoder() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		incrementCount();
	}
	else {
		decrementCount();
	}
}

void ScrapEncoder::checkEncoderFlipped() {
	if (digitalRead(PINA_INTERRUPT) == digitalRead(PINB_CHECKER)) {
		decrementCount();
	}
	else {
		incrementCount();
	}
}

// call to increment count
void ScrapEncoder::incrementCount() {
	encCount++;
}

// call to decrement count
void ScrapEncoder::decrementCount() {
	encCount--;
}
