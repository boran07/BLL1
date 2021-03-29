#include <stdio.h>
#include <stdlib.h>

struct person{

    int yas;
    char isim[30];
};

void display (struct person ogrenci_1);


int main()
{
    struct person ogrenci_1;

    printf("Isim gir:");
    scanf("%s", ogrenci_1.isim);
    printf("Yas:");
    scanf("%d", &ogrenci_1.yas);

    display(ogrenci_1);


}


void display (struct person ogrenci_1){

    printf("Output:\n\n");
    printf("Isim: %s\n", ogrenci_1.isim);
     printf("Yas: %d\n", ogrenci_1.yas);

}
