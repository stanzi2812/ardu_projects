int ledPinBlink = 13;
int ledPinTaster = 10;
int tasterPin = 8;
int tasterStatus;
int intervall = 2000;
unsigned long prev;
int ledStatus = LOW;

void setup(){
  pinMode(ledPinBlink, OUTPUT);
  pinMode (ledPinTaster, OUTPUT);
  pinMode (tasterPin, INPUT);
  prev = millis();
}
void loop(){
  if (millis() - prev > intervall){
    prev=millis();
    ledStatus = !ledStatus;
    digitalWrite(ledPinBlink, ledStatus);
  }
  tasterStatus = digitalRead(tasterPin);
  if (tasterStatus == HIGH) {
    if (digitalRead(ledPinTaster))   
      digitalWrite(ledPinTaster, LOW);
    else
       digitalWrite(ledPinTaster, HIGH);
  } 
}
   
