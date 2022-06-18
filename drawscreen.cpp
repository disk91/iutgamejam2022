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


void drawBarSprite(uint8_t sprite,uint16_t offsetX, uint16_t offsetY) {
  switch ( sprite ) {
    case 1 :
        draw_barreLeft(offsetX, offsetY);
        break;

    case 2 :
        draw_barreRight(offsetX, offsetY);
        break;

    case 3 :
        draw_barreMiddle(offsetX, offsetY);
        break;
  }
}

void drawBriqueSprite(uint8_t sprite,uint16_t offsetX, uint16_t offsetY) {
  switch ( sprite ) {
    case 1:
      draw_brique1(offsetX, offsetY);
      break;
      
    case 2:
      draw_brique2(offsetX, offsetY);
      break;
      
    case 3:
      draw_brique3(offsetX, offsetY);
      break;
      
    case 4:
      draw_brique4(offsetX, offsetY);
      break;
      
    case 5:
      draw_brique5(offsetX, offsetY);
      break;
  }




  
  /*if ( sprite != 0 ) {
    for ( int y = offsetY ; y < offsetY + BRIQUE_BLOC_Y -1 ; y++ ) {
      for ( int x = offsetX+1 ; x < offsetX + BRIQUE_BLOC_X -1 ; x++ ) {
        if ( sprite == 1 ) {
          tft.drawPixel(x,y,TFT_GREEN);
        } else {
          tft.drawPixel(x,y,TFT_BLUE);
        }
      }
    }
  }*/
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

void cleanBarre() {
  tft.fillRect( 0, BAR_OFFSET_Y, 320, 12,TFT_BLACK);
}

void gameOver() {
  tft.fillRect( 0, BRIQUE_OFFSET_Y, 320, 240-BRIQUE_OFFSET_Y,TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(4);
  tft.drawString("GAME OVER",20, 100, 1);    
}

void printVictory() {
  tft.fillRect( 0, BRIQUE_OFFSET_Y, 320, 240-BRIQUE_OFFSET_Y,TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(4);
  tft.drawString("VICTORY !",20, 100, 1);    

}
