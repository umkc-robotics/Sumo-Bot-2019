//Test Code
#include "MotorControl.h"
 MotorControl mcontrol;
void setup() {
  Serial.begin(9000);
  //this is the motor_direction_and_power branch

}
void loop() {
  mcontrol.Move(1,1,200,200);
  delay(1000);
}
