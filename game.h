
#ifndef __GAME_H__
#define __GAME_H__

#define SCREEN_X  320
#define SCREEN_Y  220

#define BAR_OFFSET_Y (SCREEN_Y - 10)
#define BAR_BLOC_SZ   8
#define BAR_BLOC_SZY  10
#define BAR_LINE_BLOC (SCREEN_X / BAR_BLOC_SZ)

#define BRIQUE_SZ_Y   200
#define BRIQUE_BLOC_X 32
#define BRIQUE_BLOC_Y 10
#define BRIQUE_X     ( SCREEN_X / BRIQUE_BLOC_X )
#define BRIQUE_Y     ( BRIQUE_SZ_Y / BRIQUE_BLOC_Y )


extern uint8_t barre_old[BAR_LINE_BLOC];
extern uint8_t barre_new[BAR_LINE_BLOC];
extern uint8_t briques_old[BRIQUE_Y][BRIQUE_X];
extern uint8_t briques_new[BRIQUE_Y][BRIQUE_X];


void initScreen();
void redrawScreen();

#endif __GAME_H__
