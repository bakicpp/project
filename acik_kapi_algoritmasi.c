#include <stdlib.h>
#include <stdio.h>

int main()
{
	int acik[10] = { 0 };

	int kapi, tur;

	for (tur = 0; tur < 10; tur++)
	{
		for (kapi = tur; kapi < 10; kapi = kapi + tur + 1)
		{
			acik[kapi] = !acik[kapi];
		}
	}

	printf("Acik kapilarimiz sunlardir : \n");

	for (kapi = 0; kapi < 10; kapi++) {

		if (acik[kapi])
		{
			printf("%d ", kapi + 1);
		}
	}




	system("pause");
	return 0;


}
