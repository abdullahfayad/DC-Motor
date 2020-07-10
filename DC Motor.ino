/*
  Controlling DC Motor
  by Abdullah Fayad
*/
#define enB 3
#define in3 4
#define in4 5

void setup() {
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() {
  digitalWrite(in3, LOW);  // Initialize the direction
  digitalWrite(in4, HIGH);
  analogWrite(enB, 255);  // Set the speed equal to 255
  delay(1000);
  analogWrite(enB, 100);  // decrease the speed
  delay(1000);
  digitalWrite(in3, HIGH);  // Change the direction
  digitalWrite(in4, LOW);
  analogWrite(enB, 255); // Set the speed equal to 255
  delay(1000);
  analogWrite(enB, 100);  // decrease the speed
  delay(1000);
}
