#define _A_ 1

#ifndef DEFAULT_SETUP
	#define DEFAULT_SETUP pinMode(13, OUTPUT); pinMode(12, OUTPUT); pinMode(11, OUTPUT); Serial.begin(9600);
#endif
#ifndef CUSTOM_SETUP
	#define CUSTOM_SETUP
#endif


#define SETUP  void setup() { DEFAULT_SETUP CUSTOM_SETUP
#define LOOP  }void loop(){
#define BEGIN void setup() { DEFAULT_SETUP CUSTOM_SETUP } \
  int pin0, pin1, pin2; \
  int a0, a1, a2, a3, a4, a5, a6, a7; \
  void loop(){

#define END }

#define checkPin(X) if(pin(X))
#define repeat(X) for(int index=0;index<(X);index++)
#define cycle(X, Y) for(int index=(X);index<(Y);index++)

int PINS[21];
int PIN_TYPE[21];
int PIN_SET_LOOP[21];

void pinOutput(int pin) {
  if (PIN_SET_LOOP[pin]) return;
  pinMode(pin, OUTPUT);
  PIN_TYPE[pin] = OUTPUT;
  PIN_SET_LOOP[pin] = 1;
}
void pinButton(int pin) {
  if (PIN_SET_LOOP[pin]) return;
  pinMode(pin, INPUT_PULLUP);
  PIN_TYPE[pin] = INPUT_PULLUP;
  PIN_SET_LOOP[pin] = 1;
}

void on(int pin) {
  digitalWrite(pin, HIGH);
}
void off(int pin) {
  digitalWrite(pin, LOW);
}

int pin(int pin) {
  int value =  pin < A0 ? digitalRead(pin) : analogRead(pin);
  PINS[pin] = value;
  return value;
}

void say(String str) {
  Serial.println(str);
}
void say(int number) {
  Serial.println(number);
}

void monitor(int p) {
  Serial.print("Pin ");
  Serial.print(p);
  Serial.print(" = ");

  say(pin(p));
}

void shim(int pin, int value) {
  if (value < 0) return;
  analogWrite(pin, value > 255 ? 255 : value);
}

