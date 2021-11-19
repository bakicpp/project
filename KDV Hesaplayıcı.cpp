#include <stdlib.h>
#include <stdio.h>

int main()
{
	float fiyat;
	float dahil;

	printf("KDV Hesaplayici\n");

	printf("Urun fiyatini giriniz : \n");
	scanf_s("%f", &fiyat);

	printf("KDV orani %18 uzerinden hesaplaniyor...\n");
	printf("...\n");

	dahil = fiyat + (fiyat * 18) / 100;

	printf("KDV dahil fiyat : %f\n", dahil);

	system("pause");
	return 0;
}