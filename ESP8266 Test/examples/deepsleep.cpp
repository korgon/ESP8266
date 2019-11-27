#include <Arduino.h>
#define blue 2

void setup() {
	// put your setup code here, to run once:
	pinMode(blue, OUTPUT);

	Serial.begin(115200);
	Serial.println("Light ON");
	digitalWrite(blue, HIGH);
	
	delay(30000);

	digitalWrite(blue, LOW);
	Serial.println("Light OFF");
}

void loop() {
	Serial.println("Begin?");
	ESP.deepSleep(300000);
	Serial.println("End?");
}