#include <stdio.h>
#include <stdlib.h>

int main()
{

   // ptr = realloc(ptr,x)

    int *ptr, i , n1 , n2;
    printf("Hafizanin buyuklugunu gir:");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Onceki hafizanin adresleri: \n");
    for(i = 0; i < n1 ; i++){

        printf("%p\n" , &ptr + i );



    }

     printf("Yeni hafiza buyuklugunu gir:\n");
        scanf("%d", &n2);

        ptr = realloc(ptr, n2 *sizeof(int));

     printf("Yeni hafizanin adresleri: \n");

         for(i = 0; i < n2 ; i++){

            printf("%p\n", &ptr+i);

         }

    free(ptr);


}
