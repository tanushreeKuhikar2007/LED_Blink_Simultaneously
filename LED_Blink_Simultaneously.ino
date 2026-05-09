#define led1 11
#define led2 6

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

  // Both LEDs ON
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);

  // Both LEDs OFF
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
}