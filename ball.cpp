#include "arduino.h"
#include "game.h"
#include "ball.h"

typedef struct ball_s {
  uint16_t px;  // previous X
  uint16_t py;  // previous Y
  
  uint16_t x;  // previous X
  uint16_t y;  // previous Y
} ball_t;

ball_t theBall;

void draw_ball() {

  const char * ball = ball_data;
  for ( int y = theBall.y ; y < theBall.y+ball_height ; y++ ) {
    for ( int x  = theBall.x ; x < theBall.x+ball_width ; x++) {
        uint8_t pixel[3];
        BALL_PIXEL(ball,pixel);
        uint16_t r = (pixel[0] >> 3);
        uint16_t g = (pixel[1] >> 2);
        uint16_t b = (pixel[2] >> 3);
        uint16_t color = ( ( r << 11 ) & 0xF800 ) | ( ( g << 5 ) & 0x07E0 ) | ( b & 0x001F ); 
        if ( pixel[1] > 0xF0 ) { 
          tft.drawPixel(x,y,color);
        }
    }
  }
  
}
