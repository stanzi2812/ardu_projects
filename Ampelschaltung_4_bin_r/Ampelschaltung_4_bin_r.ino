#define DELAY1 5000
#define DELAY2 3000
#define DELAY3 2000
#define DELAY4 1000

int ampelRot1 = 1;
int ampelGelb1 = 2;
int ampelGruen1 = 3;
int ampelRot2 = 4;
int ampelGelb2 = 5;
int ampelGruen2 = 6;
int ampelRot3 = 7;
int ampelGelb3 = 8;
int ampelGruen3 = 9;
int ampelRot4 = 10;
int ampelGelb4 = 11;
int ampelGruen4 = 12;

void setup() {
  pinMode(ampelRot1, OUTPUT);
  pinMode(ampelRot1, OUTPUT);
  pinMode(ampelGelb1, OUTPUT);
  pinMode(ampelGruen1, OUTPUT);
  pinMode(ampelRot2, OUTPUT);
  pinMode(ampelGelb2, OUTPUT);
  pinMode(ampelGruen2, OUTPUT);
  pinMode(ampelRot3, OUTPUT);
  pinMode(ampelGelb3, OUTPUT);
  pinMode(ampelGruen3, OUTPUT);
  pinMode(ampelRot4, OUTPUT);
  pinMode(ampelGelb4, OUTPUT);
  pinMode(ampelGruen4, OUTPUT);
  digitalWrite(ampelRot1, HIGH);
  digitalWrite(ampelRot2, HIGH);
  digitalWrite(ampelGruen3, HIGH);
  digitalWrite(ampelGruen4, HIGH);

}

void loop() {
  ampelschaltung();
  delay(DELAY1);
}
void setzeLEDs(int ampelwert, int pause) {
  digitalWrite(ampelRot1, (ampelwert&2048)==2048?HIGH:LOW);
  digitalWrite(ampelGelb1, (ampelwert&1024)==1024?HIGH:LOW);
  digitalWrite(ampelGruen1, (ampelwert&512)==512?HIGH:LOW);
  digitalWrite(ampelRot2, (ampelwert&256)==256?HIGH:LOW);
  digitalWrite(ampelGelb2, (ampelwert&128)==128?HIGH:LOW);
  digitalWrite(ampelGruen2, (ampelwert&64)==64?HIGH:LOW);
  digitalWrite(ampelRot3, (ampelwert&32)==32?HIGH:LOW);
  digitalWrite(ampelGelb3, (ampelwert&16)==16?HIGH:LOW);
  digitalWrite(ampelGruen3, (ampelwert&8)==8?HIGH:LOW);
  digitalWrite(ampelRot4, (ampelwert&4)==4?HIGH:LOW);
  digitalWrite(ampelGelb4, (ampelwert&2)==2?HIGH:LOW);
  digitalWrite(ampelGruen4, (ampelwert&1)==1?HIGH:LOW);
  delay(pause);
}
void ampelschaltung() {
  setzeLEDs(2313, 3000);
  setzeLEDs(2322, 3000);
  setzeLEDs(2340, 3000);
  setzeLEDs(3492, 3000);
  setzeLEDs(612, 3000);
  setzeLEDs(1188, 3000);
  setzeLEDs(2340, 3000);
  setzeLEDs(2358, 3000);
  setzeLEDs(2313, 3000);
}	



