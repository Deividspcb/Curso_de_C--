// Definição das variáveis
const int ledPin = 10;
const int dotDuration = 250;
const int dashDuration = 750;
const int interLetterPause = 750;
const int interWordPause = 1500;

#define DOT 1
#define DASH 2

// Definição do código Morse para cada letra
const int morseCodes[][6] = {
  {DOT, DASH, DASH, DASH}, // J
  {DASH, DASH, DASH},      // O
  {DOT, DASH},             // A
  {DASH, DASH, DASH},      // O
  {DASH, DASH},            // M
  {DOT},                   // E
  {DASH, DOT, DOT},        // U
  {DOT, DASH, DOT},        // P
  {DOT, DASH, DOT, DASH},  // R
  {DOT},                   // E
  {DOT, DASH, DOT},        // F
  {DOT},                   // E
  {DOT, DOT},              // I
  {DASH},                  // T
  {DASH, DASH, DASH},      // O
};

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Loop para percorrer todas as letras da frase
  for (int i = 0; i < sizeof(morseCodes) / sizeof(morseCodes[0]); i++) {
    // Loop para percorrer os pontos e traços de cada letra
    for (int j = 0; j < sizeof(morseCodes[0]) / sizeof(morseCodes[0][0]); j++) {
      // Verifica se é um ponto ou traço e pisca o LED de acordo
      if (morseCodes[i][j] == DOT) {
        dot(); // Ponto
      } else if (morseCodes[i][j] == DASH) {
        dash(); // Traço
      }
    }
    delay(interLetterPause); // Pausa entre letras
  }
  delay(interWordPause); // Pausa entre palavras
}

// Função para piscar um ponto
void dot() {
  digitalWrite(ledPin, HIGH); // Liga o LED
  delay(dotDuration); // Aguarda a duração do ponto
  digitalWrite(ledPin, LOW); // Desliga o LED
  delay(dotDuration); // Aguarda o intervalo entre sinais
}

// Função para piscar um traço
void dash() {
  digitalWrite(ledPin, HIGH); // Liga o LED
  delay(dashDuration); // Aguarda a duração do traço
  digitalWrite(ledPin, LOW); // Desliga o LED
  delay(dotDuration); // Aguarda o intervalo entre sinais
}
