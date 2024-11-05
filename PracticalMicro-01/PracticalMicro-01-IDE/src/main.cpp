#include <Arduino.h>

void setup() {
  // Initialize the LED pin as an output
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100); // Wait for a second (100 milliseconds)
  
  // Turn the LED off by making the voltage low
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for a second (100 milliseconds)

}
