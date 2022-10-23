//
// Created by Gab on 23/10/2022.
//

#ifndef BALLADE_EN_T_GAME_H
#define BALLADE_EN_T_GAME_H

//----------------------------------------------------------------------------------------------
// Macros pour la taille de l'espace de jeu !
#define AREA_ROW 20
#define AREA_COLUMN 50
//----------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------
// Prototypes des fonctions
void createArena(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY);
void displayArea(char area[AREA_ROW][AREA_COLUMN]);
void up(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY);
void down(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY);
void left(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY);
void right(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY);
//----------------------------------------------------------------------------------------------

#endif //BALLADE_EN_T_GAME_H
