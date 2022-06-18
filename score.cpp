#include <Arduino.h>
#include "game.h"
#include "TFT_eSPI.h"
uint32_t score = 0;
uint32_t pScore = 0;

void addScore(uint32_t s) {
  pScore = score;
  score += s;
}

uint32_t getScore() {
  return score;
}

void initScore() {
//   char title[] = "Score :";
   tft.setTextColor(TFT_WHITE);
   tft.setTextSize(2);
//   sprintf(title,"Wio LoRaWan Field Tester");
   tft.drawString("Score:",5, 5, 1);    
   score = 0;
   pScore = 0; 
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
