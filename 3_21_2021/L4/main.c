#include <stdio.h>



int main()
{
    /*  kulanicidan alcagin input    */

    int num, n , yeniSayi;

    printf("Sayi Gir: \n");
    scanf("%d", &num );

    printf("Degistirmek istedigin bit pozisyonunu gir(0-31) : \n");
    scanf("%d", &n );

    /*  sola "n" kere shift yap , arksasindan
    bitwise operasyonu kulanarak 0 ya 1, yada 1'i 0a ceviren bir bitwise operatoru olmasi lazim    */

    yeniSayi = num ^ (1 << n);   // 0000 0010
                                //  0000 0100
                                //  0000 0110

    printf("Degismeden oncei hali: %d" , num);
    printf("Degistikten sonraki hali: %d", yeniSayi);

}
