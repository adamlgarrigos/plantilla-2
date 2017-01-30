void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // Encendre el LED
  delay(1000);                       // Esperar un segon
  digitalWrite(LED_BUILTIN, LOW);    // Apagar el LED
  delay(1000);                       // Esperar un segon
}

