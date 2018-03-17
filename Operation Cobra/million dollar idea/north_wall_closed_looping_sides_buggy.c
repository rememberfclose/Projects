#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;  
    while (time(0) < retTime);             
}




int main()
{	char c;
	int starti=10;
	int startj=10;
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	if (starti==0)
			starti=1;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=19;
			startj=startj%20;
			starti=starti%19;
			if(j==0 || j==20)
				printf("|");
			if((i==0 || i==19))
					printf("=");
			if(j==startj && i==starti)
			printf("%c", '*');
			else if(i!=0 && i!=19)
			 printf(" ");
		}
		printf("\n");

	}
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");
	if(c=='q')
		break;
	else if(c=='w')
		starti--;
	else if(c=='s')
		starti++;
	else if(c=='a')
		startj--;
	else if(c=='d')
		startj++;
	printf("\e[1;1H\e[2J");
	}
	

	return 0;
}