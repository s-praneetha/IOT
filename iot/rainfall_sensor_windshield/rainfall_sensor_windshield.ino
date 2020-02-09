
#include<Servo.h>
#define servoPin D2
#define waterPin D4

Servo mad;
String data;
int angle;
int water;
void setup() {
  // put your setup code here, to run once:
  mad.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

 
  if(digitalRead(waterPin)==0){
    Serial.println("its raining");
      mad.write(0);


        for(int i=0;i<=180;i++){
          mad.write(i);
          delay(50);
        }
        for(int i=180;i>=0;i--){
          mad.write(i);
          delay(50);
        }
  }
  else{
    Serial.println("Rain stopped");
     mad.write(0);
  }
}
