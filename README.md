
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);//tagamootorid
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11, 0);
digitalWrite(10, 50);
delay(10000);
digitalWrite(11, 0);
digitalWrite(10, 0);
delay(2000);
}
