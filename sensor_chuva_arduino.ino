#include <VarSpeedServo.h>

#define pinSensorA A0

VarSpeedServo myservo;

void setup() {
  myservo.attach(8); 
  pinMode(9, INPUT);
}

void loop() {

  if (analogRead(pinSensorA) > 700) {
    myservo.slowmove(40,20);
    delay(2000); 
  } else {
    myservo.slowmove(140,20);
   delay(2000);
  }
}
