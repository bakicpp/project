#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{

	int sayiAdeti;
	float ortalama, toplam = 0, sayilar[100];

	printf("Lutfen ortalamasinin alinmasini istediginiz sayi adetini giriniz...\n");
	scanf_s("%d", &sayiAdeti);

	while (sayiAdeti > 100 || sayiAdeti <= 0)
	{

		printf("Upss.. 1 - 100 arasinda deger giriniz..\n");
		printf("Lutfen ortalamasinin alinmasini istediginiz sayi adetini tekrar giriniz...\n");
		scanf_s("%d", &sayiAdeti);

	}


	for (int i = 0; i < sayiAdeti; i++)
	{
		printf("Lutfen %d. sayiyi girin...\n", i+1);
		scanf_s("%f", &sayilar[i]);

		toplam = toplam + sayilar[i];
		

	}

	ortalama = toplam / sayiAdeti;
	printf("Toplam = %f ", toplam);
	printf("Ortalama = %f\n", ortalama);






	system("pause");
	return 0;


}
