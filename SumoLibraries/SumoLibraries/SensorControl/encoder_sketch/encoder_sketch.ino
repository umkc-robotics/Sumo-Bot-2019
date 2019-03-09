/*
#include "Encoder.h"

// ENCODER PINS
#define ENC_FL_INT 3
#define ENC_FL_CHECK 2

// ENCODERS
Encoder encoderFL = Encoder(ENC_FL_INT,ENC_FL_CHECK);

void setup() {
  initEncoders();
}

void loop() {
  
}
// ATTACH ENCODER PIN INTERRUPTS
void initEncoders() {
  attachInterrupt(digitalPinToInterrupt(ENC_FL_INT),checkEncoderFL,CHANGE);
}

void checkEncoderFL() {
  encoderFL.checkEncoderFlipped();
}
*/

//#include "Encoder.h"
//#include <SoftwareSerial.h>
int val;
int encoder0PinA = 3;
int encoder0PinB = 2;
int encoder0Pos = 0;
int encoder0PinALast = LOW;
int n = LOW;

//Encoder* enc(encoder0PinA, encoder0PinB);

void setup() {
  pinMode (encoder0PinA, INPUT);
  pinMode (encoder0PinB, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  //enc->getCount();
  //Serial.print(val);
  
  n = digitalRead(encoder0PinA);
  if ((encoder0PinALast == LOW) && (n == HIGH)) {
    if (digitalRead(encoder0PinB) == LOW) {
      encoder0Pos--;
    } else {
      encoder0Pos++;
    }
    Serial.print (encoder0Pos);
    Serial.print ("/");
  }
  encoder0PinALast = n;
  
}
