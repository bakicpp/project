#include <stdlib.h>
#include <stdio.h>

int main()
{
	int biletSayisi = 100;
	char biletAl;

	int alinanBiletS;

	for (;biletSayisi > 0;)
	{
		printf("Bilet almak ister misiniz? (e/E)\n");
		scanf_s(" %c", &biletAl);


		if (biletAl == 'e' || biletAl == 'E')
		{

			printf("Kac adet bilet istiyorsunuz?\n");
			scanf_s("%d", &alinanBiletS);

			if (alinanBiletS <= biletSayisi)
			{
				biletSayisi -= alinanBiletS;
			}
			else
			{
				printf("Lutfen alinabilecek bilet sayisina gore bilet isteyiniz...\n");
			}

			
			printf("Alinabilecek bilet sayisi : %d \n", biletSayisi);
		}

		else
		{
			break;
		}

		if (biletSayisi == 0)
		{
			printf("Biletler tukendi!\n");
		}

		else
		{
			printf("Alinan bilet sayisi : %d \n Kalan bilet sayisi : %d \n", 100 - biletSayisi, biletSayisi);
		}



	}



	system("pause");
	return 0;
}
