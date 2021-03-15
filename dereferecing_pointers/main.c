#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas = 30;

    int*pYas = &yas;

    printf("Pyas = %p\n ", &pYas);

    //derefrencing
    printf("%d", *pYas);

    return 0;
}
