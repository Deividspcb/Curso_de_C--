#define LED_PIN 13
#define DOT_DURATION 200 // Duração do ponto em milissegundos

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Código Morse para "amor"
  morseA(); // A: .-
  morseM(); // M: --
  morseO(); // O: ---
  morseR(); // R: .-.

  // Pausa longa entre repetições da palavra
  delay(DOT_DURATION * 7); // Pausa de 7 unidades (1 unidade = duração de um ponto)
}

void dot() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED_PIN, LOW);
  delay(DOT_DURATION); // Pausa entre elementos de uma mesma letra
}

void dash() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT_DURATION * 3);
  digitalWrite(LED_PIN, LOW);
  delay(DOT_DURATION); // Pausa entre elementos de uma mesma letra
}

void morseA() {
  dot();
  dash();
  delay(DOT_DURATION * 3); // Pausa entre letras
}

void morseM() {
  dash();
  dash();
  delay(DOT_DURATION * 3); // Pausa entre letras
}

void morseO() {
  dash();
  dash();
  dash();
  delay(DOT_DURATION * 3); // Pausa entre letras
}

void morseR() {
  dot();
  dash();
  dot();
  delay(DOT_DURATION * 3); // Pausa entre letras
}
}