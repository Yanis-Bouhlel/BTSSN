  int pin_R=8;
  int pin_G=7;
  int pin_B=6;

void setup() {
pinMode(pin_R,OUTPUT);
pinMode(pin_G,OUTPUT);
pinMode(pin_B,OUTPUT);

}

void loop() {
  digitalWrite(pin_B,HIGH);
  delay(500);
  digitalWrite(pin_B,LOW);
  digitalWrite(pin_G,HIGH);
  delay(500);
  digitalWrite(pin_G,LOW);
  digitalWrite(pin_R,HIGH);
  delay(500);
  digitalWrite(pin_R,LOW);
}
