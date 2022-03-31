#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*char a = 'A', b = 'B';
	const char* ptr = &a;

	printf("ptr ile gosterilen deger : %c\n", *ptr);
	ptr = &b;
	printf("ptr ile gosterilen deger : %c\n", *ptr);*/

	/*char a = 'A', b = 'B';
	char* const ptr = &a;

	printf("ptr tarafindan gosterilen deger : %c\n", *ptr);
	printf("ptr tarafindan gosterilen deger : %d\n", *ptr);

	*ptr = b;

	printf("ptr tarafindan gosterilen deger : %c\n", *ptr);
	printf("ptr tarafindan gosterilen deger : %d\n", *ptr);*/


	char a = 'A', b = 'B';
	const char* const ptr = &a;

	printf("ptr tarafindan gosterilen deger : %c\n", *ptr);
	printf("ptr tarafindan gosterilen deger : %d\n", ptr);

	//ptr = &b gecersiz ifade olacak (salt okunur) - (read-only)

	





	system("pause");
	return 0;
}
