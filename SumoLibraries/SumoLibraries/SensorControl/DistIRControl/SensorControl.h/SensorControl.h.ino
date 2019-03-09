#include <SharpDistSensor.h>

class SensorControl{
    private:
      //Array to store distances 
      uint16_t distances[4];
      //uint16_t degrees[4]={0,45,90,135,180,225,270,315};
      uint16_t OppR;
      int OppQ;
    public:     
      SensorControl();
      senseOpponent(uint16_t distances[4], uint16_t OppR, int OppQ);
};
