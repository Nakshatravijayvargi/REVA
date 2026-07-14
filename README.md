# REVA

> **Reviving Earth, One Throw at a Time**

An IoT-enabled smart waste management system that automates waste disposal through touchless operation, real-time monitoring, and a web-based dashboard.

---

## Overview

REVA is a smart waste management prototype developed to improve campus sanitation by reducing physical contact with waste bins and enabling proactive waste collection.

The system uses an ultrasonic sensor to detect a user's presence, automatically opens the lid using a servo motor, and demonstrates how sensor data can be visualized through a web dashboard for monitoring and decision-making.

---

## Problem Statement

Traditional waste bins have several challenges:

- Physical contact increases hygiene risks.
- Overflowing bins often go unnoticed.
- Waste collection follows fixed schedules instead of actual need.
- No real-time monitoring or analytics.

---

## Solution

REVA addresses these challenges through an IoT-based approach:

- Touchless lid operation using ultrasonic sensing.
- Automatic lid movement using a servo motor.
- Real-time dashboard for monitoring bin status.
- Data-driven approach for smarter waste management.

---

## Features

- Touchless waste disposal
- Ultrasonic object detection
- Servo-controlled automatic lid
- Web dashboard prototype
- Real-time monitoring concept
- Sustainable smart campus solution

---

## Hardware Used

| Component | Purpose |
|-----------|----------|
| Arduino Uno | Main controller |
| HC-SR04 Ultrasonic Sensor | Object detection |
| SG90 Servo Motor | Lid movement |
| Breadboard | Circuit prototyping |
| Jumper Wires | Connections |
| USB Power | Power supply |

---

## Software Stack

- Arduino IDE
- HTML
- Tailwind CSS
- JavaScript
- Chart.js

---

## Repository Structure

```text
REVA/
│
├── arduino/
├── web-dashboard/
├── assets/
├── docs/
├── hardware/
├── LICENSE
└── README.md
```

---

## System Workflow

```text
User
   │
   ▼
Ultrasonic Sensor
   │
   ▼
Arduino Uno
   │
   ├──────────────► Dashboard
   │
   ▼
Servo Motor
   │
   ▼
Dustbin Lid Opens
```

---

## SDG Alignment

- SDG 3 — Good Health and Well-being
- SDG 6 — Clean Water and Sanitation
- SDG 11 — Sustainable Cities and Communities

---

## Future Improvements

- AI-based waste segregation
- Solar-powered operation
- Cloud connectivity
- Mobile application
- Route optimization for waste collection

---

## Team

- Nakshatra Vijay Vargi
- Nirmaan Vijay Vargi
- Chandrahas Thunga

---

## Mentor

**Dr. Bhanu Prakash**

---

## License

This project is licensed under the MIT License.