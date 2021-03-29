#include <stdio.h>
#include <stdlib.h>

struct person{

    int yas;
    char isim[30];

};

struct person info(){

    struct person s1;

    printf("Isim gir: ");
    scanf("%s", s1.isim);

    printf("Yas: ");
    scanf("%d", &s1.yas);

    return s1;

};


int main()
{
    struct person s;

    s = info();

    printf("infoyu goster: \n");
    printf("Isim: %s\n", s.isim);
    printf("Yas: %d\n", s.yas);

}
