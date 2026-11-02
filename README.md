# Halloween Spider – Arduino Motion-Activated Prop

A homemade Halloween decoration using an Arduino Uno, PIR motion sensor and SG90 servo motor.
### Video demo: https://youtube.com/shorts/En7Yf2VQXI0

## How it works

The PIR sensor detects movement and signals the Arduino. When motion is detected, the servo moves the spider's head forward. When no motion is detected, the head returns to its resting position.

## Components

- Arduino Uno
- HC-SR501 PIR motion sensor
- SG90 servo motor
- Battery pack
- Halloween spider decoration

## Connections

| Component | Arduino pin |
|---|---|
| Servo signal | A0 |
| PIR signal | D4 |
| PIR VCC | 5V |
| PIR GND | GND |

## Code

See `spider.ino`.

## Project status

Completed – built as a Halloween decoration.
