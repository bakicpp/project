#include <stdlib.h>
#include <stdio.h>


struct kutuphane
{
	char kitapAd1[20];
	char kitapAd2[20];
	char kitapAd3[20];

};

struct kitapBilgi
{
	char yazar[50];
	int fiyat;
	float puan;
};



int main()
{
	struct kutuphane kitap = { "Seker Portakali", "Hayvan Ciftligi" , "1984" };
	struct kitapBilgi bilgi = {"José Mauro de Vasconcelos", 10, 7.2 };


	printf("Kitap : %s\n", kitap.kitapAd1);

	printf("Yazar : %s\n", bilgi.yazar);
	printf("Fiyat : %d\n", bilgi.fiyat);
	printf("Puan : %.2f\n", bilgi.puan);




	system("pause");
	return 0;


}

