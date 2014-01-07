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
void setzeLEDs(int ampelwert, int pause) {
  digitalWrite(ledPinRot, (ampelwert&1)==1?HIGH:LOW);
  digitalWrite(ledPinGelb, (ampelwert&2)==2?HIGH:LOW);
  digitalWrite(ledPinGruen, (ampelwert&4)==4?HIGH:LOW);
  digitalWrite(ledFussRot, (ampelwert&8)==8?HIGH:LOW);
  digitalWrite(ledFussGruen, (ampelwert&16)==16?HIGH:LOW);
  delay(pause);
}

void ampelUmschaltung() {
  delay(1000);
  setzeLEDs(10, 2000);
  setzeLEDs(9,5000);
  setzeLEDs(17, 2000);
  setzeLEDs(9,5000);
  setzeLEDs(11, 2000);
  setzeLEDs(12,0);
}



