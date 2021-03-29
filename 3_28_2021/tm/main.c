#include <stdio.h>
#include <stdlib.h>

struct Distance {
   int metre;
   int cm;
} d1, d2, result;

int main() {
   // ilk input al
   printf("Ilk uzunlugu gir\n");
   printf("Metre: ");
   scanf("%d", &d1.metre);
   printf("cm: ");
   scanf("%d", &d1.cm);

   //ikinci input al
   printf("\nIkinci uzunlugu gir\n");
   printf("Metre: ");
   scanf("%d", &d2.metre);
   printf("cm: ");
   scanf("%d", &d2.cm);

   // topla

   result.metre = d1.metre + d2.metre;
   result.cm = d1.cm + d2.cm;

   // Conversion
   while (result.cm >= 100) {
      result.cm = result.cm - 100;
      ++result.metre;

   }

   printf("\nToplam olcu = %d.%.1d\ ", result.metre, result.cm);
   return 0;

}
