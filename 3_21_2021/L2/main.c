#include <stdio.h>
#include <stdlib.h>

//Binar ysayisi olarak al ve tam sayiya cevir

int main()
{
    while(1){

    int binary;  // 1 0 0 1

    int decimal = 0 , weight = 1;

    int rm = 0 ; // remaineder holder, kalan sayi

    printf("Binary sayisi gir : \n");
    scanf("%d", &binary); // 1001


        // 1001
    while(binary != 0 ) {

        rm = binary % 10 ; // 100 / 10 = 10

        decimal = decimal + rm*weight; // rm = 1*1 = 1

        binary = binary / 10; // 0 /10 =

        weight = weight * 2;  //2


    }


    printf("Sonuc : %d \n\n", decimal);

}
}
