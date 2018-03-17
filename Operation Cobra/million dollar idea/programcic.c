#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{	char niska[100];
	char sifra[100];
	scanf("%s", niska);

	for (int i = 0; i < strlen(niska); ++i)
	{
		if(isalpha(niska[i]) && niska[i]!='Z' && niska[i]!='z')
		niska[i]++;
		else if(niska[i]=='z')
				niska[i]='a';
		else if(niska[i]=='Z')
			niska[i]='A';
	}
	printf("%s\n", niska);
	return 0;
}