#include <Servo.h>
Servo motor;
Servo steer;
//Servo myservoo;
//Servo mysservp;

const double joyM = A5;
const double joyS = A0;

double motorVal;
double steerVal;


void setup() {
  Serial.begin(9600);
  motor.attach(9); //motor wheel
  steer.attach(6); //steer wheels


}

void loop() {



  motorVal = analogRead(joyM);
  steerVal = analogRead(joyS);

  motorVal = map(motorVal, 0, 1023, 10, 170);
  steerVal = map(steerVal, 0, 1023, 10, 170);

  Serial.print("MOTOR is: ");
  Serial.println(motorVal);

  
  Serial.print("STEERING is: ");
  Serial.println(steerVal);

  motor.write(motorVal);
  steer.write(steerVal);

  delay(15);
   

}
