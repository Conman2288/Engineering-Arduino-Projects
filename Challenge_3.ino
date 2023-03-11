#include <Servo.h>

Servo myservo1; //establishes left servo
Servo myservo2; // establishes right servo

void crazy_move1(){
  // This function moves the robot forward.
  myservo1.writeMicroseconds(1800);
  myservo2.writeMicroseconds(1800);
  delay(2000);
}

void crazy_move2(){
  //This function moves the robot backwards.
  myservo1.writeMicroseconds(1200);
  myservo2.writeMicroseconds(1200);
  delay(2000);
}

void crazy_move3(){
  // This function moves the robot in a circle for two cycles.
  for (int i = 0; i < 2; i++){
  myservo1.writeMicroseconds(1800);
  myservo2.writeMicroseconds(1200);
  delay(1000);
  myservo1.writeMicroseconds(1200);
  myservo2.writeMicroseconds(1800);
  delay(1000);
  myservo1.writeMicroseconds(1500);
  myservo2.writeMicroseconds(1500);
  }
}

void blink_pattern(){
  // This function makes the lights on the Arduino blink in a cool pattern.
for (int i = 0; i < 4; i++){
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  
  }
  digitalWrite(2, LOW);
}

void setup() {
  pinMode(10, INPUT);
 myservo1.attach(11);
 myservo2.attach(12);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 
}


void loop(){
int switchStatus = digitalRead(10);


if (switchStatus == 1){
  for(int i = 0; i < 1; i++){
    crazy_move1();
    crazy_move2();
    crazy_move3();
    blink_pattern();
    
  }
}
else{
  myservo1.writeMicroseconds(1500);
  myservo2.writeMicroseconds(1500);
}
  }
