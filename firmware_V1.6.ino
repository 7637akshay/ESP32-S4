#define LED_PIN 2   

void setup() {
  // Start serial monitor
  Serial.begin(115200);

  // Set LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(LED_PIN, HIGH);
  Serial.println("ESP32 BLUE LED ON");
  delay(5000);  // wait 1 second

  // Turn LED OFF
  digitalWrite(LED_PIN, LOW);
  Serial.println("ESP32 BLUE LED  OFF");
  delay(5000);  // wait 1 second
}
