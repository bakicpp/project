#include <stdlib.h>
#include <stdio.h>



int main()

{
	int i, j;
	int arr1[3][4] = { {1,3,6,8}, {7,5,4,3} ,{6,1,9,7} };
	int arr2[3][4] = { {1,5,3,2}, {4,5,7,6}, {4,8,5,9} };

	int toplam[3][4];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			toplam[i][j] = arr1[i][j] + arr2[i][j];
		}

	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", toplam[i][j]);
		}
		printf("\n");
	}







	system("pause");
	return 0;

}
