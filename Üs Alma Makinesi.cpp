#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int sayi1, sayi2, us;

	printf("Us Alma Makinesi\n");
	printf("Sayiyi ve ussunu giriniz : \n");
	scanf_s("%d %d", &sayi1, &sayi2);

	us = pow(sayi1, sayi2);

	printf("Us alma basarili!\n Islem Sonucu = %d\n", us);

	system("pause");
	return 0; 

}