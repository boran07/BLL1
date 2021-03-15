#include <stdio.h>
#include <stdlib.h>

//CM = M ve Kilometreye cevren bir program yazmaniz

int main()
{
    float cm ;
    float metre;
    float km;

    printf("Uzunlugu cm olarak gir: \n");
    scanf("%f", &cm);

    metre = cm / 100.0;
    km = cm /100000.0;

    printf("metre = %.3f \n" , metre);
    printf("km = %.3f \n" , km);

    return 0;
}
