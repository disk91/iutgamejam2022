#include <Arduino.h>
#include <math.h>
#include "TFT_eSPI.h"
#include "game.h"

TFT_eSPI tft;

void initScreen() {
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(TFT_BLACK);
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
  pinMode(WIO_5S_UP, INPUT_PULLUP);
  pinMode(WIO_5S_DOWN, INPUT_PULLUP);
  pinMode(WIO_5S_LEFT, INPUT_PULLUP);
  pinMode(WIO_5S_RIGHT, INPUT_PULLUP);
  pinMode(WIO_5S_PRESS, INPUT_PULLUP);   
}

/*
 * barre_old[BAR_LINE_BLOC]  = { 0 };
extern uint8_t barre_new[BAR_LINE_BLOC]  = { 0 };
extern uint8_t briques_old[BRIQUE_Y][BRIQUE_X] = { 0 };
extern uint8_t briques_new[BRIQUE_Y][BRIQUE_X] = { 0 };
 */


void drawBarSprite(uint8_t sprite,uint16_t offsetX, uint16_t offsetY) {
  if ( sprite != 0 ) {
    for ( int y = offsetY ; y < offsetY + BAR_BLOC_SZY ; y++ ) {
      for ( int x = offsetX ; x < offsetX + BAR_BLOC_SZ ; x++ ) {
         tft.drawPixel(x,y,TFT_WHITE);
      }
    }
  }
}

void drawBriqueSprite(uint8_t sprite,uint16_t offsetX, uint16_t offsetY) {
  if ( sprite != 0 ) {
    for ( int y = offsetY ; y < offsetY + BRIQUE_BLOC_Y -1 ; y++ ) {
      for ( int x = offsetX+1 ; x < offsetX + BRIQUE_BLOC_X -1 ; x++ ) {
        if ( sprite == 1 ) {
          tft.drawPixel(x,y,TFT_GREEN);
        } else {
          tft.drawPixel(x,y,TFT_BLUE);
        }
      }
    }
  }
}

void redrawScreen() {
  // barre du bas
  for ( int i = 0 ; i < BAR_LINE_BLOC ; i++ ) {
    if ( barre_new[i] != barre_old[i] ) {
      // need to redraw - clean previous pixels
      tft.fillRect( i* BAR_BLOC_SZ, BAR_OFFSET_Y, BAR_BLOC_SZ, BAR_BLOC_SZY,TFT_BLACK);
      drawBarSprite(barre_new[i],i* BAR_BLOC_SZ, BAR_OFFSET_Y);
    }
  }
  // briques
  for ( int y = 0 ; y < BRIQUE_Y ; y ++ ) {
    for ( int x = 0 ; x < BRIQUE_X ; x ++ ) {
      if ( briques_new[y][x] != briques_old[y][x] ) {
        // need to redraw - clean previous pixels
        int _x = x* BRIQUE_BLOC_X;
        int _y = BRIQUE_OFFSET_Y+y*(BRIQUE_BLOC_Y);
        tft.fillRect( _x, _y, BRIQUE_BLOC_X, BRIQUE_BLOC_Y,TFT_BLACK);
        drawBriqueSprite(briques_new[y][x],_x,_y);
      }
    }
  }
}
