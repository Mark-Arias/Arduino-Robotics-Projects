//This program is more is used for more practice in controling servo's

#include<Servo.h>
Servo myServo;
int delayTime = 1000; //motor is not able to turn faster than 375ms (.375)
void setup() 
{
  myServo.attach(2);

}

void loop() 
{
  myServo.write(90);
  delay(delayTime);
  myServo.write(180);
  delay(delayTime);
  myServo.write(90);
  delay(delayTime);
  myServo.write(0);
  delay(delayTime);
}
