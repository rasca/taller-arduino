#include <FastLED.h>

#define NUM_LEDS 50
#define DATA_PIN GPIO_NUM_15

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<WS2812, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(127);
}

void loop()
{
  static uint8_t hue = 0;
  static uint8_t pos = 0;
  static bool incrementing = true;
  
  hue = hue + 5;

  if (pos == NUM_LEDS) {
    incrementing = false;
  }

  if (pos == 0) {
    incrementing = true;
  }

  if (incrementing) {
    pos++;
  } else {
    pos--;
  }
  
  for (int i=0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
  }

  for (int j=0; j<pos; j++) {
    leds[j] = CHSV(hue, 255, 255);
  }
  
  FastLED.show();
  delay(pos);
}
