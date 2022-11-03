#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define boyut 10

int yigin[boyut];
int es = 0, i, veri = 0, ens;



void Push(int veri) {
	if (es>boyut)
	{
		printf("Stack doludur, ekleme yapilamaz...");

	}
	else
	{
		yigin[es] = veri;
		printf("%d elemani yigina eklendi \n\n", veri);
		es++;
	}
}

void Pop() {
	if (es<=0)
	{
		printf("Yigin su an bos, cikarma yapamazsiniz");
	}
	else
	{
		printf("%d elemani yigindan cikarildi \n\n", yigin[es - 1]);
		es--;
	}
}


int main()
{
	Push(10);
	Push(20);
	Push(30);
	Push(40);
	Push(50);
	
	Pop();
	Pop();
	Pop();

	printf("Yigin ekrana yazdiriliyor...\n\n");
	for (i = 0; i < es; i++) {
		printf("Yigin[%d] = %d \n", i, yigin[i]);
	}

	scanf_s("%d", &ens);
}
