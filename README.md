# Halloween Spider – Arduino Motion-Activated Prop

A homemade Halloween decoration using an Arduino Uno, PIR motion sensor and SG90 servo motor.
### Video demo: https://youtube.com/shorts/En7Yf2VQXI0

## How it works

The PIR sensor detects movement and signals the Arduino. When motion is detected, the SG90 servo moves the spider's head forward. When no motion is detected, the head returns the head to its resting position.

## Components

- Arduino Uno
- HC-SR501 PIR motion sensor
- SG90 servo motor
- Battery pack (6 x AA)
- Slaughtered halloween spider decoration from Europris
- Easter egg
- Power switch

## Connections

| Component | Arduino pin |
|---|---|
| Servo signal | A0 |
| Servo VCC | 5V |
| Servo GND | GND |
| PIR signal | D4 |
| PIR VCC | 5V |
| PIR GND | GND |

## Design Decisions

Both the SG90 servo and HC-SR501 PIR motion sensor are powered directly from the Arduino Uno's 5V supply.

No separate power supply, motor driver or external servo power module was used. This was a deliberate choice to keep the project lightweight, simple and cost-effective.

Since the project uses a small SG90 servo with relatively modest mechanical demands, the shared power arrangement was considered sufficient for this application.

## Code

See `spider.ino`.

## Project status

Completed – built as a Halloween decoration.
