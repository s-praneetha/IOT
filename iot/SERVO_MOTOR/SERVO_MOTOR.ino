
#include<Servo.h>
#define servoPin D2

Servo mad;

void setup() {
  // put your setup code here, to run once:
  mad.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 mad.write(0);
 delay(1000);
 mad.write(77);
 delay(1000);
  mad.write(180);
 delay(1000);
 

}
