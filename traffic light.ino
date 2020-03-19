                    // Defining pins
int pinRed = 2 ;
int pinYellow = 3 ;
int pinGreen = 7 ;
                  // Defining mode : Outut or Input
void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);

}

void loop() {
                // Switching off all the leds
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, LOW);
                
  digitalWrite(pinRed, HIGH); // Turning ON the red led
  delay(3000);    // setting 3 seconds delay
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYellow, HIGH);  // Turning ON the yellow led 
  delay(4000);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, HIGH);  // Turning ON the green led
  delay(5000);
} 
