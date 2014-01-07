int ledPinRot = 4;
int ledPinGelb = 5;
int ledPinBlau = 6;
int ledPinGruen = 7;
int tasterStatus;
int tasterPin = 2;
int zaehler = 0;
int prelldly = 500;

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
    if (zaehler>4) {
      zaehler = 0;
      ResetDisplay(500);
    }
    delay(prelldly);
  }
  if (zaehler <1) { AllesAus(); }
  if (zaehler >=1) {digitalWrite (ledPinRot, HIGH);}
  if (zaehler >=2) {digitalWrite (ledPinGelb, HIGH);}
  if (zaehler >=3) {digitalWrite (ledPinBlau, HIGH);}
  if (zaehler >=4) {digitalWrite (ledPinGruen, HIGH);}
}

/* ==================== FUNCTIONS ========================= */
 int ResetDisplay(int blkdly) {
  digitalWrite (ledPinGruen, LOW);
  delay(blkdly);
  digitalWrite (ledPinBlau, LOW);
  delay(blkdly);
  digitalWrite (ledPinGelb, LOW);
  delay(blkdly);
  digitalWrite (ledPinRot, LOW);
  delay(blkdly);
  digitalWrite (ledPinRot, HIGH);
  digitalWrite (ledPinGelb, HIGH);
  digitalWrite (ledPinBlau, HIGH);
  digitalWrite (ledPinGruen, HIGH);
  delay(blkdly);
  digitalWrite (ledPinRot, LOW);
  digitalWrite (ledPinGelb, LOW);
  digitalWrite (ledPinBlau, LOW);
  digitalWrite (ledPinGruen, LOW);
  return HIGH;
 }
 
 int AllesAus() {
  digitalWrite (ledPinRot, LOW);
  digitalWrite (ledPinGelb, LOW);
  digitalWrite (ledPinBlau, LOW);
  digitalWrite (ledPinGruen, LOW);
}
 
