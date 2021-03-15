#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sene;

    printf("Sene gir: \n");
    scanf("%d", &sene);

    if ((sene % 4 == 0) && (sene % 100 != 0) || (sene % 400 == 0)){

        printf("Artik yil\n");
        }else{

            printf("Normal yil");

        }

    }




