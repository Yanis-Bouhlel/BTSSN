#include "RecupData.h"
SendTemp RecupData(100);
void setup() {
  // put your setup code here, to run once:

}

void loop() {

 
 RecupData.ReadTempToRasp();
 RecupData.ChangeTemp();
 
}
