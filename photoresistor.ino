#include "msp.h"

#define photoPin A7
#define ledPin P4_7

void setup()
{
  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  runPhoto();
}

void runPhoto()
{
  for(int i = 0; i < 10; i++)
  {
    int photoValue = analogRead(photoPin);

    if (photoValue > 25)
    {
      digitalWrite(ledPin, HIGH);
    }

    else
    {
      digitalWrite(ledPin, LOW);
    }

    delay(1000);
  }
}

void loop()
{
  
}
