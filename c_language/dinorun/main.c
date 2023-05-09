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
int main()
{
	print_title_screen();
	int game_state=1;
	int input=0;
	while(game_state)
	{
		printf("input(1~3)>");
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
	}
	return 0;
}
