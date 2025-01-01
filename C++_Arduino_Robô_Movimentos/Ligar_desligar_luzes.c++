// Código para ligar e desligar luzes.
#include <Arduino.h>

const int ledPin = 13; // Pino do LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Ligar a luz
  digitalWrite(ledPin, HIGH);
  delay(1000); // Luz ligada por 1 segundo

  // Desligar a luz
  digitalWrite(ledPin, LOW);
  delay(1000); // Luz desligada por 1 segundo
}
