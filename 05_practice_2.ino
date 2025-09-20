#define LED_PIN 7

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
}

void loop() {
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  }

  digitalWrite(LED_PIN, HIGH);
  delay(50);
  while (1) {}
}
