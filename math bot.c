#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{	
	int islem;
	int taban, us, sonuc, kokici, sayi, fakt=1, i=1 ;
	double ln_us, log_us, logsonucu ;

	printf("*-*Math Bot*-*\n\n");

	printf("Islem tipi seciniz. \n 1.Us Al\n 2.Kok Al\n 3.Bayagi Logaritma Hesapla \n 4.ln Logaritma Hesapla\n 5.Faktoriyel Hesapla \n");
	scanf_s("%d", &islem);


	switch (islem)
	{
	case 1: printf("\n\n*-*Us Al*-*\n\n");
		printf("Taban girin : \n");
		scanf_s("%d", &taban);

		printf("Us girin : \n");
		scanf_s("%d", &us);

		sonuc = pow(taban, us);

		printf("Sonuc = %d \n", sonuc);
		break;


	case 2: printf("\n\n*-*Kok Al*-*\n\n");

		printf("Kokunu almak istediginiz sayiyi girin : \n");
		scanf_s("%d", &kokici);

		sonuc = sqrt(kokici);

		printf("Sonuc = %d\n", sonuc);

		break;

	case 3: printf("\n\n*-*Bayagi Logaritma Hesapla*-*\n\n");

		printf("Us degerini girin : \n");
		scanf_s("%lf", &log_us);

		logsonucu = log10(log_us);

		printf("Sonuc = %lf\n", logsonucu);
		break;


	case 4: printf("\n\n*-*ln Logaritma Hesapla*-*\n\n");

		printf("Us degerini girin : \n");
		scanf_s("%lf", &ln_us);

		logsonucu = log(ln_us);
		printf("Sonuc = %lf", logsonucu);

		break;

	case 5: printf("\n\n*-*Faktoriyel Hesapla*-*\n\n");

		printf("Hesaplanmasini istediginiz sayiyi girin : \n");
		scanf_s("%d", &sayi);

		while (i <= sayi)
		{
			fakt*=i;
			i++;
		
			
		}
		printf("Sonuc = %d", fakt);
		break;


	default:
		break;
	}

	system("pause");
	return 0;


}
