//SOS

int sinal = 13;//sinal de socorro
int pausaS = 166;
int pausaO = 500;

void SOS();

void setup(){
  pinMode(sinal, OUTPUT);
}

void loop(){
  SOS();
}

void SOS(){
  for(int i = 0; i < 3; i++){
    delay(pausaS);
    digitalWrite(sinal, HIGH);
    delay(pausaS);
    digitalWrite(sinal, LOW);
    
  }
  delay(pausaO);
  for(int i = 0; i < 3; i++){
    digitalWrite(sinal, HIGH);
    delay(pausaO);
    digitalWrite(sinal, LOW);
    delay(pausaO);
  }
}



