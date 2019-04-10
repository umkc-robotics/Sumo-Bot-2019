#include "ScrapController.h"
#include "MotorControl.h"
#include "SensorControl.h"
//#define pwm_LF A12
//#define pwm_LB 6
//#define pwm_RF 5
//#define pwm_RB 3
//#define dir_RF 30
//#define dir_RB 29
//#define dir_LF 23
//#define dir_LB 31
//#define encoder_LF A6

//#define encoder_RF A7
//#define encoder_LB A2
//#define encoder_RB A3



class RobotControl{
	private:
		//Encoder Info
		int ENC_FL_INT = 36;
		int ENC_FL_CHECK = 37;
		ScrapEncoder encoderFL = ScrapEncoder(ENC_FL_INT,ENC_FL_CHECK);

		//IR Array
		SensorControl sensors = SensorControl(sensorPin1, sensorPin2, sensorPin3, sensorPin4, sensorPin5, sensorPin6, sensorPin7, sensorPin8);
		//Motor Control
		MotorControl motors = MotorControl(dir_LF, pwm_LF);

		//ScrapEncoder encoder = ScrapEncoder(int pinA, int pinB);
		
	public:
		RobotControl();
		void performMovement(MotorControl motors, SensorControl sensors);
		void initEncoders();
		RobotControl();
};