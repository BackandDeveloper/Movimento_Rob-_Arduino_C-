// Código para fazer o robô andar para frente e para trás.
#include <Arduino.h>

const int motorPin1 = 3; // Pino do motor 1
const int motorPin2 = 4; // Pino do motor 2

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Andar para frente
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000); // Andar por 2 segundos

  // Parar
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Parar por 1 segundo

  // Andar para trás
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000); // Andar por 2 segundos

  // Parar
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Parar por 1 segundo
}
