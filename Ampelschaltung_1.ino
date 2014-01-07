#define DELAY1 10000  //Pause 1 für 10 sekunden
#define DELAY2 2000  //Pause 2 für 2 Sekunden
#define DELAY3 3000  //Pause 3 für 3 Sekunden

int ledPinRot = 6;
int ledPinGelb = 8;
int ledPinGruen = 10;

void setup() {
  pinMode(ledPinRot, OUTPUT);
  pinMode(ledPinGelb, OUTPUT);
  pinMode(ledPinGruen, OUTPUT);
}

void loop() {
  digitalWrite(ledPinRot, HIGH);
  delay(DELAY1);
  digitalWrite(ledPinGelb, HIGH);
  delay(DELAY2);
  digitalWrite(ledPinRot, LOW);
  digitalWrite(ledPinGelb, LOW);
  digitalWrite(ledPinGruen, HIGH);
  delay(DELAY3);
  digitalWrite(ledPinGruen, LOW);
  digitalWrite(ledPinGelb, HIGH);
  delay(DELAY3);
  digitalWrite(ledPinGelb, LOW);
}
