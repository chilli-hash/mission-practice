const int led_green = 12;
const int led_red = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_green, HIGH);
  delay(1000);
  digitalWrite(led_green, LOW);
  digitalWrite(led_red, HIGH);
  delay(1000);
  digitalWrite(led_red, LOW);
}
