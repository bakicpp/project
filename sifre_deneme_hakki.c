//Tanimli olan sifreyi yanlis girilme sayisina gore sistemden atan C programi//

#include <stdlib.h>
#include <stdio.h>

int main()
{

	int i = 3, sifre;
	
	printf("Sifreyi giriniz : \n");
	scanf_s("%d", &sifre);

	if (sifre != 1234)
	{
		while (sifre != 1234)
		{
			printf("Hatali sifre. Sifreyi tekrar giriniz : \n");
			scanf_s("%d", &sifre);

			printf("Hatali sifre!\n");
			i = i - 1;
			printf("Kalan hakkiniz : %d\n", i);

			if (i == 0)
			{
				printf("Giris basarisiz! Sistemden cikis yapmak icin Enter tuslayiniz.\n");
				system("pause");
				return 0;
			}


		}

		
	}


	

	printf("Giris basarili.\n");

	system("pause");
	return 0;

}
