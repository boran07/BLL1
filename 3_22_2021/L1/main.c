#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main()
{
    float yaricap, yuzolcum;
    printf("Yaricapi gir: \n");
    scanf("%f", &yaricap);

    yuzolcum = PI * yaricap *yaricap ;

    printf("Yuzolcum = %.2f", yuzolcum);


    return 0;
}
