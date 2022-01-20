#include <Servo.h>
Servo motor;
Servo steer;
//Servo myservoo;
//Servo mysservp;

const double joyM = A5;
const double joyS = A0;


void setup() {
  Serial.begin(9600);
  motor.attach(9); //motor wheel
  steer.attach(6); //steer wheels


}

void loop() {



  double motorVal = analogRead(joyM);
  double steerVal = analogRead(joyS);

  motorVal = map(motorVal, 0, 1023, 10, 170);
  steerVal = map(steerVal, 0, 1023, 10, 170);

  motor.write(motorVal);
  steer.write(steerVal);
   


}
