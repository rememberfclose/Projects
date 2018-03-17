#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int main()
{	int i, priv, random, brojac=0;
	char temp;
	char x[10];
	time_t t;
	srand((unsigned) time(&t));
	x[0]='n';
	
	for(i=1;i<=9;i++)
	{
		x[i]='_';

	}
	printf("\e[1;1H\e[2J");
	printf("    Igrajmo iks-oks!\nPritisni Enter za nastavak!\n");
	if(getchar()=='\n')
		printf("\e[1;1H\e[2J");
	printf("Ovako izgleda tabla!\n");
	
	printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", x[1], x[2], x[3], x[4], x[5], x[6], ' ', ' ', ' ');
	
	if(getchar()=='\n')
		printf("\e[1;1H\e[2J");

	printf("Ovako su oznacena polja!\n");
	printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", '1', '2', '3', '4', '5', '6', '7', '8', '9');
	
	if(getchar()=='\n')
		printf("\e[1;1H\e[2J"); 
	while(((x[1]!=x[2] || x[2]!=x[3]) || x[1]=='_') && ((x[4]!=x[5] || x[5]!=x[6]) || x[4]=='_') && ((x[7]!=x[8] || x[8]!=x[9]) || x[7]=='_') && ((x[1]!=x[4] || x[4]!=x[7]) || x[1]=='_') && ((x[2]!=x[5] || x[5]!=x[8]) || x[2]=='_') && ((x[3]!=x[6] || x[6]!=x[9]) || x[3]=='_') && ((x[1]!=x[5] || x[5]!=x[9]) || x[1]=='_') && ((x[3]!=x[5] || x[5]!=x[7]) || x[3]=='_'))
	{	
	printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]);
	printf("Unesi zeljeno polje:\n");
	scanf("%d",&priv);
	while(x[priv]=='X' || x[priv]=='O')
		{printf("Ne varaj!\n Unesi opet:");
			scanf("%d",&priv);
		}
		brojac++;
	x[priv]='X';
	random=rand()%9+1;
	if(!(((x[1]!=x[2] || x[2]!=x[3]) || x[1]=='_') && ((x[4]!=x[5] || x[5]!=x[6]) || x[4]=='_') && ((x[7]!=x[8] || x[8]!=x[9]) || x[7]=='_') && ((x[1]!=x[4] || x[4]!=x[7]) || x[1]=='_') && ((x[2]!=x[5] || x[5]!=x[8]) || x[2]=='_') && ((x[3]!=x[6] || x[6]!=x[9]) || x[3]=='_') && ((x[1]!=x[5] || x[5]!=x[9]) || x[1]=='_') && ((x[3]!=x[5] || x[5]!=x[7]) || x[3]=='_')))
		{	printf("\e[1;1H\e[2J");
			
			
			printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]);
			printf("POBEDIO SI ME!!!!!\n");
			return 0;
		}
	if((((x[1]!=x[2] || x[2]!=x[3]) || x[1]=='_') && ((x[4]!=x[5] || x[5]!=x[6]) || x[4]=='_') && ((x[7]!=x[8] || x[8]!=x[9]) || x[7]=='_') && ((x[1]!=x[4] || x[4]!=x[7]) || x[1]=='_') && ((x[2]!=x[5] || x[5]!=x[8]) || x[2]=='_') && ((x[3]!=x[6] || x[6]!=x[9]) || x[3]=='_') && ((x[1]!=x[5] || x[5]!=x[9]) || x[1]=='_') && ((x[3]!=x[5] || x[5]!=x[7]) || x[3]=='_'))&& brojac==5)
	{printf("\e[1;1H\e[2J");
			
			
			printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]);
			
		printf("Nereseno je!\n");
		return 0;
	}
	
	while(x[random]=='X' || x[random]=='O')
	{random=rand()%9+1;}
	x[random]='O';
	printf("\e[1;1H\e[2J");
	if(!(((x[1]!=x[2] || x[2]!=x[3]) || x[1]=='_') && ((x[4]!=x[5] || x[5]!=x[6]) || x[4]=='_') && ((x[7]!=x[8] || x[8]!=x[9]) || x[7]=='_') && ((x[1]!=x[4] || x[4]!=x[7]) || x[1]=='_') && ((x[2]!=x[5] || x[5]!=x[8]) || x[2]=='_') && ((x[3]!=x[6] || x[6]!=x[9]) || x[3]=='_') && ((x[1]!=x[5] || x[5]!=x[9]) || x[1]=='_') && ((x[3]!=x[5] || x[5]!=x[7]) || x[3]=='_')))
	{
		printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n", x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]);
		printf("MASINE CE ZAVLADATI SVETOM!\n");
	}

	}
		return 0;
}