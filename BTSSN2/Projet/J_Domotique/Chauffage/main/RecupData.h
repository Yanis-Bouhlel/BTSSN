#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "Arduino.h"

class SendTemp
{
    private :
        double TempData ;
    public :
        SendTemp(float temp);
        void ReadTempToRasp() ;
        float ReadTemp() ;
        void SendData();
        void ChangeTemp();
        void On();
        void Off();
};
#endif
