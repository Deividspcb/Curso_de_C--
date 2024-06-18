#include <Servo.h> // Inclui a biblioteca Servo para controlar o servo motor

#define pot A3 // Define o pino analógico A3 como entrada para o potenciômetro

Servo s1; // Cria um objeto Servo chamado s1

int angs1; // Variável para armazenar o ângulo do servo
int tmp = 800; // Tempo de atraso em milissegundos (não utilizado no código atual)

void setup() {
  // Configurações iniciais, executadas uma vez
  s1.attach(4); // Anexa o servo ao pino digital 4
  angs1 = 0; // Inicializa o ângulo do servo em 0 graus
  s1.write(angs1); // Move o servo para a posição inicial (0 graus)
}

void loop() {
  // Código principal, executado repetidamente
  // Lê o valor do potenciômetro e mapeia-o para um ângulo entre 0 e 180 graus
  angs1 = map(analogRead(pot), 0, 1023, 0, 180);
  s1.write(angs1); // Move o servo para o ângulo correspondente
  delay(100); // Aguarda 100 milissegundos

  // Código comentado abaixo que pode ser utilizado para movimentos fixos do servo
  /*
  angs1 = 0; // Define o ângulo do servo para 0 graus
  s1.write(angs1); // Move o servo para 0 graus
  delay(tmp); // Aguarda pelo tempo definido na variável tmp

  angs1 = 90; // Define o ângulo do servo para 90 graus
  s1.write(angs1); // Move o servo para 90 graus
  delay(tmp); // Aguarda pelo tempo definido na variável tmp

  angs1 = 180; // Define o ângulo do servo para 180 graus (linha comentada)
  s1.write(angs1); // Move o servo para 180 graus (linha comentada)
  delay(tmp); // Aguarda pelo tempo definido na variável tmp (linha comentada)
  */
}
