#include <stdlib.h>
#include <stdio.h>


int main() {

	int a, b, c, d, basla;

	printf("Kim Milyoner Olmak Ister Yarismasina Hosgeldin \n A icin 1, B icin 2, C icin 3, D icin 4'u tusla. \n Baslamak icin 1'i tusla.\n");
	scanf_s("%d", &basla);
	
	if (basla==1)
	{
		printf("1.Soru : Ataturk'un dogum yili hangisidir? \n A-1881\n B-1874\n C-1902\n D-1796\n");
		scanf_s("%d", &a);
	}

	if (a == 1)
	{
		printf("Dogru cevap!\n");
		printf("Yeni soruya hazirlan...\n");

		printf("2.Soru : Turkiye'nin baskenti hangisidir? \n A-Istanbul \n B- Izmir\n C-Ankara\n D-Samsun\n");
		scanf_s("%d", &c);

		if (c == 3)
		{
			printf("Dogru cevap!\n");
			printf("Yeni soruya hazirlan...\n");

			printf("3. Soru : Toplamada etkisiz eleman olarak nitelendirilen rakam hangisidir?\n A-3\n B-0\n C-2\n D-1\n ");
			scanf_s("%d", &b);

			if (b == 2)
			{
				printf("Dogru cevap!\n");
				printf("Yeni soruya hazirlan...\n");

				printf("4. Soru : Suyun kimyasal formulu hangisidir\n A-H20\n B-C2H4\n C-H2SO4\n D-H2O2\n");
				scanf_s("%d", &a);

				if (a == 1)
				{
					printf("Dogru cevap!\n");
					printf("Yeni soruya hazirlan...\n");

					printf("5. ve Son Soru : Osmanli Devleti'nin kurucusu kimdir? \n A-Ertugrul Gazi\n B-Osman Gazi\n C-Orhan Gazi\n D-Ismail Sah\n");
					scanf_s("%d", &b);

					if (b == 2)
					{
						printf("Tebrikler! Tum sorulari dogru cevaplayarak buyuk odulu kazandin!");

					}
					else
					{
						printf("Yanlis cevap! Basaramadin.");
					}
				}

				else
				{
					printf("Yanlis cevap! Elendiniz.\n");
				}
			}

			else
			{
				printf("Yanlis cevap! Elendiniz.");
			}




		}
		else
		{
			printf("Yanlis cevap! Elendiniz.");
		}
	}

	else {
		printf("Yanlis cevap! Elendiniz.");
	}








}









