
int led4 = 10;
int led3 = 11;
int led2 = 12;
int led1 = 13;

int cont = 0;

void setup()
{
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
  
 Serial.begin(9600);
}

void loop()
{
  for(cont = 10; cont >= 0; cont--){
    if(cont % 2 == 0){
    	    digitalWrite(led1, cont % 2);
   			digitalWrite(led2, (cont >> 1) % 2);
   			digitalWrite(led3, (cont >> 2) % 2);
   			digitalWrite(led4, (cont >> 3) % 2);
    		delay(1000);
    }else{
    
    }

  }

 

}