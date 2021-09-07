#include "BTLED.h"
BTLED section1(2,14);
BTLED section2(12,16);
void setup() {
  

}

void loop() {
  
  section1.btActive();
  section2.btActive();
}
