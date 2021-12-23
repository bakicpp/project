#include <stdlib.h>
#include <stdio.h>

int main()
{
	char islem;
	float sayi1, sayi2;

	printf("Islem tipi seciniz : (+, -, *, /)\n");
	scanf_s("%c", &islem);

	printf("Isleme sokmak istediginiz sayilari giriniz. \n");
	scanf_s("%f %f", &sayi1, &sayi2);

	switch (islem)
	{

	case '+': printf("Islem sonucu = %f\n", sayi1 + sayi2);
		break;

	case '-': printf("Islem sonucu = %f\n", sayi1 - sayi2);
		break;
	case '*': printf("Islem sonucu =%f\n", sayi1 * sayi2);
		break;

	case '/': printf("Islem sonucu = %f\n", sayi1 / sayi2);

		break;

	default:
		break;
	}

	system("pause");
	return 0;


}
