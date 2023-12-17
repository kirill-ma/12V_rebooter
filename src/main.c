#include <Arduino.h>

#define RELAY_PIN PA3
#define SECOND    1000UL
#define HOUR      (3600 * SECOND)
#define OFF_TIME  (10 * SECOND)

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); // active low

  randomSeed(analogRead(A1)); // random delay at power-on
  for(uint8_t i = random(20) + 6; i; i--){
    digitalWrite(LED_BUILTIN, LOW); // active low
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
  }
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(RELAY_PIN, LOW);
  delay(OFF_TIME);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(RELAY_PIN, HIGH);
  delay(24 * HOUR - OFF_TIME);
}
