int ledPin = 13;
int ledS = 300;
int ledO = 1500;
int ledAus = 500;
int ledAus1 =2000;
void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledO);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledO);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledO);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus);
  digitalWrite(ledPin, HIGH);
  delay(ledS);
  digitalWrite(ledPin, LOW);
  delay(ledAus1);
}
