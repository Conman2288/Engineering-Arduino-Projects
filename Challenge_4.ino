#include <Servo.h>

Servo myservo1; //establishes left servo 
Servo myservo2; // establishes right servo


void forward(){
  // This function moves the robot forward
  myservo1.writeMicroseconds(1750);
  myservo2.writeMicroseconds(1200);
  delay(1300);
}

void turn_left(){
  // This function turns the robot to the left
  myservo1.writeMicroseconds(1500);
  myservo2.writeMicroseconds(1300);
  delay(1000);
}

void turn_right(){
  // This function turns the robot to the right
  myservo1.writeMicroseconds(1700);
  myservo2.writeMicroseconds(1500);
  delay(900);
}

void setup(){
  pinMode(10, INPUT);
 myservo1.attach(11);
 myservo2.attach(12); 

}

// Main Body of Code 
void loop() {
  // The body of the code will not run unless the button has been pressed.
 int switchStatus = digitalRead(10);


if (switchStatus == 1){

  for(int i = 0; i < 1; i++){
    forward();
    turn_left();
    forward();
    turn_left();
    forward();
    turn_right();
    forward();
    
  }
}
  else{
    myservo1.writeMicroseconds(1500);
    myservo2.writeMicroseconds(1500);
  }

}
