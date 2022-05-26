#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	
	int n, i, * ptr, toplam = 0;
	printf("Kac sayi toplanacak?: \n");
	scanf_s("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));
	//hafıza ayrılamazsa
	if (ptr == NULL)
	{
		printf("Hata! Hafiza tahsisi yapialamadi.\n");
		exit(0);
	}

	printf("Sayi girin : \n");

	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", ptr + i);
		toplam += *(ptr + i);

	}

	printf("Toplam = %d\n", toplam);

	//hafızayı bosaltma -- deallocation the memory // memory release

	free(ptr);


	system("pause");
	return 0;
}
