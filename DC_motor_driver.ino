int enA = 9;
int in1 = 8;
int in2 = 7;

void setup() {
  pinMode(enA, OUTPUT);         // Sets all motor control pins to outputs
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void directionControl(){                // This function lets you control spinning direction of motors
  analogWrite(enA, 255);                // Set motors to maximum speed. For pulse width modulation the values range from 0 ot 255

  digitalWrite(in1, HIGH);            // Turns on motor A
  digitalWrite(in2, LOW);
  delay(2000);

  digitalWrite(in1, LOW);             // Changes direction
  digitalWrite(in2, HIGH);
  delay(2000);

  digitalWrite(in1, LOW);             // Turns motor off
  digitalWrite(in2, LOW);
}

void speedControl(){                  // This function lets you control speed of the motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  for (int i = 0; i < 256; i++){      // Accelerate from zero to max speed
    analogWrite(enA, i);
    delay(20);
  }

  for (int i = 255; i >= 0; --i){     // Decelerate from max speed to zero
    analogWrite(enA, i);
    delay(20);
  }

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}
