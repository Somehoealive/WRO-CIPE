void setup() {
  Serial.begin(9600);
}

void loop() {
  int s1Value = analogRead(A0); // S1
  int s2Value = analogRead(A1); // S2

  int averageValue = (s1Value + s2Value) / 2; // arvutab average

  Serial.print("S1: ");
  Serial.print(s1Value);
  Serial.print("  S2: ");
  Serial.print(s2Value);
  Serial.print("  Average: ");
  Serial.println(averageValue);

  if (s1Value > 500) { 
    Serial.println("White!");
  } else {
    Serial.println("Other color detected!");
  }

  delay(200);
}
