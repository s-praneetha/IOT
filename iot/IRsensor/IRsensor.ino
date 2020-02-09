

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int a = digitalRead(D0);
/**
 * if detected a==0 
 * else a == 1
 */
Serial.println(a);
delay(1500);

}
