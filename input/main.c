#include <stdio.h>
#include <stdlib.h>

/*
    int age;
    printf("Yasin kac? \n");
    scanf("%d" ,&age);
    printf("\n\nSenin yasin %d \n" ,age);
*/
/*
  double puan; // noktali puan al
    printf("Ortalama puan: \n"); // Konsola soruyu goruntule
    scanf("%lf" ,&puan); // kulanicidan input al
    printf("\n\n Ortalama puanin = %f \n" ,puan); // kulanicinin puanini disarya yaz
*/
/*
     char name[20];
     printf("Ismin ne? \n");
     scanf("%s",name);
     printf("Ismin: %s \n", name);


       char name[20];
     printf("Ismin ne? \n");
     fgets(name, 20,stdin );
     printf("Ismin: %s \n", name);

     */

int main()
{

     char isim[7];

     printf("Ismin ne? \n");
     fgets(isim,20, stdin ); //standard input
     printf("Ismin: %s \n", isim);



}
