#include "Arduino.h"
#include "splash.h"
#include "game.h"

void draw_splash(uint16_t offsetX, uint16_t offsetY) {

  const char * splash = splash_data;
  for ( int y = 0 ; y < splash_y ; y++ ) {
    for ( int x  = 0 ; x < splash_x ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(splash,pixel);
        uint16_t r = (pixel[0] >> 3);
        uint16_t g = (pixel[1] >> 2);
        uint16_t b = (pixel[2] >> 3);
        uint16_t color = ( ( r << 11 ) & 0xF800 ) | ( ( g << 5 ) & 0x07E0 ) | ( b & 0x001F ); 
        if ( pixel[1] < 0xF0 ) { 
          tft.drawPixel(offsetX+x,offsetY+y,color);
        }
    }
  }
}
