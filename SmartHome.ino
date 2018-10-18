
int b4 = 12;
int b5 = 13;
int b3 = 11;
int b0 = 8;

String command;

void setup() {
Serial.begin(9600);  
 
pinMode(b4, OUTPUT);
pinMode(b5, OUTPUT);
pinMode(b3, OUTPUT);
pinMode(b0, OUTPUT);
}


void loop() {
  while(Serial.available()) {

command= Serial.readString();// read the incoming data as string

if(command == "1"){//serial command 1 to turn on burglar alarm
burglarAlarmLampOn();
Serial.println("Burglar alarm on");
} 
else if(command == "2"){//serial command 2 to turn off burglar alarm 
burglarAlarmLampOff();
Serial.println("Burglar alarm off");
} else if(command == "3"){//serial command 3 to turn on firealarm alarm 
turnAlarmOn();
Serial.println("Fire alarm on");
} else if(command == "4"){//serial command 4 to turn off firealarm alarm 
turnAlarmOff();
Serial.println("Fire alarm off");
}else if(command == "5"){//serial command 5 to turn on outside lamp 
turnOutsideLampOn();
Serial.println("Lamp outside on");
}else if(command == "6"){//serial command 6 to turn off outside lamp 
turnOutsideLampOff();
Serial.println("Lamp outside off");
} else if(command == "7"){//serial command 7 to turn on indoor lamp 
turnIndoorLampOn();
Serial.println("Lamp inside on");
} else if(command == "8"){//serial command 8 to turn off indoor lamp 
turnIndoorLampOff();
Serial.println("Lamp inside on");
} else {
 Serial.println("Not known command");
}

}

}
void turnOutsideLampOn(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);  
  
}
void turnOutsideLampOff(){
digitalWrite(b4, HIGH);
  digitalWrite(b5, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);  
  
}
void turnIndoorLampOn(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, LOW);   
  
}

void turnIndoorLampOff(){
   digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, LOW); 
 
}

void turnAlarmOn(){
   digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b0, LOW);  
 
}
void turnAlarmOff(){
   digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b0, LOW);  

}
void burglarAlarmLampOn(){
  digitalWrite(b4, LOW);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);
  
}
void burglarAlarmLampOff(){
  digitalWrite(b4, HIGH);
  digitalWrite(b5, LOW);
  digitalWrite(b3, HIGH);
  digitalWrite(b0, HIGH);
 
}
