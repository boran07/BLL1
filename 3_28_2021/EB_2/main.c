#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;

    printf("Input al kac lokasyon \n");
    scanf("%d", &n);

    int data[n];

    /* if( n != '\0'){
    } */

               printf("Elementleri gir (Sayi): \n");
                    for( int i = 0; i<n ; i++ ){
                    scanf("%d", data+i);
                    }
               printf("Elementleri gir (Sayi): \n");
                    for( int i = 0; i<n ; i++ ){
                    printf("%d\n", *(data+i));
                    }

    printf("\n");

                printf("Hafiza loksayonu: \n");
                    for( int i = 0; i<n ; i++ ){
                    printf("%p\n", &data+i);
                    }


}

