void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);//tagamootorid
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11, 0);
digitalWrite(10,100);//sõidab otse kiirusega 100
delay(1000);//1 sekund
digitalWrite(11, 0);
digitalWrite(10, 0);//seisab
delay(2000);//2 sek
}
