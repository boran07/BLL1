#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1;
    int c;

   //c = 22
   //c'nin adresini ve icergini
    c = 22;
    printf("c Adresi: %p\n", &c);
    printf("c Icergi: %d\n\n", c); //22

   //p1 pointer c'nin adresine link edin
   // P1 adresini ve icergini cikarin
    p1 = &c;
    printf("pointer p1 adresi: %p\n", p1);
    printf("pointer p1 Icerigi: %d\n\n", *p1); //22

   //c'yi sonra 11'e cevirin
   //p1'in adresini ve icerigini cikarin
   c = 11;
   printf(" pointer p1 Adresi: %p\n", p1);
   printf(" pointer p1 Icergi: %d\n\n", *p1);  //11

   // p1 pointeri 2 esitleyin
   // c nin adresini ve icergini cikarin
   *p1 = 2;
   printf(" pointer p1 Adresi: %p\n", &c);
   printf(" pointer p1 Icergi: %d\n\n", c); //2


}
