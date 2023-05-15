#include <stdio.h>

int main()
{
	int game_state=1;

	char map[450];

	int i=0;
	while(i<450)
	{
		map[i]='0';
		i=i+1;
	}

	map[2]='\0';

	printf("%s",map);

	return 0;
}
