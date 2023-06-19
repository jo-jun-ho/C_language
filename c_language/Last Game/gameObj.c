#include "gameObj.h"
#include <stdio.h>
#include "ConsoleUtil.h"
#include "screen.h"

void Smile_Draw()
{
	for (size_t i = 0; i < 4; i++)
	{
		SetCursorPosition(10, 2);
		printf("^0^      ");
		sleep(500);
		SetCursorPosition(10, 2);
		printf("         ");
		SetCursorPosition(10, 2);
		printf("      ^0^");
		sleep(500);
		SetCursorPosition(10, 2);
		printf("         ");
	}
	SetCursorPosition(10, 2);
	printf("  &^0^&  ");
	SetCursorPosition(30, 14);
}

void printprolog()
{
	SetCursorPosition(4, 3);
	printf("하늘에서 갑자기 떨어진");
	sleep(1000);
	SetCursorPosition(9, 5);
	printf("한 장의 쪽지");
	sleep(3000);
	SetCursorPosition(6, 8);
	printf("한 번만 읽어볼까??");
	SetCursorPosition(5, 11);
	sleep(1000);
	printf("1. 읽는다   2. 버린다");
	SetCursorPosition(30, 14);
}

void printbedend()
{
	SetCursorPosition(4, 4);
	printf("나는 그 쪽지를 무시하고");
	SetCursorPosition(7, 6);
	printf("곧장 집으로 갔다.");
	sleep(3000);
	SetCursorPosition(9, 8);
	printf("<Ending NO.1>");
	SetCursorPosition(5, 10);
	sleep(1000);
	printf("<게으른 선택받은 자>");
	SetCursorPosition(30, 14);
}

void paper()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(7, 2);
	printf("어딘가를 나타내는");
	SetCursorPosition(8, 4);
	printf("지도인 것 같다.");
	SetCursorPosition(5, 6);
	printf("나의 탐험심을 자극하는");
	SetCursorPosition(9, 8);
	printf("이 곳, 가보자");
	sleep(1000);
	SetCursorPosition(4, 10);
	printf("(조작키는 wasd입니다.)");
	SetCursorPosition(30, 14);
}

void battlechoose()
{
	SetCursorPosition(7, 1);
	printf("원하시는 번호를");
	SetCursorPosition(9, 3);
	printf("선택해주세요.");
}

void secondchoose()
{
	SetCursorPosition(8, 1);
	printf("두 번째 번호를");
	SetCursorPosition(9, 3);
	printf("선택해주세요.");
}

void attack()
{
	SetCursorPosition(3, 7);
	printf("(^0^)@            <($_$)");
}

void numberchoice()
{
	SetCursorPosition(4, 12);
	printf("1. 100  2. 200  3. 300");
}

void something()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(6, 4);
	printf("저기 끝쪽에 무언가가");
	SetCursorPosition(8, 8);
	printf("보이는 것 같다.");
	sleep(2000);
	SetCursorPosition(9, 11);
	printf("ㅇ.....어라?");
	SetCursorPosition(0, 0);
	emergemonster();
	SetCursorPosition(4, 11);
	printf("1. 싸운다   2. 도망친다");
}

void anything()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(5, 3);
	printf("역시 무언가가 보인다.");
	SetCursorPosition(8, 6);
	printf("한번 싸워보자.");
	SetCursorPosition(9, 9);
	printf("난 강하니까!");
	SetCursorPosition(30, 14);
}

void secondendmessage()
{
	sleep(1000);
	SetCursorPosition(4, 6);
	printf("이미 늦은 모양인가보다.");
	sleep(2000);
	SetCursorPosition(10, 8);
	printf("\033[31m(푹....찍)\033[0m");
	sleep(3000);
	SetCursorPosition(9, 10);
	printf("<ENDING NO.2>");
	sleep(1000);
	SetCursorPosition(3, 12);
	printf("<얼마 못간 감정, 허무함>");
	SetCursorPosition(30, 14);
}

void treasurebox()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(5, 2);
	printf("열어보니 나온 것은...");
	sleep(2000);
	SetCursorPosition(7, 4);
	printf("하나의 쪽지였다.");
	sleep(2000);
	SetCursorPosition(10, 6);
	printf("뭐라고...?");
	SetCursorPosition(8, 8);
	printf("뒤를...보라고?");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("저건 나잖아?");
	sleep(1000);
	SetCursorPosition(7, 12);
	printf("어떻게 된 일이지?");
	SetCursorPosition(30, 14);
}

void lastbattle()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(3, 2);
	printf("'반갑구나, 또 다른 나??'");
	sleep(2000);
	SetCursorPosition(6, 4);
	printf("뭔지 잘 모르겠지?");
	sleep(2000);
	SetCursorPosition(7, 6);
	printf("쉽게 말하자면...");
	SetCursorPosition(5, 8);
	printf("예전에 떨어진 너야.");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("탈출하려면..");
	sleep(1000);
	SetCursorPosition(11, 12);
	printf("당장 싸우자.");
	SetCursorPosition(30, 14);
	sleep(3000);
}

void toolate()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(3, 2);
	printf("역시 안 여는게 맞아보여.");
	SetCursorPosition(9, 4);
	printf("다시 나가자.");
	sleep(2000);
	SetCursorPosition(4, 6);
	printf("갑자기 잠이 쏟아진다..");
	sleep(2000);
	SetCursorPosition(8, 8);
	printf("'다음은...너야'");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("<ENDING NO.4>");
	sleep(1000);
	SetCursorPosition(7, 12);
	printf("<누군가의 속삭임>");
	SetCursorPosition(30, 14);
	sleep(3000);
}

void battlescene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)@            <($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=@          <-($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==@        <--($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===@      <---($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)====@    <----($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=====@  <-----($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)======@<------($_$)");
	sleep(100);
}

void battlewinscene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)=======@------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)========@-----($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=========@----($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==========@---($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===========@--($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)============@-($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=============@($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)============@  ($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===========@    ($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==========@     \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=========@      \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)========@       \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=======@        \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)======@         \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=====@          \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)====@           \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===@            \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==@             \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=@              \033[31m($_$)\033[0m");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)@               \033[31m($_$)\033[0m");
	sleep(100);
}

void battlelosescene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)=====@<-------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)====@<--------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===@<---------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==@<----------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=@<-----------($_$)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)@<------------($_$)");
	sleep(100);
	SetCursorPosition(2, 7);
	printf("(^0^)@ <------------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("(^0^)@  <------------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("(^0^)@   <-----------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m    <----------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m     <---------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m      <--------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m       <-------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m        <------($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m         <-----($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m          <----($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m           <---($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m            <--($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m             <-($_$)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("\033[31m(^0^)@\033[0m              <($_$)");
	sleep(100);
}

void bossattack()
{
	SetCursorPosition(3, 7);
	printf("(^0^)@            @(^0^)");
}

void bossbattlescene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)@            @(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=@          @=(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==@        @==(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===@      @===(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)====@    @====(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=====@  @=====(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)======@@======(^0^)");
	sleep(100);
}

void bossbattlewinscene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)======@@======(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=======@@=====(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)========@@====(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=========@@===(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==========@@==(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===========@@=(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)============@@(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)============@ @(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)============@  @(^0^)");
	sleep(100);
}

void bossbattlelosescene()
{
	SetCursorPosition(3, 7);
	printf("(^0^)======@@======(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=====@@=======(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)====@@========(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)===@@=========(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)==@@==========(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)=@@===========(^0^)");
	sleep(100);
	SetCursorPosition(3, 7);
	printf("(^0^)@@============(^0^)");
	sleep(100);
	SetCursorPosition(2, 7);
	printf("(^0^)@ @============(^0^)");
	sleep(100);
	SetCursorPosition(1, 7);
	printf("(^0^)@  @============(^0^)");
	sleep(100);
}