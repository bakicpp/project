//sayýnýn tek ya da çift oldugunu gosteren program//

#include <stdlib.h>
#include <stdio.h>

int main()

{
	int sayi1, sayi2, sayi3;

	printf("3 sayi giriniz\n");
	scanf_s("%d %d %d", &sayi1, &sayi2, &sayi3);


	if (sayi1 > sayi2 && sayi2 > sayi3 && sayi1>sayi3)
	{
		printf("ortanca = %d", sayi2);
	}

	else if (sayi2 > sayi1 && sayi1 > sayi3 && sayi2 > sayi3)
	{
		printf("ortanca = %d", sayi1);
	}

	else if (sayi3 > sayi1 && sayi3 > sayi2 && sayi1 > sayi2)
	{
		printf("ortanca = %d", sayi1);
	}

	else if (sayi1 > sayi2 && sayi3 > sayi2 && sayi1 > sayi3)
	{
		printf("ortanca = %d", sayi3);
	}

	else if (sayi2 > sayi1 && sayi3 > sayi1 && sayi2 > sayi3)

	{

		printf("ortanca = %d", sayi3);
	}

	else if(sayi3> sayi1 && sayi2>sayi1 && sayi3>sayi2)
	{
		printf("ortanca = %d", sayi2);
	}


	system("pause");
	return 0;


}
