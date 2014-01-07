int tiziano = 13;
int emilio = 12;
int huilin = 11;
int pause = 1000;
int pause1 = 100;
void setup (){
  pinMode(emilio,OUTPUT);
  pinMode(tiziano,OUTPUT);
  pinMode(huilin,OUTPUT);
}

void loop(){
  digitalWrite(tiziano,HIGH);
  delay(pause);
  digitalWrite(tiziano,LOW);
  delay(pause1);
  digitalWrite(emilio,HIGH);
  delay(pause);
  digitalWrite(emilio,LOW);
  delay(pause1);
  digitalWrite(huilin,HIGH);
  delay(pause);
  digitalWrite(huilin,LOW);
  delay(pause1);
}
