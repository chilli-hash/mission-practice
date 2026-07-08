const int left_ena = 10;
const int right_ena = 9;
const int left_fwd = 11;
const int right_fwd = 7;
const int left_rev = 12;
const int right_rev = 8;
int i = 7;

// forward 5 seconds, stop 1 second, reverse 2 seconds

void setup() {
  // put your setup code here, to run once:
  for (i=7; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(left_ena, HIGH);
  digitalWrite(right_ena, HIGH);
  digitalWrite(left_fwd, HIGH);
  digitalWrite(right_fwd, HIGH);
  digitalWrite(left_rev, LOW);
  digitalWrite(right_rev, LOW);
  delay(5000);

  digitalWrite(left_ena, LOW);
  digitalWrite(right_ena, LOW);
  delay(1000);

  digitalWrite(left_ena, HIGH);
  digitalWrite(right_ena, HIGH);
  digitalWrite(left_fwd, LOW);
  digitalWrite(right_fwd, LOW);
  digitalWrite(left_rev, HIGH);
  digitalWrite(right_rev, HIGH);
  delay(2000);
}