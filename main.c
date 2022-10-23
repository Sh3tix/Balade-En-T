//
// Created by Gab on 23/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "game.h"

#ifdef WIN32
#define clear() system("cls")
#else
#ifdef UNIX
        #define clear() system("clear")
    #else

        #ifndef NBLIGCLS
            #define NBLIGCLS 30
        #endif

        void clear()
        {
            int i;
            for(i = 0; i < NBLIGCLS; i++)
            {
                printf("\n");
            }
        }
    #endif

#endif

void displayChoices();

int main(void) {

    short int currentPosX = 1;
    short int currentPosY = 1;
    char choice;

    char area[AREA_ROW][AREA_COLUMN];

    createArena(area, &currentPosX, &currentPosY);

    do {
        clear();

        displayArea(area);
        displayChoices();

        printf("\n> ");
        scanf("%c", &choice);

        switch (choice) {
            case 'z':
                up(area, &currentPosX, &currentPosY);
                displayChoices();
                break;

            case 's':
                down(area, &currentPosX, &currentPosY);
                displayChoices();
                break;

            case 'd':
                right(area, &currentPosX, &currentPosY);
                displayChoices();
                break;

            case 'q':
                left(area, &currentPosX, &currentPosY);
                displayChoices();
                break;
        }

    } while (choice != 'a');

    return 0;
}

void displayChoices()
{
    printf("\nZ. Up\n"
           "S. Down\n"
           "D. Right\n"
           "Q. Left\n"
           "A. Quit\n\n"
           "---------\n");
}