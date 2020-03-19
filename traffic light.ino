void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(4000);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  delay(5000);
}
