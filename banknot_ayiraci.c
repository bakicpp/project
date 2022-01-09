#include <stdlib.h>
#include <stdio.h>

int main()
{
	int miktar;
	int yuzluk, elli, yirmi, on;

	printf("Cekmek istediginiz miktari girin.\n");
	scanf_s("%d", &miktar);

	if (miktar % 10 != 0)
	{
		printf("En kucuk 10'luk banknot var!\n");

	}

	else
	{
		yuzluk = miktar / 100;
		miktar -= yuzluk * 100;

		elli = miktar / 50;
		miktar -= elli * 50;

		yirmi = miktar / 20;
		miktar -= yirmi * 20;

		on = miktar / 10;


		if (yuzluk > 0)
		{
			printf("%d adet yuzluk.\n", yuzluk);
		}
		
		if (elli > 0)
		{
			printf("%d adet ellilik.\n", elli);

		}

		if (yirmi > 0)
		{
			printf("%d adet yirmilik.\n", yirmi);


		}

		if (on > 0)
		{
			printf("%d adet onluk.\n", on);
		}


	}


	

}
