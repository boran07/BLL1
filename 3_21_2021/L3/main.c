#include <stdio.h>
#include <stdlib.h>

// 11010010011

int main()
{
    int num, n , bitDurumu;


    printf("Sayi gir :"); //13
    scanf("%d", &num);

    printf("Bit posisyonu sec:"); // 2 = 0000 0010
                                 //        11  1111
    scanf("%d", &n);

    //saga shift etcez

    bitDurumu = (num >> n ) & 1;

    printf(" num = %d , bit sayisi n = %d" , num , bitDurumu);



    return 0;
}
