#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c, d, e, f, g, h;

	printf("Kok bulma makinesine hosgeldin..\n");

	printf("x kare katsayisini giriniz : \n");
	scanf_s("%d", &a);

	printf("x katsayisini giriniz : \n");
	scanf_s("%d", &b);

	printf("sabit giriniz : \n");
	scanf_s("%d", &c);

	d = b * b + 4 * a * c;

	e = b - d ^ 1 / 2;
	f = b + d ^ 1 / 2;

	g = e / 2 * a;
	h = f / 2 * a;


	if (d < 0)
	{
		printf("Kok bulunmaz.\n");
	}

	else
	{
		printf("x1 = %d\n", g);
		printf("x2 = %d\n", h);
	}



	system("pause");
	return 0;

}
