#include <MotorDriver.h>
#include "Arduino.h"
#include "MotorControl.h"
MotorDriver mdriver;
void MotorControl::initMotors(){   //Set up all pins for motors(initiate motors)
  pinMode(pwm_RF,OUTPUT);
  pinMode(pwm_LF,OUTPUT);
  pinMode(pwm_RB,OUTPUT);
  pinMode(pwm_LB,OUTPUT);
  pinMode(dir_RF,OUTPUT);
  pinMode(dir_LF,OUTPUT);
  pinMode(dir_RB,OUTPUT);
  pinMode(dir_LB,OUTPUT);
}
void MotorControl::Move(int R_dir, int L_dir, int R_pwm, int L_pwm){
  mdriver.SetR_Direction(R_dir);
  mdriver.SetL_Direction(L_dir);
  mdriver.SetR_MPower(R_pwm);
  mdriver.SetL_MPower(L_pwm);
}

void MotorControl::Stop(){   
    mdriver.SetL_MPower(0);
    mdriver.SetR_MPower(0);    
}
