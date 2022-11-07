#include <Blink.h>
#include <myLib.h>
#include <Buzz.h>



void setup() {
  //Réglages du clignottement
  setup_Blink();
  /*Réglages du capteur */
  setup_ultrason();
  /*Réglages du buzzer*/
  setup_buzz();

}

void loop() {

  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);
  float distance_mm = measure / 2.0 * SOUND_SPEED;
  float distance_cm = distance_mm/10.0;

   
  if (distance_cm < 100)
  {
    
  Blink();

  }

  else if (distance_cm < 50)
  {

  Blink();
  buzz();
  
  }
  else  
  {

  Blink();
  
  }
 
  }
