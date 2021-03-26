#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p1, c ,t ;

    c = 4;

    t= 9;

    p1 = &c;

//////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("P1 ozel kendi adresi: %p\n", &p1);
    printf("P1 icindeki adres: %p \n " , p1);

    printf("C adresi : %p \n\n", &c);

   printf("P1 icergi %d\n" ,*p1);
    printf("C icergi : %d \n", c);
//////////////////////////////////////////////////////////////////////////////////////////////////////
printf("////////////////////////////////////\n\n"); //

    p1 = &t;

    printf("P1 ozel kendi adresi: %p\n", &p1);
    printf("P1 icindeki adres: %p \n " , p1);
    printf("t adresi : %p \n\n", &t);

    printf("P1 icergi %d\n" ,*p1);
    printf("t icergi : %d \n", t);

}
