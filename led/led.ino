/* STM32 Blue Pill project using the STM32 Arduino Core (stm32duino) */

#define LED PB9

void setup() {
  Serial.begin(115200);
  Serial.println("Hello STM32!");
  Serial.println("Welcome to Wokwi :-)");

  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, LOW);
  delay(500);
  digitalWrite(LED, HIGH);
  delay(500);
}
