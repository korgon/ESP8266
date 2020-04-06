#include <Arduino.h>
#include <Ethernet.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#include "Si7005.h"


#define blue 2

void setup() {
	Serial.begin(115200);

	// turn on blue light...
	pinMode(blue, OUTPUT);

	

	Serial.println("deep sleep...");
	ESP.deepSleep(5000000);	// 5000000 = 5s
}

void loop() {
}