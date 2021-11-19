#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Yarý çapý dýþardan girilen bir dairenin çevresini ve alanýný bulan c programý.//

int	main()
{
	int r;
	int pi;
	int alan;
	int cevre;

	printf("Alan Hesaplayiciya Hosgeldin\n");

	printf("Lutfen yaricap tanimlayiniz:\n");
	scanf_s("%d", &r);

	pi = 3;

	alan = pi * pow(r,2);

	cevre = 2 * pi * r;
	
	printf("Alan = %d\n", alan);
	printf("Cevre = %d\n", cevre);


	system("pause");
	return 0;


}
