#include "RecupData.h"
#include "Arduino.h"
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

SendTemp::SendTemp(float temp){
    this->TempData = temp ;
    pinMode(3, OUTPUT);
}

void SendTemp::Off()
{
    digitalWrite(3, LOW);
}

void SendTemp::On()
{
    digitalWrite(3, HIGH);
}

void SendTemp::ReadTempToRasp(){
        Serial.begin(9600);
        dht.begin();
        //Serial.print("Temperature : ");
        this->TempData = dht.readTemperature();
        Serial.println(this->TempData);
        delay(1000);
}

float SendTemp::ReadTemp(){
        Serial.begin(9600);
        dht.begin();
        Serial.print("Temperature : ");
        this->TempData = dht.readTemperature();
        return this->TempData ;
}

void SendTemp::ChangeTemp(){
      if(this->TempData < 24)
      {
        On();
      }
      else 
      {
        Off();
      }
}
