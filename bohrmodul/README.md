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

## Main Pins

| Arduino Pin | Function                |
| ----------- | ----------------------- |
| 9           | Drill motor             |
| A1          | Lower drill             |
| A2          | Raise drill             |
| A3          | Status LED              |
| 2           | Control signal (SPS)    |
| 3           | Workpiece light barrier |

## How it works

The drilling process starts when the SPS signal and the workpiece light barrier are active.

The drill motor starts and the drill moves down for 5 seconds. After that, the drill moves up for another 5 seconds. When the process is finished, the motor and status LED are switched off.

The Serial Monitor can also be used to enter an integer value. Values between 0 and 100 are accepted with `OK`; other values return `NOK`.

## Wokwi

The project was created and tested in Wokwi.

[Open the project in Wokwi](https://wokwi.com/projects/475391000225873921)
