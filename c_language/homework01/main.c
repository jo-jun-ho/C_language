#include <stdio.h>
#include "screen.h"
#include <stdlib.h>

int main()
{
	char screen[33*12+1];
	int width=32;
	int height=12;
	int game_state=1;

	int input=0;

	while(game_state)
	{
		clearbuffer(screen,width,height);
		titlebuffer(screen, width, height);
		
		printf("%s", screen);
		system("cls");
		printf("%s\ninput>",screen);
		scanf("%d", &input);
		
		if(input==3)
		{
			clearbuffer(screen, width, height);
			gameoverbuffer(screen, width, height);
			printf("%s",screen);
			system("cls");
			game_state=0;
		}
		else if(input==2)
		{
			how_to_playbuffer(screen, width, height);
			printf("%s",screen);
		}
	}

	return 0;
}
