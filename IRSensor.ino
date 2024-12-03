#include <Arduino.h>

// Pin for the infrared sensor
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  if (sensorValue == HIGH) {
    Serial.println("Person detected!");
  } else {
    Serial.println("No person detected.");
  }
  delay(1000); // Adjust delay as necessary
}