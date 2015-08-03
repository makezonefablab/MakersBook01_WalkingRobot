
#include <Servo.h>

Servo myservo1;
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
void setup()
{
  myservo1.attach(3);
  myservo2.attach(4);  
  myservo3.attach(5);  
  myservo4.attach(6);
  
  myservo1.write(0);
  myservo2.write(0); 
  myservo3.write(0); 
  myservo4.write(0); 
}
void loop(){ } 

