# Arduino Bohrmodul

This project simulates a simple drilling module with an Arduino Uno in Wokwi.

The Arduino controls the drilling process depending on a control signal and a light barrier that detects a workpiece.

## Features

* Detects a workpiece with a light barrier
* Starts the drilling process when the required conditions are met
* Controls the drilling motor
* Controls the drilling movement up and down
* Uses LEDs to show the current status
* Serial communication for entering and checking values
* Simulated with Wokwi

## Components

* Arduino Uno
* DIP switch
* LEDs
* Resistors
* Light barrier
* Simulated drilling module

## Used pins

Pin 9 controls the drill motor.

Pin A1 controls the downward movement of the drill.

Pin A2 controls the upward movement of the drill.

Pin A3 is used for the status LED.

Pin 2 is used for the SPS control signal.

Pin 3 is connected to the workpiece light barrier.

## How it works

The drilling process starts when the SPS signal and the workpiece light barrier are active.

The drill motor starts and the drill moves down for 5 seconds. After that, the drill moves up for another 5 seconds. When the process is finished, the motor and status LED are switched off.

The Serial Monitor can also be used to enter an integer value. Values between 0 and 100 are accepted with `OK`; other values return `NOK`.

## Wokwi

The project was created and tested in Wokwi.

[Open the project in Wokwi](https://wokwi.com/projects/475391000225873921)
