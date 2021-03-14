#include <stdio.h>
#include <stdlib.h>





int main()
{


    char renk[20];
    char nesne[20];
    int sayi;
    char takim[20];

    printf("Renk sec?" );
    scanf("%s", &renk);

    printf("Nesne? " );
    scanf("%s", &nesne);

    printf("Sayi sec: \n" );
    scanf("%d", &sayi);

    printf("Takim? \n" );
    scanf("%s", &takim); //takim ismini input olarak al

    printf("Cicegin rengi %s \n\n" ,renk);

    printf("%s rengi %s \n\n",nesne, renk);
    printf("sansli sayim %d \n\n", sayi);
    printf(" Sevdigim takim %s \n\n", takim);

}
