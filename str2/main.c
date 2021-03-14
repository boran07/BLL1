#include <stdio.h>
#include <stdlib.h>

struct ogrenci {

    char isim[50];

};

void print(char isim[], int yas, double puan){

    printf("%s, %d, %f" , isim , yas ,puan);
}


int main()
{

   struct ogrenci Ogrenci_1;

   strcpy(Ogrenci_1.isim, "Ayse");

    printf("%s", Ogrenci_1.isim);

}
