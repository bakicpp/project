#include <stdlib.h>
#include <stdio.h>

void quickSort(int dizi[], int bas, int son) {

	int i, j, pivot, temp;
	i = bas;
	j = son;
	pivot = dizi[(i + j) / 2];


	do
	{
		while (dizi[i] < pivot)
		{
			i++;
		}

		while (dizi[j] > pivot)
		{
			j--;

		}
		if (i<=j)
		{
			temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
			i++;
			j--;
		}



	} while (i<j);
	if (i<son)
	{
		quickSort(dizi, i, son);
	}
	if (bas < j) {
		quickSort(dizi, bas, j);
	}
	
}








int main() {
	

	int dizi[10] = {1,5,3,8,6,4,7,2,0,9,};

	int i = 0;
	

	quickSort(dizi, 0, 9);
	for (i = 0; i < 10; i++) {
		printf("%d ", dizi[i]);
	}








	system("pause");

	return 0;
}
