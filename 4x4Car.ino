#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_NAME "Demo Template" // blynk template name
#define BLYNK_TEMPLATE_ID "TMPL3TAo4PL-n"// blynk template id 
#define BLYNK_AUTH_TOKEN "o4ykpwDHi-Nt_zG-XKcPeyM_CyDg5qL9" //blynk auth token

// you have to change these things according to your blynk id and token

#include <SPI.h> 
#include <WiFiS3.h> // wifi s3 is lib for arduino r4
#include <BlynkSimpleWifi.h>  // simple blynk lib
// #define RMotorFW 4
// #define RMotorBW 3
// #define LMotorFW 5
// #define LMotorBW 6
#define BackRightReverse 2
#define BackLeftReverse 3
#define BackRightForeward 4
#define BackLeftForeward 12
#define FrontLeftReverse 13
#define FrontRightReverse 7
#define FrontRightForeward 8
#define FrontLeftForeward 9
#define SPEED1 5
#define SPEED2 6
#define SPEED3 10
#define SPEED4 11

// I have used L298N motor driver for the motors I have used 2 of them to make my car 4x4, l298n makes 2 motor go foreward or backward that is why total 8 fwd and rwd command each motor fwd rwd x4, also each motor speed can be controlled for that speed function is used.

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Area 24";
char pass[] = "Human@222";

#define LED_PIN 13

void setup() {
  // Debug console
  Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(12, OUTPUT);

// set each pin to perfom as a output..

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass); // blynk protocal start
}

// This function is called every time the Virtual Pin V0 state changes
BLYNK_WRITE(V0) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    digitalWrite(BackRightForeward, HIGH);
    digitalWrite(BackLeftForeward, HIGH);  
    digitalWrite(FrontRightForeward, HIGH);
    digitalWrite(FrontLeftForeward, HIGH);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, LOW);

  } else {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, LOW);
  }
}
 // blynk data stream config V0 wll make each motor fwd high and all motor will go fwd
BLYNK_WRITE(V1) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, HIGH);
    digitalWrite(BackLeftReverse, HIGH);
    digitalWrite(FrontLeftReverse, HIGH);
    digitalWrite(FrontRightReverse, HIGH);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
  } else {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, LOW);
  }
}
// V1 is configured to set each motor rwd to high to make the car go reverse
BLYNK_WRITE(V2) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, HIGH);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, HIGH);
    digitalWrite(BackRightReverse, HIGH);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, HIGH);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
  } else {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, LOW);
  }
}
// V2 is configured to move the car to right this command make both the left motor go foreward and both to right motor to go backward to make the car turn to right
BLYNK_WRITE(V3) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    digitalWrite(BackRightForeward, HIGH);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, HIGH);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, HIGH);
    digitalWrite(FrontLeftReverse, HIGH);
    digitalWrite(FrontRightReverse, LOW);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
  } else {
    digitalWrite(BackRightForeward, LOW);
    digitalWrite(BackLeftForeward, LOW);  
    digitalWrite(FrontRightForeward, LOW);
    digitalWrite(FrontLeftForeward, LOW);
    digitalWrite(BackRightReverse, LOW);
    digitalWrite(BackLeftReverse, LOW);
    digitalWrite(FrontLeftReverse, LOW);
    digitalWrite(FrontRightReverse, LOW);
  }
}
// V3 same as right command but the left motors will move backwards and both the right motors to foreward to make the car take a left turn


BLYNK_WRITE(V5) {
  int value = param.asInt();
  Serial.println(value);
  //int runspeed = value;
  analogWrite(SPEED1, value);
  analogWrite(SPEED2, value);
  analogWrite(SPEED3, value);
  analogWrite(SPEED4, value);
  Serial.println(value);
}

// V5 is connected to a slider which can change the speed of the motor the value pass from the phone written on all motor speed settings

void loop() {
  Blynk.run(); // run blynk
}