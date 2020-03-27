int i = 0 ;
void setup() {          // Defining mode : output or input
  for (i=3 ; i<=10 ; i++)
      pinMode(i, OUTPUT);
}

void loop() {               // Switchin OFF all the leds
  delay(2000);
  for (i=3 ; i<=10 ; i++)
    digitalWrite(i, LOW);
                          // Switchin ON all the leds on by one with 0.5 seconds time interval
  for (i=3 ; i<=10 ; i++)
  {
      digitalWrite(i, HIGH);
      delay(500);
  }
}
