#include <Arduino.h>

class EncoderControl {

private:
	int FL_EncA;
	int FL_EncB;
	int encCount = 0;
public:
	EncoderControl();
	EncoderControl(int pinA, int pinB);
	// call to increment count
	void incrementCount();

	// call to decrement count
	void decrementCount();
	void checkEncoder();

	// get current count
	int getCount();
};