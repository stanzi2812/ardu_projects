int ledPin = 13;  //led Pin 13
int tasterPin = 8; // Taster Pin 8
int tasterStatus;  // Variable zur aufnahme des Tasterstatus
void setup()
{
   pinMode(ledPin, OUTPUT);  //led Pin als Ausgang
   pinMode(tasterPin, INPUT);  //Tasterpin als Eingang
}

void loop()
{
  tasterStatus = digitalRead(tasterPin);
  if (tasterStatus == HIGH)
    digitalWrite(ledPin, HIGH);
   else
     digitalWrite(ledPin, LOW);
}


