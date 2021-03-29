#include <stdio.h>
#include <stdlib.h>

struct person
{
    int yas;
    float kilo;
    int maas;

};


int main()
{
    struct person *ptr, kisi_1;

    ptr = &kisi_1;

    printf("Yasi gir ");
    scanf("%d", &ptr->yas); // *ptr.yas

    printf("Kilo gir ");
    scanf("%f", &ptr->kilo);

    printf("Output: \n");
    printf("Yas %d \n", ptr->yas);
    printf("kilo %f \n", ptr->kilo);

    return 0;
}
