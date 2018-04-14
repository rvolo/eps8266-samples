
/*
 * Blinks a led on a pin
 * 
 * Pins are coded to values here:
 * https://github.com/esp8266/Arduino/blob/master/variants/d1_mini/pins_arduino.h#L49-L61
 */
 
const int PIN_LED = D4;
void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(5000);
  digitalWrite(PIN_LED, LOW);
  delay(5000);
}
