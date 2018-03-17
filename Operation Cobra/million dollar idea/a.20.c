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
	int starti=5;
	int startj=5;
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{	
			if(j==startj%20 && i==starti%20)
			printf("%c", '*');
			else printf(" ");
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