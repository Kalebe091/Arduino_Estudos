#define ESPERA 500

int ledVermelho = 13;
int ledVerde = 12;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{

  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(1000);
  
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  
}