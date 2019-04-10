#include "MotorDriver.h"

MotorDriver::MotorDriver(int PWM, int DIR)
{
	pwmPin = PWM;
	dirPin = DIR;
}

void MotorDriver::power(int power)
{
	pwmVal = power;

	analogWrite(pwmPin, pwmVal);
}

void MotorDriver::direction(int direction)
{
	dirVal = direction;

	digitalWrite(dirPin, dirVal);
}

void MotorDriver::stop()
{
	pwmVal = 0;

	analogWrite(pwmPin, pwmVal);
}

