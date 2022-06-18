#include "game.h"

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
