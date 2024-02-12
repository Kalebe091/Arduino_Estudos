#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

#define RED 9
#define YELLOW 10
#define GREEN 11

int numeros[6][7] = {
  {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW}, // Um
  {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH}, // Dois
  {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH}, // Tres
  {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH}, // Quatro
  {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH}, // Cinco
  {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH} // Seis
};

void mostrarNumero(int numero) {
  digitalWrite(SEG_A, numeros[numero-1][0]);
  digitalWrite(SEG_B, numeros[numero-1][1]);
  digitalWrite(SEG_C, numeros[numero-1][2]);
  digitalWrite(SEG_D, numeros[numero-1][3]);
  digitalWrite(SEG_E, numeros[numero-1][4]);
  digitalWrite(SEG_F, numeros[numero-1][5]);
  digitalWrite(SEG_G, numeros[numero-1][6]);
  
  
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  digitalWrite(RED, HIGH);
  for(int i = 5; i >= 1; i--) {
    mostrarNumero(i);
    delay(1000);
  }
  digitalWrite(RED, LOW);

  digitalWrite(GREEN, HIGH);
  for(int i = 5; i >= 1; i--) {
    mostrarNumero(i);
    delay(1000);
  }
  digitalWrite(GREEN, LOW);

  digitalWrite(YELLOW, HIGH);
  for(int i = SEG_A; i <= SEG_G; i++) {
    digitalWrite(i, LOW);
  }
  delay(2000);
  digitalWrite(YELLOW, LOW);
}

