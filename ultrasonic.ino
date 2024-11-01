#include "msp.h"

#define triggerPin P2_4
#define echoPin P2_6

void setup()
{
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  runSensor();
}

void runSensor()
{
  digitalWrite(triggerPin, LOW);

  for(int i = 0; i < 10; i++)
  {
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    long duration = pulseIn(echoPin, HIGH);
    long distance = (duration * 0.034/2);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");
    delay(500);
  }
}

void loop()
{
  
}
