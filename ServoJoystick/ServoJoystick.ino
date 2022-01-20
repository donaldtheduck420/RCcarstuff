#include <Servo.h>
Servo myservo;
Servo myservot;
Servo myservoo;
Servo mysservp;

const double joyUD = A5;
const double joyLR = A4;
unsigned long previous = 0;
unsigned long currentM;

void setup() {
  Serial.begin(9600);
  myservo.attach(3); //front wheel
  myservot.attach(5); //front wheel
  myservoo.attach(6); //back wheel
  mysservp.attach(10); //back wheel
  // put your setup code here, to run once:
  //currentM = millis();

}

void loop() {

  /*if(currentM - previous > 2000){
      myservo.write(128);
      myservot.write(128);
      myservoo.write(128); 
      mysservp.write(128);
  }
  else {
      myservo.write(150);
      myservot.write(150);
      myservoo.write(150); 
      mysservp.write(150);
  }*/
  

  double UDvalue = analogRead(joyUD);
  double LRvalue = analogRead(joyLR);

   
                                      
  LRvalue = map(LRvalue, 0, 1023, 10, 170);     
  myservo.write(LRvalue);
  myservot.write(LRvalue);
  myservoo.write(LRvalue); 
  mysservp.write(LRvalue);

  Serial.println(LRvalue);
                  
  delay(15);

  Serial.println("The up and down values are: ");
  Serial.print(UDvalue);
  Serial.println(" ");
  

  Serial.println("The left and right values are: ");
  Serial.print(LRvalue);
  Serial.println(" ");
  

}
