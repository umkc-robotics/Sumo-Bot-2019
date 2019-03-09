#include "SensorControl.h"
 // Analog pin to which the sensor is connected
#define const byte sensorPin1 = A0; //A10
#define const byte sensorPin2 = A1; //A7
#define const byte sensorPin3 = A2; //A6
#define const byte sensorPin4 = A3; //A5
    //#define const byte sensorPin5 = A8; //
    //#define const byte sensorPin6 = A9; //
    //#define const byte sensorPin7 = A10; //
    //#define const byte sensorPin8 = A11; //
    // Window size of the median filter (odd number, 1 = no filtering)
    const byte medianFilterWindowSize = 1;
void SensorControl::SensorControl(){{ 
    // Create an object instance of the SharpDistSensor class
        SharpDistSensor sensor1(sensorPin1, medianFilterWindowSize);
        SharpDistSensor sensor2(sensorPin2, medianFilterWindowSize);
        SharpDistSensor sensor3(sensorPin3, medianFilterWindowSize);
        SharpDistSensor sensor4(sensorPin4, medianFilterWindowSize);
       // SharpDistSensor sensor5(sensorPin5, medianFilterWindowSize);
       // SharpDistSensor sensor6(sensorPin6, medianFilterWindowSize);
       // SharpDistSensor sensor7(sensorPin7, medianFilterWindowSize);
       // SharpDistSensor sensor8(sensorPin8, medianFilterWindowSize);
       }}
void SensorControl::senseOpponent(uint16_t& distances[4], uint16_t& OppR, int OppQ){
    // Get distance from sensor
  //unsigned int distance1 = sensor1.getDist();
  distances[0] = sensor1.getDist();
  distances[1] = sensor2.getDist();
  distances[2] = sensor3.getDist();
  distances[3] = sensor4.getDist();
  //distances[4] = sensor5.getDist();
  //distances[5] = sensor6.getDist();
  //distances[6] = sensor7.getDist();
  //distances[7] = sensor8.getDist();
   // Print minimum IR
  uint16_t min_Dist = 10000;
  uint16_t low_Dist = 10000;
  uint16_t high_Dist = 10000;
  int min_IR = 10;
  int low_IR = 10;
  int high_IR = 10;
    for (int i = 0; i < 4; i++) {
      if(distances[i] < min_Dist){
        min_Dist = distances[i];
        min_IR = i;
        }
      else if(distances[i] > min_Dist){
        high_Dist = distances[i];
        }
      else if (distances[i] < high_Dist){
        low_Dist = distances[i];
        low_IR = i;
        }
    }
  OppR =  (min_Dist+low_Dist)/2;
  OppQ = min_IR;
  Serial.println("Distance: ",OppR,"  Angle:" ,OppQ);
  }
