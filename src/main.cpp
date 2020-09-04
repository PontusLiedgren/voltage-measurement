#include <Arduino.h>

int green_led = 12;
int red_led = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  float voltage = 5.0 * value / 1024;
  Serial.println(voltage);
  delay(1000);
  
  if (voltage < 1.5) {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
  }
  else {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, HIGH);
  }

}