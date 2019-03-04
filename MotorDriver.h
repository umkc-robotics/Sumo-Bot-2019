//Make sure nothing bad happens if inserted more than once
#ifndef MotorDriver_h
#define MotorDriver_h
class MotorDriver
{
  public:                                   //All Functions in MotorDriver Class
    void SetDirection(int Dir, int DirPin);
    void SetPower(int Pwm,int PwmPin);
    void SetR_MPower(int R_Pwm);
    void SetR_Direction(int Dir);
    void SetL_Direction(int Dir);
    void SetL_MPower(int L_Pwm);
    int Pwm_Chkd;
    
};

#endif
