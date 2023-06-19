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
	printf("�ϴÿ��� ���ڱ� ������");
	sleep(1000);
	SetCursorPosition(9, 5);
	printf("�� ���� ����");
	sleep(3000);
	SetCursorPosition(6, 8);
	printf("�� ���� �о��??");
	SetCursorPosition(5, 11);
	sleep(1000);
	printf("1. �д´�   2. ������");
	SetCursorPosition(30, 14);
}

void printbedend()
{
	SetCursorPosition(4, 4);
	printf("���� �� ������ �����ϰ�");
	SetCursorPosition(7, 6);
	printf("���� ������ ����.");
	sleep(3000);
	SetCursorPosition(9, 8);
	printf("<Ending NO.1>");
	SetCursorPosition(5, 10);
	sleep(1000);
	printf("<������ ���ù��� ��>");
	SetCursorPosition(30, 14);
}

void paper()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(7, 2);
	printf("��򰡸� ��Ÿ����");
	SetCursorPosition(8, 4);
	printf("������ �� ����.");
	SetCursorPosition(5, 6);
	printf("���� Ž����� �ڱ��ϴ�");
	SetCursorPosition(9, 8);
	printf("�� ��, ������");
	sleep(1000);
	SetCursorPosition(4, 10);
	printf("(����Ű�� wasd�Դϴ�.)");
	SetCursorPosition(30, 14);
}

void battlechoose()
{
	SetCursorPosition(7, 1);
	printf("���Ͻô� ��ȣ��");
	SetCursorPosition(9, 3);
	printf("�������ּ���.");
}

void secondchoose()
{
	SetCursorPosition(8, 1);
	printf("�� ��° ��ȣ��");
	SetCursorPosition(9, 3);
	printf("�������ּ���.");
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
	printf("���� ���ʿ� ���𰡰�");
	SetCursorPosition(8, 8);
	printf("���̴� �� ����.");
	sleep(2000);
	SetCursorPosition(9, 11);
	printf("��.....���?");
	SetCursorPosition(0, 0);
	emergemonster();
	SetCursorPosition(4, 11);
	printf("1. �ο��   2. ����ģ��");
}

void anything()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(5, 3);
	printf("���� ���𰡰� ���δ�.");
	SetCursorPosition(8, 6);
	printf("�ѹ� �ο�����.");
	SetCursorPosition(9, 9);
	printf("�� ���ϴϱ�!");
	SetCursorPosition(30, 14);
}

void secondendmessage()
{
	sleep(1000);
	SetCursorPosition(4, 6);
	printf("�̹� ���� ����ΰ�����.");
	sleep(2000);
	SetCursorPosition(10, 8);
	printf("\033[31m(ǫ....��)\033[0m");
	sleep(3000);
	SetCursorPosition(9, 10);
	printf("<ENDING NO.2>");
	sleep(1000);
	SetCursorPosition(3, 12);
	printf("<�� ���� ����, �㹫��>");
	SetCursorPosition(30, 14);
}

void treasurebox()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(5, 2);
	printf("����� ���� ����...");
	sleep(2000);
	SetCursorPosition(7, 4);
	printf("�ϳ��� ��������.");
	sleep(2000);
	SetCursorPosition(10, 6);
	printf("�����...?");
	SetCursorPosition(8, 8);
	printf("�ڸ�...�����?");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("���� ���ݾ�?");
	sleep(1000);
	SetCursorPosition(7, 12);
	printf("��� �� ������?");
	SetCursorPosition(30, 14);
}

void lastbattle()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(3, 2);
	printf("'�ݰ�����, �� �ٸ� ��??'");
	sleep(2000);
	SetCursorPosition(6, 4);
	printf("���� �� �𸣰���?");
	sleep(2000);
	SetCursorPosition(7, 6);
	printf("���� �����ڸ�...");
	SetCursorPosition(5, 8);
	printf("������ ������ �ʾ�.");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("Ż���Ϸ���..");
	sleep(1000);
	SetCursorPosition(11, 12);
	printf("���� �ο���.");
	SetCursorPosition(30, 14);
	sleep(3000);
}

void toolate()
{
	SetCursorPosition(0, 0);
	ClearBuffer();
	SetCursorPosition(3, 2);
	printf("���� �� ���°� �¾ƺ���.");
	SetCursorPosition(9, 4);
	printf("�ٽ� ������.");
	sleep(2000);
	SetCursorPosition(4, 6);
	printf("���ڱ� ���� �������..");
	sleep(2000);
	SetCursorPosition(8, 8);
	printf("'������...�ʾ�'");
	sleep(2000);
	SetCursorPosition(9, 10);
	printf("<ENDING NO.4>");
	sleep(1000);
	SetCursorPosition(7, 12);
	printf("<�������� �ӻ���>");
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