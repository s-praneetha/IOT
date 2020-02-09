#include <ESP8266WiFi.h>

#include <ESP8266HTTPClient.h>

String  httpurl;
HTTPClient http;

void setup()
{
  Serial.begin(9600);
  WiFi.disconnect();
   WiFi.begin("praneetha","praneetha@");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println(".");

  }
  Serial.println("Connected");

}


void loop()
{

    httpurl = "http://";
    httpurl+="192.168.43.14";
    httpurl+="/";
    httpurl+="Yes";
    http.begin(httpurl);
    http.GET();
    http.end();
}
