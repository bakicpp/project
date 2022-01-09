#include <stdlib.h>
#include <stdio.h>

int main()

{
	int nots[20];
	int i;
	int toplam = 0;
	float ort;
	int max, min;


	for (i = 0; i < 5; i++)
	{
		printf("%d. ogrenci notunu girin.\n", i + 1);
		scanf_s("%d", &nots[i]);

		toplam = toplam + nots[i];
		ort = toplam / 5;

	}

	printf("Ortalama = %f", ort);

	max = nots[0];
	min = nots[0];

	for (i = 0; i < 5; i++)
	{
		if (nots[i] > max)
		{
			max = nots[i];
		}

		if (nots[i] < min)
		{
			min = nots[i];
		}

	}

	printf("Max : %d\n", max);
	printf("Min : %d\n", min);




	system("pause");
	return 0;

}
