//
// Created by Gab on 23/10/2022.
//

#include <stdio.h>
#include "game.h"

void createArena(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY)
{
    int i, j;

    for (i = 0; i < AREA_ROW; i++)
        for(j = 0; j < AREA_COLUMN; j++)
        {
            if (i == 0 || i == AREA_ROW - 1 || j == 0 || j == AREA_COLUMN - 1)
                area[i][j] = 'O';
            else
                area[i][j] = ' ';
        }

    area[*currentPosX][*currentPosY] = 'T';
}

void displayArea(char area[AREA_ROW][AREA_COLUMN])
{
    int i, j;
    for (i = 0; i < AREA_ROW; i++)
    {
        for (j = 0; j < AREA_COLUMN; j++)
            printf("%c", area[i][j]);

        printf("\n");
    }
}

void up(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY)
{
    if (area[*currentPosX - 1][*currentPosY] == ' ')
    {

        printf("OK\n");
        area[*currentPosX - 1][*currentPosY] = 'T';
        area[*currentPosX][*currentPosY] = ' ';

        *currentPosX -= 1;
    }
    else
        printf("NOT OK\n");
}

void down(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY)
{
    if (area[*currentPosX + 1][*currentPosY] == ' ')
    {
        printf("OK\n");
        area[*currentPosX + 1][*currentPosY] = 'T';
        area[*currentPosX][*currentPosY] = ' ';

        *currentPosX += 1;
    }
    else
        printf("NOT OK\n");
}

void left(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY)
{
    if (area[*currentPosX][*currentPosY - 1] == ' ')
    {
        printf("OK\n");
        area[*currentPosX][*currentPosY - 1] = 'T';
        area[*currentPosX][*currentPosY] = ' ';

        *currentPosY -= 1;
    }
    else
        printf("NOT OK\n");
}

void right(char area[AREA_ROW][AREA_COLUMN], short int* currentPosX, short int* currentPosY)
{
    if (area[*currentPosX][*currentPosY + 1] == ' ')
    {
        printf("OK\n");
        area[*currentPosX][*currentPosY + 1] = 'T';
        area[*currentPosX][*currentPosY] = ' ';

        *currentPosY += 1;
    }
    else
        printf("NOT OK\n");
}