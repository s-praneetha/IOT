String data;
String reqData = "";
String uname,pass;
String user1="user1";
String pass1="12345";
String user2="user2";
String pass2="123456";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(D0,OUTPUT);
    digitalWrite(D0,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

    while(!Serial.available())
    {
      delay(10);
    }

    if(Serial.available()>0){
    data = Serial.readString();
   
    uname = data.substring(0,data.indexOf(","));
    pass = data.substring(data.indexOf(",")+1,data.length());
    
   Serial.println(uname);
   Serial.println(pass);

    if((uname == user1&& pass==pass1) || (uname== user2 && pass==pass2)){

    
    digitalWrite(D0,LOW);
   
      
    }
     else{
        Serial.println("Authentication error");
          digitalWrite(D0,HIGH);
     }
  
    
    
   
    
    
    }
}
