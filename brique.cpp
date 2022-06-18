#include "game.h"
#include "briques.h"

bool actionOnBrique(uint16_t x, uint16_t y) {
  // find the brique in relation with ball X, Y
  if ( y < BRIQUE_OFFSET_Y ) return false;
  if ( y > BRIQUE_OFFSET_Y + BRIQUE_SZ_Y + BRIQUE_BLOC_Y ) return false;
  
  int bx = x / BRIQUE_BLOC_X;
  int by = (y - BRIQUE_OFFSET_Y);
  by /= BRIQUE_BLOC_Y;
  if ( briques_new[by][bx] != 0 ) {
    briques_new[by][bx] = 0;
    return true;
  }

  bx = (x+BALL_SZ-1) / BRIQUE_BLOC_X;
  by = (y+BALL_SZ-1) - BRIQUE_OFFSET_Y;
  by /= BRIQUE_BLOC_Y;
  if ( briques_new[by][bx] != 0 ) {
    briques_new[by][bx] = 0;
    return true;
  }
  
  return false;
}

void draw_brique1(uint16_t offsetX, uint16_t offsetY) {

  const char * brique1 = brique1_data;
  for ( int y = 0 ; y < brique_height ; y++ ) {
    for ( int x  = 0 ; x < brique_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(brique1,pixel);
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

void draw_brique2(uint16_t offsetX, uint16_t offsetY) {

  const char * brique2 = brique2_data;
  for ( int y = 0 ; y < brique_height ; y++ ) {
    for ( int x  = 0 ; x < brique_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(brique2,pixel);
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

void draw_brique3(uint16_t offsetX, uint16_t offsetY) {

  const char * brique3 = brique3_data;
  for ( int y = 0 ; y < brique_height ; y++ ) {
    for ( int x  = 0 ; x < brique_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(brique3,pixel);
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

void draw_brique4(uint16_t offsetX, uint16_t offsetY) {

  const char * brique4 = brique4_data;
  for ( int y = 0 ; y < brique_height ; y++ ) {
    for ( int x  = 0 ; x < brique_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(brique4,pixel);
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

void draw_brique5(uint16_t offsetX, uint16_t offsetY) {

  const char * brique5 = brique5_data;
  for ( int y = 0 ; y < brique_height ; y++ ) {
    for ( int x  = 0 ; x < brique_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(brique5,pixel);
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
