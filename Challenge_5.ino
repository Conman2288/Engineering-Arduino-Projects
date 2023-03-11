#include <Servo.h>

Servo myservo1; //establishes left servo
Servo myservo2; // establishes right servo


int val = 0;

void move_backward(){
  // This function moves the robot backwards
  myservo1.writeMicroseconds(1400);
  myservo2.writeMicroseconds(1600);
}

void move_forward(){
  // This function moves the robot forwards
  myservo1.writeMicroseconds(1700);
  myservo2.writeMicroseconds(1300);
}

void move_in_circle(){
   // This function moves the robot in a circular motion
  myservo1.writeMicroseconds(1200);
  myservo2.writeMicroseconds(1200);
}

void setup() {

 Serial.begin(9600);
 pinMode(10, INPUT);
 myservo1.attach(11);
 myservo2.attach(12);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);

}

void loop() {  
  // The code only initializes once the button has been pressed.
  int switchStatus = digitalRead(10);
  val = analogRead(2);
  Serial.println(val);

  // The body of the code has the robot move in certain ways according to the light value being read by the photoresistor. 
  //Also a certain color light is shined based on which movement the robot is making.

  for(int i = 0; i < 1; i++){
    if (val < 800){
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
      move_backward();
    }
    if (val > 800 && val < 960){
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
      move_forward();
    }
    if (val > 960){
      digitalWrite(2, HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4, LOW);
      move_in_circle();
    }
    if (switchStatus == 1){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      exit(0); 
    }
  
  
  
}
}
