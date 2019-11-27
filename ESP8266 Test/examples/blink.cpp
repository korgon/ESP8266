#include <Arduino.h>
#define red 0
#define blue 2

void setup() {
  // put your setup code here, to run once:
	pinMode(red, OUTPUT);
	pinMode(blue, OUTPUT);
}

void loop() {
	digitalWrite(red, LOW);
	digitalWrite(blue, HIGH);
	delay(1000);
	digitalWrite(red, HIGH);
	digitalWrite(blue, LOW);
	delay(1000);
  // put your main code here, to run repeatedly:
}