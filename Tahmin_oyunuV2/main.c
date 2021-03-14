#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int GizliNum;
    int c;

     srand ( time(NULL) );
     for(c= 1; c<=5 ; c++){
        GizliNum = rand()%5;
     }

    int tahmin;

    int k_deneme = 0; // kulanici kac kere denemis
    const int deneme_limit = 10; //deneme sansi
    int deneme_kalmadi = 0;

    //int alt_sayi = -10;
    int sayi_araligi = 100;


    printf("0 ile %d arasida bir sayi tahmin et?", sayi_araligi);
    scanf("%d", &tahmin);
    k_deneme++;


    while(tahmin != GizliNum && deneme_kalmadi == 0){

            if (k_deneme < deneme_limit){


                k_deneme++;

                        //eger tahmmin gizli numdan daha buyuk ise konsolo yazi yaz
                        if(tahmin > GizliNum){
                            printf("\n\n Tahminin cok yuksek. \n\nBir daha dene! \n\n" );
                            scanf("%d", &tahmin);

                        }else if (tahmin < GizliNum){
                            printf("\n\n Tahminin cok dusuk. \n\n Bir daha dene! \n\n ");
                            scanf("%d", &tahmin);

                        }

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
