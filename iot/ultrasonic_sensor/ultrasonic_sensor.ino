#define trig D0
#define echo D1



void setup() {
  // put your setup code here, to run once:

 Serial.begin(9600);
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ultrasonic());
  delay(1000);
}


float ultrasonic(){
  digitalWrite(trig,0);
  digitalWrite(trig,1);
  delay(10);
  digitalWrite(trig,0);
  float t = pulseIn(echo,1);
  float d = (0.0340*t)/2;
  return d;
}
