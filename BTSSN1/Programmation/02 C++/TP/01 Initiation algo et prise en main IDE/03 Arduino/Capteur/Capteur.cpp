#include <Arduino.h>
#include "Capteur.h"

void setup_capteur(int TRIGGER_PIN, int ECHO_PIN){
  Serial.begin(115200);
  pinMode(TRIGGER_PIN, OUTPUT);
  digitalWrite(TRIGGER_PIN, LOW); 
  pinMode(ECHO_PIN, INPUT);
  }

void USSensor(int TRIGGER_PIN, int ECHO_PIN){
  int SOUND_SPEED = 340.0 / 1000;
  int MEASURE_TIMEOUT = 25000UL;
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);
   
  float distance_mm = measure / 2.0 * SOUND_SPEED;
   
  Serial.print(F("Distance: "));
  Serial.print(distance_mm);
  Serial.print(F("mm ("));
  Serial.print(distance_mm / 10.0, 2);
  Serial.print(F("cm, "));
  Serial.print(distance_mm / 1000.0, 2);
  Serial.println(F("m)"));
   
  delay(500);
}
