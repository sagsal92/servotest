#include <Servo.h>
Servo myservo;
int pos = 0;
String pos_="";

void setup()
{
  Serial.begin(9600);
  myservo.attach(9);
}

void loop()
{
  if (Serial.available()>0) 
  {
      pos = Serial.parseInt();
      myservo.write(pos); 
      Serial.println(pos);
      pos=0;
   }
}
