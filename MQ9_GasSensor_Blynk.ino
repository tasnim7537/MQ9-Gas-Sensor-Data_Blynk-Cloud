#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Zaman";
char pass[] = "blacksheep";

// Your Blynk Auth Token.
char auth[] = "gzATOgt7IrAr2L4UmQGQcLRkFE73AqF2";

// Define the analog pin for MQ9 sensor.
const int mq9Pin = A0;

void setup()
{
  // Start the serial communication.
  Serial.begin(9600);

  // Connect to WiFi.
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  // Run Blynk.
  Blynk.run();
  
  // Read the sensor value.
  int sensorValue = analogRead(mq9Pin);
  
  // Print the sensor value to the serial monitor.
  Serial.print("MQ9 Sensor Value: ");
  Serial.println(sensorValue);
  
  // Send the sensor value to Blynk.
  Blynk.virtualWrite(V0, sensorValue);
  
  // Wait for a bit.
  delay(1000);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
