#include <Servo.h>  //in-built library to  control the servo motor

Servo servo;  //creating an object named servo of Servo class
void setup() {
  servo.attach(9);  //defining the pin to which the servo is attached
  Serial.begin(9600);   //Starting the Serial Monitor
}

void loop() {
  for(int i=0;i<=180;i++) //going from 0 degree to 180 degree
  {
    servo.write(i); //setting the position of the servo by 1 degree 
    Serial.println(servo.read()); //printing the value (for debugging purpose)
    delay(10);
   }
  for(int i=180;i>=0;i--) //from 180 to 0 degree
  {
    servo.write(i); 
    Serial.println(servo.read());
    delay(10);
  }
}
