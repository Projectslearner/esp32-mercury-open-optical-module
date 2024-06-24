/*
    Project name: ESP32 Mercury Open Optical Module
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-mercury-open-optical-module
*/

const int sensorPin = 34; // GPIO pin connected to the Mercury open optical module
bool isObjectDetected = false; // Variable to store object detection status

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(sensorPin, INPUT); // Set sensor pin as input
}

void loop() {
  // Read the state of the optical sensor
  bool sensorState = digitalRead(sensorPin);

  // Check if an object is detected
  if (sensorState == HIGH) {
    if (!isObjectDetected) {
      Serial.println("Object detected!");
      isObjectDetected = true;
    }
  } else {
    if (isObjectDetected) {
      Serial.println("No object detected.");
      isObjectDetected = false;
    }
  }

  delay(500); // Add a small delay before the next reading
}
