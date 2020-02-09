#include <ESP8266WiFi.h>

IPAddress staticIP(10,10,10,10);
IPAddress gateway(10,10,10,1);
IPAddress subnet(255,0,0,0);

void setup()
{
  Serial.begin(9600);
  WiFi.softAP("na","name");
  WiFi.softAPConfig(staticIP, gateway, subnet);
  Serial.println((WiFi.softAPIP()));

}


void loop()
{


}
