String data;
String reqData = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(D0,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

    while(!Serial.available())
    {
      delay(100);
    }

    if(Serial.available()>0){
    data = Serial.readString();

    Serial.println(data);

    if(data == "on")
      digitalWrite(D0,LOW);
     else if(data=="off")
     digitalWrite(D0,HIGH);
    }
}
