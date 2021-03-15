#include <stdio.h>
#include <stdlib.h>


 char kelime[100];
    int i  = 0 ;

int main()
{



    printf("Cumle Gir:\n");
    gets(kelime);

    while (kelime[i] != '\0'){

        if(kelime[i] == 'a' || kelime[i] == 'e'  || kelime[i] == 'i' || kelime[i]=='o' ||kelime[i]=='u' )

            //kelime[i] = kelime[i] - 32;
            kelime[i] -= 32; //update

            i++;

    }


    printf("Unluleri buyuk harfe donusturdukten sonra cumle olur:\n");
    puts(kelime);



    return 0;
}
