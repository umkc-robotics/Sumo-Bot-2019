#include <SharpDistSensor.h>
class SensorControl{
    private:
    // Analog pin to which the sensor is connected
    const byte sensorPin1 = A0; //A10
    const byte sensorPin2 = A1; //A7
    const byte sensorPin3 = A2; //A6
    const byte sensorPin4 = A3; //A5
    const byte sensorPin5 = A4; //
    const byte sensorPin6 = A5; //
    const byte sensorPin7 = A6; //
    const byte sensorPin8 = A7; //
    // Window size of the median filter (odd number, 1 = no filtering)
    const byte medianFilterWindowSize = 1;
    
    // Create an object instance of the SharpDistSensor class
    SharpDistSensor sensor1(sensorPin1, medianFilterWindowSize);
    SharpDistSensor sensor2(sensorPin2, medianFilterWindowSize);
    SharpDistSensor sensor3(sensorPin3, medianFilterWindowSize);
    SharpDistSensor sensor4(sensorPin4, medianFilterWindowSize);
   // SharpDistSensor sensor5(sensorPin5, medianFilterWindowSize);
   // SharpDistSensor sensor6(sensorPin6, medianFilterWindowSize);
   // SharpDistSensor sensor7(sensorPin7, medianFilterWindowSize);
   // SharpDistSensor sensor8(sensorPin8, medianFilterWindowSize);
    
    //Array to store distances 
    uint16_t distances[4];
    //uint16_t degrees[4]={0,45,90,135,180,225,270,315};
    uint16_t OppR;
    int OppQ;
  public:
    senseOpponent(uint16_t distances[4], uint16_t OppR, int OppQ);
}