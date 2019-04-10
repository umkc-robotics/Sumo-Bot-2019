#include <Arduino.h>
#include <Encoder.h>
#include "MotorDriver.h"

class Move
{
public:
	MotorDriver fl_motor = MotorDriver(A12, 23);
	MotorDriver fr_motor = MotorDriver(A8, 22);
	MotorDriver br_motor = MotorDriver(A9, 24);
	MotorDriver bl_motor = MotorDriver(A10, 25);
	Encoder fl_encoder = Encoder(37, 36);
	Encoder fr_encoder = Encoder(26, 27);
	Encoder br_encoder = Encoder(28, 29);
	Encoder bl_encoder = Encoder(30, 31);

	int value = 255;

	Move();
	void forward();
	void backward();
	void left();
	void right();
	void stop();
	int read();
};