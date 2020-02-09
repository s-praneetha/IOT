#include <ESP8266WiFi.h>

WiFiServer server(80);

void setup()
{
  Serial.begin(9600);
  WiFi.disconnect();
   WiFi.begin("praneetha","praneetha@");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println(".");

  }
  Serial.println("connected");
  Serial.println((WiFi.localIP().toString()));
  server.begin();

}


void loop()
{

    WiFiClient client = server.available();
    if (!client) { return; }
    while(!client.available()){  delay(1); }
    Serial.println((client.readStringUntil('\r')));

}
