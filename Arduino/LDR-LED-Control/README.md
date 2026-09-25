# LDR LED Control

A simple Arduino project that automatically controls an LED based on the surrounding light level detected using an LDR (Light Dependent Resistor).

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- 220Ω resistor
- 10kΩ resistor

## How It Works

The LDR measures the surrounding light intensity through the Arduino's analog input.

When the measured light level falls below the defined threshold, the Arduino turns the LED ON.

When sufficient light is present, the LED is turned OFF.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| LDR | A0 |
| LED | D9 |

## Code

The Arduino sketch is available in `LDR_LED_Control.ino`.

## Future Improvements

- Automatic threshold calibration
- PWM-based LED brightness control
- Control multiple LEDs
