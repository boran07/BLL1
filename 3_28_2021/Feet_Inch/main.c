#include <stdio.h>

struct Distance {

   int feet;
   float inch;

} d1, d2, result;

int main() {
   // ilk input al
   printf("Ilk uzunlugu gir\n");
   printf("Feet: ");
   scanf("%d", &d1.feet);
   printf("Inch: ");
   scanf("%f", &d1.inch);

   //ikinci input al
   printf("\nIkinci uzunlugu gir\n");
   printf("Feet: ");
   scanf("%d", &d2.feet);
   printf("Inch: ");
   scanf("%f", &d2.inch);

   // topla
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   // Conversion
   while (result.inch >= 12.0) {

      result.inch = result.inch - 12.0;
      ++result.feet ;

   }

   printf("\nToplam Olcu = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}
