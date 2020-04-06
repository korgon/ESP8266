#include <Arduino.h>
#define blue 2

void setup() {
	Serial.begin(115200);

	pinMode(blue, OUTPUT);

	Serial.println("Light ON");
	digitalWrite(blue, LOW);
	
	delay(3000);	// 3000 = 3s

	digitalWrite(blue, HIGH);
	Serial.println("Light OFF");

	delay(3000);	// 3000 = 3s

	digitalWrite(blue, LOW);
	Serial.println("Light ON");

	delay(3000);	// 3000 = 3s

	Serial.println("sleep?");
	ESP.deepSleep(5000000);	// 5000000 = 5s
}

void loop() {
}