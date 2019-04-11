#include <LineSensor.h>


LineSensor::LineSensor(const byte[4] _pins);
{
	for(int i=0;i<4;i++)
		pins[i]=_pins[i];
}

bool LineSensor::CheckState()
{
	ReadSensors();
	for(int i=0;i<4;i++)
		if(black[i]==FALSE)
			return TRUE;
	return FALSE;
}

void LineSensor::ReadSensors()
{
	for(int i=0;i<4;i++)
		ReadOneSensor(i);
}

void LineSensor::ReadOneSensor(int i)
{
	pinMode( pins[i], OUTPUT );
	digitalWrite( pins[i], HIGH );
	delayMicroseconds(10);
	pinMode( pins[i], INPUT );

	long time = micros();

	//time how long the input is HIGH, but quit after 3ms as nothing happens after that
	while (digitalRead(pins[i]) == HIGH && micros() - time < 3000);
	int diff = micros() - time;
	if (diff<2000)
		black[i]=FALSE;
	else
		black[i]=TRUE;
}


