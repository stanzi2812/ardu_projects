
int ledPin[] = {
  4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // LED-Array mit Pin-Werten
int rechts[2] = { 
  4,13};  
int waitPeriod = 100; // Pause zwischen den Wechsel in ms
int tasterPin= 2;
int ledBlinkt;
int tasterOn=0;
int vorherTasterWert=0;
int tasterWert=0;
int ranNum;
int ranDel;
void setup(){

  Serial.begin(9600); // Serielle Schnittstelle Konfigurieren
  for(int i = 0; i < 13; i++) {
    Serial.println(i);
    pinMode(ledPin[i], OUTPUT);  //Alle Pins werden als Ausgang festgelegt
    pinMode(tasterPin, INPUT);
  }

}

void loop()  {

  switch (tasterOn) {
  case 1:
    KnightRider();
    break;
  case 2:
    AlleAN();
    break;  
  case 3:
    Zufall();
    break;
  case 4:
    Laola();
    break;
  default:
    tasterOn=0;
    for(int i = 0; i<13; i++)   {
      digitalWrite(ledPin[i], LOW);  // Lampe AUS
    }
  }      
  CheckEingabe ();
  //Serial.println(tasterOn);
}

void CheckEingabe () {


  int tasterWert = digitalRead(tasterPin);
  if (vorherTasterWert != tasterWert){

    //Serial.println("CheckEingabe");

    if (tasterWert==HIGH){
      tasterOn++;
      Serial.println("Taster pressed");
    }
    delay(50);
  }
  vorherTasterWert = tasterWert;
  if (tasterOn%2==0)
    loop;  
}

void KnightRider() {
  Serial.println("KnightRider");
  for(int i = 0; i < 13; i++)   {
    digitalWrite(ledPin[i], HIGH);  // Arrayelement auf HIGH-Pegel
    delay(waitPeriod);
    digitalWrite(ledPin[i], LOW);  //Arrayelement auf LOW-Pegel
    CheckEingabe ();
  }

  for(int i = 13; i >= 0; i--) {
    digitalWrite(ledPin[i], HIGH);  // Arrayelement auf HIGH-Pegel
    delay(waitPeriod);
    digitalWrite(ledPin[i], LOW);  //Arrayelement auf LOW-Pegel
    CheckEingabe ();
  }
}

void AlleAN() {
  Serial.println("AlleAN");
  for(int i = 0; i<13; i++)   {
    digitalWrite(ledPin[i], HIGH);  // Lampe AN
    delay(waitPeriod);
    CheckEingabe ();
  }
}

void Zufall() {
  Serial.println("Zufall");
  ranNum=random(14);
  digitalWrite(ranNum, HIGH);
  delay(waitPeriod);
  digitalWrite(ranNum, LOW);
  CheckEingabe ();
}

void Laola() {
  Serial.println("Laola2");
  for(int i =0 ; i<=10; i++){

    digitalWrite(ledPin[i+1], HIGH);
    digitalWrite(ledPin[10-i], HIGH);
    delay(waitPeriod);
    digitalWrite(ledPin[10-i], LOW);
    digitalWrite(ledPin[i+1], LOW);
    CheckEingabe ();
  }
}











