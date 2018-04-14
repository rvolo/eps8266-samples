/*
 * Prints the details from the chipset to the serial console
 */

void setup() {
  Serial.begin(115200);

  Serial.println("----------- ID's -----------");
  Serial.printf("Chip ID = %08X\n", ESP.getChipId());
  Serial.printf("Flash ID : %d\n", ESP.getFlashChipSize());
  Serial.printf("Sdk version: %s\n" , ESP.getSdkVersion());
  Serial.printf("Core version: %s \n" , ESP.getCoreVersion().c_str());
  Serial.printf("Boot version: %d\n" , ESP.getBootVersion());

  Serial.println("----------- Modes -----------");
  Serial.printf("Boot Mode: %d\n", ESP.getBootMode());
  Serial.printf("Flash Mode: %i\n",ESP.getFlashChipMode());

  Serial.println("----------- Hardware Info -----------");
  Serial.printf("CPU Mhz: %d\n", ESP.getCpuFreqMHz());
  Serial.printf("Flash Size: %d bytes  Real Size: %d bytes\n", ESP.getFlashChipSize(), ESP.getFlashChipRealSize());
}

void loop() {
}
