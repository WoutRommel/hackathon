nt sensorPin = A0;   // select the input pin for the potentiometer

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;

int S1 = 7;
int S2 = 6;

int sensorValue = 0;  // variable to store the value coming from the sensor

int s1State = 0;
int s2State = 0;

int led1State = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
}

void loop() {
  int s1LS = s1State;
  s1State = !digitalRead(S1);
  

  if(s1State && !s1LS){
    led1State = !led1State;
    digitalWrite(ledPin1, led1State);
  }

}