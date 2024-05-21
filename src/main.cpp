#include <Arduino.h>
#define LED1 16
int a = 0;
// the setup routine runs once when you press reset:
void setup()
{
  pinMode(LED1, OUTPUT);
  // initialize the digital pin as an output.
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop()
{
  Serial.println(a++);
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED1, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED1, LOW);
  // wait for a second
  delay(2000);
}