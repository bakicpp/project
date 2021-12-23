#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	int sayilar[4] = { 1,0,1,0 };
	int i;

	for (i = 0; i < 4; i++)
	{
		sayilar[i] = !sayilar[i];
	}
	
	for (i = 0; i < 4; i++) {

		printf("%d ", sayilar[i]);

	}

	

	system("pause");
	return 0;


}
