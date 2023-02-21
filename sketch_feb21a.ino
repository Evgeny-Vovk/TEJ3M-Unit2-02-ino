/* Copyright(c) 2023 Evgeny Vovk All rights reserved.
   Created by : Evgeny Vovk
   Created on : Fabruary 2023
   TEJ3M-Unit2-02.ino File.
 */

int blinkTime = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  blinkTime += 1000;
}
