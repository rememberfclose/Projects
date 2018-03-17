#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct list {char word[100]; int len; int card;};



int trazi(char *s, char c, int n)
{	for (int i = 0; i < n; ++i)
	if (s[i]==c) return i;
	return -1;
}
int prazan(char *s, int n)
{	for (int i = 0; i < n; ++i)
	if(s[i]=='_') return 0;
	return 1;
}
int main()
{	FILE* ulaz;
	char rec[100], guess[100];
	char temp='0';
	int n, miss=0;
	struct list vocab[700];
	int broj_reci;
	char probane[100];
	int ji=0;
	int pokusaji=12;
	ulaz=fopen("data.txt", "r");
	fscanf(ulaz,"%d", &broj_reci);
printf("\e[1;1H\e[2J");
	printf("█   █▀▀ ▀▀█▀▀ █▀▀   █▀▀█ █   █▀▀█ █  █   █  █ █▀▀█ █▀▀▄ █▀▀▀ █▀▄▀█ █▀▀█ █▀▀▄\n█   █▀▀   █   ▀▀█   █  █ █   █▄▄█ █▄▄█   █▀▀█ █▄▄█ █  █ █ ▀█ █ ▀ █ █▄▄█ █  █\n▀▀▀ ▀▀▀   ▀   ▀▀▀   █▀▀▀ ▀▀▀ ▀  ▀ ▄▄▄█   ▀  ▀ ▀  ▀ ▀  ▀ ▀▀▀▀ ▀   ▀ ▀  ▀ ▀  ▀\n");
	printf("\n                                 PRESS ENTER\n");
		if(getchar()=='\n')
		printf("\e[1;1H\e[2J");

	for (int i = 0; i < broj_reci; ++i)
	{
		fscanf(ulaz,"%s ", vocab[i].word);
		vocab[i].len=strlen(vocab[i].word);
	}
	srand((unsigned int) time (NULL));
	int birac=rand()%broj_reci;

	strcpy(rec,vocab[birac].word);
	n=vocab[birac].len;


	for (int i = 0; i < n; ++i)
		guess[i]='_';
	
	for (int i = 0; miss<pokusaji ; i++)
	{	int pog;
		printf("\e[1;1H\e[2J");
		printf("         ");
		for (int i = 0; i < n; ++i)
			printf("%c ", guess[i]);
		printf("\n\n");
		
		if (prazan(guess, n))
		{	printf("▀█ █▀  ▀  █▀▀ ▀▀█▀▀ █▀▀█ █▀▀█ █  █ █\n █▄█  ▀█▀ █     █   █  █ █▄▄▀ █▄▄█ ▀\n  ▀   ▀▀▀ ▀▀▀   ▀   ▀▀▀▀ ▀ ▀▀ ▄▄▄█ ▄\n");
			return 0;}
			

			if (((pog=trazi(rec,temp,n))==-1))
			{	miss++;
				probane[ji]=temp;
				ji++;

			}
		
				if(miss==pokusaji-1){

					printf("\e[1;1H\e[2J");
					printf("         ");
					for (int i = 0; i < n; ++i)
			printf("%c ", rec[i]);
		printf("\n\n");
				 printf("█▀▀▀ █▀▀█ █▀▄▀█ █▀▀   █▀▀█ ▀█ █▀ █▀▀ █▀▀█\n█ ▀█ █▄▄█ █ ▀ █ █▀▀   █  █  █▄█  █▀▀ █▄▄▀\n▀▀▀▀ ▀  ▀ ▀   ▀ ▀▀▀   ▀▀▀▀   ▀   ▀▀▀ ▀ ▀▀\n"); return 0;}
				printf("▀▀█▀▀ █▀▀█  ▀  █▀▀█ █   █▀▀\n  █   █▄▄▀ ▀█▀ █▄▄█ █   ▀▀█  %d\n  ▀   ▀ ▀▀ ▀▀▀ ▀  ▀ ▀▀▀ ▀▀▀ \n",pokusaji-1-miss);	
		printf("Press 0 to go for word.\n\nGuess letter: ");
		temp=getchar();char useless=getchar();
		if(temp=='0')
		{	char pokusaj[100];printf("\e[1;1H\e[2J");
		printf("         ");
		for (int i = 0; i < n; ++i)
			printf("%c ", guess[i]);
		printf("\n\n");
			printf("You only got one shot: ");
			scanf("%s", pokusaj);
			if((strcmp(pokusaj,rec))==0)
			{printf("\e[1;1H\e[2J");printf("         ");for (int i = 0; i < n; ++i)
			printf("%c ", rec[i]);
		printf("\n\n");printf("▀█ █▀  ▀  █▀▀ ▀▀█▀▀ █▀▀█ █▀▀█ █  █ █\n █▄█  ▀█▀ █     █   █  █ █▄▄▀ █▄▄█ ▀\n  ▀   ▀▀▀ ▀▀▀   ▀   ▀▀▀▀ ▀ ▀▀ ▄▄▄█ ▄\n");
			return 0;}
			else{printf("\e[1;1H\e[2J");printf("         ");for (int i = 0; i < n; ++i)
			printf("%c ", rec[i]);
		printf("\n\n");printf("█▀▀▀ █▀▀█ █▀▄▀█ █▀▀   █▀▀█ ▀█ █▀ █▀▀ █▀▀█\n█ ▀█ █▄▄█ █ ▀ █ █▀▀   █  █  █▄█  █▀▀ █▄▄▀\n▀▀▀▀ ▀  ▀ ▀   ▀ ▀▀▀   ▀▀▀▀   ▀   ▀▀▀ ▀ ▀▀\n"); return 0;}

		}

				if(strchr(probane,temp)!=NULL)
				{printf("ves si probo\n");

					miss--;}
		
		if ((pog=trazi(rec,temp,n))!=-1) 
		{
			char provera[100];
			strcpy(provera,rec);
			int j=0;
			while(j<n)
			{int try;
				if((try=trazi(provera,temp,n))==-1);
				else {
					provera[j]='0';
					guess[try]=temp;
				}
				j++;
			}
		}
	}
	printf("\n");

	for (int i = 0; i < 5; ++i)
		{
			printf("%c",probane[i]);
		}

	return 0;
}