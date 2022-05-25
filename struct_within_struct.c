#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct calisanBilgisi
{
	char makam[60];
	char birim[60];
	float maas;

};

struct calisanlar
{
	char ad[60];
	char soyadi[60];
	int yas;
	struct calisanBilgisi bilgi;

};


int main()
{
	struct calisanlar calisan1;
	strcpy_s(calisan1.ad, "Baki");
	strcpy_s(calisan1.soyadi, "Yumak");
	calisan1.yas = 19;
	strcpy_s(calisan1.bilgi.makam, "CTO");
	strcpy_s(calisan1.bilgi.birim, "Software");
	calisan1.bilgi.maas = 4200.5;

	printf("%s\n%s\n%d\n%s\n%s\n%.2f\n", calisan1.ad, calisan1.soyadi, calisan1.yas, calisan1.bilgi.makam, calisan1.bilgi.birim, calisan1.bilgi.maas);

}
