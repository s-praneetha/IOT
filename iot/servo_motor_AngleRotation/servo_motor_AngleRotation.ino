
#include<Servo.h>
#define servoPin D2

Servo mad;
String data;
int angle;

void setup() {
  // put your setup code here, to run once:
  mad.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
while(!Serial.available())
delay(10);

if(Serial.available()>0)
{
  data = Serial.readString();
  angle = data.toInt();
}
  
  Serial.println("Rotated to "+String(angle));
  mad.write(angle);
  delay(1000);

 

}
