#include <stdio.h>
#include "screen.h"
int screen()
{
	char screen[500];
	int i=0;
	while(i<500)
	{
		screen[i]='*';
		if(i>31 && i<60 || i>62 && i<91)
		{
			screen[i]=' ';
		}
		else if(i>93 && i<122 || i>124 && i<153 || i>155 && i<184)
		{
			screen[i]=' ';
		}
		else if(i>186 && i<215 || i>217 && i<246 || i>248 && i<277)
		{
			screen[i]=' ';
		}
		else if(i>279 && i<308 || i>310 && i<339 || i>341 && i<370)
		{
			screen[i]=' ';
		}
		else if(i>372 && i<401 || i>403 && i<432)
		{
			screen[i]=' ';
		}
		i=i+1;
	}
	screen[464]='\0';
	screen[30]='\n';
	screen[61]='\n';
	screen[92]='\n';
	screen[104]='D';
	screen[105]='I';
	screen[106]='N';
	screen[107]='O';
	screen[108]='R';
	screen[109]='U';
	screen[110]='N';
	screen[123]='\n';
	screen[154]='\n';
	screen[185]='\n';
	screen[216]='\n';
	screen[247]='\n';
	screen[278]='\n';
	screen[286]='1';       
	screen[287]='.';       
	screen[288]=' ';       
	screen[289]='p';       
	screen[290]='r';       
	screen[291]='e';       
	screen[292]='s';       
	screen[293]='s';       
	screen[294]=' ';       
	screen[295]='s';       
	screen[296]='t';       
	screen[297]='a';       
	screen[298]='r';       
	screen[299]='t';       
	screen[309]='\n';
	screen[317]='2';
	screen[318]='.';
	screen[319]=' ';
	screen[320]='h';
	screen[321]='o';
	screen[322]='w';
	screen[323]=' ';
	screen[324]='t';
	screen[325]='o';
	screen[326]=' ';
	screen[327]='p';
	screen[328]='l';
	screen[329]='a';
	screen[330]='y';
	screen[340]='\n';
	screen[348]='3';
	screen[349]='.';
	screen[350]=' ';
	screen[351]='e';
	screen[352]='x';
	screen[353]='i';
	screen[354]='t';
	screen[371]='\n';
	screen[402]='\n';
	screen[433]='\n';
	printf("%s", screen);
	
	return 0;
}

