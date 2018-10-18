/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int b4 = 12;
int b5 = 13;
int b3 = 11;
int b0 = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize thef digital pin as an output.
  pinMode(b4, OUTPUT);
pinMode(b5, OUTPUT);
pinMode(b3, OUTPUT);
pinMode(b0, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  burglarAlarmLampOn();
  burglarAlarmLampOff();
//turnOutsideLampOn();
//turnOutsideLampOff();
//turnIndoorLampOn();
//turnIndoorLampOff();
//turnAlarmOn();
//turnAlarmOff();
  // wait for a second
  //digitalWrite(b0, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);               // wait for a second
}
void turnOutsideLampOn(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
}
void turnOutsideLampOff(){
digitalWrite(b4, HIGH);
  digitalWrite(b5, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  
}
void turnIndoorLampOn(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, LOW);   // turn the LED on (HIGH is the voltage level)
  //delay(1000); 
}

void turnIndoorLampOff(){
   digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, LOW);   // turn the LED on (HIGH is the voltage level)
  //delay(1000); 
}

void turnAlarmOn(){
   digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b0, LOW);   // turn the LED on (HIGH is the voltage level)
//  delay(1000); 
}
void turnAlarmOff(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b0, LOW);   // turn the LED on (HIGH is the voltage level)
  //delay(2000); 
}
void burglarAlarmLampOn(){
  digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);
  //delay(2000); 
}
void burglarAlarmLampOff(){
  digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);
  //delay(2000);
}
