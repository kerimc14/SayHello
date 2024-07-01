#include <Arduino.h>
#include "SayHello.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  sayHello();
}