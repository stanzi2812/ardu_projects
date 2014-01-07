#include <Bounce.h>

int tasterPin = 8;              //Taster-Pin 2
int tasterWert = 0;             // Variable zur Aufnahme des Tasterstatus
int vorherTasterWert = 0;       //Variable zur Aufnahme des alten Tasterstatus
int ledPin = 13;                //LED-Pin 8
int zaehler = 0;                //Zählervariable

void setup(){
  pinMode(tasterPin, INPUT);    //Taster-Pin als eingang
  pinMode(ledPin, OUTPUT);      //LED-Pin als ausgang
}
void loop(){
  tasterWert = digitalRead(tasterPin);    //Abfrage des Tasters
  if (vorherTasterWert != tasterWert){
    if (tasterWert == HIGH){
      zaehler++;                          //Zähler inkrementieren (+1)
    }
  }
  vorherTasterWert = tasterWert;         //speichern des aktuellen Tasterwertes
  if(zaehler %2 == 0)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
  delay(10);
}
