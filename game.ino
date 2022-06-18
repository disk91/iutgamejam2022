#include "game.h"
#include "level.h"

uint8_t barre_old[BAR_LINE_BLOC]  = { 0 };
uint8_t barre_new[BAR_LINE_BLOC]  = { 0 };
uint8_t briques_old[BRIQUE_Y][BRIQUE_X] = { 0 };
uint8_t briques_new[BRIQUE_Y][BRIQUE_X] = { 0 };

bool started = false;
uint8_t cLev = 0;
void setup() {
  // put your setup code here, to run once:
  initScreen();
  
  draw_splash(0,0);
  delay(3000);
  tft.fillScreen(TFT_BLACK);
  
  initBall();
  initialiseBarre();
  
  bcopy(levels[cLev],briques_new,BRIQUE_X*BRIQUE_Y);
  initScore();
}



void loop() { 


  if ( !started && (digitalRead(WIO_5S_LEFT) == LOW || digitalRead(WIO_5S_RIGHT) == LOW || digitalRead(WIO_5S_PRESS) == LOW) ) {
    startBall();
    started = true;
  }
  control();
  
  clear_ball();
  bool aBr = actionOnBrique( getX(), getY());
  uint8_t aBa = actionOnBarre(getX(), getY());
  if ( aBr ) {
      moveBall(true, false,0);
  } else if ( aBa != 0 ) {
      moveBall(true, false,aBa);    
  } else {
      moveBall(false, false,0);
  }
  redrawScreen();
  draw_ball();

  // test victoire
  bool victory = true;
  for ( int y = 0 ; y < BRIQUE_Y ; y ++ ) {
    for ( int x = 0 ; x < BRIQUE_X ; x ++ ) {
      if ( briques_new[y][x] != 0 ) victory = false;
    }
  }
  if ( victory ) while(1);

  // check the bug
  int r = random(1000);
  if ( started && r == 0 ) {
    bcopy(briques_new,levels[cLev],BRIQUE_X*BRIQUE_Y);
    if ( cLev < 4 ) {
      cLev++; 
    } else {
      cLev=0;
    }
    bcopy(levels[cLev],briques_new,BRIQUE_X*BRIQUE_Y);
  } else {
    bcopy(briques_new,briques_old,BRIQUE_X*BRIQUE_Y);
  }  
  bcopy(barre_new,barre_old,BAR_LINE_BLOC);
  printScore();
  delay(20);
}
