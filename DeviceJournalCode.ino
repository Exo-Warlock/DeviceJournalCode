#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>  // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 8

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define CHANGE 600  // Time (in milliseconds)

void setup() {
  pinMode(6, HIGH);
  pixels.begin();  // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  pixels.clear();  // Set all pixel colors to 'off'

  // to the count of pixels minus one.
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 186, 45));

    pixels.show();
  }

  delay(CHANGE);
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 150, 88));

    pixels.show();
  }
  delay(CHANGE);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 113, 133));
    pixels.show();
  }
}
