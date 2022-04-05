#include <stdlib.h>
#include <stdio.h>


int len(char* adress)
{
	int length = 0;

	for (int i = 0; adress[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}





int main()
{
	char isim[] = "Baki";
	printf("%s\n", isim, sizeof(isim));

	printf("Dizinin uzunlugu : %d\n", len(isim));

	return 0;


}
