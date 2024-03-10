#include<elapseMillis.h>
const int lm35Pin = A0; 
const int ledPin = 13;  

const int thresholdTemperature = 30; 

int currentTemperature;
elapsedMillis blinkTimer;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  currentTemperature = readTemperature();
  if (currentTemperature < thresholdTemperature) {
    blinkLED(250); 
  } else {
    blinkLED(500); 
  }
source code link
https://github.com/ 
