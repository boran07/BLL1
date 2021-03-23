#include <stdio.h>
#include <stdlib.h>

//enum data tipi

enum hafta{ Pazartesi = 1 ,Sali , Carsamba , Persembe ,Cuma, Cumartesi,Pazar  };

int main()
{
    enum hafta bugun;


    printf("Gun gir:");
    scanf("%d",&bugun);

    int yarin = bugun + 1;

    printf("Gun: %d \n", bugun);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    if(bugun == Pazar){
        printf("yarin : Pazartesi \n");
    }else if (bugun == Pazartesi){
        printf("yarin : Sali \n");
    }else if (bugun == Sali){
        printf("yarin : Carsamba \n");
    }else if (bugun == Carsamba){
        printf("yarin : Persembe \n");
    }else if (bugun == Persembe){
        printf("yarin : Cuma \n");
    }else if (bugun == Cuma){
        printf("yarin : Cumartesi \n");
    }else if (bugun == Cumartesi){
        printf("yarin : Pazar \n");
    }else{}

}


