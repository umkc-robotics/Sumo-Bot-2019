#ifndef MotorControl_h
#define MotorDriver_h
#define pwm_LF 4
#define pwm_LB 6
#define pwm_RF 5
#define pwm_RB 3
#define dir_RF 30
#define dir_RB 29
#define dir_LF 28
#define dir_LB 31
#include "Arduino.h"
class MotorControl
{
  public:
  void initMotors(void);
  void Move(int R_dir, int L_dir, int R_pwm, int L_pwm);
  void Stop();
};
#endif
