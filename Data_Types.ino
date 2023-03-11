long timer;
float timerS;

void setup() {
  Serial.begin(9600);

}

void loop() {
  timer = millis();
  Serial.print("timer = " + String(timer) + "ms" + " = ");
  timerS = timer /1000.0;
  Serial.print(timerS, 3);Serial.println("s");

}
