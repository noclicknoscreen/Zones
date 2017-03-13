#include "Zones.h"

Zone::Zone() {

}

Zone::Zone(Adafruit_NeoPixel * strip, int start, int nb) {
  _strip = strip;
  _start = start - 1; 
  _stop = start + (nb - 1);
};

void Zone::setZoneColor(uint8_t r, uint8_t g, uint8_t b)
{
  _r = r;
  _g = g;
  _b = b;
};

void Zone::setZonePixel(int idx, uint8_t r, uint8_t g, uint8_t b)
{
  
};

void Zone::setZoneBrightness(uint8_t brightness) {
  _bright = brightness;//constrain(brightness, 100, 255);
};


void Zone::show()
{
  for (int i = _start; i < _stop; i++ ) {
    _strip->setPixelColor(i,
      map(_bright, 0, 255, 0, _r),
      map(_bright, 0, 255, 0, _g),
      map(_bright, 0, 255, 0, _b)
      );
      /*

      -- Si on veut voir les zones ---

      delay(200);
      _strip->show();
      */
  }
  _strip->show();
};

