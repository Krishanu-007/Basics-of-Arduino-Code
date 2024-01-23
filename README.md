# Overview
This Repository Contains some of the basic codings related to some sensors and motors. It is divided into two parts: codings and schematics

# Codings
This part contains the codings of different sensors and motors to be interfaced with arduino:

## Contents:
- [dc_motor_by_ur](#dc_motor_by_ur)
- [dc_motor_setup_logic](#dc_motor_setup_logic)
- [servo](#servo)
- [servo_control_by_ur](#servo_control_by_ur)
- [ur_brute_force](#ur_brute_force)
- [ur_optimised](#ur_optimised)

## dc_motor_by_ur
  #### DC Motor Control with Ultrasonic Sensor

This Arduino program controls the rotation of a DC motor based on readings from an ultrasonic sensor. The program defines three cases of motion: FORWARD, BACKWARD, and STOP, depending on the distance measured by the ultrasonic sensor. The motor direction is changed based on these distance measurements.

### Requirements

- Arduino board
- DC motor
- Ultrasonic sensor
- Jumper wires

### Connections

- Motor control pins: Connect to pins `c1` and `c2` on the Arduino board.
- Ultrasonic sensor: Connect the trigger pin to the `trig` pin and the echo pin to the `echo` pin on the Arduino board.

### Usage

1. Upload the code to your Arduino board using the Arduino IDE.
2. Power up the Arduino board.
3. Open the Arduino IDE Serial Monitor to observe the motor's behavior based on the ultrasonic sensor readings.

## dc_motor_setup_logic
### DC Motor Control with Two Control Pins

This Arduino program governs the motion of a DC motor using two control pins for each motor. The motor control is based on a specified pattern for control pins A and B, where different combinations result in various motions such as forward, backward, left-turn, and right-turn.

### Control Logic

The control logic for the DC motor is as follows:

| i1 | i2 | i3 | i4 | Motion          |
|----|----|----|----|-----------------|
| LOW| HIGH| LOW| HIGH| Forward         |
| HIGH| LOW| HIGH| LOW| Backward        |
| LOW| LOW| LOW| HIGH| Left-turn       |
| LOW| HIGH| LOW| LOW| Right-turn      |

### Control Pins

- `i1` and `i2`: Control pins for one motor.
- `i3` and `i4`: Control pins for another motor.

### Usage

1. Upload the code to your Arduino board using the Arduino IDE.
2. Power up the Arduino board.
3. Observe the DC motor's behavior as it goes through forward, backward, left-turn, and right-turn motions.

## servo
### Servo Motor Control with Arduino

This Arduino program uses the Servo library to control a servo motor. The code gradually moves the servo from 0 to 180 degrees and then back from 180 to 0 degrees. The servo position is printed to the Serial Monitor for debugging purposes.

### Servo Library

This project utilizes the in-built Servo library to control the servo motor. The Servo library provides easy-to-use functions for controlling servo motors.

### Setup

1. Connect the servo motor to the Arduino board.
2. Define the pin to which the servo is attached using `servo.attach(pin)`.
3. Ensure the Arduino board is properly powered.

### Usage

1. Upload the code to your Arduino board using the Arduino IDE.
2. Make the necessary hardware connections as specified in the [Setup](#setup) section.
3. Power up the Arduino board.
4. Observe the servo motor gradually moving from 0 to 180 degrees and then back.

## servo_control_by_ur
### Servo Motor Control Based on Ultrasonic Sensor

This Arduino program controls the motion of a servo motor based on the direction detected by an ultrasonic sensor within a specified range. The servo motor moves towards the maximum right or left based on the ultrasonic sensor reading and returns to the idle position.

### Ultrasonic Sensor Directivity

The program utilizes an ultrasonic sensor to detect distances. The servo motor's direction is controlled based on the detected distance within predefined ranges.

- `Mid`: Middle distance range.
- `Max`: Maximum distance range (right movement).
- `Min`: Minimum distance range (left movement).

### Setup

1. Connect the ultrasonic sensor to the trigger (`trig`) and echo (`echo`) pins.
2. Connect the servo motor to the signal pin (`motor.attach(9)`).
3. Ensure the Arduino board is properly powered.

### Usage

1. Upload the code to your Arduino board using the Arduino IDE.
2. Make the necessary hardware connections as specified in the [Setup](#setup) section.
3. Power up the Arduino board.
4. Observe the servo motor's motion based on the direction detected by the ultrasonic sensor.
