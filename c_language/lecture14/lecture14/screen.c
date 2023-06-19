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
	printf("*  [��! �� �����������!]  *\n");
	printf("*                            *\n");
	printf("*       1. ���� ����         *\n");
	printf("*       2. �÷��� ���       *\n");
	printf("*       3. ��~��!            *\n");
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
	printf("*    ���������....����???   *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("******************************\n");
	SetCursorPosition(12, 2);
	printf("\033[32m");/*��� ���� RGB 010*/
	printf("(^_^  )");
	printf("\033[0m");/*���� �ʱ�ȭ*/

	SetCursorPosition(5, 5);
	printf("\033[43m");
	printf("\033[30m");
	printf("���������....����???");
	printf("\033[0m");
	SetCursorPosition(0, 9);
	Sleep(1000);

	SetCursorPosition(17, 2);
	printf("\033[33m");/*����� ���� RGB 011*/
	printf("+");
	printf("\033[0m");
	SetCursorPosition(0, 9);
	Sleep(1000);

	/*���� ����: 4
	  ���� ����: 3*/
}

void PrintGameEnd()
{
	SetCursorPosition(0, 0);
	printf("******************************\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*       �÷��� ���ּż�      *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("*                            *\n");
	printf("******************************\n");

	Sleep(1000);
	SetCursorPosition(10, 6);
	printf("�����ϰڳ�?");
	SetCursorPosition(0, 9);
	

	/*���� ����: 4
	  ���� ����: 3*/
}