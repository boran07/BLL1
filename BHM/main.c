#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;

    printf("Ilk sayi: \n");
    scanf("%d,", &num1);

    printf("ikinci sayi: \n");
    scanf("%d,", &num2);

    int Bolme = num1 / num2 ;
    int Carpma = num1 * num2;
    int Toplama = num1 + num2;

    printf("Bolme: %d \n", Bolme);
    printf("Carpma: %d \n", Carpma );
    printf("Toplama: %d \n", Toplama );

    return 0;

}
