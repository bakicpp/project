#include <stdio.h>
#include <stdlib.h>;

int main() 
{
	int islem;
	float altin_yatirim, doviz_yatirim_d, doviz_yatirim_e, alinan_doviz_d, alinan_doviz_e,  coin_yatirim_b,  coin_yatirim_s, alinan_coin_b, alinan_coin_s;
	float gram_altin = 548.92;
	float alinan_altin;
	float dolar = 9.68;
	float euro = 11.22;
	float btc = 605.330;
	float shb = 0.00006393;
	int piyasa, doviz_tipi, coin_tipi;
	int giris, devamke, bakiye_yukle, bakiye, yuklenen;

	printf("Yatirim Yap \n");

	printf("Piyasayi gormek icin 1'i tuslayiniz.\n Yatirim islemleri icin 2'yi tuslayiniz.\n\n");
	scanf_s("%d" ,&giris);

	if (giris == 1)
	{

		printf("***CANLI PIYASA***\n\n");

		printf("Gram Altin : %f\n Dolar : %f \n Euro : %f \n BTC : %f\n SHB : %f\n", gram_altin, dolar, euro, btc, shb);
		

		printf("Yatirim islemleri icin 2'yi tuslayiniz.\n");
		scanf_s("%d", &devamke);

			
		if (devamke == 2)
		{

			printf("Bakiye yuklemek icin 1'i tuslayiniz\n");
			scanf_s("%d", &bakiye_yukle);

					if (bakiye_yukle == 1)
					{
						printf("Yuklemek istediginiz miktari giriniz : \n");
						scanf_s("%d", &bakiye);
						printf("Yuklenen tutar : %d\n", bakiye);


					}



			printf("Yatirim turu seciniz : \n1.Altin\n 2.Doviz\n 3.TL\n 4.Kripto Para\n");
			scanf_s("%d", &islem);

			switch (islem)
			{
			case 1: 
				printf("Bakiyeniz : %d\n", bakiye);

				printf("Yatirim yapacaginiz TL miktarini giriniz :\n");
				scanf_s("%f", &altin_yatirim);

				alinan_altin = altin_yatirim / gram_altin;
				if (altin_yatirim > bakiye)
				{
					printf("Yetersiz bakiye.\n");
				}
				else
				{
					printf("Sahip oldugunuz altin miktari : %f gram\n", alinan_altin);
				}

				

				break;

			case 2:
				
				printf("Doviz tipi seciniz :\n 1.Dolar \n 2.Euro\n");
				scanf_s("%d", &doviz_tipi);

				if (doviz_tipi == 1)
				{
					printf("Bakiyeniz : %d\n", bakiye);
					printf("Yatirim yapacaginiz TL miktarini giriniz :");
					scanf_s("%f", &doviz_yatirim_d);

					alinan_doviz_d = doviz_yatirim_d / dolar;

					if (doviz_yatirim_d > bakiye)
					{
						printf("Yetersiz bakiye.\n");
					}

					else
					{
						printf("Sahip oldugunuz doviz = %f $\n", alinan_doviz_d);
					}


				}

				else if (doviz_tipi == 2)
				{
					printf("Bakiyeniz : %d\n", bakiye);
					printf("Yatirim yapacaginiz TL miktarini giriniz :\n");
					scanf_s("%f", &doviz_yatirim_e);

					alinan_doviz_e = doviz_yatirim_e / euro;

					if (doviz_yatirim_e > bakiye)
					{
						printf("Yetersiz bakiye.\n");
					}

					else
					{
						printf("Sahip oldugunuz doviz = %f Euro\n", alinan_doviz_e);
					}

				}
				break;

			case 3:
				printf("TL yatirimi faiz islemiyle gerceklesecek olup henuz planlamasi tamamlanmamistir.");

				break;

			case 4:

				printf("Kripto para tipi seciniz :\n 1.Bitcoin \n 2.Shiba Inu\n");
				scanf_s("%d", &coin_tipi);

				if (coin_tipi == 1)
				{
					printf("Bakiyeniz : %d\n", bakiye);
					printf("BTC yatirimi yapacaginiz TL miktarini giriniz : \n");
					scanf_s("%f", &coin_yatirim_b);

					alinan_coin_b = btc / coin_yatirim_b;

					if (coin_yatirim_b > bakiye)
					{
						printf("Yetersiz bakiye.\n");
					}

					else
					{
						printf("Sahip oldugunuz BTC : %f", alinan_coin_b);
					}
				}

				else if (coin_tipi == 2)
				{
					printf("Bakiyeniz : %d\n", bakiye);
					printf("SHB yatirimi yapacaginiz TL miktarini giriniz : \n");
					scanf_s("%f", &coin_yatirim_s);

					alinan_coin_s = shb / coin_yatirim_s;

					if (coin_yatirim_s > bakiye)
					{
						printf("Yetersiz bakiye");
					}

					else
					{
						printf("Sahip oldugunuz SHB : %f \n", alinan_coin_s);
					}


				}
				break;

			default:
				break;
			}

		}


	}

	else if (giris == 2)
	{



	printf("Bakiye yuklemek icin 1'i tuslayiniz\n");
	scanf_s("%d", &bakiye_yukle);

	if (bakiye_yukle == 1)
	{
		printf("Yuklemek istediginiz miktari giriniz : \n");
		scanf_s("%d", &bakiye);
		printf("Yuklenen tutar : %d\n", bakiye);

	}



	printf("Yatirim turu seciniz : \n 1.Altin\n 2.Doviz\n 3.TL\n 4.Kripto Para\n");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1:
		printf("Bakiyeniz : %d\n", bakiye);

		printf("Yatirim yapacaginiz TL miktarini giriniz :\n");
		scanf_s("%f", &altin_yatirim);

		alinan_altin = altin_yatirim / gram_altin;
		if (altin_yatirim > bakiye)
		{
			printf("Yetersiz bakiye.\n");
		}
		else
		{
			printf("Sahip oldugunuz altin miktari : %f gram\n", alinan_altin);
		}



		break;

	case 2:

		printf("Doviz tipi seciniz :\n 1.Dolar \n 2.Euro\n");
		scanf_s("%d", &doviz_tipi);

		if (doviz_tipi == 1)
		{
			printf("Bakiyeniz : %d\n", bakiye);
			printf("Yatirim yapacaginiz TL miktarini giriniz :");
			scanf_s("%f", &doviz_yatirim_d);

			alinan_doviz_d = doviz_yatirim_d / dolar;

			if (doviz_yatirim_d > bakiye)
			{
				printf("Yetersiz bakiye.\n");
			}

			else
			{
				printf("Sahip oldugunuz doviz = %f $\n", alinan_doviz_d);
			}


		}

		else if (doviz_tipi == 2)
		{
			printf("Bakiyeniz : %d\n", bakiye);
			printf("Yatirim yapacaginiz TL miktarini giriniz :\n");
			scanf_s("%f", &doviz_yatirim_e);

			alinan_doviz_e = doviz_yatirim_e / euro;

			if (doviz_yatirim_e > bakiye)
			{
				printf("Yetersiz bakiye.\n");
			}

			else
			{
				printf("Sahip oldugunuz doviz = %f Euro\n", alinan_doviz_e);
			}

		}
		break;

	case 3:
		printf("TL yatirimi faiz islemiyle gerceklesecek olup henuz planlamasi tamamlanmamistir.");

		break;

	case 4:

		printf("Kripto para tipi seciniz :\n 1.Bitcoin \n 2.Shiba Inu\n");
		scanf_s("%d", &coin_tipi);

		if (coin_tipi == 1)
		{
			printf("Bakiyeniz : %d\n", bakiye);
			printf("BTC yatirimi yapacaginiz TL miktarini giriniz : \n");
			scanf_s("%f", &coin_yatirim_b);

			alinan_coin_b = btc / coin_yatirim_b;

			if (coin_yatirim_b > bakiye)
			{
				printf("Yetersiz bakiye.\n");
			}

			else
			{
				printf("Sahip oldugunuz BTC : %f", alinan_coin_b);
			}
		}

		else if (coin_tipi == 2)
		{
			printf("Bakiyeniz : %d\n", bakiye);
			printf("SHB yatirimi yapacaginiz TL miktarini giriniz : \n");
			scanf_s("%f", &coin_yatirim_s);

			alinan_coin_s = shb / coin_yatirim_s;

			if (coin_yatirim_s > bakiye)
			{
				printf("Yetersiz bakiye");
			}

			else
			{
				printf("Sahip oldugunuz SHB : %f \n", alinan_coin_s);
			}


		}
		break;

	default:
		break;
	}




	}





	system("pause");
	return 0;

}