#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
	int randomSayi;
	int i;

	//srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		randomSayi = 1 + rand() % 49;
		printf("%d \n", randomSayi);
	}


	printf("%d ", randomSayi);


	system("pause");
	return 0;


}
