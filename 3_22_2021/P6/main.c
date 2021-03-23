#include <stdio.h>
#include <stdlib.h>

int main()
{

    int * p1, c, d;

    c = 5;
    d = -15;

    p1 = &c;

        printf("%p\n", p1); //5
        printf("%d\n", *p1); //5

    p1 = &d;

        printf("%p", p1); //-15


}
