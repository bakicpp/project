#include <stdio.h>
#include <stdlib.h>

int main()
{

	int hiz, alinan_yol{}, zaman{};



	printf("Hiz hesaplayiciya hosgeldin!\n");

	

	printf("Lutfen alinan yolu giriniz:\n");
	scanf_s("%d", &alinan_yol);

	printf("Lutfen gecen zamani giriniz:\n");
	scanf_s("%d", &zaman);

	hiz = alinan_yol / zaman;
	
	if (hiz > 100)
	{
		printf("Hiziniz = %d YAVAS \n", hiz);
	}

	else
	{
		printf("Hiziniz = %d Iyi yolculuklar!\n", hiz);
	}


	system("pause");
	return 0;


}