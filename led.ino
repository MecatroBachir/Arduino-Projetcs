int pinLed = 2 ;  // Defining the pin of the led
void setup() { // Running one time
  pinMode(pinLed, OUTPUT);     // Defining the mode of the pin : output or input
 
}

void loop() {    // Void loop
  digitalWrite(pinLed, LOW);     // Turning off the led
  delay(1000);        // setting 1 seconde delay
  digitalWrite(pinLed, HIGH);       // Turning on the led
  delay(1000); 
} 
