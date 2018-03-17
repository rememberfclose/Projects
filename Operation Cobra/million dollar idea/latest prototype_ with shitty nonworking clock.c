#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;  
    while (time(0) < retTime);             
}

int* cilj(int a[]){
	srand(time(NULL));   
	a[0]=rand()%20;
	a[1]=rand()%20;
	return a;
}


int main()
{	char c;
	int starti=10;
	int startj=10;
	int goal[2];
	cilj(goal);
	float seconds=0;
	clock_t start, end;
	
	start=clock();

// shitty clock koji fucking neradi
	//
				
				printf("%f\n", seconds);













	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	if(j==goal[1] && i==goal[0])
			printf("+");
			if(goal[0]==starti && goal[1]==startj) {
				end=clock();
				cilj(goal);
				seconds=(float)(end-start)/CLOCKS_PER_SEC;
				start=clock();
					}
			
				
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
	printf("%f\n", seconds);
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");
	if(c=='q')
		break;
	else if(c=='w'){
		
					
		starti--;
		
	}
	else if(c=='s'){
		
		starti++;
		
	}
	else if(c=='a'){
		
		startj--;
	
	}
	else if(c=='d'){
		
		startj++;
		
	}

	printf("\e[1;1H\e[2J");
	}
	

	return 0;
}