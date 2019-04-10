#include <MotorDriver.h>

#include "Arduino.h"
#include "MotorControl.h"
MotorControl::MotorControl(){}
void MotorControl::initMotors(){   //Set up all pins for motors(initiate motors)
  //pinMode(pwm_RF,OUTPUT);
  pinMode(L_pwm,OUTPUT);
  //pinMode(pwm_RB,OUTPUT);
  //pinMode(pwm_LB,OUTPUT);
  //pinMode(dir_RF,OUTPUT);
  pinMode(L_dir,OUTPUT);
  //pinMode(dir_RB,OUTPUT);
  //pinMode(dir_LB,OUTPUT);
}
void MotorControl::Move(int L_dir, int L_pwm){
  //Right pwm and dir removed*******
  CheckEncoders();
  //mdriver.SetR_Direction(R_dir);
  mdriver.SetL_Direction(L_dir);
  //mdriver.SetR_MPower(R_pwm);
  mdriver.SetL_MPower(L_pwm);
}

void MotorControl::Stop(){   
    mdriver.SetL_MPower(0);
    //mdriver.SetR_MPower(0);    
}
void MotorControl::CheckEncoders(){
  //attack
  if(predEconder <= actEncoder){
    Actspeed = MaxSpeed;
  }
  // //slow down to balance power to increase torque
  // else {
  //   Actspeed = Actspeed - 2;
  //   //escape
  //   if (actEncoder=<0){

  //   }
  // }
}

void MotorControl::right(){
  Move(0,1,Actspeed,Actspeed);
}
void MotorControl::left(){
  Move(1,0,Actspeed,Actspeed);
}
void MotorControl::forward(){
  Move(1,1,Actspeed,Actspeed);
}
void MotorControl::backward(){
  Move(0,0,Actspeed,Actspeed);
}