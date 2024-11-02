#include <Arduino.h>

int sensor = 0;
// #ifndef LED_BUILTIN
//  #define LED_BUILTIN 25 // GPIO25
// #endif
 #define OUTPUT_PIN 27 // 18
 #define INPUT_PIN 26 // 10

void setup()
{
  pinMode(INPUT_PIN, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop()
{
  sensor = analogRead(INPUT_PIN);
  Serial.println(sensor);

  if (sensor <= 600) {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(OUTPUT_PIN, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(OUTPUT_PIN, HIGH);
        digitalWrite(LED_BUILTIN, HIGH);

    delay(1000); // Wait for 1000 millisecond(s)
  }
}