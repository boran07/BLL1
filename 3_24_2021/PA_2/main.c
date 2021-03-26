#include <stdio.h>
#include <stdlib.h>

int i, x[6], sum = 0;



int main()
{

    printf("6 sayi gir: ");


    for(i = 0; i < 6 ; i++){

        scanf("%d", x+i); // sirayla sayilari aliyoruz


        //     *(x+i) ----> pointer uzerinden
        sum += x[i];

    }

    printf("Toplam = %d", sum);


}
