#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayi1, sayi2;
	int islem;

	printf("Birinci sayiyi giriniz:\n");
	scanf_s("%d", &sayi1);

	printf("Ikinci sayiyi giriniz:\n");
	scanf_s("%d", &sayi2);


	printf("Islem tipi seciniz:\n");

	printf("1.Toplama\n 2.Cikarma\n 3.Carpma\n 4.Bolme\n");
		scanf_s("%d", &islem);
		if (islem==1)
		{
			printf("Toplama islemi sonucu:%d\n", sayi1 + sayi2);

		}
	
	
		else if (islem==2)
		{
			printf("Cikarma isleminin sonucu:%d\n", sayi1 - sayi2);
		}

	
		else if (islem ==3)
		{
			printf("Carpma isleminin sonucu:%d\n", sayi1 * sayi2);
		}

		else if (islem==4)
		{
			printf("Bolme isleminin sonucu:%f\n", (float)sayi1 / (float)sayi2);

		}

		

	system("pause");
	return 0;
}