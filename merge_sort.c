#include <stdlib.h>
#include <stdio.h>

int array[] = { 7, 1, 5, 3, 2, 4 ,8 ,0 ,6,9};
int b[9];


void birlestir(int bas, int orta, int son) {

	int i, j, k;

	for (i = bas; i <= son; i++) {
		b[i] = array[i];
		
	}

	i = bas;
	j = orta + 1;
	k = bas;

	while (i <= orta && j <= son) 
	{
		if (b[i] <= b[j])
		{
			array[k++] = b[i++];
		}
		else
		{
			array[k++] = b[j++];
		}
	}

	while (i<=orta)
	{
		array[k++] = b[i++];
	}


}


void bol(int bas, int son) {
	
	if (bas<son)
	{
		int orta = (bas + son) / 2;
		bol(bas, orta);
		bol(orta + 1, son);

		birlestir(bas, orta, son);
	}

}





int main() {
	
	bol(0, 9);

	for (int i = 0; i <= 9; i++) {
		printf("%d ", array[i]);
	}


	system("pause");

	return 0;
}
