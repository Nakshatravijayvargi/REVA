#include <Servo.h>

Servo lidServo;

// Pin Definitions
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 8;

// Distance Threshold (cm)
const int OPEN_DISTANCE = 25;

// Servo Angles
const int LID_CLOSED = 0;
const int LID_OPEN = 90;

void setup() {

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lidServo.attach(servoPin);
  lidServo.write(LID_CLOSED);

  Serial.println("REVA Smart Dustbin Started");
}

void loop() {

  long duration;
  float distance;

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Convert to centimeters
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Open Lid
  if (distance > 0 && distance <= OPEN_DISTANCE) {

    Serial.println("Object Detected");
    Serial.println("Opening Lid");

    lidServo.write(LID_OPEN);

    delay(3000);        // Keep lid open for 3 seconds

  }

  // Close Lid
  else {

    lidServo.write(LID_CLOSED);

  }

  delay(100);
}