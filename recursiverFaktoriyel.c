#include <stdlib.h>
#include <stdio.h>
 
int recursiveFaktoriyel(int sayi)
{
	if (sayi <= 1)
		return 1;
	else
		return sayi * recursiveFaktoriyel(sayi - 1);

}


int main()
{
	int sonuc = recursiveFaktoriyel(5);
	printf("%d\n", sonuc);

}
