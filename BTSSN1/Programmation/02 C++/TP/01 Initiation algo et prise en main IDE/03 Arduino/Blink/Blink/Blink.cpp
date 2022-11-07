#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int LED_PIN, int tempo){

      PIN=LED_PIN;
      BlinkDelay=tempo;

      void Blink::PinSetup(){
            pinMode(PIN,OUTPUT);
      }

      void Blink::Sequence1(){
            digitalWrite(PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(tempo*1000);                       // wait for a second
            digitalWrite(PIN, LOW);    // turn the LED off by making the voltage LOW
            delay(1000);                       // wait for a second

            if (tempo != 10000){
                  tempo++;
            }
      }
}