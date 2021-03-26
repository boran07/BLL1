#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n, i;
    char *ptr;


    printf("Karakter sayisini gir: \n");
    scanf("%d", &n);

     ptr = (char*)malloc(n*sizeof(char)); //haep allocate

 //////////////////////////////////////////////////////////////////////////////////////////////
         for( i = 0; i < n ; i++){

                printf("Sirayla Karakterleri gir: [%d] \n", i);

                scanf(" %c" ,ptr+i);

         }


  ///////////////////////////////////////////////////////////////////////
    printf("\n 1-boyutlu diziyi cikar: \n\n");

    for(i = 0; i < n ; i++){

        printf("%c", ptr[i]);

    }




}



