#include <Servo.h>
Servo servo;

// Replaced default content of setup() in the library code
#define DEFAULT_SETUP pinMode(13, OUTPUT); pinMode(12, OUTPUT); pinMode(11, OUTPUT); pinMode(2, INPUT_PULLUP); Serial.begin(9600);

// Added to the default content of setup() in the library code
#define CUSTOM_SETUP servo.attach(10);

// Include macros and simple functions
#include <a.h>

#define PIN_BUTTON 2
#define PIN_LED 13

SETUP
  say("Hello! Ah!");  // replaced by: Serial.println("Hello")
  pinButton(PIN_BUTTON); // replaced by: pinMode(PIN_BUTTON, INPUT_PULLUP);
  pinOutput(PIN_LED); // replaced by: pinMode(PIN_LED, OUTPUT);
LOOP

  on(13); // replaced by:   digitalWrite(13, HIGH);
  delay(1000);
  off(13); // replaced by:   digitalWrite(13, LOW);
  delay(1000);

  int value = pin(A0);  // value = analogRead(A0);
  monitor(A0);          // Serial.print("Pin "); Serial.print(p); Serial.print(" = "); say(pin(p));
  
  value = pin(12);  // value = digitalRead(12);

  checkPin(PIN_BUTTON) { // if(pin(PIN_BUTTON)
    say("Pin is ON");
  } 
    
  repeat(20) { // for(int index=0; index<20; index++)
    shim(11, index);
    delay(10);
  }

  cycle(5, 10){ // for(int index=5; index<10; index++)
    on(index);
  }
  
END
