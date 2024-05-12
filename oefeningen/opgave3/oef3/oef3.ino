int rood = 9;
int groen = 10;
int blauw = 11;

void setup() {
  pinMode(rood, OUTPUT);
  pinMode(groen, OUTPUT);
  pinMode(blauw, OUTPUT);
}

void loop() {
  for(int i = 0; i<=255; i++){
    analogWrite(rood, i);
    analogWrite(blauw, 255-i);
    delay(10);
  }
  for(int i = 0; i<=255; i++){
    analogWrite(groen, i);
    analogWrite(rood, 255-i);
    delay(10);
  }
  for(int i = 0; i<=255; i++){
    analogWrite(blauw, i);
    analogWrite(groen, 255-i);
    delay(10);
  }
  

}
