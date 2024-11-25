# FreeRTOS LED Blinking Project on Arduino
## Overview
This project demonstrates a simple application of FreeRTOS on an Arduino board. Using multitasking, the system blinks two LEDs at different intervals to showcase real-time operating system (RTOS) concepts such as task scheduling and delays.
## Features
- FreeRTOS Integration: Multitasking with multiple LED blinking tasks.
- Task Scheduling: Tasks are scheduled independently, simulating parallel execution.
- Real-Time Behavior: Demonstrates the use of RTOS delay functions to create non-blocking tasks.
## Requirements 
### Hardware
- Arduino board (Uno, Mega, or compatible)
- 2 LEDs
- 2 Resistors (220Ω or 330Ω)
- Breadboard and jumper wires
### Software
- Arduino IDE
- FreeRTOS Library for Arduino
## Circuit Diagram
Connect the LEDs to your Arduino as follows:
- LED 1:
 - Positive leg to pin 8 via a 220Ω resistor
 - Negative leg to GND
- LED 2:
 - Positive leg to pin 9 via a 220Ω resistor
 - Negative leg to GND
## Installation
1. Clone the repository:
2. Open Arduino IDE and install the FreeRTOS library:
 - Navigate to Sketch → Include Library → Manage Libraries.
 - Search for FreeRTOS and install the library.
## Usage
1. Open the arduino_RTOS.ino file in the Arduino IDE.
2. Connect your Arduino board to your computer.
3. Select your board and port under Tools → Board and Tools → Port.
4. Upload the code to your Arduino.