#include <Arduino.h>
#include "Encoder.h"


#define SENSOR_PIN A7

int FRONT_LEFT_PIN_INTERRUPT = 37;
int FRONT_LEFT_PIN_CHECKER = 36;

int FRONT_LEFT_MOTOR_PWM = 12;
int FRONT_LEFT_MOTOR_DIR = 13;

Encoder encoderFL = Encoder(FRONT_LEFT_PIN_INTERRUPT, FRONT_LEFT_PIN_CHECKER);



void setup()
{
  Serial.begin(9600);
  initEncoders();
}

  
void loop()
{
  int count = encoderFL.getCount();
  Serial.println(count);

}



  
void initEncoders(){
  // i.e (attachInterrupt( digitalPinToInterrupt(pin), ISR, mode); )
 attachInterrupt(digitalPinToInterrupt(FRONT_LEFT_PIN_INTERRUPT),checkEncoder,CHANGE);
 }
void checkEncoder() {
 encoderFL.checkEncoder();
}
