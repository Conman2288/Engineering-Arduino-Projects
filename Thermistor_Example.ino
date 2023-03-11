int val = 0;
float(celsius) = 1;
float(fahrenheit) = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(5);
  celsius = ((val-213.32)/12.343)+1.0;
  fahrenheit = ((celsius*(1.8)) + 32);
  
  Serial.print("Analog Value = " + String(val));
  Serial.print("\t Temp = ");
  Serial.print(celsius, 4);
  Serial.print("°C = ");
  Serial.print(fahrenheit, 3);
  Serial.println("°F");
}
