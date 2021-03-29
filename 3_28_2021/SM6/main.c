#include <stdio.h>
#include <stdlib.h>

typedef struct Complex {

    float real;
    float imag;

}complex;


void Topla(complex c1, complex c2, complex *sonuc){

    sonuc->real = c1.real + c2.real;
    sonuc->imag = c1.imag + c2.imag;

}


int main()
{
    complex c1, c2, sonuc;


    printf("Ilk sayi: \n");
    printf("Real tarafini gir\n");
    scanf("%f", &c1.real);

    printf("Imagenery tarafini gir\n");
    scanf("%f", &c1.imag);

///////////////////////////////////////////////////////////////////

    printf("Ikinici Sayi gir: \n");
    printf("Real tarafini gir\n");
    scanf("%f", &c2.real);

    printf("Imagenery tarafini gir\n");
    scanf("%f", &c2.imag);


    Topla(c1,c2 , &sonuc);
    printf("\n sonuc.real = %f\n", sonuc.real);
    printf("\n sonuc.imag = %fj\n", sonuc.imag);

}
