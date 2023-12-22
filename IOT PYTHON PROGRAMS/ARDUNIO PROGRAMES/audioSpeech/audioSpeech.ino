#include 
#include "VoiceRecognitionV3.h"

VR vr(2, 3);  // 2:TX 3:RX!
uint8_t buf[64];

const int led = 13;  // built-in
const uint8_t lightOn = 0;
const uint8_t lightOff = 1;

void setup() {
  vr.begin(9600);
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  vr.load(lightOn);
  vr.load(lightOff);
}

void loop() {
  if (vr.recognize(buf, 50) > 0) {
    switch (buf[1]) {
      case lightOn:
        digitalWrite(led, HIGH);
        break;
      case lightOff:
        digitalWrite(led, LOW);
        break;
    }
  }
}