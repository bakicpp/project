#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{

	float vki;
	float boy; 
	float kilo; 

		printf("VKI Hesaplayicisina Hosgeldin!\n");
		
		printf("Lutfen cm cinsinden boyunuzu giriniz:\n");
		scanf_s("%f", &boy);

		printf("Lutfen kg cinsinden kilonuzu giriniz:\n");
		scanf_s("%f", &kilo);


		vki = kilo / pow(boy/100,2);

		printf("VKI = %.2f!\n", vki);
		
		if (vki <=18, 5)
		{
			printf("Zayif!\n");
		}

		else if (vki <= 29)
		{
			printf("Normal\n");
		}

		else
		{
			printf("Kilolu\n");
		}

		system("pause");
		return 0;
}
