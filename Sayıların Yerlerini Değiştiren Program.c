#include <stdlib.h>
#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int gecici;

	printf("Sayilarin Yerlerini Degistir\n");
	printf("1. sayiyi giriniz : \n");
	scanf_s("%d", &sayi1);

	printf("2. sayiyi giriniz : \n");
	scanf_s("%d", &sayi2);

	gecici = sayi1;
	sayi1 = sayi2;
	sayi2 = gecici;

	printf("***Son Durum***\n");
	printf("1. Sayi = %d\n", sayi1);
	printf("2. Sayi = %d \n", sayi2);
	



}
