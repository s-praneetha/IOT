#include "DHT.h"
#define dhtPin D2

DHT dht(dhtPin,DHT11)


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  float h,t;
  h = dht.readHumidity();
  t = dht.readTemperature();
  Serial.println("Humidity :"+String(h));
  Serial.println("Temperature :"+String(t));
}

void loop() {
  // put your main code here, to run repeatedly:

}
