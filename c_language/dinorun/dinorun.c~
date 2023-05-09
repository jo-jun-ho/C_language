#include <stdio.h>

int print_title_screen()
{
	printf("#####################################\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##             Dino Run            ##\n");
	printf("##             - V0.1 -            ##\n");
	printf("##                                 ##\n");
	printf("##        1. Game Start            ##\n");
	printf("##        2. How To Play           ##\n");
	printf("##        3. Exit                  ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("#####################################\n");
	return 0;
}

int how_to_play()
{
	
	printf("#####################################\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##     if you meet a monster,      ##\n");
	printf("##    press space bar to avoid     ##\n");
	printf("##               it.               ##\n");
	printf("##                                 ##\n");
	printf("##         Return to Menu?         ##\n");
	printf("##                                 ##\n");
	printf("##       1. yes      2. no         ##\n");
	printf("##                                 ##\n");
	printf("#####################################\n");
	return 0;
}

int main()
{
	print_title_screen();
	int game_state=1;
	int input=0;
	int menu=1;
	while(game_state)
	{
		printf("input(1~3)>");
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
		else if(input==2)
		{
			how_to_play();
			while(menu)
			{
				printf("input(1~2)>");
				scanf("%d",&input);
				if(input==1)
				{
					print_title_screen();
					break;
				}
				else if(input==2)
				{
					how_to_play();
					printf("Return to Menu?\n");
				}
				else
				{	
					game_state=1;
				}
			}
		}
	}
	return 0;
}
