#include <stdio.h>
#include <stdlib.h>



int main()
{
    const int GizliNum = 15;

    int tahmin;

    int k_deneme = 0; // kulanici kac kere denemis
    const int deneme_limit = 5; //deneme sansi
    int deneme_kalmadi = 0;


    while(tahmin != GizliNum && deneme_kalmadi == 0){

            if (k_deneme < deneme_limit){

                printf("Sayi tahmin et?");
                scanf("%d", &tahmin);

                k_deneme++;
            }else {

                deneme_kalmadi = 1;

            }

    }

    if(deneme_kalmadi == 1){

        printf("\nDenemen Kalmadi\n\n");

    }else{
    printf("\nDogru bildin \n\n");

    }

    return 0;

}
