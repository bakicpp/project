#include <stdlib.h>
#include <stdio.h>

int main()
{

	int sayi; 
	int tek = 0, cift = 0;
	int i;
	printf("Sayi girin. . .\n");
	scanf_s("%d", &sayi);

	while (sayi > 0)
	{
		int temp = sayi % 10;
		sayi = sayi / 10;

		if (sayi % 2 == 0)
		{
			cift++;
		}

		else
		{
			tek++;
		}
	}

	printf("Tek sayi miktari : %d \n Cift sayi miktari : %d\n", tek, cift);

	system("pause");
	return 0;


}
