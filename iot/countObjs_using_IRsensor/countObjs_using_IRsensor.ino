int count=0;
void setup() {
  Serial.begin(9600);
  pinMode(D0,INPUT);
}

void loop() {
if(digitalRead(D0)==0)
{
  count++;
  Serial.println(count);

  while(digitalRead(D0)==0)
  delay(10);
  
}
}