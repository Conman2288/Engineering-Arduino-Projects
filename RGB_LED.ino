int redLED = 9;
int greenLED = 10;
int blueLED = 11;




void redBlink(){
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(1000);
}

void blueBlink(){
  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  delay(1000);
}

void greenBlink(){
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  delay(1000);
}


void analogTest(){
  for (int i = 0; i<256; i++){
    analogWrite(redLED, i);
    delay(5);
  }
}


void blinkPurple(){
  analogWrite(redLED, 255);
  analogWrite(blueLED, 255);
  delay(1000);
  analogWrite(redLED, 0);
  analogWrite(blueLED, 0);
  delay(1000);
}


void blinkCyan(){
  analogWrite(greenLED, 255);
  analogWrite(blueLED, 255);
  delay(1000);
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 0);
  delay(1000);
}

void blinkYellow(){
  analogWrite(redLED, 255);
  analogWrite(greenLED, 255);
  delay(1000);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 0);
  delay(1000);
}

void blinkPattern(){
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  delay(500);
  digitalWrite(blueLED, HIGH);
  delay(750);
  digitalWrite(blueLED, LOW);
  delay(500);
  digitalWrite(greenLED, HIGH);
  delay(1500);
  digitalWrite(greenLED, LOW);
  delay(500);
}

void redToGreen(){
  for (int i = 0; i<256; i++){
    analogWrite(redLED, 255-i);
    analogWrite(greenLED, i);
    delay(10);
  }
  for (int i = 0; i<256; i++){
    analogWrite(redLED, i);
    analogWrite(greenLED, 255-i);
    delay(10);
        
  }
}

void greenToBlue(){
  for (int i = 0; i < 256; i++){
    analogWrite(greenLED, i);
    analogWrite(blueLED, 255-i);
    delay(10);
  }
}

void blueToRed(){
  for (int i = 0; i < 256; i++){
    analogWrite(blueLED, i);
    analogWrite(redLED, 255-i);
    delay(10);
  }
}

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

}

void rainbow(){
  redToGreen();
  greenToBlue();
  blueToRed();
}

void loop() {
  rainbow();
  
  

}
