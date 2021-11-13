#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
Servo myservo1,myservo2;  

int pos = 0;    // variable to store the servo position

char auth[] = "4ZWZ8gK1eGMapXDW6HhXr6iFtZFfcQOI";

char ssid[] = "Rishab";
char pass[] = "rishab123";

void setup()
{
  myservo1.attach(9);
  myservo1.attach(2);
  Serial.begin(9600);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
 Blynk.run();
 if(D0==HIGH&&D1==HIGH)
 {
  while(pos>0) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    pos--;                        // waits 15 ms for the servo to reach the position
  }
 }
 if(D2==HIGH&&D3==HIGH)
 {
  while(pos>0) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    pos--;                        // waits 15 ms for the servo to reach the position
  }
 }
  if(D0==LOW&&D1==HIGH)
 {
  while(pos>0) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    pos--;                        // waits 15 ms for the servo to reach the position
  }
 }
 if(D2==LOW&&D3==HIGH)
 {
  while(pos>0) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    pos--;                       // waits 15 ms for the servo to reach the position
  }
 } 
}
