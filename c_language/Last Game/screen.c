#include <stdio.h>
#include "screen.h"
#include "ConsoleUtil.h"

void first_screen()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#        [         ]         #\n");
	printf("#                            #\n");
	printf("# < 선택받은 자의 여행일지 > #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#        1. 게임 시작        #\n");
	printf("#        2. 게임 방법        #\n");
	printf("#        3. 나가기           #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void game_start()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("# <당신은 선택받은 자입니다> #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void how_to_play()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("# 전투 때마다 우리는 두 개의 #\n");
	printf("#    수를 선택하게됩니다.    #\n");
	printf("# 이 때 두 숫자로 연산기호를 #\n");
	printf("#      오직 운, 운으로만     #\n");
	printf("#       뽑아서 몬스터와      #\n");
	printf("#     싸우게 될 것입니다.    #\n");
	printf("#     어떻게든 몬스터를      #\n");
	printf("#                            #\n");
	printf("#       쓰러트려주세요!      #\n");
	printf("#                            #\n");
	printf("#  1. 싫어요   2. 알겠습니다 #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void exit_game()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#  게임을 종료하시겠습니까?  #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#     1. 네  2. 아닙니다     #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void Game_Over()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#  <넌 그냥 나가 있어라^0^>  #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void printendgame()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#       플레이 해주셔서      #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#        감사드립니다!       #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void ClearBuffer()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void false_choice()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#   <다시 선택해주세요 ^0^>  #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void map_draw()
{
	printf("##############################\n");
	printf("#   ###   ####   ###   #######\n");
	printf("#^0^###                #######\n");
	printf("#   ###   ####   ###   #######\n");
	printf("## ##### ############ ########\n");
	printf("#   ###   ####   ###   #######\n");
	printf("#   ###   ####         #######\n");
	printf("#   ###   ####   ###   #######\n");
	printf("## ##### ###### ##############\n");
	printf("#   ###   ##### ##############\n");
	printf("#         ##### ####         #\n");
	printf("#   ###   #####      <help!> #\n");
	printf("## ##### ########### <보물!> #\n");
	printf("##       ###########         #\n");
	printf("##############################\n");
}

void battlescreen()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}
void battlewin()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#  몬스터를 쓰러뜨렸습니다.  #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#                            #\n");
	printf("#     역시 선택받은자!!!     #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void battlelose()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#   몬스터에게 당했습니다..  #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
	printf("#       <ENDING NO.3>        #\n");
	printf("#                            #\n");
	printf("#     <선택받지 못한 자>     #\n");
	printf("##############################\n");
}

void obstacle()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#     가지 말라고...했지?    #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#     넌 나가있으면 된다.    #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#         알겠지? ^0^        #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void emergemonster()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#    몬스터가 나타났다!!!    #\n");
	printf("#                            #\n");
	printf("#        싸워야하나...?      #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void secondend()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#    역시 도망쳐야겠어..!!   #\n");
	printf("#                            #\n");
	printf("#      라고 생각했지만       #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void treasure()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#    드디어 도착한 보물방    #\n");
	printf("#                            #\n");
	printf("#      앞에 상자가 있다.     #\n");
	printf("#                            #\n");
	printf("#    근데 옆에있는게.....    #\n");
	printf("#                            #\n");
	printf("#          해골???           #\n");
	printf("#                            #\n");
	printf("#        열어야하나?         #\n");
	printf("#                            #\n");
	printf("#  1. 열어본다  2. 무시한다  #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void epitaph()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("#   역시 너도 풀 수 없구나.  #\n");
	printf("#                            #\n");
	printf("#      그래도 수고했어..     #\n");
	printf("#                            #\n");
	printf("#   다음 숲을 지키는 자는..  #\n");
	printf("#                            #\n");
	printf("#        너니까..ㅎㅎ        #\n");
	printf("#                            #\n");
	printf("#      < ENDING NO.5 >       #\n");
	printf("#                            #\n");
	printf("#         <Epitaph>          #\n");
	printf("#                            #\n");
	printf("##############################\n");
}

void chainbreak()
{
	printf("##############################\n");
	printf("#                            #\n");
	printf("# 드디어 이 루프를 풀었구나. #\n");
	printf("#                            #\n");
	printf("#    이 속박에서 벗어나게    #\n");
	printf("#                            #\n");
	printf("#        해줘서 고마워       #\n");
	printf("#                            #\n");
	printf("#  난 이제... 쉴 수 있어...  #\n");
	printf("#                            #\n");
	printf("#       < ENDING NO.6 >      #\n");
	printf("#                            #\n");
	printf("#         <Chainbreak>       #\n");
	printf("#                            #\n");
	printf("##############################\n");
}
