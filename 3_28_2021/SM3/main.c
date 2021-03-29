#include <stdio.h>
#include <stdlib.h>


struct person{

    int yas;
    char isim[30];

};



int main()
{
    struct person *ptr;
    int i, n;

    printf("Kac kisi var: ");
    scanf("%d", &n);

    ptr = (struct person*) malloc(n * sizeof(struct person));

    //take inputs
    for(i = 0 ; i < n ; i++){
        printf("Isim ve yas istayla gir:");

        scanf("%s %d", (ptr+i)->isim, &(ptr+i)->yas);
    }

    //output
     for(i = 0 ; i < n ; i++){
        printf("Isim: %s\nYas: %d\n",(ptr+i)->isim, (ptr+i)->yas );

    }


}
