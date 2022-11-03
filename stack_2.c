#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct stack {
	int top;
	int deger[10];
};

struct stack s;

void push(struct stack* ps, int s) {
	if (ps->top == 9)
	{
		printf("Stack dolu");
	}
	else
	{
		ps->deger[(ps->top)++];
	}

}

void pop(struct stack* ps) {

	if (ps->top == 0)
	{
		printf("Stack boş!");
	}
	else
	{
		ps->top--;
	}
}


int main() {
	int sayi = 0;
	while (sayi != 4)
	{
		printf("Lütfen bir secim yapiniz.. : \n1.Ekleme \n2.Silme \n 3.Listeleme \n4.Cikis");
		scanf_s("%d", &sayi);

		switch (sayi)
		{
		case 1: 
			printf("Eklemek istediginiz sayiyi giriniz : ");
			int ekle;
			scanf_s("%d", &ekle);
			push(&s, ekle);
			break;

		case 2: 
			pop(&s);
			break;

		case 3: 
			if (s.top ==0)
			{
				printf("Liste boş");
			}

			else
			{
				printf("Liste : ");

				for (int a = 0; a < s.top; a++)
				{
					printf("%d", s.deger[a]);
				}
				printf(" ");
			}
			break;

		default:
			break;
		}
	}

}
