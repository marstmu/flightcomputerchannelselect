#include <Arduino.h>
#include <Wire.h>
#define setPin 6
// code assumes hc-12 is on Serial2
void setup()
{
    delay(1000);

    Serial2.begin(9600); // antenna
    Serial.begin(9600);
    
    delay(1000);
    pinMode(setPin, OUTPUT);
    digitalWrite(setPin, LOW); // set the pin to low to enter programming mode
    delay(1000);
}
void loop() {
  if(Serial2.available()){       // If Arduino's HC12 rx buffer has data
    Serial.write(Serial2.read());        // Send the data to the computer
    }
  if(Serial.available()){          // If Arduino's computer rx buffer has data
    Serial2.write(Serial.read());       // Send that data to serial
  }
}
