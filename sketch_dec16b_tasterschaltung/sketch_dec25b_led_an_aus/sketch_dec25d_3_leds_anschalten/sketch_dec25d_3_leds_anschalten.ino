int ledPinRot = 4;
int ledPinGelb = 5;
int ledPinBlau = 6;
int ledPinGruen = 7;
int tasterStatus;
int tasterPin = 2;
int zaehler = 0;

void setup(){
  pinMode(tasterPin, INPUT);
  pinMode(ledPinRot, OUTPUT);
  pinMode(ledPinGelb, OUTPUT);
  pinMode(ledPinBlau, OUTPUT);
  pinMode(ledPinGruen, OUTPUT);
}

void loop(){
  tasterStatus = digitalRead(tasterPin);
  if (tasterStatus==HIGH){
    zaehler++;
    if (zaehler>3) {zaehler = 0; }
  }
  if (zaehler <1) {
    digitalWrite (ledPinRot, LOW);
    digitalWrite (ledPinGelb, LOW);
    digitalWrite (ledPinBlau, LOW);
  }
  if (zaehler >=1) {digitalWrite (ledPinRot, HIGH);}
  if (zaehler >=2) {digitalWrite (ledPinGelb, HIGH);}
  if (zaehler >=3) {digitalWrite (ledPinBlau, HIGH);}
}

