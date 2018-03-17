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


void tictoc(int n)
{	for (int i = 0; i < n; ++i)
{
	printf("%d ", i);
}
	
}










int main()
{	char c;
	int starti=10;
	int startj=10;
	int goal[2];
	cilj(goal);
	int score=0;
	int level=1;
	

	printf("\e[1;1H\e[2J");
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	if(j==goal[1] && i==goal[0])
			printf("+");
			if(goal[0]==starti && goal[1]==startj) {
				cilj(goal);
				score+=100;
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
printf("Level %d     Score: %d \n",level, score);
	
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
	if(score%1000==0 && score!=0)
	{
		level=score/1000+1;

	}
	if(level==2)
		break;
	}


	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	if(j==goal[1] && i==goal[0])
			printf("+");
			if(goal[0]==starti && goal[1]==startj) {
				cilj(goal);
				score+=100;
					}
			
			if(starti==10)
				starti++;
			if(starti==9)
				starti--;
			if(goal[0]==10 || goal[0]==9)
				goal[0]++;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if(i==9)
				printf("=");
			else if(i==10)
				printf("=");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d     Score: %d \n",level, score);
	
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
	if(score%1000==0 && score!=0)
	{
		level=score/1000+1;

	}
	if(level==3)
	break;
	}



	level=3; score=2000;
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	if(j==goal[1] && i==goal[0])
			printf("+");
			if(goal[0]==starti && goal[1]==startj) {
				cilj(goal);
				score+=100;
					}
			
			if(starti==4 && startj<13)
				starti++;
			if(starti==3 && startj<13)
				starti--;
			if(starti==12 && startj>10)
				starti++;
			if(starti==13 && startj>10)
				starti--;
			if(goal[0]==3 || goal[0]==4 || goal[0]==12 || goal[0]==13)
				goal[0]+=2;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if((i==4 || i==3) && j<13)
				printf("=");
			else if((i==13 || i==12) && j>10)
				printf("=");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d     Score: %d \n",level, score);
	
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
	if(score%1000==0 && score!=0)
	{
		level=score/1000+1;

	}
	
	}
	

	return 0;
}