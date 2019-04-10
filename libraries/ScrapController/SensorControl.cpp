#include "SensorControl.h"
SensorControl::SensorControl(){}
void SensorControl::senseOpponent(){
  distances[0] = analogRead(A0);
  distances[1] = analogRead(A1);
  distances[2] = analogRead(A2);
  distances[3] = analogRead(A3);
  distances[4] = analogRead(A4);
  distances[5] = analogRead(A5);
  distances[6] = analogRead(A6);
  distances[7] = analogRead(A7);
  }

uint16_t SensorControl::readSensor(int ir){
  senseOpponent();
  return calculateDistance(ir);
  }
uint16_t SensorControl::calculateDistance(int sensorNumber)
{
  return distances[sensorNumber] = 187754 * pow(distances[sensorNumber], -1.51);
}
