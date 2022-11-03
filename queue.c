#include <stdlib.h>
#include <stdio.h>

#define BOYUT 4

int kuyruk[BOYUT], front = -1, rear = -1;

void enQueue(int veri) {

	if (rear == BOYUT)
	{
		printf("Kuyruk dolu!!");
	}
	else
	{
		if (front == -1)
		{
			front = 0;
			rear = rear + 1;
			kuyruk[rear] = veri;
		}
	}

}

void deQueue() {

	if (front == -1 || front > rear)
	{
		printf("Kuyruk boş!!\n");
		front = -1;
		rear = -1;
	}
	else
	{
		front = front + 1;
	}
}

void display() {
	int i;
	for (i = front; i <= rear; i++) {

		printf("%d", kuyruk[i]);
	}
}

int main() {
	int secim;
	while (1 == 1) {
		printf("n1 - enQueue");
		printf("n2 - enQueue");
		printf("Yapmak istediginiz islem --> ");
		scanf_s("%d", &secim);

		switch (secim)
		{
		case 1:
			printf("\nveri giriniz -->");
			scanf_s("%d", &secim);
			enQueue(secim);
			display();
			break;

		case 2:
			deQueue();
			display();
			break;
		}
		

	}
	
}
