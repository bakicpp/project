#include <stdlib.h>
#include <stdio.h>

int main()
{
	int yol;
	int zaman;
	int hiz;



	printf("Tahmini Varis Sureni Bul!\n");
	printf("Alacaginiz yolu giriniz:\n");
	scanf_s("%d", &yol);

	printf("Planladiginiz ortalama hizi giriniz:\n");
	scanf_s("%d", &hiz);

	zaman = yol / hiz;

	printf("Tahmini varis sureniz : %d\n", zaman);



	system("pause");
	return 0;




}