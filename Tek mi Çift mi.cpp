#include <stdio.h>
#include <stdlib.h>
//Bu örnekte, kullanýcý tarafýndan girilen bir sayýnýn çift mi yoksa tek mi olduðunu kontrol etmeyi öðreneceksiniz.//
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