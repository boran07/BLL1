#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * p1, c;

    c = 5;
    p1 = &c;

    *p1 = 2;

    printf("c = %d\n", c); //1

    printf("p1 = %d\n", *p1); //1



}
