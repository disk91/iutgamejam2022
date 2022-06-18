#include "TFT_eSPI.h"


#ifndef __GAME_H__
#define __GAME_H__


#define SCREEN_X  320
#define SCREEN_Y  220

#define BAR_OFFSET_Y (SCREEN_Y - 10)
#define BAR_BLOC_SZ   8
#define BAR_BLOC_SZY  10
#define BAR_LINE_BLOC (SCREEN_X / BAR_BLOC_SZ)
#define BAR_SIZE 4

#define BRIQUE_OFFSET_Y 20
#define BRIQUE_SZ_Y   120
#define BRIQUE_BLOC_X 32
#define BRIQUE_BLOC_Y 10
#define BRIQUE_X     ( SCREEN_X / BRIQUE_BLOC_X )
#define BRIQUE_Y     ( BRIQUE_SZ_Y / BRIQUE_BLOC_Y )

#define BALL_SZ   10

extern uint8_t barre_old[BAR_LINE_BLOC];
extern uint8_t barre_new[BAR_LINE_BLOC];
extern uint8_t briques_old[BRIQUE_Y][BRIQUE_X];
extern uint8_t briques_new[BRIQUE_Y][BRIQUE_X];

extern TFT_eSPI tft;

void initialiseBarre();
void control();

void initScreen();
void redrawScreen();

void initBall();
void startBall();
void draw_ball();
void setBallPos(uint16_t x, uint16_t y);
void clear_ball();
void draw_ball();
void moveBall(bool collisionY, bool collisionX, int colType);
uint16_t getY();
uint16_t getX();
void draw_barreLeft(uint16_t offsetX, uint16_t offsetY);
void draw_barreRight(uint16_t offsetX, uint16_t offsetY);
void draw_barreMiddle(uint16_t offsetX, uint16_t offsetY);

bool actionOnBrique(uint16_t x, uint16_t y);
uint8_t actionOnBarre(uint16_t x, uint16_t y);

#endif __GAME_H__
