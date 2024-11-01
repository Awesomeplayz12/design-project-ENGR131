#include "msp.h"

#define ledPin P4_7

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  runLED();
}

void runLED()
{
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
}

void loop()
{
  
}
