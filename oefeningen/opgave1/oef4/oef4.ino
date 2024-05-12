int sensorPin = A0;  // select the input pin for the potentiometer

int leds[4] = { 12, 11, 10, 9 };

int s[2] = { 7, 6 };
long ledsBrandend = 0;
long pressed = 0;

bool rechts = true;

int sensorValue = 0;  // variable to store the value coming from the sensor

int sState[2] = { 0, 0 };
int sLS[2] = { 0, 0 };


int ledState[4] = { 0, 0, 0, 0 };
int i = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);
  pinMode(leds[3], OUTPUT);

  pinMode(s[0], INPUT_PULLUP);
  pinMode(s[1], INPUT_PULLUP);

  digitalWrite(leds[i], HIGH);
}

void loop() {
  sLS[0] = sState[0];
  sState[0] = !digitalRead(s[0]);

  // sLS[1] = sState[1];
  // sState[1] = !digitalRead(s[1]);

  if (millis() - ledsBrandend > 200) {
    ledsBrandend = millis();
    if (rechts) {
      i++;

      digitalWrite(leds[i - 1], 0);

      if (i > 3) {
        i = 0;
      }
      digitalWrite(leds[i], 1);
    } else {
      i--;

      digitalWrite(leds[i + 1], 0);

      if (i < 0) {
        i = 3;
      }
      digitalWrite(leds[i], 1);
    }
  }




  if (sState[0] && !sLS[0]) {
    pressed = millis();
  }
  Serial.println(pressed);
  if (!sState[0] && sLS[0]) {
    if (millis() - pressed > 200) {
      rechts = false;
    } else {
      rechts = true;
    }
  }
}
