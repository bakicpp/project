#include <stdlib.h>
#include <stdio.h>

//5'e kadar olan sayıların faktöriyelleri toplamı//

int main()

{
	int fakt = 1;
	int i;
	int toplam = 0;

	printf("5'e kadar olan sayilarin faktoriyelleri toplami.\n");
	
	

	for (i = 1; i < 5; i++)
	{
		fakt = fakt * i;
		printf("%d Faktoriyel = %d\n", i, fakt);
		toplam = toplam + fakt;
		

	}


	printf("5'e kadar olan sayilarin faktoriyellerinin toplami = %d\n", toplam);

	system("pause");
	return 0;

}
