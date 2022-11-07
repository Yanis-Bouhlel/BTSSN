#include <Arduino.h>
#include "Blink.h"
int led = 2;
void setup_Blink() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void Blink() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  
}
