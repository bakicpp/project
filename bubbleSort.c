#include <stdlib.h>
#include<stdio.h>



int i,j;

void bubbleSort(int arr[], int size) {

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{

			if (arr[j-1] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

		}


	}



}



int main()
{
	int array[50], size;
	int i;
	printf("Kac elemanli");
	scanf_s("%d", &size);

	for (i = 0; i < size; i++) {
		scanf_s("%d", &array[i]);
	}

	bubbleSort(array, size);

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}


