#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class Zone {
  public:
    Zone();  // Default constructor
    Zone(Adafruit_NeoPixel * strip, int start, int nb);
    void setZoneColor(uint8_t r, uint8_t g, uint8_t b);
    void setZonePixel(int idx, uint8_t r, uint8_t g, uint8_t b);
    void setZoneBrightness(uint8_t brightness);
    void show();

private:
    Adafruit_NeoPixel * _strip;
    int _start, 
        _stop;
    uint8_t _r, _g, _b,
            _bright;

};