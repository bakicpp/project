#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Ogrenciler {

	int okulNo;
	char isim[40];
	char soyisim[40];
	int sinif;
	char sube;


}Ogrenci;





int main()
{
	Ogrenci ogrenci1;
	Ogrenci ogrenci2;

	ogrenci1.okulNo = 450;
	ogrenci2.okulNo = 451;

	strcpy_s(ogrenci1.isim, "Fatih Kaan");
	strcpy_s(ogrenci1.soyisim, "Ozturk");

	strcpy_s(ogrenci2.isim, "Osman");
	strcpy_s(ogrenci2.soyisim, "Agca");



	printf("%s", ogrenci1.isim);
	printf(" %s", ogrenci1.soyisim);


	printf("\n%s", ogrenci2.isim);
	printf(" %s\n", ogrenci2.soyisim);




	system("pause");
	return 0;
}
