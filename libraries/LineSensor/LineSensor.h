#ifndef LineSensor_h
#define LineSensor_h

#include <Arduino.h>

class LineSensor
{
	private:
		byte pins[4]={2,3,4,5};
		bool black[4];
	public:
		LineSensor();
		bool CheckState();
		void ReadOneSensor(int);
		void ReadSensors();
		void Maneuver();



};


#endif
