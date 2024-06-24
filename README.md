# ESP32 Mercury Open Optical Module

## Project Overview
The ESP32 Mercury Open Optical Module project demonstrates how to interface an optical sensor with an ESP32 microcontroller to detect the presence of objects. Optical sensors are commonly used for object detection in various applications, including automation, robotics, and security systems. This project reads the digital output from the optical sensor and prints the object detection status to the Serial Monitor.

## Components Needed
- ESP32 Microcontroller
- Mercury Open Optical Module
- Jumper Wires
- Breadboard
- Serial Monitor (for debugging)

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting Optical Sensor to ESP32:**
   - **Sensor Pin:** Connects to a digital GPIO pin on the ESP32 (specified as pin 34 in your code).
   - **VCC and GND:** Connect to the appropriate power (3.3V or 5V) and ground pins.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)` for debugging purposes.
   - Set the sensor pin as an input using `pinMode(sensorPin, INPUT)`.

2. **Operation:**
   - In the `loop()` function:
     - Read the state of the optical sensor using `digitalRead(sensorPin)`.
     - Compare the sensor state to determine if an object is detected:
       - If `sensorState` is `HIGH`, print "Object detected!" to the Serial Monitor if an object wasn't previously detected (`isObjectDetected` is `false`).
       - If `sensorState` is `LOW`, print "No object detected." to the Serial Monitor if an object was previously detected (`isObjectDetected` is `true`).
     - Update `isObjectDetected` accordingly to track the current detection status.

3. **Considerations:**
   - **Sensor Sensitivity:** Position the sensor and adjust thresholds if necessary to reliably detect objects.
   - **Power Supply:** Ensure stable power supply to the ESP32 and the optical sensor for reliable operation.
   - **Serial Monitoring:** Use the Serial Monitor to observe object detection status and debug any issues.

## Applications
- **Object Detection:** Detect the presence or absence of objects for automation and monitoring purposes.
- **Security Systems:** Integrate with alarm systems to detect intrusions or unauthorized access.
- **Industrial Automation:** Monitor conveyor belts, production lines, or machinery for object presence.

## Notes
- **Digital Output:** The optical sensor provides a digital output (HIGH or LOW) based on the presence of an object in its detection range.
- **Thresholds:** Adjust thresholds or debounce logic as needed to handle sensor noise or rapid changes in detection state.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Mercury Open Optical Module](https://projectslearner.com/learn/esp32-mercury-open-optical-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner