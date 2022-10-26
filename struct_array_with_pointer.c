#include <stdlib.h>
#include <stdio.h>


struct Student
{
	char name[50];
	char surname[50];
	int no;
};


int main() {
	struct Student *studentPtr[2], studentArray[2];
	int i;



	for (i = 0; i < 2; i++)
	{
		studentPtr[i] = &studentArray[i];


		printf("%d. ogrencinin bilgilerini girin : ", i + 1);
		scanf_s("%s %s %d", &studentPtr[i]->name, sizeof(studentPtr[i]->name), &studentPtr[i]->surname, sizeof(studentPtr[i]->surname), &studentPtr[i]->no);


	}

	for (i = 0; i < 2; i++)
	{
		studentPtr[i] = &studentArray[i];
		printf("\n");
		printf("%d. ogrencinin adi : %s \n", i + 1, studentPtr[i]->name);
		printf("%d. ogrencinin soyadi : %s \n", i + 1, studentPtr[i]->surname);
		printf("%d. ogrencinin numarasi : %d \n", i + 1, studentPtr[i]->no);
		printf("\n");
	}

}
