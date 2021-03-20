#include <stdio.h>
#include <stdlib.h>

int Topla(int *a,int *b){

    int c=(*a)+(*b); // local variable
    printf(" Topla'nin icindeki 'a' (maindeki adres): %d \n", a);
    printf(" Topla'nin icindeki adres: %d \n", &a);
    printf(" Topla'nin icindeki 'a'ninc de-refransi : %d \n", *a);
    return c;

}


int main()
{
    int a = 2, b = 4;

    printf(" Mainin'nin icindeki adres: %d \n", &a);



    int c = Topla(&a,&b); // main'in icindeki local degisken.
    printf("Sum = %d\n", c);


    return 0;
}
