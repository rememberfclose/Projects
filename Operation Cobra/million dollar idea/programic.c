#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ukloni(char s[]){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(isalpha(s[i]))
		{
			for (int j = i; j < strlen(s); ++j)
			{
				s[j]=s[j+1];
			}
		ukloni(s);
		}
	}


}

int main()
{
char niska[100];
	scanf("%s", niska);
	ukloni(niska);
	printf("%s", niska);


	
	return 0;
}