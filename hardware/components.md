# Hardware Components

| Component | Quantity | Purpose |
|-----------|---------:|---------|
| Arduino Uno | 1 | Main controller |
| HC-SR04 Ultrasonic Sensor | 1 | Detects nearby objects |
| SG90 Servo Motor | 1 | Opens and closes the lid |
| Breadboard | 1 | Circuit prototyping |
| Jumper Wires | Several | Connections |
| USB Cable | 1 | Arduino power and programming |

---

## Working Principle

1. The HC-SR04 continuously measures the distance in front of the dustbin.
2. If an object is detected within **25 cm**, the Arduino processes the signal.
3. The Arduino rotates the servo motor.
4. The lid opens automatically.
5. After a short delay, the lid closes.
6. The web dashboard demonstrates real-time monitoring of the smart bin.