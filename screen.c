#include <stdio.h>

void barChart(int a[])
{
	int i, j;	//counter
	for(i=0; i<80; i++){	//for 80 coloumns
		for(j=0; j<a[i]/3; j++){
			printf("\033[%d;%dH", 35-j, i+1);
#ifdef UNICODE						// conditionla compiling
			printf("%s", "\u2590");
#else
			printf("%c", ' ');
#endif
		}
	}
}
void clearScreen(void)
{
	printf("\033[2J");
	fflush(stdout);			// output the escape sequence immidiately
}

void setColors(short fg, short bg)
{
	printf("\033[%d;%d;1m");
	fflush(stdout);
}

void resetColors(void)
{
	printf("\033[0m");
	fflush(stdout);
}
