#include <Arduino.h>

#define STEP_PIN 2
#define DIR_PIN 3
#define EN_PIN 6

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(EN_PIN, OUTPUT);

  Serial.begin(115200);
  Serial.println("Stepper one-direction test...");

  digitalWrite(EN_PIN, LOW);   // enable driver
  digitalWrite(DIR_PIN, LOW);  // fixed direction
}

void loop() {
  // send step pulses forever
  digitalWrite(STEP_PIN, HIGH);
  delayMicroseconds(800);
  digitalWrite(STEP_PIN, LOW);
  delayMicroseconds(800);
}
