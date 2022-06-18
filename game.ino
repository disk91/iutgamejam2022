#include "game.h"
#include "level.h"

uint8_t barre_old[BAR_LINE_BLOC]  = { 0 };
uint8_t barre_new[BAR_LINE_BLOC]  = { 0 };
uint8_t briques_old[BRIQUE_Y][BRIQUE_X] = { 0 };
uint8_t briques_new[BRIQUE_Y][BRIQUE_X] = { 0 };

void setup() {
  // put your setup code here, to run once:
  initScreen();
}



void loop() { 
  static uint8_t x = 0;
  static uint8_t dir=0;
  static uint8_t barSz=4;

  static uint8_t briqueOff = 1;


  bzero(barre_new,BAR_LINE_BLOC);
  for ( int i = x ; i < x+barSz ; i++ ) {
    barre_new[i] = 1;
  }

/*
  bzero(briques_new,BRIQUE_X*BRIQUE_Y);
  uint8_t *p =  (uint8_t *)briques_new;
  for ( int i = 0; i < briqueOff ; i++ ) {
    *p = random(3);
    p++;  
  }
  */
  bcopy(levels[0],briques_new,BRIQUE_X*BRIQUE_Y);


  redrawScreen();
  
  if ( x < (BAR_LINE_BLOC-barSz) && dir == 0) x++;
  if ( x == (BAR_LINE_BLOC-barSz) && dir == 0 ) { x--; dir = 1; }
  if ( x > 0 && dir == 1 ) x--;
  if ( x == 0 && dir == 1 ) { x++ ; dir = 0; }

  bcopy(barre_new,barre_old,BAR_LINE_BLOC);
  bcopy(briques_new,briques_old,BRIQUE_X*BRIQUE_Y);
  if ( briqueOff == BRIQUE_X*BRIQUE_Y ) briqueOff = 0;
  briqueOff++;
  delay(20);
}
