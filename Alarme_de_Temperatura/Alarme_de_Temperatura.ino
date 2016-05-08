const int LM35 = 0;
int alarm = 12;
float temperatura = 0;
int ADClido = 0;

void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL);
  pinMode(alarm, OUTPUT);
}

void loop() {
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.println(" *C");

  if(temperatura > 30){
    digitalWrite(alarm, HIGH);
  }else{
    digitalWrite(alarm, LOW);
  }
  
  delay(1000);
}
