#include <stdio.h>
#include <stdlib.h>


void birEkle(int * ptr){

    (*ptr)++;

}


int main()
{

    int* p, i = 10;

    p = &i;

    birEkle(p);

    for(i = 0; i <=10; i++){
    printf("%d\n", *p);
    }

}
