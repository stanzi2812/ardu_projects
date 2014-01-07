#define DELAY1 5000
#define DELAY2 2000
#define DELAY3 3000
#define DELAY4 1000

int ledPinRot = 6;
int ledPinGelb = 8;
int ledPinGruen = 10;
int ledFussRot = 4;
int ledFussGruen = 2;
int tasterPin = 12;
int tasterAmpelWert = LOW;

void setup() {
  pinMode(ledPinRot, OUTPUT);
  pinMode(ledPinGelb, OUTPUT);
  pinMode(ledPinGruen, OUTPUT);
  pinMode(ledFussRot, OUTPUT);
  pinMode(ledFussGruen, OUTPUT);
  pinMode(tasterPin, INPUT);
  digitalWrite(ledPinGruen, HIGH);
  digitalWrite(ledFussRot, HIGH);
}

void loop() {
  //AMpeltasterstatus in Variable einlesen
  tasterAmpelWert=digitalRead(tasterPin);

  //Wurde Taster gedrückt dann rufe Funktion auf
  if (tasterAmpelWert==HIGH)
    ampelUmschaltung();
    
}

void ampelUmschaltung() {
  delay(DELAY2);
  digitalWrite(ledPinGruen, LOW);
  digitalWrite(ledPinGelb, HIGH); 
  delay(DELAY3);
  digitalWrite(ledPinGelb, LOW);
  digitalWrite(ledPinRot, HIGH); 
  delay(DELAY1);
  digitalWrite(ledFussGruen, HIGH);
  digitalWrite(ledFussRot, LOW);
  delay(DELAY2);
  digitalWrite(ledFussGruen, LOW);
  digitalWrite(ledFussRot, HIGH);
  delay(DELAY1);
  digitalWrite(ledPinGelb, HIGH);
  delay(DELAY2);
  digitalWrite(ledPinRot, LOW);
  digitalWrite(ledPinGelb, LOW);
  digitalWrite(ledPinGruen, HIGH);
}





