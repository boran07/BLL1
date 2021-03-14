#include <stdio.h>
#include <stdlib.h>


struct ogrenci {

    char isim[50];
    int yas;
    double puan;

};

void print(char isim[], int yas, double puan){

    printf("%s, %d, %f" , isim , yas ,puan);
}


int main()
{

   struct ogrenci Ogrenci_1 = {"Ahmet",16,76.3};

   print(Ogrenci_1.isim,Ogrenci_1.yas, Ogrenci_1.puan );


}
