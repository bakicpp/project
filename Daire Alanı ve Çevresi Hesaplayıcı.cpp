#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Yar� �ap� d��ardan girilen bir dairenin �evresini ve alan�n� bulan c program�.//

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
