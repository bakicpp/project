#include <stdlib.h>
#include <stdio.h>

int main()
{
	int sayi;

	printf("Girdiginiz sayi ile 0 arasinda kalan 5'e bolunebilen sayilar...\n");
	printf("Sayi giriniz : \n");
	scanf_s("%d", &sayi);

	if (sayi > 0)
	{
		for (int i = 0; i < sayi; i += 5)
		{
			printf("%d\n", i);
		}


	}


	else
	{
		for (int i = 0; i > sayi; i -= 5)
		{
			printf("%d\n", i);
		}
	}


	system("pause");
	return 0;





}
