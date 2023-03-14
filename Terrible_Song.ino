int halfPeriod;
int c4 = 262;
int c4sharp = 277;
int d4 = 294;
int d4sharp = 311;
int e4 = 330;
int f4 = 350;
int f4sharp = 370;
int g4 = 392;
int g4sharp = 415;
int a4 = 440;
int a4sharp = 466;
int b4 = 494;
int c5 = 523;
int c5sharp = 554;
int d5 = 587;
int d5sharp = 622;
int e5 = 659;
int f5 = 698;
int f5sharp = 740;
int g5 = 784;
int g5sharp = 831;
int a5 = 880;
int a5sharp = 932;
int b5 = 988;

int notes[] = {e4, d4, c5, d4, e4, e4};
void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 5; i++){
    tone(8, notes[i]);
    delay(250);
    noTone(8);
  }
  tone(8, e4);
  delay(500);
  noTone(8);
  tone(8, d4);
  delay(250);
  noTone(8);
  tone(8, d4);
  delay(250);
  noTone(8);
  tone(8, d4);
  delay(500);
  noTone(8);
  tone(8, e4);
  delay(250);
  noTone(8);
  tone(8, e4);
  delay(250);
  noTone(8);
  delay(500);
  for (int i = 0; i <= 5; i++){
    tone(8, notes[i]);
    delay(250);
    noTone(8);
}
  tone(8, e4);
  delay(250);
  noTone(8);
  tone(8, c5);
  delay(250);
  noTone(8);
  tone(8, d4);
  delay(250);
  noTone(8);
  tone(8, d4);
  delay(250);
  noTone(8);
  tone(8, e4);
  delay(250);
  noTone(8);
  tone(8, d4);
  delay(250);
  noTone(8);
  tone(8, c5);
  delay(1000);
  noTone(8);
}
