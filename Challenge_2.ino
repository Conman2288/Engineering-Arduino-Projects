#include <Servo.h>
Servo myservo1; //establishes left servo
Servo myservo2; // establishes right servo

void turn_left(){
  //This function will set the Arduino on its intial trajectory.

  myservo1.writeMicroseconds(1400);
  myservo2.writeMicroseconds(1300);
  delay(500);  
}

void sweep_right(){
  //This function will move the Arduino in a rightward sweeping motion for its initial loop.
  myservo1.writeMicroseconds(1900);
  myservo2.writeMicroseconds(1250);
  delay(4750);
}
 
void sweep_left(){
  //This function will move the Arduino in a leftward sweeping motion for its second loop.
  myservo1.writeMicroseconds(1720);
  myservo2.writeMicroseconds(1050);
  delay(5800);
}

void setup() {
 pinMode(10, INPUT);
 myservo1.attach(11);
 myservo2.attach(12); 

}

void loop(){
int switchStatus = digitalRead(10);

//Body of code. The program only starts when the button is pressed, else, the robot stays stationary.
if (switchStatus == 1){
  for(int i = 0; i < 1; i++){
    turn_left();
    sweep_right();
    sweep_left();
   
  }
}
  else{
    myservo1.writeMicroseconds(1500);
    myservo2.writeMicroseconds(1500);
    
  }
  
  }
