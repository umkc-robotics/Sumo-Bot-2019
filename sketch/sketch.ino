

#include "SensorControl.h"
//#include "SharpSensor.h"

// Analog pin to which the sensor is connected
int sensorPin1 = A0; //
int sensorPin2 = A1; //
int sensorPin3 = A2; //
int sensorPin4 = A3; //
int sensorPin5 = A4; //
int sensorPin6 = A5; //
int sensorPin7 = A6; //
int sensorPin8 = A7; //
//sensorPin1, sensorPin2, sensorPin3, sensorPin4, sensorPin5, sensorPin6, sensorPin7, sensorPin8
SensorControl sensors = SensorControl();
//SharpSensor sensor = new SharpSensor(sensorPin8);

void setup() {
  Serial.begin(9600);
}

void loop() {
  uint16_t angle; 
  //int pin = sensor.getPin();
  for(int i = 0; i <=7; i++){
    angle = sensors.readSensor(i);
    Serial.print(i);
    Serial.print(':');
    Serial.println(angle);
  }

  delay(500);
}
/*
#include "ScrapController.h"
//#include "SumoController.h"

// ENCODER PINS
int ENC_FL_INT = 36;
int ENC_FL_CHECK = 37;
//#define ENC_FR_INT 26
//#define ENC_FR_CHECK 25
//#define ENC_BL_INT 32
//#define ENC_BL_CHECK 31
//#define ENC_BR_INT 28
//#define ENC_BR_CHECK 27
//// MOTOR PINS
int MOT_FL_PWM = A12;
int MOT_FL_DIR = 23;
//#define MOT_FR_PWM 4
//#define MOT_FR_DIR 6
//#define MOT_BL_PWM 2
//#define MOT_BL_DIR 1
//#define MOT_BR_PWM 3
//#define MOT_BR_DIR 0
//// DISTANCE PINS
//#define DIST_F A2
//#define DIST_FL A3
//#define DIST_FR A4
//#define DIST_L A5
//#define DIST_R A6
//#define DIST_B A7
//#define DIST_BL A8
//#define DIST_BR A9
//// LINE SENSOR PINS
//#define LINE_FL A14
//#define LINE_FR A15
//#define LINE_BL A16
//#define LINE_BR A17
//// SWITCH PINS
//#define SWITCH_FL 18
//#define SWITCH_FR 19
//#define SWITCH_BL 20
//#define SWITCH_BR 21


// ENCODERS
ScrapEncoder encoderFL = ScrapEncoder(ENC_FL_INT,ENC_FL_CHECK);
//ScrapEncoder encoderFR = ScrapEncoder(ENC_FR_INT,ENC_FR_CHECK);
//ScrapEncoder encoderBL = ScrapEncoder(ENC_BL_INT,ENC_BL_CHECK);
//ScrapEncoder encoderBR = ScrapEncoder(ENC_BR_INT,ENC_BR_CHECK);
// MOTORS
ScrapMotorSinglePin motorFL = ScrapMotorSinglePin(MOT_FL_DIR,MOT_FL_PWM);
//ScrapMotorSinglePin motorFR = ScrapMotorSinglePin(MOT_FR_DIR,MOT_FR_PWM);
//ScrapMotorSinglePin motorBL = ScrapMotorSinglePin(MOT_BL_DIR,MOT_BL_PWM);
//ScrapMotorSinglePin motorBR = ScrapMotorSinglePin(MOT_BR_DIR,MOT_BR_PWM);
// MOTOR CONTROL
ScrapMotorControl motorControlFL = ScrapMotorControl(motorFL,encoderFL);
//ScrapMotorControl motorControlFR = ScrapMotorControl(motorFR,encoderFR);
//ScrapMotorControl motorControlBL = ScrapMotorControl(motorBL,encoderBL);
//ScrapMotorControl motorControlBR = ScrapMotorControl(motorBR,encoderBR);
// WEDGES
//SumoWedge wedgeFront = SumoWedge(SWITCH_FL,SWITCH_FR);
//SumoWedge wedgeBack = SumoWedge(SWITCH_BL,SWITCH_BR);

void setup() {
  Serial.begin(9600);
	initEncoders();
 Serial.println('Loop Started');
}

void loop() {
  motorControlFL.setSpeed(1.0);
  Serial.println('Speed Set');
  motorFL.setMotor(200);
  Serial.println(encoderFL.getCount());
}

*/

// ATTACH ENCODER PIN INTERRUPTS
//void initEncoders() {
	//attachInterrupt(digitalPinToInterrupt(ENC_FL_INT),checkEncoderFL,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_FR_INT),checkEncoderFR,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_BL_INT),checkEncoderBL,CHANGE);
	//attachInterrupt(digitalPinToInterrupt(ENC_BR_INT),checkEncoderBR,CHANGE);
//}

//void checkEncoderFL() {
//	encoderFL.checkEncoderFlipped();
//}

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
