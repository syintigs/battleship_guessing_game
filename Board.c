#include <stdio.h>
#include "GlobalVariables.h"

#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define BLUE  "\x1b[34m"
#define COLORRESET "\x1b[0m"
#define SEA "#"
#define SHIP "@"
#define ENEMYSHIP "%"

void printBoard()
{
	for(int i =0; i<10;i++)
	{
		printf(" ");
		for(int a; a<10;a++)
		{
			printf("%d",a);
		}
		printf("\n");
		printf("%d",i);

		for(int j=0; j<10;j++)
		{
			switch(board[i][j])
			{
				case EMPTY:
					printf(BLUE"%s"COLORRESET,SEA);
					break;

				case FRIENDLY:
					printf(GREEN"%s"COLORRESET,SHIP);
					break;
				case DESTROYED:
					printf(RED"%s"COLORRESET,SHIP);
					break;
				case ENEMYDESTROYED:
					printf(RED"%s"COLORRESET,ENEMYSHIP);
					break;

				default:
					break;
					
			}
		}
	}
	printf("\n");
}
