#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char meyve1[] = "Muz";
	char meyve2[] = "Muz";

	if (strcmp(meyve1, meyve2) == 0)
		printf("Bu iki kelime birbirinin aynisi.\n");

	else if (strcmp(meyve1, meyve2) < 0)
		printf("%s %s'den alfabetik olarak daha oncedir.\n", meyve1, meyve2);

	else
	{
		printf("%s %s'den alfabetik olarak daha oncedir.\n", meyve2, meyve1);
	}

}
