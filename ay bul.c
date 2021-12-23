//Switch-Case kullanarak seçilen sayının hangi ay olduğunu çıktı olarak gösteren C programını yaz.//

#include <stdlib.h>
#include <stdio.h>


int main()
{
	int sayi;
	
	printf("Hangi ay oldugunu merak ettigin sayiyi gir : \n");
	scanf_s("%d", &sayi);

	switch (sayi)
	{

	case 1: printf("Ocak\n");
		break;

	case 2: printf("Subat\n");
		break;
	
	case 3: printf("Mart\n");
		break;
	case 4: printf("Nisan\n");

		break;

	case 5: printf("Mayis\n");
		break;
	case 6: printf("Haziran\n");
		break;
	case 7: printf("Temmuz\n");
		break;
	case 8: printf("Agustos\n");
		break;
	case 9:printf("Eylul\n");
		break;
	case 10:printf("Ekim\n");
		break;
	case 11:printf("Kasim\n");
		break;
	case 12: printf("Aralik\n");



	default:
		break;
	}


	system("pause");
	return 0;

}
