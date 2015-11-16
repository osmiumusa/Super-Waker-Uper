/*
   IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
   An IR LED must be connected to Arduino PWM pin 3.
   Version 0.1 July, 2009
   Copyright 2009 Ken Shirriff
   http://arcfn.com
*/

#include <IRremote.h>

IRsend irsend;
String readString;

void setup()
{
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    delay(3);
    if (Serial.available()>0) {
      char c = Serial.read();
      readString += c;
    } 
  }
  if (readString.length()>0) {
    if(readString.charAt(0)=='*') {
      long millis = atol(readString.substring(1).c_str());
      long seconds = millis/1000;
      Serial.println(seconds);
      int mod = millis%1000;
      while(seconds!=0) {
        delay(1000);
        seconds--;
      }
      delay(mod);
      irsend.sendNEC(0xFFA05F, 32);
      Serial.println("I did it!");
    } /*else if(readString.charAt(0)=='@') {
      long code = atol(readString.substring(1).c_str());
      irsend.sendNEC(code, 32);
      Serial.println("I did it!");
    } */else {
      Serial.println("Illegal Command");
    }
  }
  readString = "";
}
