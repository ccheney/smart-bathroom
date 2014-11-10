#include "neopixel/neopixel.h"

#define PIXEL_PIN D2
#define PIXEL_COUNT 64
#define PIXEL_TYPE WS2812B
#define sensorPin D1;
int sensorData = 0;
int doorStatus = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Spark.variable(“doorStatus", &doorStatus, INT);
}

void loop() {

  sensorData = digitalRead(sensorPin);
  if (sensorData = 1)
  {
    doorStatus = 1;
    doorClosed();
  }
  else
  {
    doorStatus = 0;
    doorOpen();
  }
}

void doorOpen() {
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.setPixelColor(4, 0, 0, 0);
    strip.setPixelColor(5, 0, 0, 0);
    strip.setPixelColor(6, 0, 0, 0);
    strip.setPixelColor(7, 0, 0, 0);
    strip.setPixelColor(8, 0, 0, 0);
    strip.setPixelColor(9, 0, 0, 0);
    strip.setPixelColor(10, 0, 0, 0);
    strip.setPixelColor(11, 0, 0, 0);
    strip.setPixelColor(12, 0, 0, 0);
    strip.setPixelColor(13, 0, 0, 0);
    strip.setPixelColor(14, 0, 0, 0);
    strip.setPixelColor(15, 0, 0, 0);
    strip.setPixelColor(16, 0, 0, 0);
    strip.setPixelColor(17, 0, 0, 0);
    strip.setPixelColor(18, 0, 0, 0);
    strip.setPixelColor(19, 0, 0, 0);
    strip.setPixelColor(20, 0, 0, 0);
    strip.setPixelColor(21, 0, 0, 0);
    strip.setPixelColor(22, 27, 167, 46);
    strip.setPixelColor(23, 0, 0, 0);
    strip.setPixelColor(24, 0, 0, 0);
    strip.setPixelColor(25, 0, 0, 0);
    strip.setPixelColor(26, 0, 0, 0);
    strip.setPixelColor(27, 0, 0, 0);
    strip.setPixelColor(28, 0, 0, 0);
    strip.setPixelColor(29, 27, 167, 46);
    strip.setPixelColor(30, 0, 0, 0);
    strip.setPixelColor(31, 0, 0, 0);
    strip.setPixelColor(32, 0, 0, 0);
    strip.setPixelColor(33, 0, 0, 0);
    strip.setPixelColor(34, 0, 0, 0);
    strip.setPixelColor(35, 0, 0, 0);
    strip.setPixelColor(36, 27, 167, 46);
    strip.setPixelColor(37, 0, 0, 0);
    strip.setPixelColor(38, 0, 0, 0);
    strip.setPixelColor(39, 0, 0, 0);
    strip.setPixelColor(40, 0, 0, 0);
    strip.setPixelColor(41, 27, 167, 46);
    strip.setPixelColor(42, 0, 0, 0);
    strip.setPixelColor(43, 27, 167, 46);
    strip.setPixelColor(44, 0, 0, 0);
    strip.setPixelColor(45, 0, 0, 0);
    strip.setPixelColor(46, 0, 0, 0);
    strip.setPixelColor(47, 0, 0, 0);
    strip.setPixelColor(48, 0, 0, 0);
    strip.setPixelColor(49, 0, 0, 0);
    strip.setPixelColor(50, 27, 167, 46);
    strip.setPixelColor(51, 0, 0, 0);
    strip.setPixelColor(52, 0, 0, 0);
    strip.setPixelColor(53, 0, 0, 0);
    strip.setPixelColor(54, 0, 0, 0);
    strip.setPixelColor(55, 0, 0, 0);
    strip.setPixelColor(56, 0, 0, 0);
    strip.setPixelColor(57, 0, 0, 0);
    strip.setPixelColor(58, 0, 0, 0);
    strip.setPixelColor(59, 0, 0, 0);
    strip.setPixelColor(60, 0, 0, 0);
    strip.setPixelColor(61, 0, 0, 0);
    strip.setPixelColor(62, 0, 0, 0);
    strip.setPixelColor(63, 0, 0, 0);
    strip.setBrightness(30);
    strip.show();
}

void doorClosed() {
    strip.setPixelColor(0, 0, 0, 0);
    strip.setPixelColor(1, 0, 0, 0);
    strip.setPixelColor(2, 0, 0, 0);
    strip.setPixelColor(3, 0, 0, 0);
    strip.setPixelColor(4, 0, 0, 0);
    strip.setPixelColor(5, 0, 0, 0);
    strip.setPixelColor(6, 0, 0, 0);
    strip.setPixelColor(7, 0, 0, 0);
    strip.setPixelColor(8, 0, 0, 0);
    strip.setPixelColor(9, 185, 30, 0);
    strip.setPixelColor(10, 0, 0, 0);
    strip.setPixelColor(11, 0, 0, 0);
    strip.setPixelColor(12, 0, 0, 0);
    strip.setPixelColor(13, 0, 0, 0);
    strip.setPixelColor(14, 185, 30, 0);
    strip.setPixelColor(15, 0, 0, 0);
    strip.setPixelColor(16, 0, 0, 0);
    strip.setPixelColor(17, 0, 0, 0);
    strip.setPixelColor(18, 185, 30, 0);
    strip.setPixelColor(19, 0, 0, 0);
    strip.setPixelColor(20, 0, 0, 0);
    strip.setPixelColor(21, 185, 30, 0);
    strip.setPixelColor(22, 0, 0, 0);
    strip.setPixelColor(23, 0, 0, 0);
    strip.setPixelColor(24, 0, 0, 0);
    strip.setPixelColor(25, 0, 0, 0);
    strip.setPixelColor(26, 0, 0, 0);
    strip.setPixelColor(27, 185, 30, 0);
    strip.setPixelColor(28, 185, 30, 0);
    strip.setPixelColor(29, 0, 0, 0);
    strip.setPixelColor(30, 0, 0, 0);
    strip.setPixelColor(31, 0, 0, 0);
    strip.setPixelColor(32, 0, 0, 0);
    strip.setPixelColor(33, 0, 0, 0);
    strip.setPixelColor(34, 0, 0, 0);
    strip.setPixelColor(35, 185, 30, 0);
    strip.setPixelColor(36, 185, 30, 0);
    strip.setPixelColor(37, 0, 0, 0);
    strip.setPixelColor(38, 0, 0, 0);
    strip.setPixelColor(39, 0, 0, 0);
    strip.setPixelColor(40, 0, 0, 0);
    strip.setPixelColor(41, 0, 0, 0);
    strip.setPixelColor(42, 185, 30, 0);
    strip.setPixelColor(43, 0, 0, 0);
    strip.setPixelColor(44, 0, 0, 0);
    strip.setPixelColor(45, 185, 30, 0);
    strip.setPixelColor(46, 0, 0, 0);
    strip.setPixelColor(47, 0, 0, 0);
    strip.setPixelColor(48, 0, 0, 0);
    strip.setPixelColor(49, 185, 30, 0);
    strip.setPixelColor(50, 0, 0, 0);
    strip.setPixelColor(51, 0, 0, 0);
    strip.setPixelColor(52, 0, 0, 0);
    strip.setPixelColor(53, 0, 0, 0);
    strip.setPixelColor(54, 185, 30, 0);
    strip.setPixelColor(55, 0, 0, 0);
    strip.setPixelColor(56, 0, 0, 0);
    strip.setPixelColor(57, 0, 0, 0);
    strip.setPixelColor(58, 0, 0, 0);
    strip.setPixelColor(59, 0, 0, 0);
    strip.setPixelColor(60, 0, 0, 0);
    strip.setPixelColor(61, 0, 0, 0);
    strip.setPixelColor(62, 0, 0, 0);
    strip.setPixelColor(63, 0, 0, 0);
    strip.setBrightness(30);
    strip.show();
}

