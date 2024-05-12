const int latchPin = 13; //latch pin of the 74HC595
const int clockPin  = 12; //clock pin of the 74HC595
const int dataPin = 8;   //data pin of the 74HC595
byte  leds = 0; //byte variable that holds which LED is turned on at a time
int repeatNum  = 300; //number of times to repeat each number
int counter = 0; //counter variable  used in the for loops
// Be warned: some numbers take longer to do because they  use more LEDS than others, for instance, 1 (uses 2) and 8 (uses 7.) I have tried  to make them about equal in terms of time
/* The lines of code:
* leds = 0;
*  updateShiftRegister();
* turn off all LEDs
*/
/*
* LED-[  U  ]-VCC
*  LED-[     ]-LED
* LED-[     ]-Pin 8 - Data Pin
* LED-[     ]-GND
* LED-[     ]-Pin 13 - Latch Pin
* LED-[     ]-Pin 12 - Clock Pin
* LED-[     ]-VCC
*  GND-[     ]-None (Q7')     
*     _3_
*5 - [   ] - 2
*    [_6_]  
*4  - [   ] - 8
*    [_0_](.) - 7
*/
void setup() {
 pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
 pinMode(clockPin, OUTPUT);
}
void loop() {
  for(counter = 0; counter <= repeatNum; counter++){
   Zero();  
 }
 for(counter  = 0; counter <= repeatNum + 400; counter++){
   One();  
 }
 for(counter  = 0; counter <= repeatNum; counter++){
   Two();  
 }
 for(counter = 0;  counter <= repeatNum; counter++){
   Three();  
 }
 for(counter = 0; counter  <= repeatNum; counter++){
   Four();  
 }
 for(counter = 0; counter <=  repeatNum; counter++){
   Five();  
 }
 for(counter = 0; counter <= repeatNum;  counter++){
   Six();  
 }
 for(counter = 0; counter <= repeatNum + 250;  counter++){
   Seven();  
 }
 for(counter = 0; counter <= repeatNum; counter++){
   Eight();  
 }
 for(counter = 0; counter <= repeatNum; counter++){
   Nine();  
 }
}
void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  // set the latch pin to low so that the 74HC595 can recieve data
  shiftOut(dataPin,  clockPin, MSBFIRST, leds);
  //write the byte leds to the register
  digitalWrite(latchPin,  HIGH);
  //set latch pin back to high
}
void One(){
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
  delay(1);
}
void Two(){
 leds = 0;
 updateShiftRegister();
 leds  = 0;
 bitSet(leds, 2);
 updateShiftRegister();
 delay(1);
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  5);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 3);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 0);
 updateShiftRegister();
  delay(1);
}
void Three(){
 leds = 0;
 updateShiftRegister();
 leds  = 0;
 bitSet(leds, 2);
 updateShiftRegister();
 delay(1);
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  5);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 0);
 updateShiftRegister();
  delay(1);
}
void Four(){
 leds = 0;
 updateShiftRegister();
 leds  = 0;
 bitSet(leds, 4);
 updateShiftRegister();
 delay(1);
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 5);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  1);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
 delay(1);
}
void  Five(){
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  2);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 4);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 5);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  6);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 0);
 updateShiftRegister();
 delay(1);
}
void  Six(){
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 2);
  updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 4);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 5);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  6);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 0);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 3);
 updateShiftRegister();
  delay(1);
}
void Seven(){
 leds = 0;
 updateShiftRegister();
 leds  = 0;
 bitSet(leds, 6);
 updateShiftRegister();
 delay(1);
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  2);
 updateShiftRegister();
 delay(1);
}
void Eight(){
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 2);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  4);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 5);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  0);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 3);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
  delay(1);
}
void Nine(){
 leds = 0;
 updateShiftRegister();
 leds  = 0;
 bitSet(leds, 2);
 updateShiftRegister();
 delay(1);
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 4);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  5);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 0);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  1);
 updateShiftRegister();
 delay(1);
}
void Zero(){
 leds = 0;
  updateShiftRegister();
 leds = 0;
 bitSet(leds, 2);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  4);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 1);
 updateShiftRegister();
 delay(1);
 leds  = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds, 6);
 updateShiftRegister();
  delay(1);
 leds = 0;
 updateShiftRegister();
 leds = 0;
 bitSet(leds,  0);
 updateShiftRegister();
 delay(1);
 leds = 0;
 updateShiftRegister();
  leds = 0;
 bitSet(leds, 3);
 updateShiftRegister();
 delay(1);
} 