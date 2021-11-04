#include <stdlib.h>
#include <stdio.h>

int main()
{
	int atm;
	int kalan_bakiye;
	int giris;
	int bakiye = 5000;
	int cek, yatir, eklenmis_bakiye,yukle;

	printf("BANKA\n");
	printf("ATM'ye hosgeldiniz.\n Islemleri gormek icin 1'i tuslayiniz. Bakiye yuklemek icin 2'yi tuslayiniz. \n");
	scanf_s("%d", &giris);

	

	if (giris == 1)
	{
		printf("1.Bakiye Sorgula \n 2.Para Cek \n 3.Para Yatir\n 4.Geri \n");
		scanf_s("%d", &atm);

		

		switch (atm)
		{
		case 1:
			
			
			
			printf("Bakiyeniz: %d", bakiye);
			break;
		case 2: printf("Cekmek istediginiz miktari giriniz : \n");
			scanf_s("%d", &cek);
			
			kalan_bakiye = bakiye - cek;

			if (bakiye < cek)
			{
				printf("Yetersiz bakiye!\n");
			}

			else
			{
				printf("Kalan bakiyeniz : %d\n", kalan_bakiye);
			}
			break;


		case 3: printf("Yatirmak istediginiz miktari giriniz : \n");
			scanf_s("%d", &yatir);

			eklenmis_bakiye = bakiye + yatir;

			printf("Yeni bakiyeniz : %d\n", eklenmis_bakiye);
			break;
			
		case 4: 

		default:
			break;
		}
	}
	
	else if (yukle == 2)
	{
		printf("Yuklemek istediginiz miktari giriniz : \n");
		scanf_s("%d", &bakiye);

		
	}



	system("pause");
	return 0;

}