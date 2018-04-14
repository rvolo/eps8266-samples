
const int PIN_LED = D4;
void setup() {
  Serial.begin(115200);

  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(5000);
  digitalWrite(PIN_LED, LOW);
  delay(5000);
}
