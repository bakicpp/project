#include <stdlib.h>
#include <stdio.h>

int main()

{

//şifre oluştur
//oluşturulan şifreyi iste
//doğruluğunu sorgula
//doğruysa, kayıt için kimlik bilgisi iste
//admin password aldıktan sonra istenilen bilgileri bastır.//


	char  password[20];
	char passwordCheck[20];
	int yanlis;


	

	int i;

	while (1)
	{
		yanlis = 0;
		i = 0;

		printf("Please create a password..\n");
		scanf_s("%s", password, sizeof(password));

		printf("Please enter the password you created..\n");
		scanf_s("%s", &passwordCheck, sizeof(passwordCheck));


		while (!(password[i] == '\0' && passwordCheck[i] == '\0'))
		{
			if (password[i] != passwordCheck[i])
			{

				printf("Upss.. Passwords are not matching each other.. Please try again...\n");
				
				printf("Please create a password..\n");
				scanf_s("%s", password, sizeof(password));

				printf("Please enter the password you created..\n");
				scanf_s("%s", &passwordCheck, sizeof(passwordCheck));	

			}
			else
			{
				i++;
			}

			break;


		}


		if (yanlis == 0)
		{
			printf("Password process completed succesfuly.\n");
		}
		break;

		
	}


	printf("Entering the system...\n");
	printf("-----------------------------------------------------\n");
	printf("-----------------------------------------------------\n");
	printf("-----------------------------------------------------\n");

	printf("\n\n\n");

	char name[20];
	char surname[20];
	int id;


	printf("Enter the informations for registiration..\n");

	
	printf("-----------------------------------------------------\n");

	printf("Please enter your name..\n");
	scanf_s("%s", name, sizeof(name));

	printf("Please enter your surname..\n");
	scanf_s("%s", surname, sizeof(surname));

	printf("Please enter your id..\n");
	scanf_s("%d", &id);

	

	int admin{};

	printf("Press 1 for Admin Panel, 2 for Exit\n");
	scanf_s("%d", &admin);


	switch (admin)
	{
	case 1: printf("Admin System \n");



		printf("*!WARNING!*\n");

		printf("admin system opened.\n");

		printf("-----------------------------------------------------\n");

		printf("Please enter your admin password..\n");
		scanf_s("%s", password, sizeof(password));


		while (1)
		{
			yanlis = 0;
			i = 0;
			while (!(password[i] == '\0' && passwordCheck[i] == '\0'))
			{
				if (password[i] != passwordCheck[i])
				{
					printf("Admin password is wrong.. Please try again..\n");
					printf("Please enter your admin password..\n");
					scanf_s("%s", password, sizeof(password));


				}

				else
				{
					i++;
				}
			}

			if (yanlis == 0)
			{
				printf("Login succesful.\n");
				break;
			}
		}

		int panel;

		printf("Press 1 for View the Informations..\n");
		scanf_s("%d", &panel);

		switch (panel)
		{
		case 1: printf("**Registiration Informations**\n");

			printf("Name : %s\n", name);
			printf("Surname : %s\n", surname);
			printf("ID : %d\n", id);

		default:
			break;
		}





		break;

	case 2: printf("Exit\n");

		system("pause");




	default:
		break;
	}







	system("pause");
	return 0;



}
