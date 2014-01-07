#include <SoftwareSerial.h>

int ledPin[] = {10, 11, 12, 13}; // LED-Array mit Pin-Werten
int waitPeriod = 100; // Pause zwischen den Wechsel in ms

void setup()
{
  Serial.begin(9600); // Serielle Schnittstelle Konfigurieren
  for(int i = 0; i < 7; i++)
  {
    Serial.println(i);
    pinMode(ledPin[i], OUTPUT);  //Alle Pins werden als Ausgang festgelegt
    
  }
}

void loop()
{
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(ledPin[i], HIGH);  // Arrayelement auf HIGH-Pegel
    delay(waitPeriod);
    digitalWrite(ledPin[i], LOW);  //Arrayelement auf LOW-Pegel
  }
  
    for(int i = 7; i >= 0; i--)
    {
      digitalWrite(ledPin[i], HIGH);  // Arrayelement auf HIGH-Pegel
      delay(waitPeriod);
      digitalWrite(ledPin[i], LOW);  //Arrayelement auf LOW-Pegel
    }
}  
    
   
