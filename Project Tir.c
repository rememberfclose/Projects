#include <stdio.h>
#include <ctype.h>
#include <string.h>

int samoglasnik(char a[])
{	int i, n=0;
	for (int i = 0; a[i] != '\0'; ++i)
	{	a[i]=tolower(a[i]);
		switch(a[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':n++; break;
		}
	}

return n;

}

int mesto(char a[])
{	int i, n=0;
	for (int i = 0; a[i] != '\0'; ++i)
	{	
		switch(a[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'u': return i;
		}
	}
	return -1;
}



int main()
{	int i=0;
	char original[100], prvi[50], drugi[50], c;
	int mes=0;
	while(1)
	{
	printf("Molimo vas, unesite rec:\n");
	scanf("%s", original);	
	mes=mesto(original);
		if(samoglasnik(original)==0)
		{
			c=original[strlen(original)-1];
		
		
			for (int i = 0; i < strlen(original); ++i)
			{
			drugi[i]=original[i];
			}
			drugi[i+2]='\0';
			printf("Rezultat: ");
			printf("%c", c);
			printf("%s\n", drugi);
		}
		else{
		for (int i = 0; i <= mes; ++i)
		{
 			prvi[i]=original[i];
 		}	
	 	prvi[mes+1]='\0';

		for (i=mes+1; ;++i)
		{
 			drugi[i-(mes+1)]=original[i];
			if(original[i] == '\0')
				break;
 		}
 		printf("Rezultat: ");	
		printf("%s", drugi);
		printf("%s\n", prvi);
	
}
}
	return 0;
}