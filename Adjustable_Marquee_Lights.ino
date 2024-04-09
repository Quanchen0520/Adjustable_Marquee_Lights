int ledPins[] = {30, 31, 32, 33, 34, 35, 36, 37}; 
int potPin = A0;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int speed = analogRead(potPin);
  speed = map(speed, 0, 1023, 1, 100);

  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }
  
  for (int i = 7; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(speed);
    digitalWrite(ledPins[i], LOW);
  }
}