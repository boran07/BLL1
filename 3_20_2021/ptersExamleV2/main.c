#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100


int main()
{
    int arr[MAXSIZE];
    int N, i;

    int * ptr = arr; //pointer arryin icinde [0]

    printf("Dizinin ne kadar buyuk olmasini istiyorsun?");
    scanf("%d", &N);

    printf("Gircegin sayilari gir dizinin icine: \n");
/////////////////////////////////////////////////////////////////////////////////
                for (i = 0 ; i < N; i++){

                            scanf("%d", ptr);
                            ptr++;
                    }
 //////////////////////////////////////////////////////////////////////////////////


    ptr = arr; //pointre ilk lokasyona geri gotur

    printf("Dizinin son halini cikar: ");

      for (i = 0 ; i < N; i++){
            //pointer olarak cikar
            printf("%d, ", *ptr);

        ptr++;//dizinin ilerki elementine gec

    }
    return 0;
}
