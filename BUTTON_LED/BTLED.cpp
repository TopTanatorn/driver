#include "Arduino.h"

#include "BTLED.h"

BTLED::BTLED(int Lpin, int Bpin)

{

  pinMode(Lpin, OUTPUT);
  pinMode(Bpin, INPUT_PULLUP);

  _Lpin = Lpin;
  _Bpin = Bpin;
  valBpin = 0;

}
void BTLED::btActive(){
  valBpin = digitalRead(_Bpin);
  digitalWrite(_Lpin,valBpin);
  
}
