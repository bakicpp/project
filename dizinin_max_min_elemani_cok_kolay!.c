#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[20];
	int i;
	int max, min;


	for (i = 0; i < 5; i++)

	{
		printf("%d. elemani girin.\n", i+1);
		scanf_s("%d", &arr[i]);

	}

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}
		
		if (arr[i] < min)
		{
			min = arr[i];
		}


	}


	printf("Dizinin en buyuk elemani : %d\n", max);
	printf("Dizinin en kucuk elemani : %d\n", min);


	system("pause");
	return 0;


}
