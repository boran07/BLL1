#include <stdio.h>
#include <stdlib.h>




double pisagor (double a,double b){


    double c2;

    c2 = a*a + b*b;

    return sqrt(c2);

}



int main()
{
    //a^2 + b^2 = c^2

    double a2;
    double b2;

    printf("Ilk sayini sec: \n");
    scanf("%lf", &a2);
    printf("Ikinci sayini sec: \n");
    scanf("%lf", &b2);

    printf("Hipotonus: %f\n", pisagor(a2,b2));


    return 0;

}
