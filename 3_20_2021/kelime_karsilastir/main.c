#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

//iki kelimeyi karsilastircaz, bize hangisi daha buyuk oldugunu soylicek


 int karsilastir(char *str_1, char *str_2){

     while((*str_1 && *str_2) && (*str_1 == *str_2)) {  //while((str1[i] != '\0' && str2[i] != '\0') && (str1[i] == str2[i])) i++;

     str_1++;
     str_2++;

     }

     return *str_1 - *str_2;


 }

int main()
{

   char str_1[MAX_SIZE], str_2[MAX_SIZE];
   int rs ;

   printf("Input al birinici kelime:\n");
   gets(str_1);   //6543
   printf("Input al ikinci kelime:\n");
   gets(str_2);  //6443

   //Eger rs -1'den azsa ozaman bize output olarak ilk kelime ikinciden daha kucuk

   //str1 ile str2 karsilastirmak icin cagir

   rs = karsilastir(str_1,str_2);
   if (rs == 0){

        printf("Iki kelime ayni \n");


   }else if(rs < -1){

        printf("Ilk kelime ikinciden daha kucuk");


   }else{

        printf("Ilk kelime ikinciden daha buyuk");

   }
}
