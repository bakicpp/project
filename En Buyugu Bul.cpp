#include <stdio.h>
#include <stdlib.h>

int main() {

	int s1, s2, s3;
	
	printf("En Buyugu Bul!\n");
	printf("Hosgeldiniz!\n");

	


	printf("Birinci sayiyi giriniz:\n");
	scanf_s("%d", &s1);

	printf("Ikinci sayiyi giriniz:\n");
	scanf_s("%d", &s2);

	printf("Ucuncu sayiyi giriniz:\n");
	scanf_s("%d", &s3);



	if (s1 > s2 & s1 > s3)
	{
		printf("Max. Deger=%d\n", s1);
		scanf_s("%d", &s1);
	}

	else if (s2 > s1 & s2 > s3) {

		printf("Max. Deger=%d\n", s2);
		scanf_s("%d", &s2);
	}

	else if (s3 > s1 & s3 > s2)
	{
		printf("Max. Deger=%d\n", s3);
		scanf_s("%d", &s3);
	}


	else if (s1 = s2 = s3) {

		printf("Butun sayilar esit!\n");
		scanf_s("%d %d %d", &s1, &s2, &s3);
	}
		

	system("pause");
	return 0;



}