#include "screen.h"
#include <Windows.h>
#include <stdio.h>
#include "GameUtil.h"

void PrintTitle()
{
	SetCursorPosition(0, 0);
	printf("******************************\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*  [얘! 얼른 사라져버리렴!]  *\n");
	printf("*                            *\n");
	printf("*       1. 게임 시작         *\n");
	printf("*       2. 플레이 방법       *\n");
	printf("*       3. 나~가!            *\n");
	printf("*                            *\n");
	printf("******************************\n");

	SetCursorPosition(12, 2);
	printf("\033[32m");
	printf("(^0^  )");
	printf("\033[0m");
	SetCursorPosition(0, 9);
}

void PrintMainGame()
{
	SetCursorPosition(0, 0);
	printf("******************************\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*    하지말라고....했지???   *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("******************************\n");
	SetCursorPosition(12, 2);
	printf("\033[32m");/*녹색 변경 RGB 010*/
	printf("(^_^  )");
	printf("\033[0m");/*색상 초기화*/

	SetCursorPosition(5, 5);
	printf("\033[43m");
	printf("\033[30m");
	printf("하지말라고....했지???");
	printf("\033[0m");
	SetCursorPosition(0, 9);
	Sleep(1000);

	SetCursorPosition(17, 2);
	printf("\033[33m");/*노란색 변경 RGB 011*/
	printf("+");
	printf("\033[0m");
	SetCursorPosition(0, 9);
	Sleep(1000);

	/*배경색 변경: 4
	  글자 변경: 3*/
}

void PrintGameEnd()
{
	SetCursorPosition(0, 0);
	printf("******************************\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*       플레이 해주셔서      *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("******************************\n");

	Sleep(1000);
	SetCursorPosition(10, 6);
	printf("감사하겠냐?");
	SetCursorPosition(0, 9);
	

	/*배경색 변경: 4
	  글자 변경: 3*/
}