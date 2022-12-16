void setup() {
  // initialize digital pin 2 as an output.
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   // turn the LED on 
  delay(1000);                       // waiting time
  digitalWrite(2, LOW);    // turn the LED off 
  delay(1000);                       // waiting time
}