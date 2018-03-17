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
	int health=100;












// 	//PRVI NIVO
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
	if(score<500)
	printf("\nCatch that crossy boy.\n");
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");


	if(c=='q')
		return 0;
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
// 		//PRVI NIVO













// 	//DRUGI NIVO

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
			
			if(starti==10 && (startj>5 && startj<12))
				starti++;
			if(starti==9&& (startj>5 && startj<12))
				starti--;
			if(goal[0]==10 || goal[0]==9)
				goal[0]++;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if(i==9 && j>5 && j<12)
				printf("=");
			else if(i==10 && j>5 && j<12)
				printf("=");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d     Score: %d \n",level, score);
	if(score<1300)
	printf("\nThat right there is an impenetrable wall.\nNo use trying to go through it.\n");
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");


	if(c=='q')
		return 0;
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
// 	//DRUGI NIVO
















// 	//TRECI NIVO

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
			
			if(starti==4 && startj<13)
				starti++;
			if(starti==3 && startj<13)
				starti--;
			if(starti==12 && startj>10)
				starti--;
			if(starti==13 && startj>10)
				starti++;
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
		return 0;
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
	if(level==4)
		break;
	}
// 	//TRECI NIVO























level=4; score=3000;


// //CETVRTI NIVO
printf("\e[1;1H\e[2J");

startj=3;
starti=7;
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	
			if(goal[0]==starti && goal[1]==startj) {
				cilj(goal);
				score+=100;
					}
					
			if(startj==10)
				{startj--;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
				if(startj==11)
				{startj++;health-=10;if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(goal[1]==10 || goal[1]==11)
				goal[1]=(goal[1]+2)%20;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if(j==goal[1] && i==goal[0])
			printf("+");
			else if(j==10 || j==11)
				printf("#");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d      Score: %d \n       ❤ %d%c\n",level, score, health, 37);
	if(health==100)
	printf("Touch the wall.\nIt increases your health points.\n");
	else if(score<4300) printf("Syke!\nCouldn't you see it was sharp?\n");
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");


	if(c=='q')
		return 0;
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
	if(level==5)
		break;
	}
// //CETVRTI NIVO




















level=5; score=4000;
// PETI NIVO

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
			
			if(starti==8 && startj<10)
				{starti++;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==7 && startj<10)
				{starti--;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==8 && startj>10)
				{starti++;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==7 && startj>10)
				{starti--;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}

			if(starti==16 && startj<4)
				{starti++;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==15 && startj<4)
				{starti--;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==16 && startj>4)
				{starti++;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(starti==15 && startj>4)
				{starti--;
					health-=10;
				if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(goal[0]==8 || goal[0]==7 || goal[0]==15 || goal[0]==16)
				goal[0]+=2;
			if(startj<0)
			startj+=20;
			if(starti<0)
			starti+=20;
			startj=startj%20;
			starti=starti%20;
			if((i==8 || i==7) && j<10)
				printf("#");
			else if((i==15 || i==16) && j>4)
				printf("#");
			else if((i==15 || i==16) && j<4)
				printf("#");
			else if((i==8 || i==7) && j>10)
				printf("#");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d      Score: %d \n       ❤ %d%c\n",level, score, health, 37);
if (4300)
{
	printf("Be careful as you walk the corridors young Harry!\n");
}
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");


	if(c=='q')
		return 0;
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
	if(level==6)
		break;
	}
	

//PETI NIVO





























//SESTI NIVO

level=6;
score=5000;


printf("\e[1;1H\e[2J");

startj=3;
starti=7;
int oldi=starti;
int oldj=startj;
	while(1){
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{	
			if(goal[0]==starti && goal[1]==startj) {
				cilj(goal);
				score+=100;
					}
					
			
				if(starti==startj || starti+startj==20 || (starti<10 && startj==0) || (starti>10 && startj==19))
				{startj=oldj;
					starti=oldi;
					health-=10;
					if(health==0)
				{
					printf("GAME OVER\n");
					return 0;
				}}
			if(goal[0]==goal[1] || goal[0]+goal[1]==20 || (goal[0]<10 && goal[1]==0) || (goal[0]>10 && goal[1]==19))
				goal[1]=(goal[1]+2)%20;
			if(startj<0)
			{startj=starti;
				starti=19;
			}
			if(starti<0){
			starti=startj;
			startj=19;}
			startj=startj%20;
			starti=starti%20;
			if(j==goal[1] && i==goal[0])
			printf("+");
			else if(i==j || i+j==20 || (i<10 && j==0) || (i>10 && j==19))
				printf("#");
			else if(j==startj && i==starti)
			printf("%c", '*');
			else
			 printf(" ");

		}
		printf("\n");
		
	}
printf("Level %d      Score: %d \n       ❤ %d%c\n",level, score, health, 37);
	if(score<5300)
	printf("I always confuse my X and Y axis...\n");
	else if(score<5600) printf("Watch your step!\n");
	system("/bin/stty raw");
	c = tolower(getchar());
	system("/bin/stty cooked");
oldi=starti;
oldj=startj;

	if(c=='q')
		return 0;
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
	if(level==7)
		break;
	}


printf("\e[1;1H\e[2J");
	printf("Good game! More levels coming soon!\n");

















//SESTI NIVO
















	return 0;
}