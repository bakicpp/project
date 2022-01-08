#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int arr[30];
	srand(time(NULL));
	int i;
	int toplam = 0;
	int sayac = 0;


	for (i = 0; i < 30; i++)
	{

		arr[i] = rand() % 1001 + 1000;


		if ( (arr[i] % 1000) / 100 == 3 || (arr[i] % 1000 / 100 == 5) )
		{
		toplam = toplam + arr[i];
		sayac++;
		printf("%d \n", arr[i]);

		}

	
		


	}

	printf("\n Sayilar toplami ve sayisi : %d, %d ", toplam, sayac);	

	system("pause");
	return 0;

}
