#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;

    printf("sayi gir:");
    scanf("%d", &a);

   // printf("Decimal: %d\n", a);
   // printf("Decimal: %x\n", a);

    long long i, j;

    for(i = 0; i < sizeof(int); i++){

    //char * byte = (((*char)&a ) +i);
    char byte = ((char*)&a)[i]; // bir  pointer lokasyonu urettik ve &a pointera verdik

        for( j = 7; j >= 0  ; j--  ){

            char bit = (byte >> j) & 1;
            printf("%hhd" , bit);


            //1101 => 1
            //110  => 0
            //11   => 1
            //1    => 1
        }
        printf("  ");

    }


}
