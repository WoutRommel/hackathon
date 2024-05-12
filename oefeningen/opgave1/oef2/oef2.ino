int sensorPin = A0;   // select the input pin for the potentiometer

int leds[4] = {13,12,11,10};

int s[2] = {7,6};

int sensorValue = 0;  // variable to store the value coming from the sensor

int sState[2] = {0,0};
int sLS[2] = {0,0};


int ledState[4] = {0,0,0,0};

int aantalLedsBrandend = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);
  pinMode(leds[3], OUTPUT);

  pinMode(s[0], INPUT_PULLUP);
  pinMode(s[1], INPUT_PULLUP);
}

void loop() {
  sLS[0] = sState[0];
  sState[0] = !digitalRead(s[0]);

  sLS[1] = sState[1];
  sState[1] = !digitalRead(s[1]);

  
  

  if(sState[0] && !sLS[0]){
    aantalLedsBrandend++;
  }
  if(sState[1] && !sLS[1]){
    aantalLedsBrandend--;
  }


  int i = 0;
  while(i < aantalLedsBrandend){
    digitalWrite(leds[i], HIGH);
    i++;
  }
  while(i < sizeof(leds)){
    digitalWrite(leds[i], LOW);
    i++;
  }

}
