#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 8, 9, 10, 11);

void setup(){
  // lcd.begin(Colunas, linhas)
     lcd.begin(16,2);
/**  
  
  lcd.print("Bem vindo ao cur");
  
  lcd.setCursor(0,1);
  
  lcd.print("so de Arduino");
  
  delay(2000);
  
  lcd.clear();
  
  lcd.write('V');
  delay(200);
  lcd.write('A');
  delay(200);
  lcd.write('S');
  delay(200);
  lcd.write('C');
  delay(200);
  lcd.write('O');
  delay(1000);
  lcd.clear();
  
  lcd.print(65);
  lcd.write(65);
  
  lcd.clear();

  
  lcd.print("Bem vindo ao curso de Arduino");
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();

  delay(1000);
  lcd.print("Bem vindo ao curso de Arduino");
  
  for(int i = 0; i < 15; i++){
  	delay(200);
    lcd.scrollDisplayLeft();
  }
    **/
}

void loop(){
  
  lcd.clear();
  lcd.print(" CR VASCO DA GAMA");
  lcd.setCursor(0,1); 
  lcd.print(" DESDE 1898");
  
  delay(500);
  for(int i = 0; i < 13; i++){
  	delay(200);
    lcd.scrollDisplayLeft();
  }
  delay(500);
    for(int i = 0; i < 13; i++){
  	delay(200);
    lcd.scrollDisplayRight();
  }
}