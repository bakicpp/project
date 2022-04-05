#include <stdlib.h>
#include <stdio.h>


float topla(float *sayi1, float *sayi2)
{
	return *sayi1 + *sayi2;

}

float cikar(float* sayi1, float* sayi2)
{
	return *sayi1 - *sayi2;
}

float carp(float* sayi1, float* sayi2)
{
	return *sayi1 * *sayi2;
}

float  bol(float* sayi1, float* sayi2)
{
	return *sayi1 / *sayi2;
}


int main() 
{
	float sayi1, sayi2;

	printf("Iki adet sayi girin..\n");
	scanf_s("%f %f", &sayi1, &sayi2);

	printf("Toplama sonucu : %.2f\n", topla(&sayi1, &sayi2));

	printf("Cikarma sonucu : %.2f\n", cikar(&sayi1, &sayi2));

	printf("Carpma sonucu : %.2f\n", carp(&sayi1, &sayi2));

	printf("Bolme sonucu : %.2f\n", bol(&sayi1, &sayi2));
		





	system("pause");
	return 0;
}
