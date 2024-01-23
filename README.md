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
