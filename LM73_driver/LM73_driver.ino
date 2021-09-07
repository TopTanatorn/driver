#include "LM.h"
LM LM;
void setup() {
  Serial.begin(9600);
  
}
void loop() {

  LM.readTemperature();
  LM.printOut();
  LM.deepSleep();
}
