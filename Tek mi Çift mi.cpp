#include <stdio.h>
#include <stdlib.h>
//Bu �rnekte, kullan�c� taraf�ndan girilen bir say�n�n �ift mi yoksa tek mi oldu�unu kontrol etmeyi ��reneceksiniz.//
int main()
{

	int sayi;

	printf("Cift mi Tek mi'ye Hosgeldin!\n");

	printf("Lutfen tek mi cift mi oldugunu ogrenmek istedigin sayiyi gir:\n");
	scanf_s("%d", &sayi);

	printf("Tamam, hesapliyorum...\n");

	if (sayi % 2 == 0)
	{
		printf("Girilen sayi CIFT !\n");
	}

	else
	{
		printf("Girilen sayi TEK !\n");
	}

	system("pause");
	return 0;

}