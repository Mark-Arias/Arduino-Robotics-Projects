// This program centers the servo motor to its default position

#include <Servo.h>  //include library subroutines and classes

Servo servo1;  //create an instance of the servo class
void setup()  //servo 1 is now an instantiated object
{
 servo1.attach(2);  //connect servo to the data coming from pin 2 on the arduino
 servo1.write(90);  //move arduino to the center(90 degree position)
 
}

void loop() 
{
  delay(100);
  servo1.write(45);
   delay(100);
  servo1.write(45);
}

//this program has some erros in in it. 
//go with the servo 180 program as the base model for servo control
