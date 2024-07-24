# 8-Segment Display Counter Example

This repository contains an Arduino sketch for controlling a 8-segment display. The sketch cycles through numbers 0 to 9 on the display, with each number shown for 1 second.

## Code Description

The code performs the following actions:
- **Setup:** Configures all pins on PORTD as outputs and initializes an array with the 8-segment display encoding for digits 0-9.
- **Loop:** Iterates through the digits 0-9, displaying each digit on the 8-segment display for 1 second.

## How to Use

1. **Connect the 8-Segment Display:** Connect the 8-segment display to the PORTD pins of your Arduino. Ensure proper wiring for each segment.
2. **Upload the Code:** Open the Arduino IDE, paste the code into a new sketch, and upload it to your Arduino board.
3. **Observe the Display:** The 8-segment display should cycle through the digits 0 to 9, with each digit appearing for 1 second.

## Code

```cpp
void setup() {
  DDRD = 0xFF; // Configure PORTD pins as output
  unsigned char numbers[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F}, i=0;
}

void loop() {
  for (i=0; i<10; i++) {
    PORTD = numbers[i];
    delay(1000); // Wait for 1 second
  }
}
```

## Requirements

- Arduino board (e.g., Arduino Uno, Arduino Nano)
- 8-segment display
- Appropriate resistors for the 8-segment display
- Arduino IDE
