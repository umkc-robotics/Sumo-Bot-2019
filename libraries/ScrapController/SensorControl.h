#include <Arduino.h>

class SensorControl{
  private:
  	// Analog pin to which the sensor is connected
  	//Added these
	int sensorPin1 = A0; //
	int sensorPin2 = A1; //
	int sensorPin3 = A2; //
	int sensorPin4 = A3; //
	int sensorPin5 = A4; //
	int sensorPin6 = A5; //
	int sensorPin7 = A6; //
	int sensorPin8 = A7; //
    uint16_t distances[8];
  public:
  	  SensorControl();
      void senseOpponent();
      uint16_t readSensor(int ir);
      uint16_t calculateDistance(int sensorNumber);
};