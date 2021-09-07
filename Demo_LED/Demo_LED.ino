
#include"LED.h"

LED led(12);
LED led2(2);

void setup() {
}

void loop() {
  led.toggle(200);
  led2.toggle(200);
}
