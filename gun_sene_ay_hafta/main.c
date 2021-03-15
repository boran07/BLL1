#include <stdio.h>
#include <stdlib.h>

/*
    *gün olarak veri gir
    *hafta ve ay olarak veri al
    yazdır.
*/
int main()
{
    int gun, sene, hafta;

    printf("Gun gir: \n");
    scanf ("%d", &gun);

    sene = (gun /365);
    hafta = (gun % 365) / 7;
    gun = gun - ((sene *365) + (hafta * 7));

    printf("Sene : %d\n ", sene);
    printf("Hafta : %d\n ", hafta);
    printf("Gun : %d\n ", gun);

}
