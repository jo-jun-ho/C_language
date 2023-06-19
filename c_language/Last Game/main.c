#include <stdio.h>
#include "screen.h"
#include "ConsoleUtil.h"
#include "GameCore.h"

int game_state;
void main()
{
	isGameRunning = 1;

	BeginGame();

	while (isGameRunning)
	{
		UpdateGame();
	}
}