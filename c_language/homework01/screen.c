#include <stdio.h>
#include "screen.h"

int clearbuffer(char* screen, int width, int height)
{
	int i=0;
	int j=0;
	while(j<height)
	{
		while(i<width+1)
		{
			if(i==width)
			{
				screen[i+(j*(width+1))]='\n';
			}
			else if(i==0 || i==(width-1) || j==0 || j==(height-1))
			{
				screen[i+(j*(width+1))]='*';
			}
			else
			{
				screen[i+(j*(width+1))]=' ';
			}
			i=i+1;
		}
		i=0;
		j=j+1;
	}
	screen[height*(width+1)-1]='\0';

	return 0;
}

int stringbuffer(const char* string, int x, int y, char* screen, int width)
{
	if (x<0||y<0)
		return 0;

	int index=x+y*(width+1);
	int count=0;

	while(*string!='\0')
	{
		screen[index]=*string;
		string++;
		index++;
		count++;
	}

	return count;
}

int titlebuffer(char* screen, int width, int height)
{
	stringbuffer("Hey, Hurry to Die!",7,4,screen,width);
	stringbuffer("1. Game Start",9,6,screen,width);
	stringbuffer("2. How To Play",9,7,screen,width);
	stringbuffer("3. Exit",9,8,screen,width);
}

int how_to_playbuffer(char* screen, int width, int height)
{
	clearbuffer(screen,width,height);
}

int gameoverbuffer(char* screen, int width, int height)
{
	stringbuffer("Can you Exit this",7,3,screen,width);
	stringbuffer("Game?",9,18,screen,width);
}
