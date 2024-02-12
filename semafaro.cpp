
void setup()
{
   Serial.begin(9600);
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop()
{

  digitalWrite(11, HIGH);
  Serial.println("LED VERDE ACESSO!");
  delay(5000);
  digitalWrite(11, LOW);
  
  
  digitalWrite(12, HIGH);
  Serial.println("LED AMARELO ACESSO!");
  delay(2000);
  digitalWrite(12, LOW);
  
  digitalWrite(13, HIGH);
  Serial.println("LED VERMELHO ACESSO!");
  delay(5000);
  digitalWrite(13, LOW);
}