#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define yuzolcumuI(r) (PI*r*r)

int main()
{


    float yaricap, yuzolcum;
    printf("Yaricapi gir: \n");
    scanf("%f", &yaricap);

    yuzolcum = yuzolcumuI(yaricap) ;

    printf("Yuzolcum = %f", yuzolcum);


return 0;


}
