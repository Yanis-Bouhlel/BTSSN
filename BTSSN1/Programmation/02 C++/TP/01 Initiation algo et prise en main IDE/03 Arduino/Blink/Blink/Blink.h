#ifndef Blink_h
#define Blink_h
#include "Arduino.h"

class Blink{
      
private:
      int PIN;
      int BlinkDelay;
public:
      Blink(int LED_PIN, int tempo);
      void PinSetup();
      void Sequence1();

};

#endif