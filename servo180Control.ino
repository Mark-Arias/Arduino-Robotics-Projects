/*
 * This program is used to control the tower pro servo motor
 */

#include <Servo.h>  // include the lib functions that control servo operations
int servoPin = 2; // the digital pin that we are accessing on the arduino
Servo servo;  //guessing this is a built in class from the library, and we are able to access the methods
int servoAngle = 0; //servo position in degrees

void setup() 
{
  Serial.begin(9600); //sets the data transfer rate between arduino and the computer
  servo.attach(servoPin); 
}

void loop()
{
  // control the servo's direction and the position of the motor
 /* servo.write(180);
  delay(500);
  servo.write(180);
  delay(500);
  servo.write(180);
  delay(500);
  servo.write(180);
  delay(500);
  //servo.write(135);
  //delay(1000);
 // servo.write(90);
  //delay(1000);
*/
  // control the servo's speed
  // if you change the delay value (for ex. from 50 to 10), the speed of the servo changes
  for(servoAngle = 0;servoAngle <180; servoAngle++)
    {
        servo.write(servoAngle);  //the write function changes the angle of the arm incrementally
        delay(25); //changing this is what affects the speed
    }

    for(servoAngle = 180;servoAngle > 0; servoAngle--)
    {
        servo.write(servoAngle);
        delay(25);
    }
    // end servo speed control
}
