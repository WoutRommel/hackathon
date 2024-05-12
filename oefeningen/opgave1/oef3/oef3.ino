int sensorPin = A0;   // select the input pin for the potentiometer

int ledPin1 = 3;

int sensorValue = 0;  // variable to store the value coming from the sensor


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  pinMode(ledPin1, OUTPUT);


  pinMode(sensorPin, INPUT);

}

void loop() {
  

  sensorValue = analogRead(sensorPin)/4;
  Serial.println(sensorValue);
  analogWrite(ledPin1, sensorValue);

}

