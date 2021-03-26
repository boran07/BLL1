#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[4]; // [0] [1] [2] [3]

    int i;

    for(i = 0; i <4; i++){

        printf("&arr[%d] = %p \n\n", i ,&arr[i]);

    }

   // printf("'ARR' dizinin adresi: %p \n\n" ,arr);

    //icergi
   printf("arr[1]: %p \n" , *(arr+1));
    printf("arr[1]: %p \n" , arr[1]);

    //lokasyon
   printf("esit : %p \n", &arr[1]);
    printf("esit : %p \n", arr);


    //printf("esit: %p", &arr[2]);





}
