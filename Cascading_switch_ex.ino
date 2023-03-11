void setup() {
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
 digitalWrite(7, HIGH);
 digitalWrite(4, HIGH);
 delay(2000);
 digitalWrite(7, LOW);
 digitalWrite(4, LOW);
 delay(1000);

}
