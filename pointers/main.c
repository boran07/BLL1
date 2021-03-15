#include <stdio.h>
#include <stdlib.h>

int main()
{

    int yas = 30;
    double puan = 3.4;
    char derece = 'A';

    int*pYas = &yas;


    printf("Yas = %p\n ", &yas);
    printf("Pyas = %p\n ", &pYas);

    return 0;
}
