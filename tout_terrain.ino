//#include <Psx.h>  // Includes the Psx Library
char t;
#define avd 5
#define ard 4
#define avg 2
#define arg 3

// Any pins can be used since it is done in software
//#define dataPin 6
//#define cmndPin 7
//#define attPin 9
//#define clockPin 10
//Psx Psx;  // Initializes the library

//unsigned int data = 0;
void setup() {
  
  //Psx.setupPins(dataPin, cmndPin, attPin, clockPin, 10);
  pinMode(avd, OUTPUT);
  pinMode(ard, OUTPUT);
  //digitalWrite(avd, HIGH);
  //digitalWrite(ard, HIGH);
  pinMode(avg, OUTPUT);
  pinMode(arg, OUTPUT);
  //digitalWrite(avg, HIGH);
  //digitalWrite(arg, HIGH);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
  //data = Psx.read();  // Psx.read() initiates the PSX cont
 // roller and returns
                      // the button data
  //Serial.println(data);
  /*if (t == 'F') {
    digitalWrite(avd, LOW);
    digitalWrite(ard, HIGH);
    digitalWrite(avg, LOW);
    digitalWrite(arg, HIGH);
  } else if (t == 'B') {
    digitalWrite(avd, HIGH);
    digitalWrite(ard, LOW);
    digitalWrite(avg, HIGH);
    digitalWrite(arg, LOW);
  } else if ((t == 'R')) {
    digitalWrite(avd, HIGH);
    digitalWrite(ard, LOW);
    digitalWrite(avg, LOW);
    digitalWrite(arg, LOW);
  } else if ((t == 'L')) {
    digitalWrite(avd, HIGH);
    digitalWrite(ard, LOW);
    digitalWrite(avg, LOW);
    digitalWrite(arg, HIGH);
  } else if (t == 'W') {
    digitalWrite(avd, LOW);
    digitalWrite(ard, LOW);
    digitalWrite(avg, LOW);
    digitalWrite(arg, HIGH);
  } else if (t == 'S') {
    digitalWrite(avd, LOW);
    digitalWrite(ard, HIGH);
    digitalWrite(avg, HIGH);
    digitalWrite(arg, LOW);
  } else {
    digitalWrite(avd, HIGH);
    digitalWrite(ard, HIGH);
    digitalWrite(avg, HIGH);
    digitalWrite(arg, HIGH);
  }
  delay(20);*/
}
