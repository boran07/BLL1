#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dilimler = 20;    // 6326 = 20

    int *p = &dilimler;   // 6446 = 20


    printf("Dilimler : %d \n", dilimler);
    printf("Dilimler : %d \n", *p);

    dilimler = 25;
    printf("Dilimler: %d \n", dilimler);
    printf("Dilimler : %d \n", *p);

    *p = 30;

    printf("Dilimler: %d \n", dilimler);
    printf("Dilimler : %d \n", *p);


    return 0;
}
