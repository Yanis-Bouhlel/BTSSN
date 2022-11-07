#include <Arduino.h>
#include "Buzz.h"
int buzz = 4;
void setup_buzz()
{
    pinMode(buzz, OUTPUT);
}

void buzz()
{

        delay(250);
        tone(buzz, 600); // allume le buzzer actif arduino
        delay(500);
        tone(buzz, 600); // allume le buzzer actif arduino
        delay(500);
        noTone(buzz); // désactiver le buzzer actif arduino
        delay(500);
}
