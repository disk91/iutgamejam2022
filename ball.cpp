#include "Arduino.h"
#include "game.h"
#include "ball.h"

typedef struct ball_s {
  uint16_t px = 0xFFFF;  // previous X
  uint16_t py = 0xFFFF;  // previous Y
  
  uint16_t x = 0xFFFF;  // previous X
  uint16_t y = 0xFFFF;  // previous Y

  uint16_t above[10][10];

  int16_t dx;           // direction X * 100
  int16_t dy;
  
} ball_t;

ball_t theBall;

void initBall() {
  theBall.dy = 0;
  theBall.dx = 0;
  setBallPos((SCREEN_X/2)-ball_width/2,BAR_OFFSET_Y-ball_height-1);
}

void startBall() {
  theBall.dy = -4;
  if ( random(2) == 0 ) {
    theBall.dx = -4;
  } else {
    theBall.dx = 4;
  }  
}

void setBallPos(uint16_t x, uint16_t y) {
  if ( x != 0xFFFF ) { 
   theBall.px = x;
   theBall.py = y;
  }
  theBall.x = x;
  theBall.y = y;
}

uint16_t getX() {
  return theBall.x;
}

uint16_t getY() {
  return theBall.y;
}


void clear_ball() {
  if ( theBall.px == 0xFFFF ) return; // for the first pass
  for ( int y = 0 ; y < ball_height ; y++ ) {
    for ( int x  = 0 ; x < ball_width ; x++) {
       tft.drawPixel(theBall.px+x,theBall.py+y,theBall.above[y][x]);
    }
  }
}

void draw_ball() {

  const char * ball = ball_data;
  for ( int y = 0 ; y < ball_height ; y++ ) {
    for ( int x  = 0 ; x < ball_width ; x++) {
        uint8_t pixel[3];
        BALL_PIXEL(ball,pixel);
        uint16_t r = (pixel[0] >> 3);
        uint16_t g = (pixel[1] >> 2);
        uint16_t b = (pixel[2] >> 3);
        uint16_t color = ( ( r << 11 ) & 0xF800 ) | ( ( g << 5 ) & 0x07E0 ) | ( b & 0x001F ); 
        theBall.above[y][x] = tft.readPixel(theBall.x+x,theBall.y+y);
        if ( pixel[1] < 0xF0 ) { 
          tft.drawPixel(theBall.x+x,theBall.y+y,color);
        }
    }
  }
  
}

void moveBall(bool collisionY, bool collisionX, int colType) {
  // screen collision
  if ( theBall.x <= 0 ) collisionX = true;
  if ( theBall.x >= (SCREEN_X-ball_width) ) collisionX = true;
  if ( theBall.y <= BRIQUE_OFFSET_Y ) collisionY = true;

  if ( theBall.y >= SCREEN_Y-ball_width ) collisionY = true;

  
  if ( collisionX ) {
    theBall.dx *= -1;
  }
  if ( collisionY ) {
    theBall.dy *= -1;
  }

  if ( colType == 1 ) {
    theBall.dx --;
  }

  if ( colType == 2 ) {
    theBall.dx ++;
  }

  setBallPos(theBall.x+theBall.dx, theBall.y+theBall.dy);
}
