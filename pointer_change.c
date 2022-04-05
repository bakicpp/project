#include <stdlib.h>
#include <stdio.h>


void change(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}



int main()
{
	int number1, number2;

	printf("Degistirmek istediginiz sayilari giriniz..\n");
	scanf_s("%d %d", &number1, &number2);

	printf("1.Sayi : %d\n 2.Sayi : %d\n", number1, number2);
	change(&number1, &number2);
	printf("Changed : %d %d", number1, number2);

}
