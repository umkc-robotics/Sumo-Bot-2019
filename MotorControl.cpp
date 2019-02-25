#include <MotorDriver.h>
#include "Arduino.h"
#include "MotorControl.h"
MotorDriver mdriver;

void MotorControl::Move(int R_dir, int L_dir, int R_pwm, int L_pwm){
  mdriver.initMotors();
  mdriver.SetR_Direction(R_dir);
  mdriver.SetL_Direction(L_dir);
  mdriver.SetR_MPower(R_pwm);
  mdriver.SetL_MPower(L_pwm);
}

void MotorControl::Stop(){   
    mdriver.SetL_MPower(0);
    mdriver.SetR_MPower(0);    
}
