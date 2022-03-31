#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	int* p;
	int a = 10;
	p = &a; // & işareti, a değerinin adresini ver demektir.

	printf("Adres degeri -> %p\n",p);
	printf("Gercek degeri -> %d\n", *p);

	int* q;
	q = &*p;

	printf("Yeni pointer degeri -> %d\n", *q);

	system("pause");
	return 0;
}
