#define LED 7
#define BTN_1 2
#define BTN_2 3
#define BTN_3 4

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BTN_1, INPUT);
  pinMode(BTN_2, INPUT);
  pinMode(BTN_3, INPUT);
}

void loop(){
  int delayTime = 0;
  if (digitalRead(BTN_1) == 1) delayTime = 1000;
  else if (digitalRead(BTN_2) == 1) delayTime = 500;
  else if (digitalRead(BTN_3) == 1) delayTime = 2000;

  if (delayTime > 0) {
    digitalWrite(LED, HIGH);
    delay(delayTime);
    digitalWrite(LED, LOW);
    delay(1000);
  }
}
