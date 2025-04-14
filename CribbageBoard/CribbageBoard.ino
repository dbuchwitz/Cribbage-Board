#include "TLC5973.cpp"

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  TLC5973 LEDDriver(2, 12);
  LEDDriver.setPixelColor(1,0,0,0);
  LEDDriver.setPixelColor(2,0,0,0);
  delay(1000);
  LEDDriver.setPixelColor(1,1,0,0);
  delay(1000);
  LEDDriver.setPixelColor(1,1,1,0);
  delay(1000);
  LEDDriver.setPixelColor(1,1,1,1);
  delay(1000);
  LEDDriver.setPixelColor(2,1,0,0);
  delay(1000);
  LEDDriver.setPixelColor(2,1,1,0);
  delay(1000);
  LEDDriver.setPixelColor(2,1,1,1);
  delay(1000);
}
