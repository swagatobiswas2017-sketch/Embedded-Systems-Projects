const int ldrPin = A0;
const int ledPin = 9;
const int lightThreshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(ldrPin);

  if (lightLevel < lightThreshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
