#include <stdio.h>
#include <stdlib.h>

//Maa�� ve Zam Oran� Verilen ���inin Yeni Maa��n� Bulma//

int main()
{
	int maas, zam, yeni_maas;

	printf("Maas Hesaplayiciya Hosgeldin!\n");

	printf("Su anki maasinizi giriniz:\n");
	scanf_s("%d", &maas);

	printf("Verilen zam oranini giriniz:\n");
	scanf_s("%d", &zam);

	
	yeni_maas = maas + (maas * zam) / 100;
	printf("Alacaginiz yeni maas : %d\n", yeni_maas);


	system("pause");
	return 0;







}