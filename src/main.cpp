/*
*Project: ESP32 LED BLINK Demo
*Board ESP32 DevKit V1
*On Board LED
*/
#include <Arduino.h>
#define LED1 //GPIO 2
#define LED2
#define LED3

void setup() {//Set pin mode
  pinMode(LED1, OUTPUT);// put your setup code here, to run once:
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  delay(2000);
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
  delay(2000);
  digitalWrite(LED2,HIGH);
  delay(2000);
  digitalWrite(LED2,LOW);
  delay(2000);
  digitalWrite(LED3,HIGH);
  delay(2000);
  digitalWrite(LED3,LOW);
  // put your main code here, to run repeatedly:
}