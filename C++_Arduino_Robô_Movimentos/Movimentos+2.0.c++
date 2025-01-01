// Código para mover o robô em todas as direções.
#include <Arduino.h>

const int motorPin1 = 3; // Pino do motor 1
const int motorPin2 = 4; // Pino do motor 2
const int motorPin3 = 5; // Pino do motor 3
const int motorPin4 = 6; // Pino do motor 4

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // Andar para frente
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(2000); // Andar por 2 segundos

  // Andar para trás
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(2000); // Andar por 2 segundos

  // Virar para a esquerda
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(2000); // Virar por 2 segundos

  // Virar para a direita
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(2000); // Virar por 2 segundos

  // Parar
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(1000); // Parar por 1 segundo
}

