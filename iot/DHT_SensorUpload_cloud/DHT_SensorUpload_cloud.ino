#include <ESP8266WiFi.h>

#include "DHT.h"

#include <ESP8266HTTPClient.h>

float  h;
float  t;
DHT dht4(4,DHT11);

WiFiClient client;

String thingSpeakAddress= "http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfield1Name;
String request_string;

HTTPClient http;

void setup()
{
  h = 0;
t = 0;
Serial.begin(9600);
  WiFi.disconnect();
   WiFi.begin("praneetha","praneetha@");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println(".");

  }
  Serial.println("Connected");
  Serial.println((WiFi.localIP().toString()));

}


void loop()
{
   // uploading data to cloud (thingsspeak)
    h = (dht4.readHumidity( ));
    Serial.println(h);
    t = (dht4.readHumidity( ));
    Serial.println(t);
    if (client.connect("api.thingspeak.com",80)) {
      Serial.println("Uploading data to cloud");
    
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "***8ZTRM1H6ZLP2VHAY***";
      //humidity
      request_string += "&";
      request_string += "field1";
      request_string += "=";
      request_string += String(h);
      // temperature
      request_string += "&";
      request_string += "field2";
      request_string += "=";
      request_string += String(t);
      http.begin(request_string);
      http.GET();
      http.end();

      

    }
    Serial.println("Uploaded");
    delay(4000);
}
