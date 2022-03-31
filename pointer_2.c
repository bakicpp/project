#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d[5] = { 12,23,44,2,55 };
	int* p1;
	p1 = d;

	printf("Dizinin ilk elemani : %d\n", *p1);
	printf("Dizinin ikinci elemani : %d\n", *(p1 + 1));
	printf("Denemelik pointer : %d\n", *(p1 - 1));

	for (int i = 0; i < 5; i++)
	{
		printf("\nDizinin elemani %d ve Dizinin adresi %p \n", d[i], (p1 + i));

	}



	system("pause");
	return 0;
}
