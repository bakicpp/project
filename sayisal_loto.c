#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
	int randomSayi;
	int i;
	srand(time(NULL));
	int loto[49] = { 0 };

	printf("Sayilar uretilmeye baslaniyor...\n");

	for (i = 0; i < 6; i++)
	{
		randomSayi = 1 + rand() % 49;

		while (loto[randomSayi - 1] == 1)
		{
			randomSayi = 1 + rand() % 49;

		}

		loto[randomSayi - 1] = 1;
		printf("%d ", randomSayi);

	}

	printf("\nSayi cekimi tamamlandi.\n");


	

	system("pause");
	return 0;


}
