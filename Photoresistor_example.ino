int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  val = analogRead(2);
  Serial.println(val);

  if (val < 400){
    
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
  }
}
