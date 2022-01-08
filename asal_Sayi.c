#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

	int sayi;
	
	printf("Sayi girin .  .  .\n");
	scanf_s("%d", &sayi);

	if (sayi <= 1)
	{
		printf("%d asal degil.\n", sayi);
	}

	else
	{
		if (sayi == 2 || sayi == 3)
		{
			printf("%d asal sayidir.\n", sayi);
		}

	}
		int carpan;
		int sayac = 0;

		for (carpan = 2; carpan <= sayi / 2; carpan++)
		{
			if (sayi % carpan == 0)
			{
				sayac++;
				printf("%d asal sayi degil.\n", sayi);
				break;
			}

			
			
		}
		
		if (sayac == 0)
		{
			printf("%d asal sayidir.\n", sayi);
		}

		
		
		
	

	system("pause");
	return 0;


}
