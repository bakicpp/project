#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int notlamaSistemi(int ortalama) {

	if (ortalama >= 90)
		return 4;
	else if (ortalama >= 80)
		return 3;
	else if (ortalama >= 70)
		return 2;

	else if (ortalama >= 60)
		return 1;
	else
		return 0;


}



int main()
{

	srand(time(0));

	for (int i = 1; i < 6; i++)
	{
		int ortalama = 100 - (i * 10) + rand() % 10;
		printf("Ogrencinin Ortalamasi : %d\n", ortalama);
		printf("%d notunun 4'luk sistemde karsiligi : %d\n", ortalama, notlamaSistemi(ortalama));


	}



}
