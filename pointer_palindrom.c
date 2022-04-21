#include <stdlib.h>
#include <stdio.h>

int main()
{
	char kelime[30];

	char* duzAdres, * tersAdres;

	printf("Palindrom sorgusu yapilmasini istediginiz kelimeyi girin :\n");
	gets_s(kelime);

	for (tersAdres = kelime; *tersAdres != NULL; tersAdres++);
	for (duzAdres = kelime, tersAdres--; tersAdres >= duzAdres;)
	{
		if (*tersAdres == *duzAdres)
		{
			tersAdres--;
			duzAdres++;
		}

		else
		{
			break;
		}
	
		
		

	}

	if (duzAdres > tersAdres)
	{
		puts(kelime);
		printf("Palindromdur\n");
	}

	else
	{
		puts(kelime);
		printf("Palindrom degildir\n");

	}

  
  
  	system("pause");
	return 0;
}
  
