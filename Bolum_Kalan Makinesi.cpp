#include <stdio.h>
#include <stdlib.h>
//Bu örnekte, bir tamsayý baþka bir tam sayýya bölündüðünde bölümü ve kalaný bulmayý öðreneceksiniz.//
int main()
{
	
	int bolunen_sayi, bolen_sayi,  bolum, kalan;
	

	printf("Bolum / Kalan Makinesine Hosgeldin!");

	printf("Bolunen sayiyi giriniz:");
	scanf_s("%d", &bolunen_sayi);

	printf("Bolen sayiyi giriniz:");
	scanf_s("%d", &bolen_sayi);


	bolum = bolunen_sayi / bolen_sayi;
	kalan = bolunen_sayi % bolen_sayi;

	printf("Bolum=%d\n", bolum);
	printf("Kalan=%d\n", kalan);


	system("pause");
	return 0;

}