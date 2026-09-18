// Arduino LED Blink
// Basic example using pinMode(), digitalWrite(), and delay()
const int ledPin = 13;

void setup() {
  // Set LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // Turn LED OFF
  digitalWrite(ledPin, LOW);
  delay(1000);
}
