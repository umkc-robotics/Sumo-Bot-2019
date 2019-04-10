#include <Arduino.h>

class MotorDriver
{
public:
	int pwmPin;
	int dirPin;
	int pwmVal;
	int dirVal;

	MotorDriver(int PWM, int DIR);
	void power(int power);
	void direction(int direction);
	void forward();
	void backward();
	void stop();
};