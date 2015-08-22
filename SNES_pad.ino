int blue = 9;
int red = 10;
int yellow = 11;
int green = 12;
int left = 13;
int right = 8;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(yellow, HIGH);
  delay(100);
  digitalWrite(blue, HIGH);
  delay(100);
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(blue, LOW);
  delay(100);
  digitalWrite(yellow, LOW);
  delay(100);
  digitalWrite(green, LOW);
  delay(1000);              // wait for a second
  //Next Sequence
  digitalWrite(green, HIGH);
  digitalWrite(yellow, HIGH);
  delay(300);
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(300);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  delay(300);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay(300); 
}
