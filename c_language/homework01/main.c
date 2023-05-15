#include <stdio.h>
#include "screen.h"

int main()
{
	int input=0;
	int game_state=1;
	screen();
	while(game_state)
	{
		scanf("%d",&input);
		if(input==2)
		{
			how_to_play();
		}
		else if(input==3)
		{
			exit();
		}
		else
		{
			printf("try again.");
			game_state=1;
		}
	}
	return 0;
}
