/**
 * A.h is a simple library for arduino begginers
 * You can use it for starter projects, starter kits and kids
 * 
 * void setup() and void loop() is included into BEGIN and END macros
 * 
 * on(pin) is an analog for digitalWrite(pin, HIGH)
 * off(pin) is an analog for digitalWrite(pin, LOW)
 * 
 * Author: Altaist
 * See more info: ArduinoMaster.ru
 */

#include <a.h>

// void setup and void loop
BEGIN
    
  on(13);
  delay(1000);
  off(13);
  delay(1000);

END // }



