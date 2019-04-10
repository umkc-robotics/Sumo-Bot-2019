#include "Move.h"

Move::Move()
{
	fl_motor.direction(1);
	fr_motor.direction(1);
	br_motor.direction(1);
	bl_motor.direction(0);
}

void Move::forward()
{
	Serial.println("F");

	fl_motor.direction(1);
	fr_motor.direction(1);
	br_motor.direction(1);
	bl_motor.direction(0);

	fl_motor.power(value);
	fr_motor.power(value);
	br_motor.power(value);
	bl_motor.power(value);
}

void Move::backward()
{
	Serial.println("B");

	fl_motor.direction(0);
	fr_motor.direction(0);
	br_motor.direction(0);
	bl_motor.direction(1);

	fl_motor.power(value);
	fr_motor.power(value);
	br_motor.power(value);
	bl_motor.power(value);
}

void Move::left()
{
	Serial.println("L");

	fl_motor.direction(0);
	br_motor.direction(1);
	fr_motor.direction(1);
	bl_motor.direction(1);

	fl_motor.power(value);
	fr_motor.power(value);
	br_motor.power(value);
	bl_motor.power(value);
}

void Move::right()
{
	Serial.println("R");

	fl_motor.direction(1);
	fr_motor.direction(0);
	br_motor.direction(0);
	bl_motor.direction(0);

	fl_motor.power(value);
	fr_motor.power(value);
	br_motor.power(value);
	bl_motor.power(value);
}

void Move::stop()
{
	fr_motor.stop();
	fl_motor.stop();
	br_motor.stop();
	bl_motor.stop();
}

int Move::read()
{
	Serial.println(fl_encoder.read());
	Serial.println(fr_encoder.read());
	Serial.println(br_encoder.read());
	Serial.println(bl_encoder.read());
}