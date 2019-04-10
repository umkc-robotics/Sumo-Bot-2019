#ifndef MotorControl_h
#define MotorDriver_h

#include "Arduino.h"
#include "SensorControl.h"
class MotorControl
{
  private:
    //Connection Variables
    int L_pwm = A12;
    int L_dir = 23;
    //Signalling Variables
  	int Maxspeed = 255;
  	int Minspeed = 0;
  	int Actspeed = 255;
  public:
    MotorControl();
  	void initMotors();
    void CheckEncoders();
  	void Move(int L_dir, int L_pwm);
  	void Stop();
    void right();
    void left();
    void forward();
    void backward();
};
#endif
