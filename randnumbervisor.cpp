#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

long randNumber;

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

void loop()
{
  randNumber = random(1,7);
  mostrarNumero(randNumber);
  delay(2000);
}
