#include <stdio.h>
#include <stdlib.h>

int main() {
    int yil;

    printf("Artik Yil Hesaplama Makinesi'ne Hosgeldin!\n");

    printf("Lutfen kontrol etmek istedigin yili gir:\n ");
    scanf_s("%d", &yil);


    if (yil % 400 == 0) {
        printf("%d yuzyil olmakla birlikte bir artik yildir!\n", yil);
    }

    else if (yil % 100 == 0) {
        printf("%d artik yil degil!\n", yil);
    }

    else if (yil % 4 == 0) {
        printf("%d artik yildir!\n", yil);
    }

    else {
        printf("%d artik yil degil!\n", yil);
    }


    system("pause");
    return 0;
}
