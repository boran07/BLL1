#include <stdio.h>
#include <stdlib.h>



int *Topla(int *a,int *b){

    int *c = (int*)malloc(sizeof(int));

     *c =(*a)+(*b); // local variable

    return c;

}


int main()
{
    int a = 2, b = 4;
    int *ptr = Topla(&a,&b); // main'in icindeki local degisken.

    printf("Sum = %d\n", *ptr);

    return 0;
}
