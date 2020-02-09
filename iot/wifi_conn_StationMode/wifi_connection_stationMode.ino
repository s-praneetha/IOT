#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  WiFi.disconnect();
   WiFi.begin("praneetha","praneetha@");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print(".");

  }
  Serial.println("Connected");
  Serial.println((WiFi.localIP().toString()));

}


void loop()
{

 
}
