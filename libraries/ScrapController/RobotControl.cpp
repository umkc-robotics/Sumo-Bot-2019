#include "RobotControl.h"
RobotControl::RobotControl(){
	
	// ATTACH ENCODER PIN INTERRUPTS
 	initEncoders();
}

void RobotControl::PerformMovement(){
    int direction = sensors.getDirection();
    if (direction = 0){motors.forward();}
    else if(direction > 0 and direction <= 90) {motors.right();}
    else if(direction >90 and direction < 180) {motors.left();}
    else if (direction = 180){motors.backward();}
    else if (direction > 180 and direction <= 270) {motors.right();}
    else if (direction >=270){motors.left();}

}

// ATTACH ENCODER PIN INTERRUPTS
void RobotControl::initEncoders() {
	attachInterrupt(digitalPinToInterrupt(ENC_FL_INT),checkEncoderFL,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_FR_INT),checkEncoderFR,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_BL_INT),checkEncoderBL,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_BR_INT),checkEncoderBR,CHANGE);
}
void checkEncoderFL() {
	encoderFL.checkEncoderFlipped();
}

//void checkEncoderFR() {
//	encoderFR.checkEncoder();
//}
//
//void checkEncoderBL() {
//	encoderBL.checkEncoderFlipped();
//}
//
//void checkEncoderBR() {
//	encoderBR.checkEncoder();
//}