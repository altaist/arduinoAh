#include <a.h>

SETUP
  say("Hello! Ah!");  // replaced by: Serial.println("Hello")
  pinOutput(13);
LOOP
  
  on(13); // replaced by:   digitalWrite(13, HIGH);
  delay(1000);
  off(13); // replaced by:   digitalWrite(13, LOW);
  delay(1000);

END



