#ifndef BTLED_h
#define BTLED_h
#include "Arduino.h"

class BTLED

{

  public:
    BTLED(int Lpin,int Bpin);
    void btActive();

  private:
    int _Lpin;
    int _Bpin;
    int valBpin;
};

/***************************************************/

#endif
