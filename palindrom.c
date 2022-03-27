#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char kelime[20];
	char ters[20] = "";

	printf("Kelime girin\n");
	gets_s(kelime);

	strcpy_s(ters, kelime);
	_strrev(ters);
	
	if (strcmp(kelime,ters) == 0)
	{
		printf("Palindrom!!!\n");
	}

	else
	{
		printf("Palindrom degil.\n");
	}

}
