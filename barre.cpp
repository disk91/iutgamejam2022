#include "game.h"
#include "barre.h"

typedef struct barre_s{
    uint8_t debut = (BAR_LINE_BLOC/2)-(BAR_SIZE/2);
    uint8_t taille = BAR_SIZE;
} barre_t ;

barre_t uneBarre;

void initialiseBarre(){
  int nbBlockMilieu = BAR_SIZE - 2;
  
  barre_new[uneBarre.debut] = 1;
  for(int i = uneBarre.debut + 1; i<= uneBarre.debut + nbBlockMilieu ; i++){
    barre_new[i] = 3;
    }
  barre_new[uneBarre.debut + (uneBarre.taille-1)] = 2;
  }


uint8_t actionOnBarre(uint16_t x, uint16_t y) {
  if ( y+BALL_SZ < BAR_OFFSET_Y  ) return 0;
  int dx = (x+BALL_SZ/2) / BAR_BLOC_SZ;
  return barre_new[dx];
}

void deplaceGauche(){
  if(uneBarre.debut > 0){
    uneBarre.debut--;
    initialiseBarre();
    barre_new[uneBarre.debut + (uneBarre.taille)] = 0;
    }
  }


void deplaceDroite(){
  if(uneBarre.debut < (BAR_LINE_BLOC - uneBarre.taille)){
    uneBarre.debut++;
    initialiseBarre();
    barre_new[uneBarre.debut -1] = 0;
    }
  }

void affiche(){
  for(int i = 0; i < BAR_LINE_BLOC; i++){
    Serial.print(barre_new[i]);
    Serial.print(" ");
  }
  Serial.println("");
  }

void control(){
  if (digitalRead(WIO_5S_LEFT) == LOW) {
    deplaceGauche();
    //affiche();
   }
  if (digitalRead(WIO_5S_RIGHT) == LOW) {
    deplaceDroite();
    //affiche();
   }
}


void draw_barreLeft(uint16_t offsetX, uint16_t offsetY) {

  const char * barreLeft = barleft_data;
  for ( int y = 0 ; y < barre_height ; y++ ) {
    for ( int x  = 0 ; x < barre_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(barreLeft,pixel);
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


void draw_barreRight(uint16_t offsetX, uint16_t offsetY) {

  const char * barreRight = barright_data;
  for ( int y = 0 ; y < barre_height ; y++ ) {
    for ( int x  = 0 ; x < barre_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(barreRight,pixel);
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

void draw_barreMiddle(uint16_t offsetX, uint16_t offsetY) {

  const char * barreMiddle = barmiddle_data;
  for ( int y = 0 ; y < barre_height ; y++ ) {
    for ( int x  = 0 ; x < barre_width ; x++) {
        uint8_t pixel[3];
        HEADER_PIXEL(barreMiddle,pixel);
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
