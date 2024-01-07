
#include <Arduino.h>
#include <Wire.h>

#define setPin 2

void setup()
{
    delay(1000);

    Serial5.begin(9600); // antenna
    Serial.begin(9600);
    
    delay(1000);

    Serial.print("testing");

    pinMode(setPin, OUTPUT);
    digitalWrite(setPin, LOW);
    delay(1000);

    Serial5.println("AT+C021");
    delay(1000);
}

void loop() {
    char receivedChar = Serial5.read();
    Serial.print(receivedChar);
    delay(100);

}