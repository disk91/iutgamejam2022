#include <Arduino.h>
#include "game.h"
#include "TFT_eSPI.h"
#include "coeur.h"

uint32_t score = 0;
uint32_t pScore = 1000;
uint8_t  vie = 3;
uint8_t  pVie = 0;

void addScore(uint32_t s) {
  pScore = score;
  score += s;
}

uint32_t getScore() {
  return score;
}

bool removeVie() {
  vie--;
  return ( vie > 0 ); 
}

void initScore() {
//   char title[] = "Score :";
   tft.setTextColor(TFT_WHITE);
   tft.setTextSize(2);
//   sprintf(title,"Wio LoRaWan Field Tester");
   tft.drawString("Score:",5, 5, 1);    
   score = 0;
   pScore = 1000; 
   vie = 3;
   pVie = 0;
}

void printScore() {
   if ( pScore != score ) {
     char stmp[64];
     tft.fillRect( 75, 5, 50, 15,TFT_BLACK);
     tft.setTextColor(TFT_WHITE);
     tft.setTextSize(2);
     sprintf(stmp,"%d",score);
     tft.drawString(stmp,75, 5, 1);  
     pScore = score;   
   }
}

void printVie() {
 if ( vie != pVie ) {
  pVie = vie;
  tft.fillRect( 200, 5, 70, 15,TFT_BLACK);
  int offsetY = 6;
  int offsetX = 200;
  for ( int v = 0 ; v < vie ; v ++ ) {
   offsetX += c_width+3;
   char * tab = coeur_data;
   for ( int y = 0 ; y < c_height ; y++ ) {
      for ( int x  = 0 ; x < c_width ; x++) {
          uint8_t pixel[3];
          HEADER_PIXEL(tab,pixel);
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
 }
}
