#include "Arduino.h"
#include "Blink.h"



      void setup_blink(int PIN){
            pinMode(PIN,OUTPUT);
      }

      void blink(int PIN,int tempo){
            digitalWrite(PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(tempo*1000);                       // wait for a second
            digitalWrite(PIN, LOW);    // turn the LED off by making the voltage LOW
            delay(1000);                       // wait for a second

            if (tempo != 10000){
                  tempo++;
            }
      }
