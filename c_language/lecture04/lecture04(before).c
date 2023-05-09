#include <stdio.h>



int main()
{
	int hp=30;
	int attack;
	printf("주인공의 공격력을 입력하세요");
	scanf("%d", &attack);

	printf("주인공의 공격력은 %d입니다\n",attack);
	int save;

	save=hp-attack;

	if(save>0)
	{
		printf("적의 잔여 HP:%d\n",save);
		printf("적이 주인공을 공격해서 주인공이 뒤졌습니다.\n");

		printf("Game Over");
	
	}
	else
	{
		printf("적의 잔여 HP : 0\n");
		printf("적을 물리쳤습니다!\n");
		printf("Happy End");
	
	
	}

	return 0;

}
