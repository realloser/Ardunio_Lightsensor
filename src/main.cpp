#include <Arduino.h>


#define  ANALOGE_0 A0
#define  INPUT_VOLTAGE 5

int lightSensorPin = ANALOGE_0; // select the input pin for LDR

int sensorValue = 0, mappedValue = 0; // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600); //sets serial port for communication
}
void loop() {
  sensorValue = analogRead(lightSensorPin); // read the value from the sensor
  mappedValue = map(sensorValue, 0, INPUT_VOLTAGE, 0, 5);
  Serial.println(mappedValue); //prints the values coming from the sensor on the screen

  delay(100);

}
