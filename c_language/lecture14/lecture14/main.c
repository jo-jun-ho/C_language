#include <stdio.h>
#include <Windows.h>
#include "screen.h"

void BeginGame();
void UpdateGame();
void Endgame();

/*
* 0:게임종료
* 1:메인화면
* 2:타이틀화면
*/
int gameState;

int main()
{

	/*초기화시 실행*/
	BeginGame();

	while (gameState)
	{
		UpdateGame();
	}

	return 0;
}

void BeginGame()
{
	gameState = 2;

	SetCursorVisible(0);
}

void UpdateGame()
{
	if (gameState == 1)
	{
		PrintMainGame();
		gameState = 0;
	}
	else if (gameState == 2)
	{
		PrintTitle();
		char gameInput = '0';

		gameInput = getch();

		if (gameInput == '1')
		{
			gameState = 1;
		}
		else if (gameInput == '3')
		{
			gameState = 0;
			Endgame();
		}
	}
}

void Endgame()
{
	PrintGameEnd();
}