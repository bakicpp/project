#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{



	char sifre[80];
	char sifreDogrulama[80];

	int i;
	int yanlis;

	

	while (1)
	{
		yanlis = 0;
		i = 0;

		printf("Parolanizi giriniz...\n");
		scanf_s("%s", sifre, sizeof(sifre));

		printf("Parolanizi tekrar giriniz...\n");
		scanf_s("%s", sifreDogrulama, sizeof(sifreDogrulama));

		while ( !(sifre[i] == '\0' && sifreDogrulama[i] == '\0') )
		{
			if (sifre[i] != sifreDogrulama[i])
			{
				printf("Hatali giris yaptiniz. Lutfen tekrar deneyiniz...\n");
				yanlis = 1;
				break;

			}
			else
			{
				i++;
			}

		}

		if (yanlis == 0)
		{
			printf("Sifreler uyusuyor. Kayit tamamlandi...\n");
			break;
		}

	}



	system("pause");
	return 0;


}
