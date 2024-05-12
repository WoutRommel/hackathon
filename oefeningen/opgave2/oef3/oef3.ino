// all components
int potentioMeter = A0;  // select the input pin for the potentiometer
int leds[4] = {13,  12, 11, 10 };
int s[2] = { 7, 6 };
int tempSensor = A1;
int buzzer = 5;
int fototransistor = A2;
int flame = 3;
int tilt = 2;

int tijd = 0;
int aan = 0;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  for(int i = 0; i< 4; i++){
    pinMode(leds[i], OUTPUT);
  }
  pinMode(buzzer, OUTPUT);
  

  for(int i = 0; i< 2; i++){
     pinMode(s[0], INPUT_PULLUP);
  }
  pinMode(fototransistor, INPUT_PULLUP);
  pinMode(tilt, INPUT_PULLUP);

  pinMode(potentioMeter, INPUT);
  pinMode(tempSensor, INPUT);
  pinMode(flame, INPUT);

  
}

void loop() {
  if(digitalRead(tilt)){
    if (millis() - tijd > 200) {
      tijd = millis();
      if (aan){
        for(int i= 0; i<4; i++){
          digitalWrite(leds[i], 0);
        }
      }else{
        for(int i= 0; i<4; i++){
          digitalWrite(leds[i], 1);
        }
      }
      aan = !aan;
    }
  }


}
