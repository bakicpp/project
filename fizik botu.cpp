#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int islem;
	float v, x, t, d, m, V, a, r, fx, fy, F1, FS;

	printf("-*-Fizik Botu-*-\n\n");

	printf("Bir formul sec :\n 1. Surat Hesapla \n 2. Ozkutle Hesapla \n 3.Merkezcil Ivme Hesapla \n 4.Bileske Kuvvet Buyuklugu Hesapla \n");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1: printf("*-*Surat Hesapla*-*\n\n");

		
		printf("Alinan yolu gir : \n");
		scanf_s("%f", &x);

		printf("Gecen sureyi gir : \n");
		scanf_s("%f", &t);
		v = x / t;
		printf("Surat = %f\n", v);
		break;

	case 2: printf("*-*Ozkutle Hesapla*-*\n\n");

	
		printf("Cismin kutlesini gir : \n");
		scanf_s("%f", &m);

		printf("Cismin hacmini gir : \n");
		scanf_s("%f", &V);
		d = m / V;
		printf("Ozkutle = %f\n", d);
		break;

	case 3: printf("*-*Merkezcil Ivme Hesapla*-*\n\n");

		

		printf("Parcacik hizini gir : \n");
		scanf_s("%f", &v);

		printf("Hareket yorungesinin yaricapini gir : \n");
		scanf_s("%f", &r);
		a = (v * v) / r;
		printf("Merkezcil Ivme = %f", a);

		break;

	case 4:

		printf("*-*Bileske Kuvvet Buyuklugu Hesapla*-*\n\n");
		
		printf("Kuvvetin x bilesenini gir :\n");
		scanf_s("%f", &fx);

		printf("Kuvvetin y bilesenini gir : \n");
		scanf_s("%f", &fy);

		F1 = pow(fx, 2) + pow(fy, 2);
		FS = sqrt(F1);

		printf("Bileske Kuvvet Buyuklugu = %.2f", FS);

		break;



	default:
		break;
	}

}