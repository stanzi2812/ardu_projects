int ledPinRot = 4;
int ledPinGelb = 5;
int ledPinBlau = 6;
int ledPinGruen = 7;
int tasterStatus;
int tasterPin = 2;

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
    if (digitalRead (ledPinRot))
      digitalWrite(ledPinRot,LOW);
  else
    digitalWrite(ledPinRot, HIGH);
  }
  tasterStatus = digitalRead(tasterPin);
  if (ledPinRot == HIGH){
    if (digitalRead(ledPinRot))
      digitalWrite(ledPinGelb, LOW);
    else
      digitalWrite(ledPinGelb, HIGH);
  }
}

